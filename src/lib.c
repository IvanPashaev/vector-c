// Author: IvanPashaev(GitHub) | 20266

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char **strings_array;
  size_t size;
  size_t capacity;

} string_vector;

string_vector new_string_vector() {
  string_vector returned_string_vector;
  returned_string_vector.capacity = 2; // standart capacity
  returned_string_vector.size = 0;     // counter of strings
  returned_string_vector.strings_array =
      malloc(returned_string_vector.capacity *
             sizeof(char *)); // allocate memory for strings_array

  if (returned_string_vector.strings_array == NULL) {

    returned_string_vector.capacity = 0;
    return returned_string_vector;
  }

  return returned_string_vector;
}

void string_vector_push(string_vector *v, const char *s) {
  char *s_for_vector = malloc(strlen(s) + 1);
  strcpy(s_for_vector, s);

  if (v->size == v->capacity) {
    // smth
  }
}
