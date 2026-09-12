#include <unistd.h>


// int main (int argc , char **argv) {
//     int i = 0;
//     while(argv[0][i] != '\0') {
//         write(1,&argv[0][i],1);
//         i++;
//     }
//     write(1,"\n",1);
// }


// int main(int argc , char **argv) {
//     int i =1;
//     int j;
//     if (argc <2) {
//         return 0;
//     }
//     while (i < argc ) {
//         j =0;
//         while(argv[i][j] != '\0') {
//             write(1,&argv[i][j],1);
//             j++;
//         }
//         write(1, "\n",1);
//         i++;
//     }
// }


// int main(int argc, char **argv) {
//     int i = argc-1;
//     int j ;
//     if (argc <2) {
//         return 0;
//     }
//     while(i> 0) {
//         j = 0;
//         while(argv[i][j] != '\0') {
//             write(1,&argv[i][j],1);
//             j++;
//         }
//         write(1,"\n",1);
//         i--;
//     }
// }


int ft_check(char *str1, char *str2) {
    while ( *str1 && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
void ft_print_param(int argc , char **argv) {
    int i = 1;
    int j ;
    while(i< argc) {
        j = 0;
        while(argv[i][j] != '\0') {
            write(1,&argv[i][j],1);
            j++;
        }
        write(1,"\n",1);
        i++;
    }
}
int main(int argc, char **argv) {
    int i = 1;
    int j ;
    char *temp;
    if (argc<2) {
        return 0;
    }
    while ( i < argc) {
        j = i+1;
        while(j<argc) {
            if ( ft_check(argv[i], argv[j]) > 0) {
                temp =argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
            j++;
        }
        i++;
    }
    ft_print_param(argc , argv);
}