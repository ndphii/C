
#include <stdio.h>
#include <stdlib.h>
 
struct Node {
  int data;
  struct Node *left;
  struct Node *right;
  int height;
};
 
//T?m giá tr? l?n nh?t c?a hai s?
int find_max(int a, int b) {
  return (a > b) ? a : b;
}
 
//T?m chi?u cao c?a cây
int height(struct Node *Nod) {
  if (Nod == NULL)
    return 0;
  return Nod->height;
}
 
// T?o nút
struct Node *create_node(int data) {
  struct Node *new_node = (struct Node *)
    malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;
  new_node->height = 1;
  return (new_node);
}
 
// Xoay ph?i
struct Node *rotate_right(struct Node *y) {
  struct Node *x = y->left;
  struct Node *T2 = x->right;
  x->right = y;
  y->left = T2;
  y->height = find_max(height(y->left), height(y->right)) + 1;
  x->height = find_max(height(x->left), height(x->right)) + 1;
  return x;
}
 
// Xoay trái
struct Node *rotate_left(struct Node *x) {
  struct Node *y = x->right;
  struct Node *T2 = y->left;
  y->left = x;
  x->right = T2;
  x->height = find_max(height(x->left), height(x->right)) + 1;
  y->height = find_max(height(y->left), height(y->right)) + 1;
  return y;
}
 
// l?y h? s? cân b?ng
int get_balanceFactor(struct Node *Nod) {
  if (Nod == NULL)
    return 0;
  return height(Nod->left) - height(Nod->right);
}
 
// Chèn nút
struct Node *add_node(struct Node *node, int data) {
  // T?m v? trí thích h?p ð? thêm nút
  if (node == NULL)
    return (create_node(data));
  if (data < node->data)
    node->left = add_node(node->left, data);
  else if (data > node->data)
    node->right = add_node(node->right, data);
  else
    return node;
  // C?p nh?t h? s? cân b?ng và cân b?ng cây
  node->height = 1 + find_max(height(node->left),
               height(node->right));
  int balance = get_balanceFactor(node);
  if (balance > 1 && data < node->left->data)
    return rotate_right(node);
  if (balance < -1 && data > node->right->data)
    return rotate_left(node);
  if (balance > 1 && data > node->left->data) {
    node->left = rotate_left(node->left);
    return rotate_right(node);
  }
  if (balance < -1 && data < node->right->data) {
    node->right = rotate_right(node->right);
    return rotate_left(node);
  }
  return node;
}
 
struct Node *find_minValue(struct Node *node) {
  struct Node *current = node;
  while (current->left != NULL)
    current = current->left;
  return current;
}
 
// Xóa nút
struct Node *deleteNode(struct Node *root, int data) {
  // T?m nút c?n xóa
  if (root == NULL)
    return root;
  if (data < root->data)
    root->left = deleteNode(root->left, data);
  else if (data > root->data)
    root->right = deleteNode(root->right, data);
  else {
    if ((root->left == NULL) || (root->right == NULL)) {
      struct Node *temp = root->left ? root->left : root->right;
      if (temp == NULL) {
        temp = root;
        root = NULL;
      } else
        *root = *temp;
      free(temp);
    } else {
      struct Node *temp = find_minValue(root->right);
      root->data = temp->data;
      root->right = deleteNode(root->right, temp->data);
    }
  }
 
  if (root == NULL)
    return root;
  // C?p nh?t h? s? cân b?ng
  root->height = 1 + find_max(height(root->left),
               height(root->right));
  int balance = get_balanceFactor(root);
  if (balance > 1 && get_balanceFactor(root->left) >= 0)
    return rotate_right(root);
 
  if (balance > 1 && get_balanceFactor(root->left) < 0) {
    root->left = rotate_left(root->left);
    return rotate_right(root);
  }
 
  if (balance < -1 && get_balanceFactor(root->right) <= 0)
    return rotate_left(root);
 
  if (balance < -1 && get_balanceFactor(root->right) > 0) {
    root->right = rotate_right(root->right);
    return rotate_left(root);
  }
  return root;
}
 
// In ra cây
void preorder_print(struct Node *nod) {
  if (nod != NULL) {
    printf("%d ", nod->data);
    preorder_print(nod->left);
    preorder_print(nod->right);
  }
}

int main() {
  struct Node *root = NULL;
  root = add_node(root, 63);
  root = add_node(root, 9);
  root = add_node(root, 19);
  root = add_node(root, 27);
  root = add_node(root, 18);
  root = add_node(root, 108);
  root = add_node(root, 99);
  root = add_node(root, 81);
  
  printf("Preorder:");
  preorder_print(root);
  
  printf("\nthem so 44 va cay AVL: ");
  root=add_node(root,44);
  preorder_print(root);
  
  root = deleteNode(root, 27);
  printf("\nSau khi xóa nút 27:");
  preorder_print(root);
 
  return 0;
}
