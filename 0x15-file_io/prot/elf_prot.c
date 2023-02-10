#include "main.h"

/**
  *print_osabi - prints OS/ABI version
  *@osabi: integer char  value
  *
  *Return: print message
  */

char *print_osabi(unsigned char *osabi)
{
	unsigned char osabiv = *osabi;

	if (osabiv == ELFOSABI_HPUX)
		return ("HP-UX\n");
	if (osabiv == ELFOSABI_NETBSD)
		return ("NetBSD\n");
	if (osabiv == ELFOSABI_GNU)
		return ("GNU\n");
	if (osabiv == ELFOSABI_LINUX)
		return ("Linux\n");
	if (osabiv == ELFOSABI_SOLARIS)
		return ("Solaris\n");
	if (osabiv == ELFOSABI_AIX)
		return ("AIX\n");
	if (osabiv == ELFOSABI_IRIX)
		return ("IRIX\n");
	if (osabiv == ELFOSABI_FREEBSD)
		return ("FreeBSD\n");
	if (osabiv == ELFOSABI_TRU64)
		return ("TRU64\n");
	if (osabiv == ELFOSABI_MODESTO)
		return ("Novell Modesto\n");
	if (osabiv == ELFOSABI_OPENBSD)
		return ("OpenBSD\n");
	if (osabiv == ELFOSABI_ARM)
		return ("ARM architecture\n");
	if (osabiv == ELFOSABI_SYSV)
		return ("System V\n");
	if (osabiv == ELFOSABI_NONE)
		return ("System V\n");
	if (osabiv == ELFOSABI_STANDALONE)
		return ("Stand-alone (embedded)\n");
	else
		return ("<unknown:>\n");
}

/**
  *cmp_data - compares data to see endianess
  *@data: array containing byte specifications
  *
  *Return: data (endiannes)
  */

char *cmp_data(unsigned char *data)
{
	if (*data == ELFDATA2LSB)
		return ("2's complement, little endian");
	else if (*data == ELFDATA2MSB)
		return ("2's complement, big endian");
	else
		return ("Uknown data format");
}
/**
  *print_type - prints the type of file
  *@e_type: type integer value
  *
  *Return: type of file(string)
  */

char *print_type(unsigned int e_type)
{
	if (e_type == ET_REL)
		return ("REL (Relocatable file)");
	else if (e_type == ET_EXEC)
		return ("EXEC (Executable file)");
	else if (e_type == ET_DYN)
		return ("DYN (Shared object file)");
	else if (e_type == ET_CORE)
		return ("CORE (Core file)");
	else
		return ("An unknown type.");
}
/**
  *display_header - displays content of elf hdr
  *@header : ptr to header struct
  *
  *Return : nothing
  */

void display_header(Elf32_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS]
			== ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			cmp_data(&(header->e_ident[EI_DATA])));
	printf("  Version:                           %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            UNIX - %s",
			print_osabi(&(header->e_ident[EI_OSABI])));
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			print_type(header->e_type));
	printf("  Entry point address:               0x%x\n", header->e_entry);
}

/**
  *main - entry point
  *@argc: num of arguments
  *@argv: array of arguments
  *
  *Return: success value
  */

int main(int argc, char *argv[])
{
	int fd, rdf;
	Elf32_Ehdr ehdr;

	if (argc < 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename");
		exit(EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "%s: Error '%s': No such file\n", argv[0], argv[1]);
		exit(98);
	}

	rdf = read(fd, &ehdr, sizeof(ehdr));

	if (rdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot read from %s\n", argv[1]);
		exit(98);
	}

	if (ehdr.e_ident[0] != 0x7f || ehdr.e_ident[1] != 'E' ||
			ehdr.e_ident[2] != 'L' || ehdr.e_ident[3]
			!= 'F')
	{
		dprintf(STDERR_FILENO, "%s is not an elf file\n", argv[1]);
		exit(98);
	}

	display_header(&ehdr);

	close(fd);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot close %d\n", fd);
		exit(98);
	}
	return (0);
}
