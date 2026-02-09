# Libft

## Description

Libft est une bibliothèque personnelle en langage C.  
Elle a pour objectif de recréer certaines fonctions standards de la libc ainsi que des fonctions utilitaires supplémentaires, afin de constituer une base solide réutilisable dans les projets futurs.

Toutes les fonctions présentes dans cette bibliothèque sont considérées comme obligatoires et sont incluses directement dans la compilation de `libft.a`.

---

## Fonctions implémentées

### Fonctions de conversion
- `ft_atoi`
- `ft_itoa`

### Fonctions de gestion mémoire
- `ft_bzero`
- `ft_calloc`
- `ft_memccpy`
- `ft_memchr`
- `ft_memcmp`
- `ft_memcpy`
- `ft_memmove`
- `ft_memset`

### Fonctions de vérification de caractères
- `ft_isalnum`
- `ft_isalpha`
- `ft_isascii`
- `ft_isdigit`
- `ft_isprint`
- `ft_tolower`
- `ft_toupper`

### Fonctions de chaînes de caractères
- `ft_strlen`
- `ft_strdup`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_substr`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strmapi`
- `ft_striteri`

### Fonctions d’écriture sur descripteur de fichier
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Fonctions de listes chaînées
- `ft_lstnew`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## Compilation

Pour compiler la bibliothèque :

```bash
make
