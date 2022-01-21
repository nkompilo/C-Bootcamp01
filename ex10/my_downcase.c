#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* my_downcase(char* ch){
   for(int i = 0; ch[i] != '\0'; i++){
       if(ch[i] >= 'A' && ch[i] <= 'Z'){
          ch[i] += 32;}  
   }return ch;
}



// int main() {
//   char *my_str = strdup("AbcE Fgef1");
  
//   printf("RANDOM CASE -> %s\n", my_str);
//   printf("DOWNCASE    -> %s\n", my_downcase(my_str));
//   return 0;
// }