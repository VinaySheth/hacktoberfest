#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
}node;

struct node * insertAtEnd(struct node * first,int x)
{
struct node *temp,*newn;
newn=(struct node *)malloc(sizeof(node));
newn->data=x;
newn->next=NULL;

if(first==NULL)
{
return newn;
}
temp=first;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newn;
return first;
}

struct node * deleteAtEnd(struct node * first)
{
struct node *temp,*del;
if(first==NULL)
{
printf("Empty stack\n");
return first;
}
temp=first;
if(temp->next==NULL)
{
free(temp);
return NULL;
}
while(temp->next!=NULL)
{
del=temp;
temp=temp->next;
}
del->next=NULL;
free(temp);
return first;
}

void display(struct node * first)
{
struct node *temp;
temp=first;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}

void main()
{
struct node *first;
first=NULL;
clrscr();
int x,choice;
char ans;
do
{
printf("\n");
printf("Enter your choice:\n");
printf("1.push\n2.pop\n3.display\n");
scanf("%d",&choice);
printf("\n");
switch(choice)
{

case 1:
printf("Enter the element to be pushed\n");
scanf("%d",&x);
first=insertAtEnd(first,x);
break;

case 2:
first=deleteAtEnd(first);
break;

case 3:
display(first);
break;

default:
printf("Invalid Choice\n");

}

printf("\nDo you want to continue?\n");
ans=getche();
printf("\n");

}
while(ans=='Y' || ans=='y');
getch();
}
