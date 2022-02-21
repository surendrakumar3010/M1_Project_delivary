void flights(int id)
	{
		int choice;
	printf("\n\n\t\t FLIGHTS AVAILABLE : ");
	printf("\n\n    1. LUFTHANSA:       DEPARTURE : 6.00 AM  PRICE : 68,000 RS");
	printf("\n    2. JET AIRWAYS:     DEPARTURE : 9.00 AM  PRICE : 40,000 RS");
			printf("\n    3. QATAR AIRWAYS :  DEPARTURE : 1.00 PM  PRICE : 55,000 RS");
		printf("\n    4. EMIRATES:        DEPARTURE : 5.00 PM  PRICE : 75,000 RS");
		printf("\n    5. AIR ASIA :       DEPARTURE : 9.00 PM  PRICE : 42,000 RS");
		printf("\n\n\t ENTER CHOICE :  ");
		scanf("%d",&choice);
		switch(choice)
		{
case 1: i.cost+=68000;
i.time=6.00;
strcpy(i.shift,"AM");
strcpy(i.fname,"LUFTHANSA");break;
case 2: i.cost+=40000;
i.time=9.00;
strcpy(i.shift,"AM");
strcpy(i.fname,"JET_AIRWAYS");break;
case 3: i.cost+=55000;
i.time=1.00;
strcpy(i.shift,"PM");
strcpy(i.fname,"QATAR_AIRWAYS");break;
case 4: i.cost+=75000;
i.time=5.00;
strcpy(i.shift,"PM");
strcpy(i.fname,"EMIRATES");break;
case 5: i.cost+=42000;
i.time=9.00;
strcpy(i.shift,"PM");
strcpy(i.fname,"AIR_ASIA");break;
}
	  FILE *p;
       p=fopen("checkid.txt","a+");      fprintf(p,"%d \n",id);
        fclose(p);
        printf("\n\n\t\t   press enter to continue .....");
	getchar();
	getchar();
  
}
