#include <stdio.h>

int main(void) {
  int i;		  // Declare: Integer for index and loop
  int scores[5];  // Declare: Integer 5Elements for score of students

  // Initialize
  scores[0] = 10;
  scores[1] = 20;
  scores[2] = 30;
  scores[3] = 40;
  scores[4] = 50;

  for (i=0; i < 5; i++)
	printf("scores[%d] = %d\n", i, scores[i]);

  return 0;
}

/* Debug Console
scores[0] = 10
scores[1] = 20
scores[2] = 30
scores[3] = 40
scores[4] = 50
*/