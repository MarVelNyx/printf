Project Title: Printf

Project Description: Write your own printf function. _printf is a custom implementation of the C programming function printf. This project is an application of the C programming knowledge that ALX School cohort 5 students have learned since starting the program on February 2022. 

Table of Contents:
* Author Details
* Requirements
* Authorized functions and macros
* Files -Compilation --EXAMPLES

Author Details
1. *Kim Kunniah - kunniahkimberlee@gmail.com *
2. Getachew Gebreselasiea - dagem0939@gmail.com

Requirements:
Code follows Betty Style coding. Repository has a README.md file No global variables No more than 5 functions All prototypes should be in the main.h All header files should be guarded Create a _putchar file

Authorized functions and macros:
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

Files: _printf.c: A function that produces output according to a format. Prototype: int _printf(const char *format, ...); Returns: the number of characters printed (excluding the null byte used to end output to strings).
* Write output to stdout, the standard output stream.
* format is a character string. You need to handle the following conversion specifiers: %, s, c, i & d.
main.h: contains all prototypes, struct for format type - all are guarded.
C files for: Function for string Function for char Function for integer Function for decimal
* You don’t have to reproduce the buffer handling of the C library printf function.
* You don’t have to handle the flag characters.
* You don’t have to handle field width.
* You don’t have to handle precision.
* You don’t have to handle the length modifiers.

Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
