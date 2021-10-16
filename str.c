#include <stdio.h>
#include <assert.h>
#include "string.h"


// Return the length of the string pointed to by "s".
//
// Note: C standard library function strlen accomplishes
// exactly the same functionality as string_len. In this exercise,
// please do not use strlen. In subsequent exercises (list.c, htable.c), 
// it is recommended that you use strlen instead of string_len
int string_len(char *s)
{
  int i = 0;
  while(s[i] != '\0')
    i++;
  return i;
}

// Compare strings "s1" and "s2". It returns less than, equal to or great than zero 
// if "s1" is found to be less than, match, or larger than "s2" alphabetically.
// For example, string_cmp("aa", "aaa") should return a negative number
// and string_cmp("aa", "a0") should return a positive number
// Note that we use the ASCII values of characters as basis for comparison.
// As the ascii value of 'a' is greater than the ascii value of '0', 
// "aa" is considered to be greater than "a0".
//
// Note: C standard library function strcmp accomplishes
// exactly the same functionality as string_cmp. In this exercise,
// please do not use strcmp. In subsequent exercises (list.c, htable.c), 
// it is recommended that you use strcmp instead of string_cmp.
int string_cmp(char *s1, char *s2)
{
  int i = 0;
  int comp = 0;
  while(s1[i] != '\0' && s2[i] != '\0'){
    comp  = s1[i] - s2[i];
    if(comp != 0)
      return comp;
    i++;
  }
  return string_len(s1) - string_len(s2);
}

// Convert integer x into hex format and store the resulting hex string to "str",
// e.g., if x=16, then str should be "00000010".
// If x=26, then str should be "0000001a";
// The resulting hex string should always have exactly 8 hex characters 
// followed by the null character.
// We assume the caller has allocated an array of at least 9 characters for "str", 
// Note: please do not use formatted output, such as sprintf
void int_to_hex(unsigned int x, char *str)
{
  int i = 7;
  int tmp = 0;
  while(x != 0){
    tmp = x % 16;
    if(tmp < 10)
      str[i] = tmp + '0';
    else
      str[i] = tmp - 10 + 'a';
    i--;
    x = x/16;
  }
  while(i >= 0){
    str[i] = '0';
    i--;
  }
}

