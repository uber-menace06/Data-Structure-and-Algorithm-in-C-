#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* next;
};

void traverse(struct node* head){
	struct node* ptr=head;
	while( ptr->next!= head){
		printf("Element %d \n", ptr->data);
		ptr= ptr->next;
	}
	printf("Element %d\n", ptr->data);
}

int insertioninfront(struct node* head, int data){
	struct node *ptr= (struct node*)malloc (sizeof(struct node));
	struct node *p= head->next;
	ptr->data=data;
	while(p->next!=head){
		p=p->next;
	}
	p->next= ptr;
	ptr->next= head;
	head= ptr;
	return (head);
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
	fourth-> next= head;
	printf("before insertion \n");
	traverse(head);
	
	printf("at first insertion \n");
	head = insertioninfront(head, 56);
	traverse (head);
	return 0;
}
