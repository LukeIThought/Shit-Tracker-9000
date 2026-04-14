/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char health[99];
  int shits;
  printf("This is a tracker to measure how many shits you've taken and your assessed health from this info each day.\n");
  printf("Please give me the number of times youve shat today: ");
  scanf("%d", &shits);
  /* The whole shebang */
  if (shits < 0) {
    printf("stop lying brochacho\n");
    char health[] = "Lied about shits.";
  }
  else if (shits > 0 && shits < 3) {
    printf("You are in regular health.\n");
    char health[] = "Regular health.";
  }
  else if (shits > 2 && shits < 6) {
    printf("You should monitor your health, or you may have eaten something bad.\n");
    char health[] = "Should monitor / Eaten something bad.";
  }
  else if (shits > 5 && shits < 12) {
    printf("Seek medical attention.\n");
    char health[] = "Should seek medical attention.";
  }
  else if (shits > 11) {
    printf("are you even still alive?\n");
    char health[] = "Is probably not still living.";
  }
  else {
    printf("INVALID RESPONSE.\n");
    char health[] = "USER HAS SUBMITTED AN INVALID RESPONSE.";
  }
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  printf("%d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
  printf("User taken ");
  printf("%d", shits);
  printf(" shits today, and their health is '");
  printf("%s", health);
  printf("'\n");
  /* Log file */
  FILE* fptr;
  fptr = fopen("st9k.log", "a");
  if (fptr != NULL) {
    fprintf(fptr, "%d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    fprintf(fptr, "User taken ");
    fprintf(fptr, "%d", shits);
    fprintf(fptr, " shits today, and their health is '");
    fprintf(fptr, "%s", health);
    fprintf(fptr, "'\n");
    fclose(fptr);
    fptr = NULL;
  }
  printf("Written changes to log file in your working directory at st9k.log!");
  return 0;
}
