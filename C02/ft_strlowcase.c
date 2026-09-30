char *ft_strlowcase(char *str) {
	char *temp;
	temp = str;
	while(*str) {
		if(*str >= 'A' && *str <= 'Z') {
			*str = *str + 32;
		}
		str++;
	}
	return temp;
}
// #include <stdio.h>
// int main(void) {
// 	char str[] = "HeLLow- WORld \t";
// 	printf("%s\n", ft_strlowcase(str));
// }

