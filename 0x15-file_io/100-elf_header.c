#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUF_SIZE 64

/**
 * exit_with_error - Prints an error message
 * to stderr and exits with status code 98
 * @msg: The error message to print
 */
void exit_with_error(const char *msg)
{
fprintf(stderr, "%s\n", msg);
exit(98);
}
/**
 * print_elf_header_info - Prints the information
 * contained in the ELF header
 * @header: Pointer to the ELF header structure
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
int i;
printf("ELF Header:\n");
printf("  Magic:");
for (i = 0; i < EI_NIDENT; i++)
printf(" %02x", header->e_ident[i]);
printf("\n");
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS]) {
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %02x>\n", header->e_ident[EI_CLASS]);
break;
}
printf("  Data:                              ");
switch (header->e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %02x>\n", header->e_ident[EI_DATA]);
break;
}
printf("  Version: %d (current)\n", header->e_version);
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
default:
printf("<unknown: %02x>\n", header->e_ident[EI_OSABI]);
break;
}
printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type)
{
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
default:
printf("<unknown: %02x>\n", header->e_type);
break;
}
printf("  Entry point address:0x%lx\n", (unsigned long)header->e_entry);
}
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr elf_header;
if (argc != 2)
exit_with_error("Usage: elf_header elf_filename");
fd = open(argv[1], O_RDONLY);
if (fd == -1)
exit_with_error("Error: Unable to open the ELF file");
if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
{
close(fd);
exit_with_error("Error: Unable to read the ELF header");
}
if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
{
close(fd);
exit_with_error("Error: Not an ELF file");
}
print_elf_header_info(&elf_header);
close(fd);
return (0);
}

