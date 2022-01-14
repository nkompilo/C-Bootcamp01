#include <stdio.h>
#include <string.h>

char my_strlen(char* a){
    int len = 0;
     for (len = 0;a[len]; len++);
     return len;
}

//  int main(){
//     char my_strlen();
//     return 0;
// }