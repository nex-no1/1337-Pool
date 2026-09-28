void ft_ultimate_div_mod(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
// #include <stdio.h>
// int main(void) {
// 	int a = 6;
// 	int b = 2;
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("div: %d, mod: %d\n", a, b);
// }