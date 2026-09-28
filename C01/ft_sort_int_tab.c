void ft_sort_int_tab(int *tab, int size) {
	int n, i, temp;
	i = 0;
	while(i < size) {
		n = i+1;
		while (n < size) {
			if ( tab[i] > tab[n]) {
				temp = tab[i];
				tab[i] = tab[n];
				tab[n] = temp;
			}
			n++;
		}
		i++;
	}
}
// #include <stdio.h>
// int main(void) {
// 	int i=0;
// 	int arr[] = {303,5,9,0,1,23,7};
// 	while ( i < 7) {
// 		printf("%d, " , arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i=0;
// 	ft_sort_int_tab(arr, 7);
// 	while ( i < 7) {
// 		printf("%d, " , arr[i]);
// 		i++;
// 	}
// }