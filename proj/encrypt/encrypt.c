//
// encrypt.c
//

#include <string.h>
#include <stdio.h>
#include "encrypt.h"


char CHARS[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int CHARS_LEN = 62;


char shiftChar(char c, int shift, int direction)
{
  // implement the character shift here:
  //  given a char c shift it either forwards (direction == 1) or backwards (direction == 0)
  //  use the CHARS array above
  //  return the newly shifted char
  //
  // eg.
  //   shiftChar('c', 3, 1) : 'f'
  //   shiftChar('S', 2, 0) : 'P'
  //   shiftChar('b', 3, 0) : '8'
  int i = 0;
  shift = shift % 62;
  if(c == 0 || c == 32) {
    return(c);
  }
  if(c >= 'a' && c <= 'z') {
    i = c - 'a';
  }
  if (c >= 'A' && c <= 'Z') {
    i = c - 'A' + 26;
  }
  if (c >= '0' && c <= '9') {
    i = c - '0' + 52;
  }
  if (direction == 1) {
    i = i + shift;
  }
  if (direction == 0) {
    i = i - shift;
  }
  if (i > 61) {
    i = i - 61 - 1;
  }
  if (i < 0) {
    i = i + 61 + 1;
  }
  c = CHARS[i];
  return(c);
}


void encrypt(char str[], int shifts[], int shiftslen)
{
  for (int i = 0; i < strlen(str); i++) 
  {
    char c = str[i];

    str[i] = shiftChar(c, shifts[i%shiftslen], 1);
  }
}


void decrypt(char str[], int shifts[], int shiftslen)
{
  for (int i = 0; i < strlen(str); i++) 
  {
    char c = str[i];

    str[i] = shiftChar(c, shifts[i%shiftslen], 0);
  }
}


void caesarEncrypt(char str[], int shift)
{
  int shifts[] = { shift };
  encrypt(str, shifts, 1);
}


void caesarDecrypt(char str[], int shift)
{
  int shifts[] = { shift };
  decrypt(str, shifts, 1);
}


