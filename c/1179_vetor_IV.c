#include <stdio.h>
 
int main() {
 
    int num, par[5], impar[5], i, c, ni, np;
    ni = 0;
    np = 0;
    for(c = 0; c < 15; c++){
        scanf("%d", &num);
        if(num % 2 == 0){
            par[np++] = num;
        }
        else{
        	impar[ni++] = num;
        }
        if (np == 5){
        	for(i = 0; i < 5; i++){
        		printf("par[%d] = %d\n", i, par[i]);
        	}
        	np = 0;
        }
        if (ni == 5){
        	for(i = 0; i < 5; i++){
        		printf("impar[%d] = %d\n", i, impar[i]);
        	}
        	ni = 0;
        }
    }
    
    for(i = 0; i < ni; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(i = 0; i < np; i++){
    	printf("par[%d] = %d\n", i, par[i]);
    }
    
    return 0;
}