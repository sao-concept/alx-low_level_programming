#include "main.h"

/**
* append_text_to_file -This function append text at the end of a file.
* @filename: The name of the file.
* @text_content: The NULL-terminated string to add at the end of the file.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, bytes_written, idx;

if (filename == NULL)
return (-1);

/* Open the file in append mode for both reading and writin */
file_descriptor = open(filename, O_APPEND | O_RDWR, 0664);
if (file_descriptor == -1)
return (-1);

if (text_content != NULL)
{
/* Calculate the length of the text content */
for (idx = 0; text_content[idx]; idx++)
;

/* Write the text content to the file */
bytes_written = write(file_descriptor, text_content, idx);
if (bytes_written == -1)
{
close(file_descriptor);
return (-1);
}
}

/* Close the file */
close(file_descriptor);
return (1);
}

