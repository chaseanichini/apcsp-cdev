#include <stdio.h>
#include <string.h>

int i = 0;

char str1[105];
char string[5];
char str2[105] = "abcdefghijklmnopqrstuvwxyz";
char str3[209];

char* str1Ptr = str1;

int main()
{
   for (i = 97; i < 123; i++){
     if (i == 97){
     sprintf(str1, "%c", i);
     }
     else{
     sprintf(string, "%c", i);
     strcat(str1, string);
     }
   }
if (strcmp(str1, str2) == 0)
   printf("The strings are the same\n");
else
   printf("The strings are not the same\n");

for (i = 0; i < 26; i++){
   str1[i] -= 32;
}


if (strcmp(str1, str2) == 0)
   printf("The strings are the same\n");
else
   printf("The strings are not the same\n");

strcpy(str3, str1);
strcat(str3, str2);

printf("String 1 is: %s\n", str1);
printf("String 2 is: %s\n", str2);
printf("String 3 is: %s\n", str3);

}
