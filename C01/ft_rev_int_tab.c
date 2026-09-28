void ft_rev_int_tab(int *tab, int size) {
	int i, y;
	int temp;
	i = 0;
	y = size - 1;
	while ( i < y) {
		temp = tab[i];
		tab[i] = tab[y];
		tab[y] = temp;
		i++;
		y--;
	}
}
// #include <stdio.h>
// int main(void) {
// 	int arr[] = {1,2,3,4,5,6};
// 	int i=0;
// 	while ( i < 6) {
// 		printf("%d", arr[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("\n");
// 	ft_rev_int_tab(arr, 6);
// 	while ( i < 6) {
// 		printf("%d", arr[i]);
// 		i++;
// 	}
// }