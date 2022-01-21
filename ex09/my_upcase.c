#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* my_upcase(char* ch){
   for(int i = 0; ch[i] != '\0'; i++){
       if(ch[i] >= 'a' && ch[i] <= 'z'){
          ch[i] -= 32;}   
   }return ch;
} 



// int main() {
//   char *my_str = strdup("AbcE Fgef1");
  
//   printf("RANDOM CASE -> %s\n", my_str);
//   printf("UPCASE      -> %s\n", my_upcase(my_str));
//   return 0;
// }