#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "htable.h"
#include "list.h"
#include "parse_words.h"

/////////  Bonus exercise //////////
//This function parses NULL-terminated byte array "buf" 
//to extract words and stores them in the given htable "ht"
//Words are separated from each other by a single newline chracter '\n'
//Return the number of words parsed/stored
//
//Hint: consider using the C library function strtok_r
unsigned int parse_n_store_words(char *buf, htable_t *ht)
{
  // char* token = strtok(buf, "\n");
  // while(token != NULL){
  //   htable_put(ht, token, 1, sum_accum);
  //   token = strtok(NULL, "\n");
  // }
  char* token;
  // char* rest = str;
  while ((token = strtok_r(buf, "\n", &buf)))
      htable_put(ht, token, 1, sum_accum);
  return ht->size;
}
