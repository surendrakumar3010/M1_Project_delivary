int menu()
{
	int n;
system("cls");
	printf("\n\tMENU :");
	printf("\n\n\t1. CHOOSE DESTINATION \n\n\t2. GENERATE BILL\n\n\t3. EXIT\n\n\tENTER CHOICE :  ");
	scanf("\n%d", &n);
	switch (n)
	{
	case 1:destination();break;
	case 2:print_details();break;
	case 3: return 0;
}
getch();
menu();
return 0;
}


int main()
{
		system("cls");
	printf("\n\n\n\n\n\n\t\t\t   WELCOME \n\n\t\t      ASHIK TRAVEL AGENCY");
	printf("\n\n\t\t   press enter to continue .....");
	getchar();
	menu();
	return 0;
}