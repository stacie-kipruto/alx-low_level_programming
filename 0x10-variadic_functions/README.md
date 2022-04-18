# C - Variadic functions

# Description of Files:
- File 0 : A function that returns the sum of all its parameters using the prototype int sum_them_all(const unsigned int n, ...); 
If n == 0, return 0

- File 1: a function that prints numbers, followed by a new line. Prototype: void print_numbers(const char *separator, const unsigned int n, ...)
separator is the string to be printed between numbers
If separator is NULL, don’t print it

- File 2: a function that prints strings, followed by a new line. Prototype: void print_strings(const char *separator, const unsigned int n, ...)
separator is the string to be printed between the strings
If separator is NULL, don’t print it
If one of the string is NULL, print (nil) instead

- File 3: a function that prints anything. Prototype: void print_all(const char * const format, ...);
where format is a list of types of arguments passed to the function
c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead
any other char should be ignored

# Links
https://en.wikipedia.org/wiki/Stdarg.h
https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html
https://www.youtube.com/watch?v=1W4oyuOdXv8
