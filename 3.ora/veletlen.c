#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 1-20 közötti véletlen szám kitalálása
 
int main() {
	  int tipp, szam;
	  
	  srand((int)time(NULL));
	  szam = rand();
	  szam = szam%20;
	  while(1){
		printf("Kérek egy tippet: ");
		scanf("%d", &tipp);
		if(tipp == szam) {
				printf("Eltaláltad!!");
				break;
			
			} else if(tipp<szam) {
				printf("Túl kevés! \n");
			} else {
				printf("Túl nagy! \n");
			}
	  }
	 return 0;
	}	
