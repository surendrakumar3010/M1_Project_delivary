void destination()
{
	system("cls");
	int n;
	printf("\n\t DESTINATION :");
	printf("\n\n\t 1. TELANGANA");
	printf("\n\n\t 2. ANDHRAPRADESH");
	printf("\n\n\t 3. GOA");	printf("\n\n\t 4. KARNATAKA");
	printf("\n\n\t 5. MAHARASHTRA");
	printf("\n\n\t 6. PUNJAB");
	printf("\n\n\t 7. TAMILNADU");
		printf("\n\n\t ENTER CHOICE :  ");
	scanf("%d", &n);
	switch (n)
	{
	case 1:telangana();break;
	case 2:andhrapradesh();break;
	case 3:goa();break;
	case 4:karnataka();break;
	case 5:maharashtra();break;
	case 6:punjab();break;
	case 7:tamilnadu();break;
	}
}


void telangana()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO TELANGANA TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);	
}

void andhrapradesh()
{
	int  cnt;
	system("cls");	
	printf("\n\t\tWELCOME TO ANDHRAPRADESH TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,2);	
}

void goa()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO GOA TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,3);	
}

void karnataka()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO KARNATAKA TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,4);	
}

void maharashtra()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO MAHARASHTRA TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,5);	
}

void punjab()
{
	int  cnt;
system("cls");
	printf("\n\t\tWELCOME TO PUNJAB TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,6);	
}

void tamilnadu()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO TAMILNADU TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,7);	
}
	
