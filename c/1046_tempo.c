#include <stdio.h>
 
int main() {
 
    int hi, hf, hj;
    scanf("%d %d", &hi, &hf);
    
    if(hi == 0 && hf == 0){
    	hj = 24;
    }
    else {
    	if(hi >= hf){
    		hj = (24 - hi) + hf;
    	}
    	else{
    		hj = hf - hi;
    	}
    }
 	
 	printf("O JOGO DUROU %d HORA(S)\n", hj);
 	
    return 0;
}