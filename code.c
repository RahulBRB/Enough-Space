#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d", &t);
	
	int n,x,y;
	while(t--){
	    scanf("%d%d%d", &n,&x,&y);
	    // x=1, y=2
        if(n>=1*x+2*y){
            printf("YES \n");
        }
        else 
        {
            printf("NO \n");
        }

	}
	return 0;
}
