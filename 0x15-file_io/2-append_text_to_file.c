#include "main.h"
/**
  * append text at the end of file
  * @filename: a pointer to the name of  a file
  * @textcontent thestring to add at the end of a file
  *return -1 if functions fsils
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return(-1);
	if (filename != NULL)
	{
		for(len=0; text_content[len];)
			len++;
		o = open(filename, O_WRONLY | O_APPEND);
		w = write(o, text_content, len);

		if (o == -1 || w ==-1)
			return(-1);
		close(o);
		return(1);
	}
}
