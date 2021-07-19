# projet_42_libft
## Note obtenue 115/100
### Rendu pour fonctionner et avoir un comportement similaire à la libc sous Ubuntu 18.04


La libft est le premier projet à rendre dans le cadre du cursus de l'école 42.

On doit recoder des fonctions de la libc, pour cela, toute les fonctions sont interdites sauf : write, malloc et free.

## Les fonctions manipulant des caractères

On retrouve la catégorie des fonctions "is" qui permettent de déterminer si le caractère actuel correspond ou non au nom de la fonction. Si oui, la fonction retourne une valeur positive. Dans le cas inverse, la fonction retourne 0.

```c
int	ft_isalnum(int c);   
int	ft_isalpha(int c);  
int	ft_isascii(int c);  
int	ft_isdigit(int c);  
int	ft_isprint(int c);
```

Ce sont des fonctions qui nécessitent une compréhension de l'affichage et de la valeur d'un caractère. On peut s'aider de la table ascii pour trouver la valeur des caractères ou spécifier un caractére en utilises les "singles quotes" pour que compilateur détermine que c'est un caractère et non, une chaîne de caractères ou une variable.

![Image of Ascii Table](https://upload.wikimedia.org/wikipedia/commons/1/1b/ASCII-Table-wide.svg)  
				                  Table Ascii            source : Wikipedia

On enchaine avec deux fonctions qui retournent soit la lettre en majuscule soit en minuscule. Si on passe autre chose qu'une lettre en argument, on retourne le caractère.  

```c
int	ft_tolower(int c);  
int	ft_toupper(int c);  
```

Pas beaucoup plus compliqué ques les fonctions is, la compréhension du fonctionnement des caractères est la clé.

## Les fonctions manipulant des chaînes de caractères
On attaque tout de suite : 
```c
size_t	ft_strlen(const char *s);  
```
Elle prend en paramêtre une chaîne de caractères et retourne sa taille.
Une chaîne de caractères est une suite de caractères (si si, et se suit bien même !) qui se suit dans la mémoire de l'ordinateur. La fin d'une chaîne de caractère se définit par un "\0".
On va donc itérer de caractère en caractère et incrémenter un indice à chaque nouveau caractère tant que celui-ci n'est pas un "\0". On retournera l'indice lorsqu'on rencontre le fameux "\0", qui sera la taille de la chaîne de caractère. Une petite image pour visualiser :  

![Image of array C](https://1.bp.blogspot.com/-4b7znlVxvwQ/XT9dnJ-zhMI/AAAAAAAAFYQ/V4rZROD-WhIylPUdQ7vKaOGfko4UgA-WACLcBGAs/s1600/tableau-en-c.png)  

WIP : La suite, plus tard.


