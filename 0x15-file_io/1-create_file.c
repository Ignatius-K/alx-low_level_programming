#include "main.h"

/**
 * create_file - function creates file
 *
 * @fname: file name
 * @text_content: text content
 *
 * Return: 1 or -1
*/
int create_file(const char *fname, char *text_content)
{
	int file, write_status, words = 0;

	if (fname == NULL) 
		return (-1);

	
	file = open(fname, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1) 
		return (-1);

	if (text_content) 
	{
		while (text_content[words] != '\0') 
			words++;

		
		write_status = write(file, text_content, words);
		if (write_status == -1) 
			return (-1);
	}

	close(file); 
	return (1);
}
