void destination()
{
	system("cls");
	int n;
	printf("\n\t DESTINATION :");
	printf("\n\n\t 1. ITALY");
	printf("\n\n\t 2. FRANCE");
	printf("\n\n\t 3. LONDON");	printf("\n\n\t 4. SYDNEY");
	printf("\n\n\t 5. NEW YORK");
	printf("\n\n\t 6. TOKYO");
	printf("\n\n\t 7. SHIMLA");
		printf("\n\n\t ENTER CHOICE :  ");
	scanf("%d", &n);
	switch (n)
	{
	case 1:italy();break;
	case 2:france();break;
	case 3:london();break;
	case 4:sydney();break;
	case 5:newyork();break;
	case 6:tokyo();break;
	case 7:shimla();break;
	}
}


void italy()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO ITALY TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,1);	
}

void france()
{
	int  cnt;
	system("cls");	
	printf("\n\t\tWELCOME TO FRANCE TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,2);	
}

void london()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO LONDON TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,3);	
}

void sydney()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO SYDNEY TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,4);	
}

void newyork()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO NEW YORK TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,5);	
}

void tokyo()
{
	int  cnt;
system("cls");
	printf("\n\t\tWELCOME TO TOKY0 TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,6);	
}

void shimla()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO SHIMLA TOURISM  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE ");
    scanf("%d",&cnt);
	input(cnt,7);	
}
	
