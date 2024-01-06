#include <stdio.h>
#include <string.h>

void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

void reverse_array(int *a, int n)
{
	int count = 0;
	/*{1,2,3,4,5}, 5 */
	for ( ; count < n; count++)
	{
		int temp1 = *(a + count);
		int temp2 = *(a + ((n - 1) - count));

		if ( count >= (n /2)) break;
		*(a + count) = temp2;
		*(a + (n -1) - count) = temp1;
	}

	return;
}

char *string_toupper(char *str)
{
	int i = 0;

	while ( *(str + i) != '\n')
	{
		int value = *(str + i);
		if ( value >= 97 && value <= 122)
		{
			*(str + i) = value - 32;
		}

		i++;
	}

	return str;
}

int main(void){
	char s1[] = "ABCD";
	char s2[] = "AB";
	char t = '\0';

	printf("%d\n", t);
    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", strcmp(s2, s1));
    printf("%d\n", strcmp(s1, s1));

    puts("-----------------------------------------------");
    puts("-----------array reverse test-----------------");

       int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));

    puts("-------------------------------------------");
    puts("--------------lowercase_to_uppercase-------");

        char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    
    char frr[] = "Well! for me i love to expLore!; leArn #new things prolly if I got AlX #AI admission in the nearest fw I'd be ha[[y. \n";
    ptr = string_toupper(frr);
    printf("%s", ptr);
    printf("%s", frr);
    return (0);
}

