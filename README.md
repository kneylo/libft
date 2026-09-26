_This project has been created as part of the 42 curriculum by [nekreter](https://github.com/kneylo)_
<h1 align="center">
	Libft <br>
	<h3 align="center">
		<a href="#description">Description</a>  ·
		<a href="#content">Content</a>  ·
		<a href="#instructions">Instructions</a>  ·
		<a href="#resources">Resources</a>  ·
		<a href="#testing">Testing</a>
	</h3>
</h1>

<br>

## Description
This project is the first of my cursus at 42 Lausanne, the goal is to create our own C library by recreating some standard libc functions and more, all the functions are coded following [42 Norme](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf).

The subject has 3 mandatory parts.
* Basic libc functions
* Additional functions that are either not included or exist in a different form
* Linked list

*For more information, refer to the subject of the libft that can be found on the intra.*

## Content

I divided the functions into 6 different categories.
| Categories | Functions |
|---|---|
| Characters checks and conversion | [`ft_isalpha`](./ft_isalpha.c) [`ft_isdigit`](./ft_isdigit.c) [`ft_isalnum`](./ft_isalnum.c) [`ft_isascii`](./ft_isascii.c) [`ft_isprint`](./ft_isprint.c) [`ft_toupper`](./ft_toupper.c) [`ft_tolower`](./ft_tolower.c) |
| String manipulations | [`ft_strlen`](./ft_strlen.c)  [`ft_strlcpy`](./ft_strlcpy.c) [`ft_strlcat`](./ft_strlcat.c)  [`ft_strchr`](./ft_strchr.c) [`ft_strrchr`](./ft_strrchr.c) [`ft_strncmp`](./ft_strncmp.c) [`ft_strnstr`](./ft_strnstr.c)  [`ft_atoi`](./ft_atoi.c) |
| Memory manipulations | [`ft_memset`](./ft_memset.c) [`ft_bzero`](./ft_bzero.c) [`ft_memcpy`](./ft_memcpy.c) [`ft_memmove`](./ft_memmove.c) [`ft_memchr`](./ft_memchr.c) [`ft_memcmp`](./ft_memcmp.c) [`ft_calloc`](./ft_calloc.c) |
| String creation and transformation | [`ft_strdup`](./ft_strdup.c) [`ft_substr`](./ft_substr.c) [`ft_strjoin`](./ft_strjoin.c) [`ft_strtrim`](./ft_strtrim.c) [`ft_split`](./ft_split.c) [`ft_itoa`](./ft_itoa.c) |
| String iteration | [`ft_strmapi`](./ft_strmapi.c) [`ft_striteri`](./ft_striteri.c) |
| Printing to a file descriptor | [`ft_putchar_fd`](./ft_putchar_fd.c) [`ft_putstr_fd`](./ft_putstr_fd.c) [`ft_putendl_fd`](./ft_putendl_fd.c) [`ft_putnbr_fd`](./ft_putnbr_fd.c) |
| Linked lists | [`ft_lstnew`](./ft_lstnew.c) [`ft_lstadd_front`](./ft_lstadd_front.c) [`ft_lstsize`](./ft_lstsize.c) [`ft_lstlast`](./ft_lstlast.c) [`ft_lstadd_back`](./ft_lstadd_back.c) [`ft_lstdelone`](./ft_lstdelone.c) [`ft_lstclear`](./ft_lstclear.c) [`ft_lstiter`](./ft_lstiter.c) [`ft_lstmap`](./ft_lstmap.c) |

<br>

Note that for the linked lists, we have to add a structure (see below) into the .h for it to work properly.

``` c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```

## Instructions
If you want to use this libft you'll need to start by cloning the repo and compile everything.

The makefile can be used to compile everything, clean everything etc.

* **make all** - create every .o needed from .c and create the .a
* **make clean** - remove every .o
* **make fclean** - same as make clean but remove the .a with it
* **make re** - recompile the library

This is an example of how this libft can be used
``` shell
$> git clone https://github.com/kneylo/libft.git
$> cd libft
$> make
```

add the .h to your code
``` c
#include "libft.h"
```

an exemple of how to compile
``` c
cc main.c path/to/libft.a
```

## Resources
My main sources of information on the web are these links below, AI was never used to create any code, only a very few times to names things better or correcting spelling/grammar mistake.

[Gitbook 42](https://42-cursus.gitbook.io/guide)

[Apprendre le C](https://apprendrelec.com/theory)

[Stack Overflow](https://stackoverflow.com)

[Basic Markdown Syntax](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)

## Testing
First I did a main for every functions to test them myself and after that I used some testers that I found on github

[Libft tester](https://github.com/Tripouille/libftTester/)

[Libft war machine](https://github.com/0x050f/libft-war-machine)