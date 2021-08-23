#include <stdio.h>
#include <string.h>

int main(){
	int i,numRest,found=1;
	scanf("%d",&numRest);
	
	for(i=0;i<numRest;i++){
		int j,numItems;
		int p=0,ps=0,b=0;
		char restaurant[102];
		char item[102];
		
		scanf("%d ",&numItems);
		fgets(restaurant, 102, stdin);
		
		for(j=0;j<numItems;j++){
			fgets(item, 102, stdin);
			item[strlen(item)-1]= '\0';
			if(!strcmp(item,"pea soup")){
				ps=1;
			}
			if(!strcmp(item,"pancakes")){
				p=1;
			}
				
		}
		
		
		if(ps && p && found){
			b=1;
			found = 0;
			printf("%s",restaurant);
		}
		if(!b && i==numRest-1 && found){
			printf("Anywhere is fine I guess");
		}
	}
	
	
	return 0;
}