#include <stdio.h>
#include <string.h>

int main(){

	//vars
	int numLines;
	int i;
	
	
	//read number of lines
	scanf("%d", &numLines);
	
	//array for estimates
	int estimates[numLines];
	
	
	//interpret lines
	for(i=0;i<numLines;i++){
		char temp[101];
		scanf("%s",temp);
		estimates[i] = strlen(temp);
	}
	
	for(i=0;i<numLines;i++){
		printf("%llu\n",estimates[i]);
	}
	
	return 0;
}