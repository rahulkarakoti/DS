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

void preorder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main()
{
struct node*p=creatnode(2);
struct node*p1=creatnode(3);
struct node*p2=creatnode(4);
struct node*p3=creatnode(6);
struct node*p4=creatnode(9);
struct node*p5=creatnode(3);
struct node*p6=creatnode(2);

        //      2
        //    /   \
        //   3     4
        //  /  \  /  \
        // 6   9  3   2

p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
p2->left=p5;
p2->right=p6;

printf("\npreorder treversal\n");
preorder(p);
printf("\nostorder treversal\n");
postorder(p);
printf("\ninorder treversal\n");
inorder(p);
return 0;
}