int ft_strcmp(char *s1, char *s2) {
	while((unsigned char)*s1 && (unsigned char)*s1 == (unsigned char)*s2) {
		s1++;
		s2++;
	}
	return (unsigned char)*s1 - (unsigned char)*s2;
}
// #include <stdio.h>
// int main(void) {
// 	char *s1 = "Hello42";
// 	char *s2 = "Hello1337";
// 	printf("%d\n", ft_strcmp(s1, s2));
// }