#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
int main()
{
clrscr();
void ToH(int, char, char, char);
	int n;
	cout << "\n\tEnter the number of disks: ";
	cin >> n;
	cout << "\n\t------------------------------------------------"
		 << "\n\tThe required steps for the solution are:"
		 << "\n\t------------------------------------------------\n";
	ToH(n,'O','D','I');
    cout << "\n\n\t";
    getch();
	return 0;
}

void ToH(int n, char A, char B, char C)
{
	if(n==1)
	cout << "\n\tMove disk " << n << " from " << A << " to " << B;
	else
	{
		ToH(n-1,A,C,B);
		cout << "\n\tMove disk " << n << " from " << A << " to " << B;
		ToH(n-1,C,B,A);
	}
}
