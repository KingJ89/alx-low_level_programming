#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

typedef struct
{
	unsigned char ident[EI_NIDENT];
}
ElfIdent;
void validateElfHeader(ElfIdent *ident);
void displayHeaderInfo(Elf64_Ehdr *header);
void validateElfHeader(ElfIdent *ident)
void displayHeaderInfo(Elf64_Ehdr *header)
{
	printf("ELF Header Information:\n");
	printf(" Magic: ");
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf(" Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf(" Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf(" Version: %d\n", header->e_ident[EI_VERSION]);
}

int main(int argc, char *argv[])

{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		exit(EXIT_FAILURE);
	}
	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(Elf64_Ehdr)) == -1)
	{
		perror("Error reading file");
		close(fd);
		exit(EXIT_FAILURE);
	}

	ElfIdent ident;
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		ident.ident[i] = header.e_ident[i];
	}
	validateElfHeader(&ident);
	displayHeaderInfo(&header);
	close(fd);
	return EXIT_SUCCESS;
}
