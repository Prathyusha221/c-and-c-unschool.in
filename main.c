#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    char str1[15];
   char str2[15];
   int ret,len1,len2,b=2;
   float a=2.5;
   strcpy(str1, "AbcDef");
   strcpy(str2, "aBCdEF");

   len1=strlen(str1);
   len2=strlen(str2);
   printf("lenth of str1 is %d and of str2 is %d\n", len1, len2);

   ret = strcmp(str1, str2);

   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }

   printf("on reversing str1 becomes %s\n", strrev(str1));

   printf("on converting characters to upper case, str2 becomes: %s\n", strupr(str2));

   printf("on converting characters to lower case, str1 becomes: %s\n", strlwr(str1));

   printf("%f %f %f %f\n", pow(a,b), sqrt(a), ceil(a), floor(a));



   return(0);
}
