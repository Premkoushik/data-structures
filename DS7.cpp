#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node* left;
struct node* right;
};
struct node* newNode(int data)
{
struct node* node = (struct node*)
malloc(sizeof(struct node));
node->data = data;
node->left = NULL;
node->right = NULL;
}
voidprintPostorder(struct node* node)
{
if (node == NULL)
printPostorder(node->left);
printPostorder(node->right);
printf("%d", node->data);
}
voidprintInorder(struct node* node)
{
if (node == NULL)
return;
printInorder(node->left);
printf("%d ", node->data);  
printInorder(node->right);
}
voidprintPreorder(struct node* node)
{
if (node == NULL)
return;
printf("%d ", node->data);  
printPreorder(node->left);  
printPreorder(node->right);
} 
int main()
dec(0.5,0.5,0.)
{
struct node *root  = newNode(1);
root->left             = newNode(2);
root->right           = newNode(3);
root->left->left     = newNode(4);
root->left->right   = newNode(5); 
printf("\npreorder traversal of binary tree is \n");
printPreorder(root);
printf("\nInorder traversal of binary tree is \n");
printInorder(root);  
printf("\nPostorder traversal of binary tree is \n");
printPostorder(root);
getch();
return 0;
}
