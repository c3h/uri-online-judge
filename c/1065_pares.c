#include <stdio.h>
 
int main() {
    int num, i, c = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &num);
        if(num % 2 == 0){
            c++;
        }
    }
    printf("%d valores pares\n", c);
    return 0;
}