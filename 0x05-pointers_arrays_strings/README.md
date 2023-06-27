# 200~0x05. C - Pointers, arrays and strings

# General

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

# Requirements


* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file
#TASKS TO BE DONE 

* File: `0-reset_to_98.c` Write a function that takes a pointer to an int as parameter and updates the value it points to to 98
         *Prototype: `void reset_to_98(int *n);`
* File: `1-swap.c` Write a function that swaps the values of two integers.
        *Prototype: `void swap_int(int *a, int *b);`
* File: `2-strlen.c`Write a function that returns the length of a string.

        *Prototype: `int _strlen(char *s);`
         FYI: The standard library provides a similar function:` **strlen**`. Run man strlen to learn more.
* File: `3-puts.c` Write a function that prints a string, followed by a new line, to stdout.

         *Prototype: `void _puts(char *str)`;
         FYI: The standard library provides a similar function:` puts`. Run man puts to learn more.
* File: 4-print_rev.c Write a function that prints a string, in reverse, followed by a new line.

         *Prototype:` void print_rev(char *s);`
* File: `5-rev_string.c` Write a function that reverses a string.

         *Prototype: `void rev_string(char *s);`
