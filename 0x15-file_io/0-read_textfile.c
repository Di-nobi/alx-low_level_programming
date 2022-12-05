#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - a function that read text file
 * @filename: name of file
 * @letters: size of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        int n, p;
        char *f;
        int fd;

        if (!filename)
                return (0);

        f = malloc(sizeof(char) * letters);
        if (!f)
                return (0);
	
	fd = open(filename, O_RDONLY);

        if (fd == -1)
{
	free(f);
        return (0);
}
        n = read(fd, f, letters);

        if (n == -1)
{
        free(f);
        return (0);
}
        f[n] = '\0';

        p = write(STDOUT_FILENO, f, n);

        if (p == -1)
{
        free(f);
        return (0);
}

	free(f);
        close(fd);
        return (p);
}
