# Piscine C - Module C 01

Ce document est le sujet du module C 01 de la piscine C de 42.

**Version :** 5.4

## Table des matières
1. [Consignes](#consignes)
2. [Préambule](#préambule)
3. [Exercice 00 : ft_ft](#exercice-00-ft_ft)
4. [Exercice 01 : ft_ultimate_ft](#exercice-01-ft_ultimate_ft)
5. [Exercice 02 : ft_swap](#exercice-02-ft_swap)
6. [Exercice 03 : ft_div_mod](#exercice-03-ft_div_mod)
7. [Exercice 04 : ft_ultimate_div_mod](#exercice-04-ft_ultimate_div_mod)
8. [Exercice 05 : ft_putstr](#exercice-05-ft_putstr)
9. [Exercice 06 : ft_strlen](#exercice-06-ft_strlen)

---

## 1. Consignes <a name="consignes"></a>

- Seule cette page servira de référence : ne vous fiez pas aux bruits de couloir.
- Relisez bien le sujet avant de rendre vos exercices. À tout moment, le sujet peut changer.
- Attention aux droits de vos fichiers et de vos répertoires.
- Vous devez suivre la procédure de rendu pour tous vos exercices.
- Vos exercices seront corrigés par vos camarades de piscine.
- En plus de vos camarades, vous serez corrigés par un programme appelé la Moulinette.
- La Moulinette est très stricte dans sa notation. Elle est totalement automatisée. Il est impossible de discuter de sa note avec elle. Soyez d’une rigueur irréprochable pour éviter les surprises.
- La Moulinette n’est pas très ouverte d’esprit. Elle ne cherche pas à comprendre le code qui ne respecte pas la Norme. La Moulinette utilise le programme norminette pour vérifier la norme de vos fichiers. Comprenez par là qu’il est stupide de rendre un code qui ne passe pas la norminette.
- Les exercices sont très précisément ordonnés du plus simple au plus complexe. En aucun cas, nous ne porterons attention ni ne prendrons en compte un exercice complexe si un exercice plus simple n’est pas parfaitement réussi.
- L'utilisation d'une fonction interdite est un cas de triche. Toute triche est sanctionnée par la note de -42.
- Vous ne devez rendre une fonction main() que si nous vous demandons un programme.
- La Moulinette compile avec les flags -Wall -Wextra -Werror, et utilise cc.
- Si votre programme ne compile pas, vous aurez 0.
- Vous ne devez laisser dans votre répertoire aucun autre fichier que ceux explicitement spécifiés par les énoncés des exercices.

---

## 2. Préambule <a name="préambule"></a>

Le préambule présente une explication humoristique du jeu du Sirop selon Perceval, tiré de la série Kaamelott, mais ne concerne pas directement les exercices du module C 01.

---

## 3. Exercice 00 : ft_ft <a name="exercice-00-ft_ft"></a>

- Écrire une fonction qui prend un pointeur sur int en paramètre et donne à l'int la valeur de 42.
- Prototype : `void ft_ft(int *nbr);`

---

## 4. Exercice 01 : ft_ultimate_ft <a name="exercice-01-ft_ultimate_ft"></a>

- Écrire une fonction qui prend un pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur int en paramètre et donne à l'int la valeur de 42.
- Prototype : `void ft_ultimate_ft(int *********nbr);`

---

## 5. Exercice 02 : ft_swap <a name="exercice-02-ft_swap"></a>

- Écrire une fonction qui échange le contenu de deux entiers dont les adresses sont données en paramètres.
- Prototype : `void ft_swap(int *a, int *b);`

---

## 6. Exercice 03 : ft_div_mod <a name="exercice-03-ft_div_mod"></a>

- Écrire une fonction `ft_div_mod` qui divise les deux paramètres `a` et `b` et stocke le résultat de la division dans l'int pointé par `div`. Elle stocke également le reste de la division de `a` et `b` dans l'int pointé par `mod`.
- Prototype : `void ft_div_mod(int a, int b, int *div, int *mod);`

---

## 7. Exercice 04 : ft_ultimate_div_mod <a name="exercice-04-ft_ultimate_div_mod"></a>

- Écrire une fonction `ft_ultimate_div_mod` qui divise les int pointés par `a` et `b`. Le résultat de la division est stocké dans l'int pointé par `a`, et le résultat du reste de la division est stocké dans l'int pointé par `b`.
- Prototype : `void ft_ultimate_div_mod(int *a, int *b);`

---

## 8. Exercice 05 : ft_putstr <a name="exercice-05-ft_putstr"></a>

- Écrire une fonction qui affiche une chaîne de caractères à l'écran en utilisant la fonction `write`.
- Prototype : `void ft_putstr(char *str);`

---

## 9. Exercice 06 : ft_strlen <a name="exercice-06-ft_strlen"></a>

- Écrire une fonction qui compte le nombre de caractères dans une chaîne de caractères et retourne le nombre trouvé.
- Prototype : `int ft_strlen(char *str);`

---

**Note :** Assurez-vous de bien nommer vos fichiers et répertoires conformément aux exigences du sujet et de suivre les consignes de rendu.

