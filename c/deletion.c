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

int deletioninfirst(struct node *head){
	
	struct node* ptr= head;
	head=head->next;
	
	free(ptr);
	
	return head;
}

int deletioninmiddle(struct node *head, int index){
	
	struct node* p= head;
	struct  node* q=head->next;
	int i=0;
	
	for(i=0;i<index-1;i++) {
		p=p->next;
		q=q->next;
    }
    p->next=q->next;
    free(q);
	return head;	
}

int deletioninend(struct node* head){
	
	struct node* p=head;
	struct node* q= head->next;
	
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	
	p->next=NULL;
	free(q);
	return head;
}

int deletionofagivenvalue(struct node* head, int element){
	
	struct node* p=head;
	struct node* q= head->next;
	
	while(q->next!=NULL && q->data!= element){
		p=p->next;
		q=q->next;
	}
	
	if(q->data==element){
	p->next=q->next;
	free(q);
	}
	return head;
}
int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	struct node *fifth;
	
	head= (struct node*) malloc(sizeof(struct node));
	second= (struct node*) malloc(sizeof(struct node));
	third= (struct node*) malloc(sizeof(struct node));
	fourth= (struct node*) malloc(sizeof(struct node));
	fifth= (struct node*) malloc(sizeof(struct node));
	
	head->data= 23;
	head->next= second;
	
	second ->data= 34;
	second -> next= third;
	
	third -> data= 45;
	third->  next=fourth;
	
	fourth->data= 89;
	fourth->next=fifth;
	
	fifth->data=54;
	fifth->next=NULL;
	
	printf("before insertion \n");
	print(head);
	
	printf("at first deletion \n");
	head = deletioninfirst(head);
	print (head);
	
	printf("at middle deletion \n");
	head = deletioninmiddle(head, 2);
	print (head);
	
	printf("at end deletion \n");
	head = deletioninend(head);
	print (head);
	
	printf("of a given value deletion \n");
	head = deletionofagivenvalue(head, 45);
	print (head);
	return 0;
}
