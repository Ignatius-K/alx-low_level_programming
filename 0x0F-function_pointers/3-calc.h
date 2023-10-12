#ifndef CALC_H
#define CALC_H

int op_add(int, int);

int op_sub(int, int);

int op_mul(int, int);

int op_div(int, int);

int op_mod(int, int);

typedef struct op
{
	char *op;

	int (*f)(int, int);
} op_t;

int (*get_op_funct(char *s))(int, int);

#endif
