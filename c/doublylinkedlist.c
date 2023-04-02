#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* next;
	struct node* prev;
};

void traverse(struct node* head){

	while( head->next!= NULL){
		printf("Element %d \n", head->data);
		head= head->next;
	}
	printf("Element %d \n", head->data);
	printf("\n");
	while( head!= NULL){
		printf("Element %d \n", head->data);
		head= head->prev;
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
    head->prev= NULL;
	
	second->data =17;
	second-> next= third;
	second->prev=head;
	
	third->data =78;
	third-> next= fourth;
	third->prev=second;
	
	fourth->data =700;
	fourth-> next= NULL;
	fourth->prev=third;
	
	traverse(head);

	return 0;
}
