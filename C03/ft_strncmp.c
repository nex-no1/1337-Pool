int ft_strncmp(char *s1, char *s2, unsigned int n) {
	if ( n == 0) {
		return 0;
	}
	while ((unsigned char)*s1 && (unsigned char)*s1 == (unsigned char)*s2 && n > 1) {
		// we cant do n > 0 , exple: n = 2, it starts [first char++] n=2 then [second char++] n=1  but at
		// the end here it goes to [char 3] , and we needed it to stop at char 2.
		s1++;
		s2++;
		n--;
	}
	return (unsigned char)*s1 - (unsigned char)*s2;
}
// #include <stdio.h>
// int main(void) {
// 	char *s1 = "HeX";
// 	char *s2 = "HeY";
// 	printf("%d\n", ft_strncmp(s1, s2, 2));
// }