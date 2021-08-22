#include <stdio.h>

int main(){
	
	int unsortedList[3];
	char sortingOrder[3];
	int i;
	
	//read in numbers
	for(i=0;i<3;i++){
		scanf("%d", &unsortedList[i]);
	}
	
	//sorting numbers low to high
	int temp;
	if(unsortedList[0]>unsortedList[1]){
		temp = unsortedList[0];
		unsortedList[0] = unsortedList[1];
		unsortedList[1] = temp;
	}
	if(unsortedList[1]>unsortedList[2]){
		temp = unsortedList[1];
		unsortedList[1] = unsortedList[2];
		unsortedList[2] = temp;
	}
	if(unsortedList[0]>unsortedList[1]){
		temp = unsortedList[0];
		unsortedList[0] = unsortedList[1];
		unsortedList[1] = temp;
	}
	
	for(i=0;i<3;i++){
		scanf(" %c", &sortingOrder[i]);
	}
	
	for(i=0;i<3;i++){
		printf("%d ", unsortedList[sortingOrder[i]-'A']);
	}

	
	return 0;
	
}