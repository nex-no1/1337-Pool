char *ft_strcapitalize(char *str) {
	int i=0;
	int count = 1;
	while (str[i] != '\0') {
		if (count == 0 && str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
			count = 0;
		}
		else if (count == 0 && !((str[i]>= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))) {
			count = 1;
		}
		else if (count == 1 && str[i] >= 'A' && str[i] <= 'Z') {
			count = 0;
		}
		else if (count == 1 && str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
			count = 0;
		}
		else if ( count == 1 && str[i] >= '0' &&str[i] <= '9') {
			count = 0;
		}
		i++;
	}
	return str;
}
// #include <stdio.h>
// int main(void) {
// 	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	printf("%s\n", ft_strcapitalize(str));
// }