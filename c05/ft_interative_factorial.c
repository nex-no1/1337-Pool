// int ft_interative_factorial(int nb) {
//     if(nb < 0) {
//         return 0;
//     }
//     int result = 1;
//     while(nb> 0) {
//         result = result * nb;
//         nb--;
//     }
//     return(result);
// }


// int ft_recursive_factorial(int nb) {
//     if( nb < 0) {
//         return 0;
//     }
//     if ( nb == 0) {
//         return 1;
//     }
//     return nb * ft_recursive_factorial(nb-1);
// }


// int ft_interative_power(int nb, int power) {
//     int i = 0;
//     int result =1;
//     if (power < 0) {
//         return 0;
//     }
//     while ( i < power) {
//         result *= nb;
//         i++;
//     }
//     return (result);
// }


// int ft_recursive_power(int nb, int power) {
//     if(power < 0) {
//         return 0;
//     }
//     if (power == 0) {
//         return  1;
//     }
//     return nb * ft_recursive_power(nb , power -1);
// }


// int ft_fibonacci(int index) {
//     if(index < 0) {
//         return -1;
//     }
//     if( index == 0) {
//         return 0;
//     }
//     if (index == 1) {
//         return 1;
//     }
//     return ft_fibonacci(index -1) + ft_fibonacci(index -2);
// }


// int ft_sqrt(int nb) {
//     int i =0;
//     while(i < nb) {
//         if( i* i == nb) {
//             return i;
//         }
//         i++;
//     }
//     return 0;
// }


// int ft_is_prime(int nb) {
//     int j = nb-1;
//     if(nb <1) {
//         return 0;
//     }
//     if(nb % nb == 0 ) {
//         while ( j > 1) {
//             if(nb % j == 0) {
//                 return 0;
//             }
//             j--;
//         }
//         return 1;
//     }
// }


// int ft_find_next_prime(int nb) {
//     int j = nb - 1;
//     if(nb < 2) {
//         return 2;
//     }
//     if ( nb %nb == 0) {
//         while ( j > 1) {
//             if( nb % j == 0) {
//                 nb = ft_find_next_prime(nb+1);
//             }
//             j--;
//         }
//         return nb;
//     }
// }

