#include "libft.h"

int main()
{
	int size;
	int i;
	int num;
	char *str;
	int num2;

	size = 0;
	i = 0;
	num = 1254;
	num2 = num;
	while (num !=0)
	{
		int rem = num % 10;
		num = num/10;
		size++;
	}
	str = (char*)malloc(size * sizeof(char));
	str[size] = '\0';
	size--;
	num = num2;
	 while (num != 0) 
    { 
		int rem = num % 10; 
        str[size] = (rem > 9)? (rem-10) + 'a' : rem + '0'; 
        num = num/10;
		size--;
    }

	printf("%s\n", str);
	return (0);
}
