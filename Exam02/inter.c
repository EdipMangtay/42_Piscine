#include <unistd.h>

void solve(char *str1, char *str2) {
    int i;
    int j;
    int tab[256] = {0};

    i = 0;
    while (str2[i])
    {
        if (tab[(int)str2[i]] == 0)
            tab[(int)str2[i]] = 1;
        i++;
    }

    i = 0;
    j = 0;
    while (str1[i])
    {
        if (tab[(int)str1[i]] == 1)
        {
            tab[(int)str1[i]] = 100;
            write(1, &str1[i], 1);
        }
        i++;
    }

}

int	main(int argc, char **argv) {
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
