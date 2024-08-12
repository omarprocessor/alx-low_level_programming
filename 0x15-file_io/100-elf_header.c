#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * print_magic - Prints the ELF magic number.
 * @e_ident: Pointer to the ELF identification array.
 */
void print_magic(unsigned char *e_ident)
{
printf("Magic:   %02x %02x %02x %02x\n",
e_ident[EI_MAG0],
e_ident[EI_MAG1],
e_ident[EI_MAG2],
e_ident[EI_MAG3]);
}

/**
 * print_class - Prints the class of the ELF file.
 * @e_ident: ELF class identifier.
 */
void print_class(unsigned char e_ident)
{
printf("Class:                             ");
switch (e_ident)
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
break;
}
}

/**
 * print_data - Prints the data encoding of the ELF file.
 * @e_ident: ELF data encoding identifier.
 */
void print_data(unsigned char e_ident)
{
printf("Data:                              ");
switch (e_ident)
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown>\n");
break;
}
}

/**
 * print_version - Prints the ELF version.
 * @e_ident: ELF version identifier.
 */
void print_version(unsigned char e_ident)
{
printf("Version:                           ");
if (e_ident == EV_CURRENT)
printf("1 (current)\n");
else
printf("<unknown>\n");
}

/**
 * print_osabi - Prints the OS/ABI information.
 * @e_ident: ELF OS/ABI identifier.
 */
void print_osabi(unsigned char e_ident)
{
printf("OS/ABI:                            ");
switch (e_ident)
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("Solaris\n");
break;
case ELFOSABI_AIX:
printf("AIX\n");
break;
case ELFOSABI_IRIX:
printf("IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("Tru64 UNIX\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown>\n");
break;
}
}

/**
 * print_abi_version - Prints the ABI version.
 * @e_ident: ELF ABI version identifier.
 */
void print_abi_version(unsigned char e_ident)
{
printf("ABI Version:                       %u\n", e_ident);
}

/**
 * print_type - Prints the type of the ELF file.
 * @e_type: ELF file type.
 */
void print_type(unsigned int e_type)
{
printf("Type:                              ");
switch (e_type)
{
case ET_NONE:
printf("None\n");
break;
case ET_REL:
printf("Relocatable\n");
break;
case ET_EXEC:
printf("Executable\n");
break;
case ET_DYN:
printf("Shared object\n");
break;
case ET_CORE:
printf("Core\n");
break;
default:
printf("<unknown>\n");
break;
}
}

/**
 * print_entry - Prints the entry point address.
 * @e_entry: Entry point address.
 */
void print_entry(unsigned long e_entry)
{
printf("Entry point address:               0x%lx\n", e_entry);
}

/**
 * print_elf_header - Prints the ELF header information.
 * @elf_header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *elf_header)
{
print_magic(elf_header->e_ident);
print_class(elf_header->e_ident[EI_CLASS]);
print_data(elf_header->e_ident[EI_DATA]);
print_version(elf_header->e_ident[EI_VERSION]);
print_osabi(elf_header->e_ident[EI_OSABI]);
print_abi_version(elf_header->e_ident[EI_ABIVERSION]);
print_type(elf_header->e_type);
print_entry(elf_header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, or exit with status code 97 or 98 on error.
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr elf_header;

/* Check for correct number of arguments */
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
exit(97);
}

/* Open the ELF file */
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/* Read the ELF header */
if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
{
dprintf(STDERR_FILENO, "Error: Can't read ELF header from file %s\n", argv[1]);
close(fd);
exit(98);
}

/* Check for valid ELF file */
if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
elf_header.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
close(fd);
exit(98);
}

/* Print the ELF header information */
print_elf_header(&elf_header);

close(fd);
return (0);
}

