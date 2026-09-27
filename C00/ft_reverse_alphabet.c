#include<unistd.h>
void    ft_print_reverse_alphabet(void) {
    int l = 'z';
    while( l >= 'a') {
        write(1,&l,1);
        l--;
    }
}
// int main(void) {
//     ft_print_reverse_alphabet();
// }