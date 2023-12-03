# Holberton school printf project!!!


This custom printf function was developed by Magomed Abbasov and Abil Samedov for Holberton School. It supports the following format specifiers:
- `%c`
- `%s`
- `%d`
- `%i`

## Table of Contents
- [Usage](#usage)
- [Example](#example)
- [Authors](#authors)

## Usage

To use our printf function you just need to include our head file "main.h":
```
#include "main.h"
```
To get man page of printf you can use `man` command in your terminal:
```
man man_3_printf
```

## Examples

```
#include "main.h"

/**
 * main - main function
 * Return: Success (0)
 */
int main(void)
{
    char myChar = 'A';
    char *myString = "Hello";
    int myInt = 42;

    _printf("Character: %c\n", myChar);
    _printf("String: %s\n", myString);
    _printf("Integer: %d\n", myInt);

    return (0);
}
```
Output:
```
Character: A
String: Hello
Integer: 42

```

# Authors
Creators:
- Abbasov Magomed [(Somed-1)](https://github.com/somed-1)
- Abil Samedov [(VoiceOfDarkness)](https://github.com/voiceofdarkness)

And special credits to:
- You really don't need to know but here is the [link](https://www.youtube.com/watch?v=dQw4w9WgXcQ&ab_channel=RickAstley)
