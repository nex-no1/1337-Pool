#include<unistd.h>
void printcomb(int *arr, int n) {
	int i=0;
	char c;
	while (i < n) {
		c = arr[i] + '0';
		write(1,&c,1);
		i++;
	}
	if (arr[0] != 10 - n) {
		write(1,", ",2);
	}
}
void combn(int *arr, int n, int index) {
	int digit;
	if(index == n) {
		printcomb(arr, n);
		return;
	}
	if(index == 0) {
		digit = 0;
	}
	else {
		digit = arr[index - 1] + 1;
	}
	while(digit <= 9) {
		arr[index] = digit;
		combn(arr, n, index + 1);
		digit++;
	}
}
void ft_print_combn(int n) {
	int arr[9];
	if ( n>0 && n< 10) {
		combn(arr, n, 0);
	}
}
// int main(void) {
// 	ft_print_combn(3);
// 	return 0;
// }