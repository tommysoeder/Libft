# Libft

Libft is a foundational C library developed for the 42 curriculum. It recreates a focused subset of the standard C library and adds reusable helpers for string transformation, allocation, conversion, splitting, and file-descriptor output.

The project builds a static archive, `libft.a`, that can be linked into other C programs. It demonstrates low-level memory handling, pointer arithmetic, defensive allocation, API design, and implementation of common library behavior without relying on the original functions being recreated.

## Implemented functionality

### Character classification and conversion

| Function | Purpose |
| --- | --- |
| `ft_isalpha` | Check for an alphabetic character. |
| `ft_isdigit` | Check for a decimal digit. |
| `ft_isalnum` | Check for an alphabetic character or digit. |
| `ft_isascii` | Check whether a value belongs to the ASCII range. |
| `ft_isprint` | Check for a printable ASCII character. |
| `ft_toupper` | Convert an ASCII lowercase letter to uppercase. |
| `ft_tolower` | Convert an ASCII uppercase letter to lowercase. |

### Memory operations

| Function | Purpose |
| --- | --- |
| `ft_memset` | Fill a memory region with a byte value. |
| `ft_bzero` | Set a memory region to zero. |
| `ft_memcpy` | Copy bytes between non-overlapping regions. |
| `ft_memmove` | Copy bytes safely when regions overlap. |
| `ft_memchr` | Search a bounded memory region for a byte. |
| `ft_memcmp` | Compare two bounded memory regions. |
| `ft_calloc` | Allocate and zero-initialize a block of memory. |

### String operations

| Function | Purpose |
| --- | --- |
| `ft_strlen` | Measure a null-terminated string. |
| `ft_strlcpy` | Copy a string into a bounded destination. |
| `ft_strlcat` | Append a string to a bounded destination. |
| `ft_strchr` | Find the first occurrence of a character. |
| `ft_strrchr` | Find the last occurrence of a character. |
| `ft_strncmp` | Compare at most `n` characters. |
| `ft_strnstr` | Find a substring within a bounded prefix. |
| `ft_strdup` | Allocate a copy of a string. |
| `ft_atoi` | Convert the initial numeric part of a string to `int`. |

### Allocating and transforming helpers

| Function | Purpose |
| --- | --- |
| `ft_substr` | Allocate a substring from a starting index. |
| `ft_strjoin` | Allocate the concatenation of two strings. |
| `ft_strtrim` | Remove characters from both ends of a string. |
| `ft_split` | Split a string around one delimiter character. |
| `ft_itoa` | Convert an `int` to a newly allocated string. |
| `ft_strmapi` | Create a transformed copy using an index-aware callback. |
| `ft_striteri` | Apply an index-aware callback in place. |

### File-descriptor output

| Function | Purpose |
| --- | --- |
| `ft_putchar_fd` | Write one character to a file descriptor. |
| `ft_putstr_fd` | Write a string to a file descriptor. |
| `ft_putendl_fd` | Write a string followed by a newline. |
| `ft_putnbr_fd` | Write a decimal integer. |

## Mandatory and bonus scope

This repository contains the mandatory Libft functions listed above. It does **not** define the `t_list` type or implement the linked-list functions normally associated with the optional bonus part, and its Makefile has no `bonus` target.

That distinction matters when reusing the library: consumers can rely on the declared functions in `libft.h`, but should not expect `ft_lstnew`, `ft_lstadd_front`, `ft_lstmap`, or other list helpers.

## Build

Requirements:

- a C compiler available as `cc`;
- GNU Make;
- `ar`, used to create the static archive.

```bash
git clone https://github.com/tommysoeder/Libft.git
cd Libft
make
```

The build compiles each source with `-Wall -Wextra -Werror` and creates:

```text
libft.a
```

Available targets:

```bash
make          # Build libft.a
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Rebuild the library
```

## Use in another project

Include the public header:

```c
#include "libft.h"

int main(void)
{
    char *message;

    message = ft_strjoin("Hello, ", "Libft!");
    if (!message)
        return (1);
    ft_putendl_fd(message, 1);
    free(message);
    return (0);
}
```

Compile and link against the archive:

```bash
cc -Wall -Wextra -Werror main.c -I. -L. -lft -o example
./example
```

When Libft lives in a subdirectory, adjust the include and library paths accordingly:

```bash
cc main.c -I./libft -L./libft -lft -o program
```

Functions that allocate memory return ownership to the caller. Results from functions such as `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, and `ft_strmapi` must be released when no longer needed. For `ft_split`, free every returned string before freeing the array itself.

## Project structure

```text
.
├── Makefile       # Static-library build rules
├── libft.h        # Public function declarations
└── ft_*.c         # One implementation unit per public function
```

## Technical takeaways

- Byte-level memory manipulation and overlap-safe copying.
- Null-terminated strings and bounded string operations.
- Dynamic allocation, ownership, cleanup, and allocation-failure paths.
- Function pointers for reusable string transformations.
- File descriptors and direct output through `write`.
- Static libraries, headers, compilation units, and linker flags.

## Current limitations

- The optional linked-list bonus is not implemented.
- The repository does not include an automated test suite.
- `ft_calloc` multiplies `nmemb` by `size` without an explicit overflow guard before allocation.
- As with their standard-library counterparts, most functions expect valid pointers unless the implementation explicitly handles `NULL`.

## Author

Created by [tommysoeder](https://github.com/tommysoeder) as part of the 42 curriculum.

AI tools were used to review the repository and improve this documentation. The behavior described here was checked against the source code, header, and Makefile; this statement does not attribute AI use to code where the repository provides no such record.
