void gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
	gotoxy(48,14);
	printf("I am ");
	gotoxy(40,15);
	printf("Mr.Krishna Pratap Singh Rathore.");
	gotoxy(40,16);
	printf("B.Tech in Computer Science.");
	gotoxy(40,17);
	printf("Studies In UPES.");
	gotoxy(40,18);
	printf("Lives in Uttar Pradesh.");
	gotoxy(40,19);
	printf("Learning Programming.");
	gotoxy(40,20);
	printf("Stay Home and Stay Safe.");
	
	getch();
}
