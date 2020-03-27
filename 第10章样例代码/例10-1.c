#include <stdio.h>
#include <stdlib.h>
struct slist
{
    int info;
    struct slist *next;
};
int a[8]={35,46,17,80,25,78,66,54};
struct slist *head=NULL;
void inlist(struct slist*,int);
void outlist();
void main()
{
    int i;
    struct slist *node;
    for(i=0;i<8;i++){
        node=(struct slist*)malloc(sizeof(struct slist));
        inlist(node,a[i]);
    }
    outlist();
    return;
}
void inlist(struct slist *nd,int value)
{
    nd->info=value;
    if(head==NULL){
        head=nd;
        head->next=NULL;
    }else{
        struct slist *cp;
        cp=head;
        if(cp->info>value){
            head=nd;
            nd->next=cp;
        }else{
            while(cp->next!=NULL&&cp->next->info<value){
                cp=cp->next;
            }
            nd->next=cp->next;
            cp->next=nd;
        }
    }
    return ;
}
void outlist()
{
    struct slist *cp=head;
    while(cp!=NULL){
        printf("%d\n",cp->info);
        cp=cp->next;
    }
    return ;
}
