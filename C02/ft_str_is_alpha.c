int ft_str_is_alpha(char *str) {
	while (*str) {
		if (!(*str>=65 && *str<=90) && !(*str >= 97 && *str <= 122)) {
			return 0;
		}
		str++;
	}
	return 1;
}
// #include <stdio.h>
// int main(void) {
// 	char *str1 = "42NETWORK-BABY";
// 	char *str2 = "HELLOWORLD";
// 	printf("first: %d\n", ft_str_is_alpha(str1));
// 	printf("second: %d\n", ft_str_is_alpha(str2));
// }

