#include<stdio.h>

int stack[100],i,ch;
void push();
void pop();
void show();
int main()
{
printf("enter the number of elements/n");
scanf("%d",&n);
while(ch!=4)
{
printf("/n1.push/n2.pop/n3.show/n4.exit\n");
printf("enter ch");
switch(ch)
{
case1:
{
push();
break;
}
case2:
{
pop();
break;
}
case3:
{
show();
break;
}
default:
{
printf("invalid choice");
}
};
}
}
void push()
{
int a;
if(top==n)
printf("stack is full");
else
{
printf("enter number");
scanf("%d",&a);
top=top+1;
stack[top]=a;
}
}
void pop()
{
if(top==-1)
printf("stack empty");
else
data=stack[top];
top=top-1;
return data;
}
void show()
{
for(i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
if(top==-1)
printf("stack empty");

}
}
