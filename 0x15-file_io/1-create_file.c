#include"main.h"
/**
  *@filename - name of file to create
  *@text_content - content of the filename
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int len = 0;

	if (filename == NULL)
		return(-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	w = write(fd, text_content,len);

	if(fd == -1 || w ==-1)
		return(-1);
	close(fd);
	return(1);	
}
