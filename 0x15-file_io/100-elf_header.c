#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>


/* Function Prototypes */
void print_addr(char *ptr);
void print_data(char *ptr);
void print_version(char *ptr);
void print_osabi(char *ptr);
void print_type(char *ptr);
void print_magic(char *ptr);
void check_sys(char *ptr);
int check_elf(char *ptr);


/**
* print_addr -This function prints the entry point address.
* @ptr: Pointer to the ELF header.
* Return: No return.
*/
void print_addr(char *ptr)
{
int i, begin;
char sys;

printf("  Entry point address:               0x");

sys = ptr[4] + '0';
if (sys == '1')
{
begin = 26;
printf("80");
for (i = begin; i >= 22; i--)
{
if (ptr[i] > 0)
printf("%x", ptr[i]);
else if (ptr[i] < 0)
printf("%x", 256 + ptr[i]);
}
if (ptr[7] == 6)
printf("00");
}

if (sys == '2')
{
begin = 26;
for (i = begin; i > 23; i--)
{
if (ptr[i] >= 0)
printf("%02x", ptr[i]);
else if (ptr[i] < 0)
printf("%02x", 256 + ptr[i]);
}
}
printf("\n");
}

/* ... (Other print functions) ... */

/**
* check_sys -This function checks the ELF version
* system and prints header info.
* @ptr: Pointer to the ELF header.
* Return: No return.
*/
void check_sys(char *ptr)
{
char sys = ptr[4] + '0';

if (sys == '0')
exit(98);

printf("ELF Header:\n");
print_magic(ptr);

if (sys == '1')
printf("  Class:                             ELF32\n");

if (sys == '2')
printf("  Class:                             ELF64\n");

print_data(ptr);
print_version(ptr);
print_osabi(ptr);
print_type(ptr);
print_addr(ptr);
}

/**
* check_elf -This function checks if it is an ELF file.
* @ptr: Pointer to the ELF header.
* Return: 1 if it is an ELF file, 0 if not.
*/
int check_elf(char *ptr)
{
int addr = (int)ptr[0];
char E = ptr[1];
char L = ptr[2];
char F = ptr[3];

if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
return (1);

return (0);
}

/**
* main - program that displays the information contained
* in the ELF header at the start of an ELF file.
* @argc: Number of arguments.
* @argv: Arguments vector.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int fd, ret_read;
char ptr[27];

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
exit(98);
}

fd = open(argv[1], O_RDONLY);

if (fd < 0)
{
dprintf(STDERR_FILENO, "Err: File cannot be opened\n");
exit(98);
}

lseek(fd, 0, SEEK_SET);
ret_read = read(fd, ptr, 27);

if (ret_read == -1)
{
dprintf(STDERR_FILENO, "Err: The file cannot be read\n");
exit(98);
}

if (!check_elf(ptr))
{
dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
exit(98);
}

check_sys(ptr);
close(fd);

return (0);
}

