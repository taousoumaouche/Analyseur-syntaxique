# Analyseur Syntaxique TPC

[![Licence](https://img.shields.io/badge/licence-MIT-blue.svg)](LICENSE)
[![Tests](https://img.shields.io/badge/tests-100%25-success.svg)](test/)
[![Couverture](https://img.shields.io/badge/couverture-88.65%25-green.svg)](test/)

> Analyseur syntaxique pour le langage TPC (sous-ensemble du C) avec support des structures  
> Projet académique - Licence 3 Informatique - Module Analyse Syntaxique 2025-2026

## Table des matières

- [Aperçu](#aperçu)
- [Fonctionnalités](#fonctionnalités)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Architecture](#architecture)
- [Extensions](#extensions)
- [Tests](#tests)
- [Implémentation technique](#implémentation-technique)
- [Auteurs](#auteurs)

## Aperçu

Cet analyseur syntaxique vérifie la conformité des programmes écrits en **TPC** (un sous-ensemble du langage C) et génère un **arbre syntaxique abstrait (AST)** pour les programmes valides.

Le projet utilise :
- **Flex** pour l'analyse lexicale
- **Bison** pour l'analyse syntaxique
- Construction d'AST avec gestion complète des structures

## Fonctionnalités

### Analyse Lexicale (Flex)
- ✅ Reconnaissance des mots-clés : `if`, `else`, `while`, `return`, `struct`, `int`, `char`, `void`
- ✅ Identificateurs (syntaxe standard C)
- ✅ Constantes numériques
- ✅ Caractères littéraux (`'a'`, `'\n'`, `'\t'`)
- ✅ Opérateurs arithmétiques, relationnels et logiques
- ✅ Commentaires `//` et `/* ... */` (un seul niveau)
- ✅ Détection et signalement des erreurs lexicales

### Analyse Syntaxique (Bison)
- ✅ Vérification de la conformité syntaxique
- ✅ Gestion correcte des priorités et associativités des opérateurs
- ✅ Résolution de l'ambiguïté du **dangling else**
- ✅ Messages d'erreur avec numéro de ligne
- ✅ Construction d'un arbre syntaxique abstrait (AST)

### Support des Structures
- ✅ Déclaration de structures globales et locales
- ✅ Structures imbriquées (ex: `struct B` utilisée dans `struct A`)
- ✅ Structures comme paramètres ou valeurs de retour de fonctions
- ✅ Accès aux champs simples et imbriqués (`a.b.x`)
- ✅ Affectation de structures et de champs
- Restrictions : pas de structures anonymes, pas de `typedef`

## Installation

### Prérequis
```bash
# Ubuntu/Debian
sudo apt-get install flex bison gcc make

# Fedora/RHEL
sudo dnf install flex bison gcc make

# macOS
brew install flex bison make
```

### Compilation
```bash
# Cloner le dépôt
git clone https://github.com/votre-username/ProjetASL3_MOKHTARI_OUMAOUCHE.git
cd ProjetASL3_MOKHTARI_OUMAOUCHE

# Compiler le projet
make

# L'exécutable est généré dans bin/tpcas
```

### Nettoyage
```bash
make clean      # Supprime les fichiers objets
make mrproper   # Supprime tout (objets + exécutable)
```

##  Utilisation

### Ligne de commande

```bash
# Analyse depuis stdin
./bin/tpcas < fichier.tpc

# Analyse d'un fichier
./bin/tpcas fichier.tpc

# Afficher l'arbre syntaxique abstrait
./bin/tpcas --tree < fichier.tpc
./bin/tpcas -t fichier.tpc

# Afficher l'aide
./bin/tpcas --help
```

### Options disponibles

| Option | Description |
|--------|-------------|
| `-t, --tree` | Affiche l'arbre syntaxique abstrait (uniquement si le programme est valide) |
| `-h, --help` | Affiche l'aide et quitte |

### Codes de retour

| Code | Signification |
|------|---------------|
| `0` | Programme syntaxiquement correct |
| `1` | Erreur lexicale ou syntaxique détectée |
| `2+` | Autre erreur (ligne de commande, mémoire, etc.) |

### Exemples

#### Programme valide
```bash
$ cat exemple.tpc
int main() {
    int x;
    x = 42;
    return x;
}

$ ./bin/tpcas exemple.tpc
$ echo $?
0
```

#### Programme avec erreur
```bash
$ cat erreur.tpc
int main() {
    int x
    return x;
}

$ ./bin/tpcas erreur.tpc
Erreur syntaxique ligne 3, colonne 5
$ echo $?
1
```

#### Affichage de l'AST
```bash
$ ./bin/tpcas --tree exemple.tpc
Program
├── Function: main
│   ├── Return Type: int
│   ├── Parameters: []
│   └── Body
│       ├── Declaration: x (int)
│       ├── Assignment
│       │   ├── Variable: x
│       │   └── Constant: 42
│       └── Return
│           └── Variable: x
```

## Architecture

```
ProjetASL3_MOKHTARI_OUMAOUCHE/
├── src/               # Fichiers sources
│   ├── tpc.l         # Analyseur lexical (Flex)
│   ├── tpc.y         # Analyseur syntaxique (Bison)
│   ├── tree.c        # Gestion de l'arbre syntaxique
│   └── tree.h        # En-têtes de l'arbre
├── bin/              # Exécutable (tpcas)
├── obj/              # Fichiers objets intermédiaires
├── test/             # Jeux de tests
│   ├── good/         # Programmes syntaxiquement corrects
│   └── syn-err/      # Programmes avec erreurs
├── rep/              # Rapport de projet (PDF)
├── makefile          # Script de compilation
└── README.md         # Ce fichier
```

##  Extensions

### Support des structures

Notre implémentation étend le langage TPC de base avec un support complet des structures :

```c
// Déclaration de structures
struct Point {
    int x;
    int y;
};

// Structures imbriquées
struct Rectangle {
    struct Point top_left;
    struct Point bottom_right;
};

// Utilisation
int main() {
    struct Rectangle rect;
    rect.top_left.x = 0;
    rect.top_left.y = 10;
    return 0;
}
```

### Restrictions
- ❌ Pas de structures anonymes
- ❌ Pas de `typedef`
- ❌ Déclaration du type et de la variable séparées
- ✅ Déclaration du nom et des champs simultanée obligatoire

##  Tests

### Structure des tests
```bash
test/
├── good/           # 50+ tests de programmes valides
│   ├── basic.tpc
│   ├── structures.tpc
│   └── ...
└── syn-err/        # 30+ tests de programmes invalides
    ├── missing_semicolon.tpc
    ├── undeclared_struct.tpc
    └── ...
```

### Exécution des tests
```bash
# Exécuter tous les tests
make test

# Résultats attendus
Tests passed: 80/80 (100%)
Rule coverage: 88.65%
```

### Résultats VPL
- ✅ **100% de réussite** sur le bac à sable VPL
- ✅ **88,65%** de couverture des règles grammaticales

## Implémentation technique

### Hiérarchie des opérateurs

Les précédences sont implémentées selon la hiérarchie suivante (du plus faible au plus fort) :

```
Exp  → Exp OR TB | TB              // ||
TB   → TB AND FB | FB               // &&
FB   → FB EQ M | M                  // == !=
M    → M ORDER E | E                // < <= > >=
E    → E ADDSUB T | T               // + -
T    → T DIVSTAR F | F              // * / %
F    → ...                          // opérandes, unaires, parenthèses
```

### Résolution du Dangling Else

Le problème classique du **dangling else** est résolu via les directives Bison :

```c
%nonassoc THEN
%nonassoc ELSE
```

Cela garantit que le `else` est associé au `if` le plus proche :

```c
// Ambiguïté
if (1)
    if (1)
        return;
else        // ← Associé au 2ème if (pas au 1er)
    return;
```

### Arbre Syntaxique Abstrait (AST)

L'AST respecte les contraintes suivantes :
- ✅ Chaque opérateur = nœud interne
- ✅ Opérandes = fils du nœud opérateur
- ✅ Listes regroupées sous un nœud parent unique
- ✅ Symboles syntaxiques (`;`, `{}`, `,`) non représentés
- ✅ Ordre préservé pour tous les éléments

Exemple :
```c
x = 1 + 2 * 3;
```
→ AST :
```
Assignment
├── Variable: x
└── Addition
    ├── Constant: 1
    └── Multiplication
        ├── Constant: 2
        └── Constant: 3
```

## 🔍 Difficultés rencontrées

### 1. Ambiguïté du if/else
**Problème** : Conflit décalage/réduction dans Bison  
**Solution** : Utilisation de `%nonassoc THEN` et `%prec` pour forcer l'association correcte

### 2. Construction de l'AST
**Problème** : Gestion cohérente des listes et productions optionnelles  
**Solution** : Nœuds parents unifiés pour toutes les listes, règles récursives gauches

### 3. Messages d'erreur clairs
**Problème** : Signaler les erreurs sans interrompre prématurément l'analyse  
**Solution** : Gestion d'erreur avec numéro de ligne et de colonne précis

## Auteurs

**Binôme**
- **OUMAOUCHE Taous** (OT)
- **MOKHTARI Rayane** (MR)

**Université Gustave Eiffel**  
Licence 3 Informatique - 2025-2026  
Module : Analyse Syntaxique

## Licence

Ce projet est réalisé dans un cadre académique.

---

## Ressources

- [Documentation Flex](https://github.com/westes/flex)
- [Documentation Bison](https://www.gnu.org/software/bison/manual/)
- [Sujet du projet](rep/sujet-projet-AS-2025-2026.pdf)
- [Rapport détaillé](rep/rapport_MOKHTARI_OUMAOUCHE.pdf)

---

*Dernière mise à jour : Décembre 2025*
