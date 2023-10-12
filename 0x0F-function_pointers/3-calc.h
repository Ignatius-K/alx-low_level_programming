#ifndef CALC_H
#define CALC_H

int op_add(int, int);

int op_sub(int, int);

int op_mul(int, int);

int op_div(int, int);

int op_mod(int, int);

/**
 * struct op - defines an operation
 * @op: char defining operation
 * @f: pointer to function
 */
typedef struct op
{
	char *op;

	int (*f)(int, int);
} op_t;

int (*get_op_func(char *s))(int, int);

#endif
