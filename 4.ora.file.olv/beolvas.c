#include <stdio.h>

int main(){
	int lista[300], i;
	FILE  *be;
	
	be = fopen("szamok.csv", "r");
	for(i=0;i<300;i++){
		fscanf(be, "%d\n", &lista[i]);
	}
	fclose(be);
	
	for(i=0;i<300;i++){
		if(lista[i]%10==0){
			printf("%d\n", lista[i]);
		}
	}
	return 0;
}
