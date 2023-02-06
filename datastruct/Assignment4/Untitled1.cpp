#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node*start=NULL;
struct node*display(struct node*);
	
int main(int argc,char *argv[]){
struct  node *p,*pre,*new_node1,*new_node2,*new_node3,*new_node4,*new_node5,*new_node6,*new_node7;
	// tao 3 node va tao lien ket don
	new_node1=(struct node*)malloc(sizeof(struct node));
	new_node1->data=5;
	// fist node
	start=new_node1;
	
	new_node2=(struct node*)malloc(sizeof(struct node));
	new_node2->data=5;
	
	new_node1->next=new_node2;
	
	new_node3=(struct node*)malloc(sizeof(struct node));
	new_node3->data=2;
	
	new_node2->next=new_node3;
	
	// end node
	new_node3->next=NULL;
	p=start;
	printf("Hàm mac dinh:\n");
	while(p!=NULL){
		printf("%d\t",p->data);
		p=p->next;
		
	}
	// chen vao dau
	new_node4=(struct node*)malloc(sizeof(struct node));
	new_node4->data=14;
	new_node4->next=start;
	start=new_node4;
	printf("\nsau khi them new_node4 vao dau:\n");
	p=start;
	while(p!=NULL){
	//	if(p->data==5)
		printf("%d\t",p->data);
		p=p->next;
		
	}
	//chen vao cuoi B1:duyet mang roi tao nn5 và gan dia chi bang null
	p=start;
	while(p->next!=NULL){
		p=p->next;
	}
			new_node5=(struct node*)malloc(sizeof(struct node));
			new_node5->data=7;
			new_node5->next=NULL;
			p->next=new_node5;
	
	printf("\nsau khi them new_node5 vao cuoi:\n");
	p=start;
	while(p!=NULL){
			printf("%d\t",p->data);
		p=p->next;
	}
	// them vao giua
	p=start;
	while(p->data!=9){
		pre=p;
		p=p->next;
	}
	new_node6=(struct node*)malloc(sizeof(struct node));
			new_node6->data=8;
			//new_node6->next=NULL;
			pre->next=new_node6;
			new_node6->next=p;
	p=start;
		printf("\nsau khi them new_node6 vao giua:\n");
	while(p!=NULL){
			printf("%d\t",p->data);
		p=p->next;
	}
	
	// them vao sau so 9
		p=start;
	while(p->data!=9){
		p=p->next;
	}
	new_node7=(struct node*)malloc(sizeof(struct node));
			new_node7->data=15;
		//	new_node7->next=NULL;
			new_node7->next=p->next;
			p->next=new_node7;
	p=start;
	printf("\nsau khi them new_node7 vao sau gia tri 9:\n");
	while(p!=NULL){
			printf("%d\t",p->data);
		p=p->next;
	}
//getch();
return 0;

}




