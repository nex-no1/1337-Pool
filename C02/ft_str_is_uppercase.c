int ft_str_is_uppercase(char *str) {
	while (*str) {
		if(!(*str >= 'A' && *str <= 'Z')) {
			return 0;
		}
		str++;
	}
	return 1;
}
// #include <stdio.h>
// int main(void) {
// 	char *str1 = "HEll";
// 	char *str2 = "HELL";
// 	printf("first: %d\n", ft_str_is_uppercase(str1));
// 	printf("second: %d\n", ft_str_is_uppercase(str2));
// }