# Projet Pushswap 🇫🇷

Ce projet consiste à trier une pile d'entiers en utilisant uniquement deux piles et un ensemble d'opérations spécifiques.

## Algorithme de tri radix

L'algorithme de tri radix est une méthode de tri qui trie les éléments en examinant les chiffres individuels des nombres. Il effectue plusieurs passes sur les chiffres, en les triant de manière stable à chaque passage.

Voici comment l'algorithme de tri radix peut être utilisé pour trier une pile d'entiers :

1. Trouver le nombre maximum dans la pile et déterminer le nombre de chiffres nécessaires pour le représenter.
2. Effectuer autant de passes que de chiffres nécessaires.
3. Lors de chaque passage, créer deux piles supplémentaires pour stocker temporairement les éléments triés.
4. Parcourir la pile d'origine et répartir chaque élément dans les piles temporaires en fonction du chiffre actuel.
5. Fusionner les piles temporaires dans la pile d'origine.
6. Répéter les étapes 4 et 5 jusqu'à ce que tous les chiffres aient été triés.

## Utilisation du programme

Pour utiliser le programme Pushswap, suivez les étapes suivantes :

1. Clonez le dépôt Git du projet Pushswap.
2. Compilez le programme en exécutant la commande `make`.
3. Exécutez le programme en utilisant la commande `./push_swap [liste d'entiers]`.
4. Le programme affichera la liste des opérations nécessaires pour trier la pile d'entiers.

# Pushswap Project 🇬🇧

This project aims to sort a stack of integers using only two stacks and a set of specific operations.

## Radix Sort Algorithm

The radix sort algorithm is a sorting method that sorts elements by examining the individual digits of numbers. It performs multiple passes on the digits, sorting them stably at each pass.

Here's how the radix sort algorithm can be used to sort a stack of integers:

1. Find the maximum number in the stack and determine the number of digits required to represent it.
2. Perform as many passes as the number of digits required.
3. During each pass, create two additional stacks to temporarily store the sorted elements.
4. Traverse the original stack and distribute each element into the temporary stacks based on the current digit.
5. Merge the temporary stacks back into the original stack.
6. Repeat steps 4 and 5 until all digits have been sorted.

## Using the Program

To use the Pushswap program, follow these steps:

1. Clone the Pushswap project Git repository.
2. Compile the program by running the `make` command.
3. Execute the program using the `./push_swap [list of integers]` command.
4. The program will display the list of operations required to sort the stack of integers.
