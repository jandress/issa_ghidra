#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
   char password[60];
   int validate;

   while (1){
      printf("\nEnter your password: ");
      scanf("%s",password);
      validate = strcmp(password,"issa<3");
      if (validate == 0){
         printf("Correct\n");
         return 0;
      }
      else{
         printf("Incorrect\n");
      }
   }
   return 0;
}
