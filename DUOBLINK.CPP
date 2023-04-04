#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{       struct node *prev;
	int data;
	struct node *next;
};

struct node *start = NULL;

void create(void)
{
struct node *temp=NULL;
temp=(struct node*)malloc(sizeof(struct node));
int val;
if (temp==NULL)
	printf("memory not allocated\n");

else
{
	printf("enter value\n");
	scanf("%d",&val);
	temp->data=val;
	temp->next=NULL;
	temp->prev=NULL;
	start=temp;
}
}

void add(void)
{
 struct node *temp, *temp1;
 temp=start;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 temp1 = ( struct node *) malloc (sizeof(struct node));
 if(temp==NULL)
 {
  printf("JAGHA nhi !\n");
 }
 else
 {
  printf("Enter data\n");
  scanf("%d",&temp1->data);
  temp->next =temp1;
  temp1->next=NULL;
  temp1->prev=temp;
 }
}


void disp(void)
{
struct node *temp=NULL;
temp =start;
printf("\nstart->");
while(temp!=NULL)
{
	printf("%d->",temp->data);
	temp=temp->next;

}
printf("end\n");
}

void revdisp()
{
 struct node* temp=NULL;
 temp=start;
 start->prev=NULL;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 while(temp!=NULL)
 {
  printf("->%d",temp->data);
  temp=temp->prev;
 }
}

void delall()
{
 struct node *temp;
 temp=start;
 while(temp!=NULL)
 {
  free(temp);
  temp=temp->next;
 }
}

void main()
{
clrscr();
int x;
do{
printf("\n1)create\t2)insert\t3)display\t4)clear screen\t5)exit\t6)Rev Disp\t7)Delete all\n");
scanf("%d",&x);
switch(x){
	case 1:create();
		break;

	case 2:add();
		break;

	case 3:disp();
		break;

	case 4:clrscr();
		break;

	case 5:exit(0);

	case 6:revdisp(); break;

	case 7:delall(); break;

	default:printf("default");
		break;
}
}while(1);
}

