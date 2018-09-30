#include <stdio.h>

int main () {
  int N, i, num;
  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    scanf("%d", &num);
    if (num == 0) {
      printf("NULL\n");
    }
    else{
    	if (num % 2 == 0) {
	      if (num > 0) {
	        printf("EVEN POSITIVE\n");
	      }
	      else {
	        printf("EVEN NEGATIVE\n");
	      }
	    }
	    if (num % 2 != 0) {
	      if (num > 0) {
	        printf("ODD POSITIVE\n");
	      }
	      else {
	        printf("ODD NEGATIVE\n");
	      }
	    }
    }
  }

  return 0;
}
