#include <stdio.h>
#include<stdlib.h>

struct node {
    int data ;
    struct node*l;
    struct node*r;
};
struct node* createnode(int value){
    struct node* p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->l=NULL;
    p->r=NULL;
    return p ;
}
void preOrderTraversal(struct node *p){
    if(p!=NULL){
        printf("\t%d",p->data);
        preOrderTraversal(p->l);
        preOrderTraversal(p->r);
    }
}
void postOrderTraversal(struct node *p){
    if(p!=NULL){
        postOrderTraversal(p->l);
        postOrderTraversal(p->r);
        printf("\t%d",p->data);
    }
}
void inOrderTraversal(struct node *p){
    if(p!=NULL){
        inOrderTraversal(p->l);
        printf("\t%d",p->data);
        inOrderTraversal(p->r);
    }
}
int countNodes(struct node *p)
{
    if(p == NULL)
        return 0;
    return 1+countNodes(p->l)+countNodes(p->r);
}
int countLeafNodes(struct node *p){
    if (p == NULL){
        return 0;
    }
    if (p->l == NULL && p->r == NULL){
        return 1;
    }
    return countLeafNodes(p->l) + countLeafNodes(p->r);
    
}
int countNonLeafNodes(struct node *p){
    if (p == NULL){
        return 1;
    }
    if (p->l != NULL || p->r != NULL){
        return 1;
    }
    return countNonLeafNodes(p->l)+countNonLeafNodes(p->r);
    
}
void main()
{
    struct node *n1,*n2,*n3,*n4,*n5;
    n1=createnode(2);
    n2=createnode(4);
    n3=createnode(5);
    n4=createnode(6);
    n5=createnode(7);
    n1->l=n2;
    n1->r=n3;
    n3->l=n4;
    n3->r=n5;
    printf("\nPre Order Traversal: ");
    preOrderTraversal(n1);
    printf("\nPost Order Traversal: ");
    postOrderTraversal(n1);
    printf("\nIn Order Traversal: ");
    inOrderTraversal(n1);
    int c = countNodes(n1);
    printf("\nThe No. of Nodes are: %d",c);
    int d = countLeafNodes(n1);
    printf("\nThe No. of Leaf Nodes are: %d",d);
    int e = countNonLeafNodes(n1);
    printf("\nThe No. of Non Leaf Nodes are: %d",e);
}

