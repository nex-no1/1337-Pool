#include <unistd.h>
void ft_putstr_non_printable(char *str) {
	char *arr = "0123456789abcdef";
	char c;
	while (*str) {
		if ((*str >= 0 && *str <= 31) || *str == 127) {
			write(1,"\\",1);
			c = arr[*str / 16];
			write(1,&c,1);
			c = arr[*str % 16];
			write(1,&c,1);
		}
		else {
			write(1,str,1);
		} 
		str++;
	}
}
// int main(void) {
// 	char str[] = "Coucou\ntu vas\t bien ?";
// 	ft_putstr_non_printable(str);
// }
