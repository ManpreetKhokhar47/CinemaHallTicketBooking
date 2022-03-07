#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void main()
{
	void display_seats(int,int,int,int,int,int);
	void end();
	void display_logo();
	int n,bl1=0,bl2=0,bl3=0,bl4=0,bl5=0,total=50,x;
	char choice;
	display_logo();
start:
	if(total==0)
	{
		cout<<"Theater full";
		goto end;
	}
	cout<<"Enter no. of tickets you want....";
	cin>>n;
	if(n>total)
	{
		cout<<n<<" "<<"seats are not availabel"<<endl;
		cout<<"only "<<total<<" seats are available"<<endl;
		goto start;
	}
	if(n>10)
	{
		cout<<"maximum limit is 10 for joint seats"<<endl;
		goto manage;
	}

	if(bl1+n<=10)
	{
		system("cls");
		display_logo();
		cout<<"seats reserved"<<endl;
		cout<<"Your seat no is = ";
			for(int i=bl1;i<bl1+n;i++)
			{
				cout<<"A"<<i+1<<"   ";
			}
			cout<<endl;
			bl1=bl1+n;
			total=total-n;
			display_seats(total,bl1,bl2,bl3,bl4,bl5);
			cout<<endl;
			cout<<endl;
			goto start;
	}
	else if(bl2+n<=10)
	{
		system("cls");
		display_logo();
		cout<<"seats reserved"<<endl;
		cout<<"Your seat no is = ";
			for(int i=bl2;i<bl2+n;i++)
			{
				cout<<"B"<<i+1<<"   ";
			}
			cout<<endl;
			bl2=bl2+n;
			total=total-n;
			display_seats(total,bl1,bl2,bl3,bl4,bl5);
			cout<<endl;
			cout<<endl;
			goto start;
	}
	else if(bl3+n<=10)
	{
		system("cls");
		display_logo();
		cout<<"seats reserved"<<endl;
		cout<<"Your seat no is = ";
			for(int i=bl3;i<bl3+n;i++)
			{
				cout<<"C"<<i+1<<"   ";
			}
			cout<<endl;
			bl3=bl3+n;
			total=total-n;
			display_seats(total,bl1,bl2,bl3,bl4,bl5);
			cout<<endl;
			cout<<endl;
			goto start;
	}
	else if(bl4+n<=10)
	{
		system("cls");
		display_logo();
		cout<<"seats reserved"<<endl;
		cout<<"Your seat no is = ";
			for(int i=bl4;i<bl4+n;i++)
			{
				cout<<"D"<<i+1<<"   ";
			}
			cout<<endl;
			bl4=bl4+n;
			total=total-n;
			display_seats(total,bl1,bl2,bl3,bl4,bl5);
			cout<<endl;
			cout<<endl;
			goto start;
	}
	else if(bl5+n<=10)
	{
		system("cls");
		display_logo();
		cout<<"seats reserved"<<endl;
		cout<<"Your seat no is = ";
			for(int i=bl5;i<bl5+n;i++)
			{
				cout<<"E"<<i+1<<"   ";
			}
			cout<<endl;
			bl5=bl5+n;
			total=total-n;
			display_seats(total,bl1,bl2,bl3,bl4,bl5);
			cout<<endl;
			cout<<endl;
			goto start;
	}
	else
	{
		goto manage;
	}
manage:
	cout<<"joint seates are not available"<<endl;
	cout<<"do you want to continue press y for yes or any other key to enter again...!"<<endl;
	cin>>choice;
	if(choice=='y')
	{
		while(n>0)
		{
			if(bl1<10)
			{
				x=10-bl1;
				system("cls");
				display_logo();
				cout<<"seat reserved"<<endl;
				cout<<"your seat no is = ";
				for(int i=bl1;i<10;i++)
				{
					cout<<"A"<<i+1<<"\t";
				}
				n=n-x;
				bl1=bl1+x;
				total=total-x;

			}
			if(bl2<10)
			{
				x=10-bl2;
				if(n<x)
				{
					cout<<endl<<"seat reserved"<<endl;
					cout<<"your seat no is = ";
					for(int i=bl2;i<bl2+n;i++)
					{
						cout<<"B"<<i+1<<"\t";
					}
					cout<<endl;
					total=total-n;
					bl2=bl2+n;
					goto start;
				}
				else
				{
					cout<<endl<<"seat reserved"<<endl;
					cout<<"your seat no is = ";
					for(int i=bl2;i<10;i++)
					{
						cout<<"B"<<i+1<<"\t";
					}
					total=total-x;
				}
				n=n-x;
				bl2=bl2+x;
			}
			if(bl3<10)
			{
				x=10-bl3;
				if(n<x)
				{
					cout<<endl<<"seat reserved"<<endl;
					cout<<"your seat no is = ";
					for(int i=bl3;i<bl3+n;i++)
					{
						cout<<"C"<<i+1<<"\t";
					}
					cout<<endl;
					total=total-n;
					bl3=bl3+n;
					goto start;
				}
				else
				{
					cout<<endl<<"seat reserved"<<endl;
					cout<<"your seat no is = ";
					for(int i=bl3;i<10;i++)
					{
						cout<<"C"<<i+1<<"\t";
					}
					total=total-x;
				}
				n=n-x;
				bl3=bl3+x;
			}
			if(bl4<10)
			{
				x=10-bl4;
				if(n<x)
				{
					cout<<endl<<"seat reserved"<<endl;
					cout<<"your seat no is = ";
					for(int i=bl4;i<bl4+n;i++)
					{
						cout<<"D"<<i+1<<"\t";
					}
					cout<<endl;
					total=total-n;
					bl4=bl4+n;
					goto start;
				}
				else
				{
					cout<<endl<<"seat reserved"<<endl;
					cout<<"your seat no is = ";
					for(int i=bl4;i<10;i++)
					{
						cout<<"D"<<i+1<<"\t";
					}
					total=total-x;
				}
				n=n-x;
				bl4=bl4+x;
			}
			if(bl5<10)
			{
				x=10-bl5;
				if(n<x)
				{
					cout<<endl<<"seat reserved"<<endl;
					cout<<"your seat no is = ";
					for(int i=bl5;i<bl5+n;i++)
					{
						cout<<"E"<<i+1<<"\t";
					}
					cout<<endl;
					total=total-n;
					bl5=bl5+n;
					goto start;
				}
				else
				{
					cout<<endl<<"seat reserved"<<endl;
					cout<<"your seat no is = ";
					for(int i=bl5;i<10;i++)
					{
						cout<<"E"<<i+1<<"\t";
					}
					total=total-x;
				}
				n=n-x;
				bl5=bl5+x;
			}
		}
	}
	else
	{
		goto start;
	}

end:
end();
	_getch();
}
void display_seats(int x,int b1, int b2, int b3, int b4, int b5)
{
	cout<<endl<<"seats left in hall is = "<<x<<endl<<endl;
	cout<<"Seates left in Row A = "<<10-b1<<endl;
	cout<<"Seates left in Row B = "<<10-b2<<endl;
	cout<<"Seates left in Row C = "<<10-b3<<endl;
	cout<<"Seates left in Row D = "<<10-b4<<endl;
	cout<<"Seates left in Row E = "<<10-b5<<endl;
}
void display_logo()
{
	cout<<endl<<"\t\t\tWelcome to KHOKHAR'Z cinema"<<endl<<endl;
}
void end()
{
	cout<<endl<<endl;
	cout<<" *************************************"<<endl;
	cout<<"*                                     *"<<endl;
	cout<<"*     Thanks for using our system     *"<<endl;
	cout<<"*                                     *"<<endl;
	cout<<" *************************************"<<endl;
}