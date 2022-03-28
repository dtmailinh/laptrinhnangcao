#include <iostream>

using namespace std;

struct distance
{
	double inch, feet;
	distance() 
	{
		inch = 0.0;
		feet = 0.0;
	}
	~distance() {};
	void get_inch()
	{
		cin >> inch;
	}
	void get_feet()
	{
		cin >> feet;
	}
	double change_inch_to_feet()
	{
		return inch / 12.0;
	}
	double change_feet_to_inch()
	{
		return feet * 12.0;
	}
};

int main()
{
	struct distance a;
	cout << "chon don loai don vi muon doi:\n1. Inch\n2. Feet\nChon: ";
	int choice;
	cin >> choice;
	system("cls");

	if (choice == 1)
	{
		cout << "Inch = ";
		a.get_inch();
		cout << "Feet = " <<a.change_inch_to_feet() << endl;
	}
	else
	{
		cout << "Feet = ";
		a.get_feet();
		cout << "Inch = " << a.change_feet_to_inch() << endl;
	}

	return 0;
}