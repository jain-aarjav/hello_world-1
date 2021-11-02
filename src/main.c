#include<stdio.h>
#include <stdio.h>
#include "../include/myfile.h"

int main(){
   char s1[50] = "Hello world " ;
   char s2[] = " in the main ";
   sgs_clib_strcat(s1 ,s2);


   printf("%s" , s1);


}