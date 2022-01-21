#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char my_string_index(char* p1, char p2){
    int index = 0;
    // int length = strlen(p1);
    while (p1[index] != '\0'){
        if (p1[index] == p2){
            return index;}
        index ++;}
    return -1;
}

// int main(){
//    char my_string_index('hello' && 'l');
//     return 0;
// } 