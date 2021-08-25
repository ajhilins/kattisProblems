#include <stdio.h>
#include <stdlib.h>

struct stack{
	int maxsize;
	int top;
	int *items;
};

struct stack* newStack(int capacity){
	struct stack *pt = (struct stack*)malloc(sizeof(struct stack));
	
	pt->maxsize=capacity;
	pt->top=-1;
	pt->items = (int*)malloc(sizeof(int)*capacity);
	
	return pt;
}

int size(struct stack *pt){
	return pt->top+1;
}

int isEmpty(struct stack *pt){
	return size(pt)==0;
}

void push(struct stack *pt, int item){
	if(size(pt)==pt->maxsize){
		exit(EXIT_FAILURE);
	}
	
	pt->items[++pt->top]=item;
}

int peek(struct stack *pt){
	if(!isEmpty(pt)){
		return pt->items[pt->top];
	}else{
		exit(EXIT_FAILURE);
	}
}

int pop(struct stack *pt){
	if(isEmpty(pt)){
		exit(EXIT_FAILURE);
	}
	
	return pt->items[pt->top--];
}

int main(){
	int i,numCards,card;
	
	scanf("%d",&numCards);
	
	struct stack *cards = newStack(numCards);

	for(i=0; i<numCards; i++){
		scanf("%d ", &card);
		if(!isEmpty(cards) && (card + peek(cards))%2==0){
			pop(cards);
		}else{
			push(cards, card);
		}
	}
	
	printf("%d",size(cards));
	
}