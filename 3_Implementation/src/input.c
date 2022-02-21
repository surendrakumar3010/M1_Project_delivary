void input(int cnt,int cno)
{
	int a[cnt];	
	int pos=0,res;
	switch(cno)
	{
		case 1:strcpy(i.destination,     "TELANGANA");break;
		case 2:strcpy(i.destination,     "ANDHRAPRADESH");break;
		case 3:strcpy(i.destination,     "GOA");break;
		case 4:strcpy(i.destination,    "KARNATAKA" );break;
		case 5:strcpy(i.destination,     "MAHARASHTRA");break;
		case 6:strcpy(i.destination,     "PUNJAB");break;
		case 7:strcpy(i.destination,    "TAMILNADU" );break;
	}
	int x=0,id;
	while(x<cnt)
		{  
		system("cls");
			printf("\n\t\t ENTER %d PERSON DETAILS",x+1);
		a:
		printf("\n\n\t     CHOOSE YOUR TRAVEL ID (1-100) : ");
	scanf("%d",&id);
	res=check(id);
	if(res==1)
	goto a;
	printf("\n\t    ENTER  NAME , AGE , GENDER (M/F)  :\n\n");
	FILE *f;
	f=fopen("info.txt","a+");
	printf("\t    ");
	scanf("%s", &i.name);
	printf("\t    ");
	scanf("%d",&i.age);
	printf("\t    ");
	getchar();
    i.gender=getchar();
    printf("\n\n\t\t   press enter to continue .....");
     getchar();
	getchar();	
	flights(id);
	hotels();
	fprintf(f,"%d %s %d %c %d %s %s %f %s ",id,i.name,i.age,i.gender,i.cost,i.destination,i.fname,i.time,i.shift);
	fprintf(f," %d %d %d %d %d %d %s\n",d,m,y,d1,m1,y1,i.hname);
      fclose(f);
      a[x]=id;
      ++x;
		}
	print_ticket(a,cnt);
}

