#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node{
	char name[50];
	int ngay,thang,nam;
	float mt,ml,mh;
	struct node *next;
};
void nhap(node *&start,int n){
	node *p;
	for(int i=0;i<n;i++){
		if(start==NULL){
			start =(node*)malloc(sizeof(node));
			p=start;
		}
		else{
			p=start;
			while(p->next!=NULL) p=p->next;
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
			
		}
		printf("nhap du lieu cho sinh vien thu %d:",i+1);
		fflush(stdin);
		printf("\nho va ten:");gets(p->name);
		printf("\nngay thang nam sinh:");scanf("%d %d %d",&(p->ngay),&(p->thang),&(p->nam));
		printf("\ndiem toan,diem ly,diem hoa:");scanf("%f %f %f",&(p->mt),&(p->ml),&(p->mh));
		p->next=NULL;
	}
	
}
void xuat(node *&start){
	node *p=start; int count=1;
	if(start==NULL) return;
	while(p!=NULL){
		printf("\nthong tin sinh vien thu %d",count);
		printf("\nho va ten:%s",p->name);
		printf("\nngay thang nam sinh:%d/%d/%d",p->ngay,p->thang,p->nam);
		printf("\ndiem toan:%f\tdiem ly:%f\tdiem hoa:%f\n",p->mt,p->ml,p->mh);
		p=p->next;
		count++;
	}
}
void add(node *&start){
	node *p; 
	p=start;
			while(p->next!=NULL) p=p->next;
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
	printf("them du lieu cho sinh vien moi:\n");
		fflush(stdin);
		printf("\nho va ten:");gets(p->name);
		printf("\nngay thang nam sinh:");scanf("%d %d %d",&(p->ngay),&(p->thang),&(p->nam));
		printf("\ndiem toan,diem ly,diem hoa:");scanf("%f %f %f",&(p->mt),&(p->ml),&(p->mh));
	p->next=start;
	start=p;
	printf("them sinh vien moi thanh cong!");
	p->next=NULL;

}
void dem(node *&start){
	int nhapnam,c=0;
		node *p; 
		printf("ban muon dem so luong cua sinh vien nam nao?");
		scanf("%d",&nhapnam);
		
		p=start;
		while(p!=NULL){
			if(p->nam==nhapnam) 
			c++;
			p=p->next;
		}
		printf("co tong %d so sinh vien sinh nam %d\n",c,nhapnam);
}
void checkname(node *&start){
	char nhapten[50];
		node *p; 
		printf("nhap ten sinh vien muon tim?");
		fflush(stdin);
		gets(nhapten);
		p=start;
		while(p!=NULL){
			if(strcmp(p->name,nhapten)==0){
			printf("co ten %s trong danh sach!",nhapten);
			break;
			}
			p=p->next;
		}
}
main(){
	int n;
	printf("nhap so luong sinh vien:");
	scanf("%d",&n);
	node *start=NULL;
	printf("câu a:nhap n sinh vien\n");nhap(start,n);
	printf("\ncâu b:in ra n sinh vien");xuat(start);
	printf("\ncâu c:them mot sinh vien\n");add(start);
	printf("\n\ncâu d:dem so luong sinh vien cua mot nam\n");dem(start);
	printf("\n\ncâu e:tim sinh vien bang ten\n");checkname(start);
	

}
