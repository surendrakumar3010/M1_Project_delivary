#include<stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>

int d,m,y;
int d1,m1,y1;

void destination();
void italy();
void france();
void london();
void sydney();
void newyork();
void tokyo();
void shimla();
void print_details();
void print_ticket(int [],int);
void input(int,int );
int check(int);
void flights(int );
void hotels();
int menu();

struct info
{
	int age;
	int cost;
	int days;
	char hname[30];
	char destination[15];
	char name[30];
	char gender;
	float time;
	char fname[30];
	char shift[2];
} i;


void print_details()
{
	system("cls");
	int id,no,flag=0;
	printf("\n\t TRAVELLERS DETAILS :\n");
	printf(" \nENTER ID OF THE PERSON YOU ARE SEARCHING FOR :  ");
	scanf("%d", &id);
		FILE *f;
  	f=fopen("info.txt", "r");
	while (!feof(f))
	{
			fscanf(f,"%d %s %d %c %d %s %s %f %s  %d %d %d %d %d %d %s",&no,&i.name,&i.age,&i.gender,&i.cost,&i.destination,&i.fname,&i.time,&i.shift,&d,&m,&y,&d1,&m1,&y1,&i.hname);
	
		if(id==no)
		{
		printf("\n\n\tID : %d",no);
		printf("\n\tNAME : %s\t\t HOTEL NAME : %s ", i.name,i.hname);
		printf("\n\tAGE : \t%d\t\t CHECKIN : %d/%d/%d ",i.age,d,m,y);
		printf("\n\tGENDER : %c\t \t CHECKOUT : %d/%d/%d", i.gender,d1,m1,y1);
        printf("\n\tDESTINATION : %s",i.destination);
        printf("\n\tFLIGHT NAME : %s",i.fname);
        printf("\n\tDEPARTURE TIME : %f %s",i.time,i.shift);
        printf("\nPress enter to continue .....");
	flag=1;
		}
     if(flag==1)
     break;
           }
	fclose(f);
	if(flag==0)
	{
		printf("\nNo bill exists.");
		printf("\nPress enter to continue .....");

	}
}

