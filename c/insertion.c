#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};

void print(struct node *ptr){
	while(ptr != NULL ){
		printf("element %d\n", ptr->data);
		ptr=ptr->next;
	}
}

int insertioninfirst(struct node *head, int data){
	
	struct node* ptr= (struct node*) malloc (sizeof(struct node));
	ptr->data= data;
	
	ptr->next= head;
	
	return ptr;
}

int insertioninmiddle(struct node *head, int data, int index){
	
	struct node* ptr= (struct node*) malloc (sizeof(struct node));
	struct  node* p=head;
	int i=0;
	
	while(i!=index-1){
		p=p->next;
		i++;
	}
	
	ptr->data= data;
	ptr->next= p->next;
	p->next= ptr;
	return head;	
}

int insertioninend(struct node* head, int data){
	
	struct node* ptr= (struct node*) malloc (sizeof(struct node));
	ptr->data=data;
	struct  node* p=head;
	
	while(p->next!= NULL){
		p=p->next;
	}
	p->next= ptr;
	
	ptr->next= NULL;
	return head;
}

int insertionafternode(struct node* head, struct node* q, int data){
	
	struct node* ptr= (struct node*) malloc (sizeof(struct node));
	ptr->data=data;
	
	ptr->next= q->next;
	q->next=ptr;
	return head;
}
int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	
	head= (struct node*) malloc(sizeof(struct node));
	second= (struct node*) malloc(sizeof(struct node));
	third= (struct node*) malloc(sizeof(struct node));
	
	head->data= 23;
	head->next= second;
	
	second ->data= 34;
	second -> next= third;
	
	third -> data= 45;
	third->next= NULL;
	
	printf("before insertion \n");
	print(head);
	
	printf("at first insertion \n");
	head = insertioninfirst(head, 56);
	print (head);
	
	printf("at middle insertion \n");
	head = insertioninmiddle(head, 67, 2);
	print (head);
	
	printf("at end insertion \n");
	head = insertioninend(head, 6);
	print (head);
	
	printf("after node insertion \n");
	head = insertionafternode(head, third, 600);
	print (head);
	return 0;
}
