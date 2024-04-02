#include <stdio.h>
#include <stdlib.h>
struct node {
  char data;
  struct node *left;
  struct node *right;
  };
  
  struct node *create(){
  struct node*newnode;
  char x;
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter the node data:\n");
  scanf(" %c",&x);
  if(x=='Z'){
  return 0;
  }
  newnode->data=x;
  printf("Enter left node data\n");
  newnode->left=create();
    printf("Enter right node data\n");
  newnode->right=create();
  return newnode;
  }
  
/*void preorder(struct node *r){
    if(r == NULL){
        return;
    }
    printf("%d ", r->data);
    preorder(r->left);
    preorder(r->right);
}*/
void preorder(struct node*r){
  if(r==NULL){
  return;
  }
  printf("%c->",r->data);
  preorder(r->left);
  preorder(r->right);
  }
void inorder(struct node *r){
  if(r==NULL){
  	return;
  }
  inorder(r->left);
  printf("%c->",r->data);
  inorder(r->right);
}
void postorder(struct node *r){
  if(r==NULL){
  	return;
  }
  postorder(r->left);
  postorder(r->right);
  printf("%c->",r->data);
}
  int main(){
  	int a,b;
  struct node *root;
  root=0;
  root=create();
  do{
  printf("Enter order to print data \n 1 for preorder\n 2 for inorder \n 3 for postorder\n");
  scanf("%d",&a);
  switch (a){
  	case 1:
  	preorder(root);
  	break;
  	case 2:
  	inorder(root);
  	break;
  	case 3:
  	postorder(root);
  	break;
  	default:
  	printf("Finish");
  	break;
  }
  
  printf("pres 0 for print again");
  scanf("%d",&b);
  }
  while(b==0);
  	
  
  return 0;
  }
  