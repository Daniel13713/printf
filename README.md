# _Printf Funtion

This is a custom version of the printf function of standard library of C language, with some of more important indicadors of format [man](https://man7.org/linux/man-pages/man3/printf.3.html)

**Table of Contents**


- [Features](#features)
- [Usage](#usage)
- [Flowchart](#flowchart)

## Features
### Requeriments 
You should learn from this project:

- How to use git in a **team work**
- Applying *variadic functions* to a big project in C
- Understand the complexities of printf function

### Conversion specifiers Avalibles
- **%c**  : 
- **%s**  :
- **%d**  :
- **%i**  :

## Usage
### Installation

Use [git](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository) to clone this repository in your local machine 

```bash
git clone git@github.com:Daniel13713/printf.git
```

### Compilation

All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```

### Examples

```c
import foobar

/* DataType char "%c"
 * print "g-i-t 20" 
 */
_printf("%c-%c-%c\n", 'g', 'i', 't');

/* DataType char* "%s"
 * print "g-i-t 20" 
 */
_printf("%s\n", "g-i-t 20");

/* DataType int "%d"
 * print "g-i-t 20" 
 */
_printf("g-i-t %d\n", 20);
```
## Flowchart 

*****add image***** 

## Authors
- [Shara García](https://github.com/SharaGB)
- [Daniel Duarte](https://github.com/Daniel13713)

## License
This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
