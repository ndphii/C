#include <stdio.h>
#include <stdlib.h>
 
typedef struct Node
{
    int data;
    Node* left;
    Node* right;
} node_t;
 
 
 
void Free( node_t* root )
{
    if ( root == NULL )
        return;
 
    Free( root->left );
    Free( root->right );
    free( root );
}
 
int LeftOf( const int value, const node_t* root )
{
    return value < root->data;
}
 
int RightOf( const int value, const node_t* root )
{
    return value > root->data;
}
 
node_t* Insert( node_t* root, const int value )
{
    if ( root == NULL )
    {
        node_t* node = (node_t*)malloc( sizeof( node_t ) );
        node->left = NULL;
        node->right = NULL;
        node->data = value;
        return node;
    }
    if ( LeftOf( value, root ) )
        root->left = Insert( root->left, value );
    else if ( RightOf( value, root ) )
        root->right = Insert( root->right, value );
    return root;
}
 
bool Search( const node_t* root, int value )
{
    if ( root == NULL )
        return false;
    if(root->data == value){
        return true;
    }else if ( LeftOf( value, root ) ){
        return Search( root->left, value );
    }else if( RightOf( value, root ) ){
        return Search( root->right, value );
    }
}
 
int LeftMostValue( const node_t* root )
{
    while ( root->left != NULL )
        root = root->left;
    return root->data;
}
int RightMostValue( const node_t* root )
{
    while ( root->right != NULL )
        root = root->right;
    return root->data;
}
 
node_t* Delete( node_t* root, int value )
{
    if ( root == NULL )
        return root;
    if ( LeftOf( value, root ) )
        root->left = Delete( root->left, value );
    else if ( RightOf( value, root ) )
        root->right = Delete( root->right, value );
    else
    {
        if ( root->left == NULL )
        {
            node_t* newRoot = root->right;
            free( root );
            return newRoot;
        }
        if ( root->right == NULL )
        {
            node_t* newRoot = root->left;
            free( root );
            return newRoot;
        }
        root->data = LeftMostValue( root->right );
        root->right = Delete( root->right, root->data );
    }
    return root;
}
 
void PreOrder(node_t* root){
    if(root != NULL)
    {
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
 
void InOrder(node_t* root){
    if(root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}
 
void PostOrder(node_t* root){
    if(root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ", root->data);
    }
}
 

int main()
{
    node_t* root = NULL;
 
    root = Insert( root, 25 );
    root = Insert( root, 15 );
    root = Insert( root, 50 );
    root = Insert( root, 10 );
    root = Insert( root, 22 );
    root = Insert( root, 35 );
    root = Insert( root, 70 );
    root = Insert( root, 4 );
    root = Insert( root, 12 );
    root = Insert( root, 18 );
    root = Insert( root, 24 );
    root = Insert( root, 31 );
    root = Insert( root, 44 );
    root = Insert( root, 66 );
    root = Insert( root, 90 );
    printf("\npreorder : ");
    PreOrder(root);
    printf("\ninorder  : ");
    InOrder(root);
    printf("\npostorder:");
    PostOrder(root);
 	
 	printf("\n");
    printf("\nThem phan tu 15 vao cay nhi phan");
    Insert(root, 15);
    printf("\npreorder : ");
    PreOrder(root);
    printf("\ninorder  : ");
    InOrder(root);
    printf("\npostorder:");
    PostOrder(root);
 
 	printf("\n");
    printf("\nThu xoa phan tu 50 khoi cay nhi phan");
    Delete(root, 50);
    printf("\npreorder : ");
    PreOrder(root);
    printf("\ninorder  : ");
    InOrder(root);
    printf("\npostorder:");
    PostOrder(root);
 	
 	printf("\n thu tim so 18 trong cay nhi phan");
	if(Search(root,18)==true){
		printf("\nco so 18 trong cay nhi phan!");
	}else{
		printf("\nkhong so 18 trong cay nhi phan!");
	}
	printf("\nphan tu nho nhat trong cay nhi phan la %d",LeftMostValue(root));
	printf("\nphan tu lom nhat trong cay nhi phan la %d",RightMostValue(root));
    Free( root );
    root = NULL;
    return 0;
}
