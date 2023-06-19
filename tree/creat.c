#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node * creatnode(int data){
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

int main()
{
   /* WITHOUT USING FUNCTION
struct node *p=(struct node*)malloc(sizeof(struct node));
p->data=1;
p->left=NULL;
p->right=NULL;

struct node *p1=(struct node*)malloc(sizeof(struct node));
p1->data=2;
p1->left=NULL;
p1->right=NULL;

struct node *p2=(struct node*)malloc(sizeof(struct node));
p2->data=3;
p2->left=NULL;
p2->right=NULL;*/

struct node*p=creatnode(2);
struct node*p1=creatnode(3);
struct node*p2=creatnode(4);

p->left=p1;
p->right=p2;
return 0;
}