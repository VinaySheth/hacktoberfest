#include<stdio.h>
#include<conio.h>
#define n 10
void push(int[],int *,int);
int pop(int[],int *);
int peep(int[],int *,int);
void change(int[],int *,int,int);
void display();
int stack[10],top=-1,i,choice,value,item,p,x;
char ans;
int main()
{
do
{
printf("\n");
printf("Enter your choice:\n");
printf("1.push\n2.pop\n3.peep\n4.change\n5.display\n");
scanf("%d",&choice);
printf("\n");
switch(choice)
{

case 1:
printf("Enter the element to be pushed\n");
scanf("%d",&value);
push(stack,&top,value);
break;

case 2:
item=pop(stack,&top);
printf("Popped element is %d\n",item);
break;

case 3:
printf("Enter the value of i\n");
scanf("%d",&p);
item=peep(stack,&top,p);
printf("Value is %d\n",item);
break;

case 4:
printf("Enter the value of i\n");
scanf("%d",&p);
printf("Enter the new value\n");
scanf("%d",&x);
change(stack,&top,p,x);
break;

case 5:
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
return 0;
}

void push(int s[], int * top,int item)
{
if(*top>=n-1)
{
printf("Overflow\n");
return;
}
*top=*top+1;
s[*top]=item;
}

int pop(int s[], int * top)
{
if(*top<0)
{
printf("Underflow\n");
return(-1);
}
*top=*top-1;
return s[*top+1];
}

int peep(int s[],int * top,int p)
{
if(*top-p+1<=0)
{
printf("Underflow");
return(-1);
}
return s[*top-p+1];
}

void change(int s[],int * top,int p,int x)
{
if(*top-p+1<=0)
{
printf("Underflow");
return;
}
s[*top-p+1]=x;
}

void display()
{
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}






