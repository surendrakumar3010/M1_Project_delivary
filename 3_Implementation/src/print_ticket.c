void print_ticket(int a[],int cnt)
{
	system("cls");
	int z,no,flag;
		FILE *f;
  		printf("\n\n\t YOUR TICKET:");
  for(z=0;z<cnt;++z)
  {   flag=0;
  f=fopen("info.txt", "r");
	while (!feof(f))
	{   
		fscanf(f,"%d %s %d %c %d %s %s %f %s  %d %d %d %d %d %d %s",&no,&i.name,&i.age,&i.gender,&i.cost,&i.destination,&i.fname,&i.time,&i.shift,&d,&m,&y,&d1,&m1,&y1,&i.hname);
			if(a[z]==no)
		{
		printf("\n\n\tID : %d",no);
		printf("\n\tNAME : %s\t\t HOTEL NAME : %s ", i.name,i.hname);
		printf("\n\tAGE : \t%d\t\t CHECKIN : %d/%d/%d ",i.age,d,m,y);
		printf("\n\tGENDER : %c\t \t CHECKOUT : %d/%d/%d", i.gender,d1,m1,y1);
        printf("\n\tDESTINATION : %s",i.destination);
        printf("\n\tFLIGHT NAME : %s",i.fname);
        printf("\n\tDEPARTURE TIME : %f %s",i.time,i.shift);
       flag=1;
			}
     if(flag==1)
     break;
           }
  fclose(f);
  }
   printf("\n\n\t\tTOTAL COST : %ld",i.cost);
printf("\n\n\t\tBOOKING SUCCESSFULL");
   printf("\n\n\t\t   press enter to go to main menu .....");
     getchar();
menu();
}


int check(int id)
{   
   int fi;
	 FILE *f1;

        f1=fopen("checkid.txt","w");

fclose(f1);

 FILE *f;
	f=fopen("checkid.txt","r+");
   while(!feof(f))
{
	fscanf(f,"%d",&fi);
	if(fi==id)
	{
	printf("\n\t ID ALDREADY EXISTS!) !\n\t CHOOSE ANOTHER ID :\n");
	return 1;
	}
}
fclose(f);
return 0;
}

