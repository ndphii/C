#include<stdio.h>
#include<conio.h>
#include<string.h>          //for strrev()
#include<stdlib.h>          // for malloc()
#include<stdbool.h>
#define SIZE 50
#define TRUE 1
#define FALSE 0

// TREE STRUCTURE //
typedef struct tree {
                        char info;                  // to account for operators as nodes
                        struct tree *left;
                        struct tree *right;    
                    }BTREE;
BTREE *root = NULL;

// STACK STRUCTURE //
typedef struct stack {
                        BTREE * info[SIZE];         // stack contains node's addresses
                        int top;   
                     }STACK;
STACK s;                     

void CreateExprTree(char *);
BTREE* maketree(char);
BTREE * getnode(void);
int isdigits(char);
void pushs(BTREE *);
void pretrav(BTREE *);
void intrav(BTREE *);
void postrav(BTREE *);
BTREE* pops(void);

// chuyen tu trung to sang hau to
struct node{
    char data;
    struct node* next;
};
 
//to check is the stack empty or not
bool is_empty(struct node* st){
    if(st==NULL){
        return true;
    }
    return false;
}
 
// Create a new node 
struct node* create_node(char x){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    return temp;
}
 
//enter a character in the front of the stack
void push(struct node** st,char x){
    struct node* temp=create_node(x); 
    temp->next=*st;
    *st=temp;
}
 
//pop the first element fom the stack
void pop(struct node** st){
    struct node* temp=*st;
    *st=temp->next;
}
//give the top element of the stack
char peek(struct node* st){
    return st->data;
}
 
//Return the precedence of the operator
int precedence(char ch){
    if(ch=='^')
        return 3;
    else if(ch=='/' || ch=='*')
        return 2;
    else if(ch=='+'|| ch=='-')
        return 1;
    else 
        return 0;
}
 
//Function to conver infix expression to postfix
void infix_to_postfix(char* str,char* new_str,int len){
    int j=0;
    struct node* st=NULL;
 
    for(int i=0;i<len;i++){
        if((str[i]>='0' && str[i]<='9')||(str[i]>='a' && str[i]<='z')){
            new_str[j++]=str[i];
 
        }
        else if(str[i]=='('){
            push(&st,str[i]);
        }
        else if(str[i]==')'){
            //pop the elements from the stack until the "(" comes
            while(!is_empty(st) && peek(st)!='('){
                new_str[j++]=peek(st);
                pop(&st);
            }
            pop(&st);
        }
        else{
         	  while(!is_empty(st) && precedence(peek(st))>=precedence(str[i])){
                new_str[j++]=peek(st);   
                pop(&st);
            }
            push(&st,str[i]);
        }
    }
    //if the stack is not empty
    while(!is_empty(st)){
        new_str[j++]=peek(st);
        pop(&st);
    }
    new_str[j]='\n';
}
 // ket thuc chuyen trung to san hau to

main(void)
{
          s.top = -1;          
        char postfix[SIZE];
          
         
        
          int len;
    printf("Enter the length : ");
    scanf("%d",&len);
    printf("Enter the expression : ");
    char str[len],new_str[len];
    scanf("%s",str);
    infix_to_postfix(str,postfix,len);
    printf("Postfix : ");
    printf("%s",postfix);

          
           printf("\n\nExpression Tree Implementation Using Postfix Expression\n");
          CreateExprTree(postfix);
          
          printf("\n\nEquivalent Expressions\n");
          printf("------------------------------------------------------\n\n");
                    
          printf("\n\nPrefix Expression:");
          pretrav(root);
          
          printf("\n\nInfix Expression:");
          intrav(root);
          
          printf("\n\nPostfix Expression:");
          postrav(root);
          
          getch();
}

void CreateExprTree(char *postfix)
{
          BTREE *p;
                         
          while(*postfix!='\0')
          {
                if(isdigits(*postfix))
                {
                              p = maketree(*postfix);
                              pushs(p);         
                }
                else                                // char is operator
                {
                              p = maketree(*postfix);                             
                              p->right = pops();        // first popped item right child                          
                              p->left = pops();
                              pushs(p);                                                    
                }                            
                
                postfix++;                                  
          }       
          
          root = pops();                // stack now contains address of root node omlu 
                                        // which is popped                                          
             
}

BTREE* maketree(char item)
{
     BTREE *p;  
     p = getnode();
     p->info = item;
     p->left = NULL;
     p->right = NULL;     
     return(p);
}

BTREE * getnode(void)
{
     BTREE *p; 
     p = (BTREE*)malloc(sizeof(BTREE));
     return(p);     
}

int isdigits(char temp)
{
	 if(temp >= '0' && temp <='9')
                return TRUE;
	 else
                return FALSE;    
}

void pushs(BTREE *item)
{        
     if(s.top==SIZE-1)
     {
                    printf("\n\nStack Overflow!");          
                    getch();
                    exit(1);
     }
     
     s.info[++s.top] = item; 
}   

BTREE* pops(void)
{
     if(s.top==-1)
     {
                    printf("\n\nStack Underflow!");
                    getch();
                    exit(1);                               
     }         
     
     return(s.info[s.top--]);
}

void pretrav(BTREE *p)
{
      if(p!=NULL)
      {
    	  printf(" %c, ",p->info);
    	  pretrav(p->left);
    	  pretrav(p->right);
      }
}

void intrav(BTREE *p)
{
      if(p!=NULL)
      {
          intrav(p->left);       
    	  printf(" %c, ",p->info);    	  
    	  intrav(p->right);
      }
}

void postrav(BTREE *p)
{
      if(p!=NULL)
      {    	  
    	  postrav(p->left);
    	  postrav(p->right);
    	  printf(" %c, ",p->info);
      }
}
