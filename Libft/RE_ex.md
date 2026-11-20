*This project has been created as part of the 42 curriculum by pde-paiv.*

# Libft

## Description

**Libft** is the first project of the 42 common core, in which I built a static C library of general purpose functions. Building it gives me easy access to these functions in my future 42 C projects, and implementing them helped me understand how they work and build strong coding foundations. All function names are prefixed by `ft_`.

The project is split into three parts:

1. **Libc functions:** reimplementation of standard C library functions, behaving in the same way as the originals.
2. **Additional functions:** useful functions either not included in the libc or present in a different form.
3. **Linked list:** functions for linked list manipulation built around a `t_list` structure.

The library is built with a Makefile.

## Instructions

### Compilation

All the commands are run from the root of the repository:

| Command        | Description                                                          |
| -------------- | -------------------------------------------------------------------- |
| `make`         | Compiles the functions and creates `libft.a`                         |
| `make clean`   | Removes all the object files                                         |
| `make fclean`  | Removes the object files and `libft.a`                               |
| `make re`      | Runs `fclean` then `all` (`make`)                                    |

The library is compiled with the flags `-Wall -Wextra -Werror`. The `Makefile` does not relink if nothing has changed.

### Usage in your own project

1. Include the header in your source files:

   ```c
   #include "libft.h"
   ```

2. Compile your program and link it with the library:

   ```sh
   cc -Wall -Wextra -Werror main.c libft.a -o my_program
   ```

## Library description

`libft.a` is a static library exposing the following functions through `libft.h`.

### Part 1 — Libc functions

| Function       | Description                                                                 |
| -------------- | --------------------------------------------------------------------------- |
| `ft_isalpha`   | Checks for an alphabetic character                                          |
| `ft_isdigit`   | Checks for a decimal digit                                                  |
| `ft_isalnum`   | Checks for an alphanumeric character                                        |
| `ft_isascii`   | Checks whether a value is a 7-bit ASCII character code                      |
| `ft_isprint`   | Checks for a printable character                                            |
| `ft_strlen`    | Computes the length of a string                                             |
| `ft_memset`    | Fills `n` bytes of memory with a constant byte                              |
| `ft_bzero`     | Sets `n` bytes of memory to zero                                            |
| `ft_memcpy`    | Copies a memory area (areas must not overlap)                               |
| `ft_memmove`   | Copies a memory area (areas may overlap)                                    |
| `ft_strlcpy`   | Size-bounded string copy, NUL-terminating it                                |
| `ft_strlcat`   | Size-bounded string concatenation, NUL-terminating it                       |
| `ft_toupper`   | Converts a letter to uppercase                                              |
| `ft_tolower`   | Converts a letter to lowercase                                              |
| `ft_strchr`    | Finds the first occurrence of a character in a string                       |
| `ft_strrchr`   | Finds the last occurrence of a character in a string                        |
| `ft_strncmp`   | Compares at most `n` bytes of two strings                                   |
| `ft_memchr`    | Finds the first occurrence of a byte in a memory area                       |
| `ft_memcmp`    | Compares two memory areas                                                   |
| `ft_strnstr`   | Locates a substring in a string, searching at most `len` bytes              |
| `ft_atoi`      | Converts the initial part of a string to an `int`                           |
| `ft_calloc`    | Allocates zero-initialized memory                                           |
| `ft_strdup`    | Duplicates a string using `malloc`                                          |

### Part 2 — Additional functions

| Function          | Description                                                                          |
| ----------------- | ------------------------------------------------------------------------------------ |
| `ft_substr`       | Returns a substring of `s`, starting at index `start`, of maximum length `len`       |
| `ft_strjoin`      | Returns a new string resulting from the concatenation of `s1` and `s2`               |
| `ft_strtrim`      | Returns a copy of `s1` with the characters in `set` removed from both ends           |
| `ft_split`        | Splits a string using a character as delimiter; returns a `NULL`-terminated array    |
| `ft_itoa`         | Converts an integer to a newly allocated string                                      |
| `ft_strmapi`      | Applies a function to each character of a string and returns the resulting new string|
| `ft_striteri`     | Applies a function to each character of a string (by index, in place)                |
| `ft_putchar_fd`   | Writes a character to a given file descriptor                                        |
| `ft_putstr_fd`    | Writes a string to a given file descriptor                                           |
| `ft_putendl_fd`   | Writes a string followed by a newline to a given file descriptor                     |
| `ft_putnbr_fd`    | Writes an integer to a given file descriptor                                         |

### Part 3 — Linked list

Part 3 relies on the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function           | Description                                                                   |
| ------------------ | ----------------------------------------------------------------------------- |
| `ft_lstnew`        | Creates a new node                                                            |
| `ft_lstadd_front`  | Adds a node at the beginning of the list                                      |
| `ft_lstsize`       | Counts the number of nodes in the list                                        |
| `ft_lstlast`       | Returns the last node of the list                                             |
| `ft_lstadd_back`   | Adds a node at the end of the list                                            |
| `ft_lstdelone`     | Frees a single node's content with a given function, then the node itself     |
| `ft_lstclear`      | Deletes and frees a node and all the following ones                           |
| `ft_lstiter`       | Applies a function to the content of each node                                |
| `ft_lstmap`        | Creates a new list by applying a function to each node's content              |

## Resources

### Documentation

- Unix manual pages: `man 3 <function>`
- [C visualizer](https://pythontutor.com/c.html#mode=edit) for function testing and debugging
- [GeeksforGeeks](https://www.geeksforgeeks.org/)

### Testing Tools

- [libftTester](https://github.com/Tripouille/libftTester) by Tripouille
- [Supreme-Tester-Libft](https://github.com/FranFrau/Supreme-Tester-Libft) by FranFrau

### AI usage

AI tools were used in this project as a means to easily access information pertaining to its subject, answer relevant questions that came up during the work and structure and proofread the README.

All code was written by me.