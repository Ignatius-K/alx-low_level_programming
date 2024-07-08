/**
 * get_endianness - function check arch
 *
 * Return: 1 or 0
*/
int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return (c[0]);
}
