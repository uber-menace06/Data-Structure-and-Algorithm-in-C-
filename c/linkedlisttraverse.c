#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* next;
};

void traverse(struct node* headtr){
	while( headtr!= NULL){
		headrintf("Element %d \n", headtr->data);
		headtr= headtr->next;
	}
}
void search(struct node* headtr,int find){
	int i=0;
	while( headtr!= NULL){
		i++;
		if(headtr->data==find){
			headrintf("Element %d  found at %d", headtr->data, i );
		}
	
		headtr= headtr->next;
	}
}
int main(){
	struct node* head;
	struct node* second;
	struct node* third;
	struct node* fourth;

	//allocating memory for nodes in the linkedlist
	head= (struct node*) malloc (sizeof(struct node));
	second= (struct node*) malloc (sizeof(struct node));
	third= (struct node*) malloc (sizeof(struct node));
	fourth= (struct node*) malloc (sizeof(struct node));
	
	head->data =7;
    head-> next= second;
	
	second->data =17;
	second-> next= third;
	
	third->data =78;
	third-> next= fourth;
	
	fourth->data =700;
	fourth-> next= NULL;
	
	traverse(head);
	search(head,700);
	return 0;
}
