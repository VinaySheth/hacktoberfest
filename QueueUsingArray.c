#include<stdio.h>
#include<conio.h>
# define n 10
void insert(int[],int,int *,int *);
int del(int[],int,int *,int *);
void display();
int queue[n],front=-1,rear=-1;
int main()
{
int choice,value,data;
char ans;
do
{
printf("\nEnter your choice\n");
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Display\n");
scanf("%d",&choice);
switch(choice)
{

case 1:
printf("Enter the element to be inserted\n");
scanf("%d",&value);
insert(queue,value,&front,&rear);
break;

case 2:
value=del(queue,data,&front,&rear);
printf("Deleted element is %d\n",value);
break;

case 3:
display();
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

void insert(int q[],int item,int *front,int *rear)
{
if(*rear>=n-1)
{
printf("Overflow\n");
return;
}
if(*front==-1)
{
*front=0;
*rear=0;
q[*rear]=item;
return;
}
else
{
*rear=*rear+1;
q[*rear]=item;
return;
}
}

int del(int q[],int d,int *front,int *rear)
{
if(*front==-1||*front>*rear)
{
printf("Underflow\n");
d=-1;
return d;
}
if(*front<*rear)
{
*front=*front+1;
d= q[*front-1];
return d;
}
else
{
d= q[*rear];
*front=-1;
*rear=-1;
return d;
}
}

void display()
{
int i;
for(i=front;i<=rear;i++)
{
printf("%d\n",queue[i]);
}
}







