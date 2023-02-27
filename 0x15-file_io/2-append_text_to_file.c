#include "main.h"
/**
  * append text at the end of file
  * @filename: a pointer to the name of  a file
  * @textcontent thestring to add at the end of a file
  * return -1 if functions fsils
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_len = 0;

	if (filename == NULL)
		return(-1);
	if (text_content != NULL)
	{
		while(text_content[text_len] != '\0')
			text_len++;
	}
		fd = open(filename, O_WRONLY | O_APPEND);

		if (fd == -1)
			return(-1);
		bytes_written = write(fd, text_content, text_len);
		if (bytes_written == -1)
		{
			close(fd);
			return(-1);
		}
		close(fd);
		return (1);
}
