*This project has been created as part of the 42 curriculum by achen.*

# Libft

## Description:
**Libft** It is fornst objecte of Common Core, all objecte of this directory start from ```ft_```. Consists of three parts.

1. **Libc functions:**
Custom C library that re-implements standard C libary funtions(such as 'strlen', 'memcpy', 'atoi').

2. **Additional functions:**
Develop a set of functions that are either not included in
the libc.

3. **linked list:**
List funtions

## Instructions:

### Features
| Command       | Description |
| - | - |
| `make`        | Compiles the functions and creates `libft.a` |
| `make clean`  | Removes all the object files end wiht ```.o```|
| `make fclean` | Removes the object files end wiht ```.o``` and `libft.a` |
| `make re`     | Runs `fclean` then `all` (`make`) |

### Steps to Use

1. Open your ternimal and navigate to this directory.

2. Write commant ```make``` press ENTER key, for get ```libft.a``` file and the same fuction file but end with ```.o```.

3. You can use ```make clean``` commant to clean that files end with ```.o```, because after we don't need.

4. To use this library, you need write header ```#include "libft"``` in your C project and when compile your C project must write libft.h back of your C programe.

for example:
```sh
cc -Wall -Wextra -Werror project.c libft.a
```


## Resources:
- runoob.com
- AI - searching information, error testing, edge cases.

