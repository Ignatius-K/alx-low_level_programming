#include "main.h"

/**
 * append_text_to_file - funcion appends text
 *
 * @fname: file adds data
 * @text_content: text content
 *
 * Return: 1 or -1
*/
int append_text_to_file(const char *fname, char *text_content)
{
	int file, app_status, words = 0;

	if (fname == NULL)
		return (-1);


	file = open(fname, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;


		app_status = write(file, text_content, words);
		if (app_status == -1)
			return (-1);
	}

	close(file);
	return (1);
}
