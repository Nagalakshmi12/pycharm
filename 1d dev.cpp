#include<stdio.h>
#include<conio.h>
void booking();
void viewing();
void cancellation();
int tickets;
int seats[100];
int price=100,ticketNUM=0,noofseats=0,id,count=0,u,a=0,i=0,totalprice;
int array[20];
int main()
{
	int choice=0;
	printf("\n \t \t WELCOME TO THE AUDITORIUM ONLINE BOOKING");
	printf("\n TOTAL NO OF SEATS=100");
	printf("\n PRICE OF A SEAT=100");
	printf("\n \t \t ONLY ONE SHOW AVAILABLE \n \t \t HURRY BOOK THE TICKETS \n \t \t OR IT WILL BE BOOKED BY OTHERS");

	while(choice!=4)
	{

		printf("\n 1.Booking 2.Viewing 3.cancellation 4.exit");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
		booking();
		break;
		case 2:
		viewing();
		break;
		case 3:
		cancellation();
		break;
		case 4:
		break;
		default:
		printf("\n enter the valid  number");
		}
}
getch();
}

void booking()
{
	totalprice=0;
	viewing();
	printf("\n ENTER THE NO OF SEATS U WANT TO BOOK=");
	scanf("%d",&tickets);
	printf("\n ENTER THE USER ID=");
	scanf("\n %d",&id);
	ticketNUM=tickets;
	if(tickets>0&&tickets+noofseats<=100)
	{
	for(i=0;i<100;i++)
	{
	if(seats[i]==0 && tickets>0)
	{
	tickets--;
	seats[i]=id;
	}
	}
	noofseats+=ticketNUM;
	printf("\n TOTAL NO OF SEATS BOOKED= %d",noofseats);
	totalprice+=(ticketNUM*price);
	printf("\n TOTAL AMOUNT TO BE PAID= %d",totalprice);
}
else
{
	printf("INVALID");
	printf("TOTAL AVAILABLE SEATS= %d",100-noofseats);
}
}
void viewing()
{
for(i=0;i<100;i++)
{
	printf("%d \t",seats[i]);
}
}
void cancellation()
{
	int flag=0,count=0;
	printf("\n ENTER THE NO OF SEATS U WANT CANCEL=");
	scanf("%d",&tickets);
	printf("\n ENTER THE USER ID=");
	scanf("\n %d",&id);
if( tickets>0)
{
for(i=0;i<100;i++)
{
if(seats[i]==id && tickets>0)
{
tickets--;
flag=1;
count++;
seats[i]=0;
}
}
}
if(flag==1)
{
noofseats-=count;
totalprice-=ticketNUM*100;
if(tickets>0)
{
printf("\n WE WERE  NOT ABLE TO CANCEL %d ticket(s)",tickets);
}
printf("\n NOW THE BOOKED SEATS ARE:%d",noofseats);
}
else
printf("Invalid");

}

