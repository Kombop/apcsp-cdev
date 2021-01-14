#include <stdio.h>
#include <string.h>

int main()
{
  char str1[50];
  char str2[50] = "abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < 26; i++){
    str1[i] = i + 97;
  }
  printf("String 1: %s\n", str1);
  printf("String 2: %s\n", str2);
  if (strcmp(str1, str2) == 0){
    printf("Strings are the same\n");
  }
  else{
    printf("Strings are not the same\n");
  }
  for (int i = 0; i < 26; i++){
    str1[i] -= 32;
  }
  printf("New String 1: %s\n", str1);
  char str3[50];
  strcpy(str3, str1);
  strcat(str3, str2);
  printf("String 3: %s", str3);
  
  
}
