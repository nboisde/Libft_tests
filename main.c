#include "libft_tests.h"
#include <stdio.h>

int		main()
{
	printf(BLUE);
	printf("WELCOME IN THE LIBFT_TESTS\nWritten by ndemont and nboisde, enjoy the defense.\n");

	sleep(1);
	printf("\n%s\n", "TEST FOR MEMSET");
	printf(DEFAULT);
	test_memset();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR BZERO");
	printf(DEFAULT);
	test_bzero();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR MEMCPY");
	printf(DEFAULT);
	test_memcpy();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR MEMCCPY");
	printf(DEFAULT);
	test_memccpy();
	printf("\n");

	sleep(1);
	printf(BLUE);
	printf("%s\n", "TEST FOR MEMMOVE");
	printf(DEFAULT);
	test_memmove();
	printf("\n");

	return (0);
}
