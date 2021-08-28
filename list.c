#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "list.h"

// In this series of exercises, you'll implement a simple linked list storing 
// a collection of key/value pairs sorted alphabetically by key strings.
// You should read the type definition of linked list node in list.h file

// list_init initializes a sorted (linked) list.
// A linked list is identified by its head pointer. 
// To initialize a list, this function sets its head pointer to NULL.
// This function takes as its argument "headdp", a double pointer that 
// points to the head pointer to be initialized.
void list_init(lnode_t **headdp)
{
  //TODO: your code here
}

// sum_accum is an accumulator function that adds "new_val" into the 
// current sum value pointed to by "existing_val".
// This function has already been implemented for you.
void sum_accum(int *existing_val, int new_val)
{
  (*existing_val) += new_val;
}

// Insert a key value pair into the linked list while maintaining sorted order. 
// Return true if the key does not already exists; false otherwise.
//
// If the key already exists, accumulate the new value into the existing value 
// using the given function pointer "accum".  The implementation of an example 
// accumulator function can be seen earlier (sum_accum)
//
//
// Notes: 1) you need to allocate space for a new linked list node, 
// but you do not need to allocate space to copy the entire key string; it's enough to 
// store the key string pointer in the linked list node.
// 2) since the new node may be inserted in the beginning of the list, 
// you may need to change the head pointer of the linked list.
// Therefore, this function takes as its arguments "headdp", a double pointer
// that points to the head pointer of the linked list, thereby allowing you to change 
// the head pointer.
//
// You may use strcmp from C library (instead of your own string_cmp in str.h).
bool list_insert_with_accum(lnode_t **headdp, char *key, int val, 
    void (*accum)(int *existing_val, int new_val))
{
  //TODO: Your code here
}

// Find if a given key string exists in the sorted linked list.
// Return the value associated with the key if key is found.
// Otherwise, return -1.
// This function takes as argument headp, a single pointer that points to 
// the first linked list node
// 
// You may use strcmp from C library (instead of your own string_cmp in str.h).
int list_find(lnode_t *headp, char *key)
{
  // TODO: Your code here
}

// Traverse the linked list starting from node pointed to by "headp" 
// and store all the encountered key-value tuples in the array "tuples".
// The capacity of the "tuples" array is "max", thus, the function should not 
// store more than "max" pointers in "tuples".
// Return value is the actual number of key-value tuples 
// written to "tuples".
int list_get_all_tuples(lnode_t *headp, kv_t *tuples, int max)
{
  // TODO: Your code here
}
