char *ft_strupcase(char *str) {
	char *temp;
	temp = str;
	while(*str) {
		if(*str >= 'a' && *str <= 'z') {
			*str = *str - 32;
		}
		str++;
	}
	return temp;
}
// #include <stdio.h>
// int main(void) {
// 	char str[] = "Hellow- WORld \n";
// 	printf("%s\n", ft_strupcase(str));
// }

