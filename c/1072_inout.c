#include <stdio.h>
 
int main() {
     int n, x, i, c = 0, j = 0;
     scanf("%d", &n);
     for(i = 0; i < n; i++){
         scanf("%d", &x);
         if(x >= 10 && x <= 20){
             c++;
         }
         else{
             j++;
         }
     }
     printf("%d in\n", c);
     printf("%d out\n", j);
 
    return 0;
}