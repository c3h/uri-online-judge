#include <stdio.h>

int main (){
	int nv, c, s, d, bi = 0, ai = 0, t, ci;
	char a[50], b[50];
	scanf("%d", &nv);
	for(c = 0; c < nv; c++){
		bi = 0;
		ai = 0;
		s = 0;
		d = 0;
		scanf("%s %s", &a, &b);
		while(a[++ai] != '\0');
		while(b[++bi] != '\0');
		t = ai + bi;
		for(ci = 0; ci < t; ci++){
			if(a[s] != '\0'){
				printf("%c", a[s++]);
			}
			if(b[d] != '\0'){
				printf("%c", b[d++]);
			}
		}
		printf("\n");
	}
	
	return 0;
}