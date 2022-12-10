#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

/**
 * main - program that copies the cotent of a file to another file
 * @argc:  counts parameters
 * @argv: Pointer of array of pointers containing strings entering main
 * Return:0
 */

int main(int argc, char *argv[])
{
        int file_from, file_to, rcheck, wcheck, ccheck1, ccheck2;
        char buff[1024];

        if (argc != 3)
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);

        file_from = open(argv[1], O_RDONLY);
        if (file_from == -1)
                dprintf(STDERR_FILENO, "Error: Cant read from file %s", argv[1]);
        exit(98);

        file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
        if (file_to == -1)
                dprintf(STDERR_FILENO, "Error: Cant read from file %s", argv[2]);
        exit(99);
	
	rcheck = read(file_from, buff, 1024);
	wcheck = write(file_to, buff, 1024);

	while (rcheck > 0 )
{
		if (wcheck != rcheck)
        {
		      dprintf(STDERR_FILENO, "Error: Cant write to %s", argv[2]);
                exit(99);
        }
}

        if (rcheck == -1)
        {
                dprintf(STDERR_FILENO, "Error: Cant read fom file %s\n", argv[1]);
                exit(98);
        }
        ccheck1 = close(file_from);
        if (ccheck1 == -1)
                dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", file_from);
        exit(100);
        ccheck2 = close(file_to);
        if (ccheck2 < 0)
                dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", file_to);
        exit(100);

        return (0);
}
