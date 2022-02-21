void hotels()
{
	int n;
	
  system("cls");
	printf("\n\t\t HOTELS :");
	printf("\n\n\t1. EMIRATES PALACE\t PRICE : 20,000 PER DAY");
	printf("\n\n\t2. BURJ AL ARAB\t       PRICE : 19,500 PER DAY");
	printf("\n\n\t3. TOWN HOUSE GALLERIA\t PRICE : 17,000 PER DAY");
	printf("\n\n\t4. ROYAL MALWANE\t PRICE : 20,500 PER DAY");
	printf("\n\n\t5. AMANZOE\t    PRICE : 18,000 PER DAY");
	printf("\n\n\t ENTER CHOICE :  ");
	scanf("%d", &n);
	printf("\n\n\t ENTER NO OF DAYS : ");
	scanf("%d",&i.days);
		switch (n)
	{
case 1: i.cost+=i.days*20000;
strcpy(i.hname,"EMIRATES");break;
case 2: i.cost+=i.days*19500;
strcpy(i.hname,"BURJ_AL_ARAB");break;
case 3: i.cost+=i.days*17000;
strcpy(i.hname,"TOWN_HOUSE_GALLERIA");break;
case 4: i.cost+=i.days*20500;
strcpy(i.hname,"ROYAL_MALWANE");break;
case 5: i.cost+=i.days*18000;
strcpy(i.hname,"AMANZOE");break;
	}
	printf("\n\t ENTER DATE OF CHECKIN : ");
	scanf("%d",&d);
	printf("\n\t ENTER MONTH OF CHECKIN : ");
	scanf("%d",&m);
	printf("\n\t ENTER YEAR OF CHECKIN : ");
	scanf("%d",&y);

	d1=d+i.days;
	m1=m;
	y1=y;
	if(d1>31)
	{
		d1=d1-31;
		m1+=1;
		if(m1>12)
		{
			m1=m1-12;
			y1+=1;
		}
	}
printf("\n\n\t\t   press enter to continue .....");
	getchar();
	getchar();
}
