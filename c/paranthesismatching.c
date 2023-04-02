#include<stdio.h>
#include<stdlib.h>
 
struct stack{
    int size ;
    int top;
    char * arr;
};
 
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
}
 
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int paranthesismatch(char * exp){
	struct stack *sp;
	sp->size=100;
	sp->top=-1;
	sp->arr= (char*)malloc (sp->size*sizeof(char));
	int i;
	for(i=0;exp[i]!='\0';i++){
		if(exp[i]=='('){
			push(sp,'(');
		}
		else if(exp[i]== ')'){
			if(isEmpty(sp)){
				return 0;
			}
			pop(sp);
		}
	}
	if(isEmpty(sp)){
		return 1;
	}
	else{
		return 0;
	}
}

 
int main(){
	char *exp= "(6-6)*((8)";
	char *exp1= "(6-6)*((8))";
    if(paranthesismatch(exp)){
    	printf("balanced\n");
	}else{
		printf("not balanced\n");
	}
	if(paranthesismatch(exp1)){
    	printf("balanced\n");
	}else{
		printf("not balanced\n");
	}
    return 0;
}

