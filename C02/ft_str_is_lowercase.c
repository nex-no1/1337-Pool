int ft_str_is_lowercase(char *str) {
	while (*str) {
		if(!(*str >= 'a' && *str <= 'z')) {
			return 0;
		}
		str++;
	}
	return 1;
}
// #include <stdio.h>
// int main(void) {
// 	char *str1 = "helloworld";
// 	char *str2 = "";
// 	printf("first: %d\n", ft_str_is_lowercase(str1));
// 	printf("second: %d\n", ft_str_is_lowercase(str2));
// }