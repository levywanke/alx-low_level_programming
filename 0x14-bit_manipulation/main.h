#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
/* Task 0 - Converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* Task 1 - Prints the binary representation of a number */
void print_binary(unsigned long int n);

/* Task 2 - Returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Task 3 - Sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* Task 4 - Sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
/* Task 7 - Checks the endianness */
int get_endianness(void);

#endif /* MAIN_H */
