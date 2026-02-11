CC = gcc
CFLAGS = -Wall -g -Isrc
PARSER = le_parser
LEXER = le_lexer

# === CIBLE PRINCIPALE ===
bin/tpcas: obj/$(LEXER).o obj/$(PARSER).o obj/tree.o obj/module1.o
	$(CC) -o $@ $^

# === COMPILATION DES MODULES ===
obj/tree.o: src/tree.c src/tree.h
	$(CC) -c -o $@ $< $(CFLAGS)
obj/module1.o: src/module1.c src/module1.h
	$(CC) -c -o $@ $< $(CFLAGS)

obj/$(PARSER).o: obj/$(PARSER).c src/tree.h
	$(CC) -c -o $@ $< $(CFLAGS)

obj/$(LEXER).o: obj/$(LEXER).c obj/$(PARSER).h
	$(CC) -c -o $@ $< $(CFLAGS)

# === GÉNÉRATION FLEX / BISON ===
obj/$(LEXER).c: src/$(LEXER).lex obj/$(PARSER).h
	flex -o $@ $<

obj/$(PARSER).c obj/$(PARSER).h &: src/$(PARSER).y
	bison -d -o obj/$(PARSER).c $<

# === NETTOYAGE ===
clean:
	rm -f obj/*.o obj/*.c obj/*.h bin/tpcas

