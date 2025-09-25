#include <stdio.h>
#include <string.h>

#define KEY "\\ch0nky.txt"

int activate() {
  FILE *file_ptr;
  file_ptr = fopen("/chonky.txt", "w");
  fprintf(file_ptr, "This is testing for fprintf...\n"); 
  fclose(file_ptr);
  return 0;
}

int deactivate() {
  const char * chonky = "/chonky.txt";
  remove(chonky);
  return 0;
}

void usage(char *argv_0) { printf("Usage: %s <activate|deactivate>", argv_0); }
int main(int argc, char *argv[]) {
  if (argc != 2) {
    usage(argv[0]);
    return 0;
  }
  if (strcmp(argv[1], "activate") == 0) {
    activate();
  } else if (strcmp(argv[1], "deactivate") == 0) {
    deactivate();
  } else {
    usage(argv[0]);
  }

  return 0;
}
