# Crminator

Projet de démarrage en C pour la piscine 42.

Ce dépôt contient un petit programme en C qui affiche un message de bienvenue pour chaque argument passé en ligne de commande. Il sert de base pour apprendre la compilation C, la gestion des arguments `argc` / `argv`, l'utilisation de fonctions simples et les bonnes pratiques de développement.

## Structure du projet

- `C/` : dossier contenant le code source C.
- `C/main.c` : programme principal.
- `commit.sh` : script utile pour le dépôt git.

## Objectif

- S'initier au C et à l'organisation d'un projet 42.
- Travailler sur la compilation, les arguments et l'écriture de fonctions.
- Préparer la piscine 42 avec des exercices simples mais concrets.

## Compilation

À partir de la racine du dépôt :

```bash
gcc -Wall -Wextra -Werror C/main.c -o Crminator
```

## Utilisation

```bash
./Crminator Alice Bob
```

Sortie attendue :

```text
Bonjour Alice
Bonjour Bob
```

## Notes

- Ce projet est idéal pour tester les premières bases du langage C.
- Tu peux l'enrichir en ajoutant de nouvelles fonctionnalités, des validations d'entrée et des exercices 42.
- Respecte les règles de style et de compilation de la piscine 42 dès le début.

---

Bonne préparation pour la piscine 42 !