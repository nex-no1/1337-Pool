#include <stdlib.h>
#include <stdio.h>
// char *ft_strdup(char *src) {
//     int i =0;
//     char *dest;
//     if (src == NULL) {
//         return NULL;
//     }
//     while(src[i] != '\0') {
//         i++;
//     }
//     dest = (char *)malloc(sizeof(char) * (i + 1));
//     i= 0;
//     while(src[i] != '\0') {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
//     return (dest);
// }
// int *ft_range(int min, int max) {
//     long size;
//     int j =0;
//     int i= min;
//     int *array;
//     if(min >= max) {
//         return NULL;
//     }
//     size = (long)max - min;
//     array= (int *)malloc(sizeof(int) * size);
//     if(array == NULL) {
//         return NULL;
//     }
//     while ( i < max) {
//         array[j] = i;
//         i++;
//         j++;
//     }
//     return(array);

// }
// int ft_ultimate_range(int **range, int min , int max) {
//     long size;
//     int i =min;
//     int j =0;
//     if (range == NULL) {
//         return -1;
//     }
//     if(min>= max) {
//         *range = NULL;
//         return 0;
//     }
//     size = (long)max - min;
//     *range = (int *)malloc(sizeof(int) * size);
//     if(*range == NULL) {
//         return -1;
//     }
//     while ( i < max) {
//         (*range)[j] = i;
//         i++;
//         j++;
//     }
//     return (size);
// }
int ftsize(char **str , int size) {
    int i=0;
    int j=0;
    int len=0;
    while(i< size) {
        j=0;
        while(str[i][j] != '\0') {
            len++;
            j++;
        }
        i++;
    }
    return len;
}
int ftsize2(char *str) {
    int i=0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}
char *ft_strjoin(int size , char **strs, char *sep) {
    char *string;
    int i=0;
    int j;
    int len = ftsize(strs, size);
    if (size == 0) {
    string = (char *)malloc(sizeof(char) * 1);
    *string = '\0';
        return string;
    }
    len = len + (size -1) * ftsize2(sep);
    string = (char *)malloc(sizeof(char) * (len + 1));
    if(string == NULL) {
        return NULL;
    }
    while(i< size) {
        string[i] = *strs[i];
        if (i == size -1) {
            j=0;
            while(sep[j] != '\0') {
                string[i] = sep[j];
                j++;
            }
        }
        i++;
    }
    return string;
}
int main (void) {
    char *str[30] = {"helllo" , " world" , "nigga"};
    char *sep = "--";
    printf("%s" , ft_strjoin(3, str , sep));
}