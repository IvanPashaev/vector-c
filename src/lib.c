//Author: IvanPashaev(GitHub) | 2026

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct {
  char **strings_array;
  int size;
  int capacity;

} string_vector;

string_vector new_string_vector() {
  string_vector returned_string_vector;
  returned_string_vector.capacity = 2; // standart capacity
  returned_string_vector.size = 0; //counter of strings
  returned_string_vector.strings_array = malloc(returned_string_vector.capacity * sizeof(char *)); //allocate memory for strings_array

  if (returned_string_vector.strings_array == NULL) {

    returned_string_vector.capacity = 0;
    return returned_string_vector;
  }

  return returned_string_vector;
}
