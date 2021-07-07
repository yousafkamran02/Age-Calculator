#include <iostream>
using namespace std;
void menu()
{
	int op;
	cout << "\t\t\t\t\t\t##MENU##\t\t\t\t\t" << endl;
	cout << "\t _______________________________________________________________________________________"<<endl;
	cout << "\t|\t\t\t\tAge Calulator 2000\t\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t------------------\t\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t                  \t\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t1.Calulate average age\t\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t2.Calculate age in days\t\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t3.Calculate age in hours\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t4.Calculate age in minutes\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t5.Calulate age in seconds\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t6.Calulate eldest among all attendees\t\t\t|" << endl;
	cout << "\t|\t\t\t\t7.calculate youngest among all attendees\t\t|" << endl;
	cout << "\t|\t\t\t\t0.Exit the program\t\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t------------------\t\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t                  \t\t\t\t\t|" << endl;
	cout << "\t _______________________________________________________________________________________" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\tCreated by:\n\t\t\t\t\t\t\t\t\t\t\tYousafKamran" << endl;
}
void avg()
{
	double tot_num, n, i, sum=0,avg;
	cout << "Enter total number of persons = ";
	cin >> tot_num;
	for (i = 1; i <= tot_num; i++)
	{
	
		cout << "Enter age of Person " << i << endl;
		cin >> n;
		if (n > 0)
		{
			sum += n;
		}
		else
		{
			break;
		}
	}
	avg = sum / tot_num;
	cout << "Average  age of total number of persons = " << avg << endl;
}
void days()
{
	int days,age;
	cout << "Enter your age" << endl;
	cin >> age;
	days = age * 365;
	cout << "Your age in Days is = " << days <<" days"<< endl;
}
void hours()
{
	int hours, age;
	cout << "Enter your age" << endl;
	cin >> age;
	hours = age * 365*24;
	cout << "Your age in Days is = " << hours << " hr" << endl;
}
void mins()
{
	int mins, age;
	cout << "Enter your age" << endl;
	cin >> age;
	mins = age * 365*24*60;
	cout << "Your age in minutes is = " << mins << " mins" << endl;
}
void sec()
{
	int sec, age;
	cout << "Enter your age" << endl;
	cin >> age;
	sec = age * 365 * 24*60 * 60;
	cout << "Your age in seconds is = " << sec << " sec" << endl;
}
void eld()
{
	int i;
	float eld[100];
	int age, num;
	cout << "Enter number of persons" << endl;
	cin >> num;
	for (i = 1; i <= num; i++)
	{
		cout << "Enter the age of person " << i << endl;
		cin >> eld[i];
	}
	for (i = 2; i <= num; i++)
	{
		if (eld[0] < eld[i])
			eld[0] = eld[i];
	}
	cout << "The Eldest among all is " << eld[0] << " years old"<<endl;
}
void you()
{
	int i;
	float you[100];
	int num;
	cout << "Enter number of persons" << endl;
	cin >> num;
	for (i = 1; i <= num; i++)
	{
		cout << "Enter the age of person " << i << endl;
		cin >> you[i];
	}
	for (i = 1; i <= num; i++)
	{
		if (you[0] > you[i])
		{
			you[0] = you[i];
		}
	}
	cout <<" The youngest among all is " << you[0] << " years old" << endl;
}
void swi(int op)
{
	if (op != 0)
	{
		switch (op)
		{
		case 1:
			avg();
			break;
		case 2:
			days();
			break;
		case 3:
			days();
			break;
		case 4:
			mins();
			break;
		case 5:
			sec();
			break;
		case 6:
			eld();
			break;
		case 7:
			you();
			break;
		default:
			cout << "Sorry you entered the wrong option please enter the correct option" << endl;
			break;
		}
	}
	else
	{
		cout << "Goodbye!!" << endl;
	}
}
int main()
{
	int op;
	char cho;
	
	do
	{
		menu();
		cout << "\t\t\t\t\tEnter your option =";
		cin >> op;
		system("CLS");
		swi(op);
		cout << "Do you want to continue(y,n)" << endl;
		cin >> cho;
		system("CLS");
	} while (cho == 'y' || cho == 'Y');
	return 0;
}