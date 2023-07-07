


# 0x09. C - Static libraries


## Concepts and Resources

* [C-static libraries](https://intranet.alxswe.com/concepts/61)
* `man or help`
    * ar
    * ranlib
    * nm

## IMPORTANT

 * Allowed editors: vi, vim, emacs
 * All your scripts will be tested on Ubuntu 20.04 LTS
 * All your files should end with a new line (why?)
 * The first line of all your files should be exactly #!/bin/bash
 * A README.md file, at the root of the folder of the project, describing what each script is doing
 * All your files must be executable

## TASKS

 * Create the static library `libmy.a` containing all the functions listed below:
   * `int _putchar(char c);
      int _islower(int c);
      int _isalpha(int c);
      int _abs(int n);
      int _isupper(int c);
      int _isdigit(int c);
      int _strlen(char *s);
      void _puts(char *s);
      char *_strcpy(char *dest, char *src);
      int _atoi(char *s);
      char *_strcat(char *dest, char *src);
      char *_strncat(char *dest, char *src, int n);
      char *_strncpy(char *dest, char *src, int n);
      int _strcmp(char *s1, char *s2);
      char *_memset(char *s, char b, unsigned int n);
      char *_memcpy(char *dest, char *src, unsigned int n);
      char *_strchr(char *s, char c);
      unsigned int _strspn(char *s, char *accept);
      char *_strpbrk(char *s, char *accept);
      char *_strstr(char *haystack, char *needle);`

 * Create a script called `create_static_lib.sh` that creates a static library called` liball.a` from all the .c files that are in the current directory.

                          copyright©2023-@levywanke-static library -All Rights Reserved.
