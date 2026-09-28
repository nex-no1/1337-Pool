void ft_swap(int *a, int *b) {
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
// #include <stdio.h>
// int main(void) {
// 	int a;
// 	int b;
// 	a = 37;
// 	b = 13;
// 	printf("%d%d\n", a, b);
// 	ft_swap(&a,&b);
// 	printf("%d%d\n", a, b);
// }