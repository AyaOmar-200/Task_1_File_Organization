using namespace std;
#include <iostream>
#include<string>
#include<fstream>

int main()
{
	string name;
	int Id;
	float grade;

	cout << "Enter Your Name" << endl;
	getline(cin, name);

	cout << "enter your Id" << endl;
	cin >> Id;

	cout << "Enter Your Grade" << endl;
	cin >> grade;

	ofstream obj1("Student.txt");

	if (!obj1.is_open())
	{
		cout << "File is not opened" << endl;
	}
	else
	{
		obj1 << "Name : " << name << endl;
		obj1 << "Id : " << Id << endl;
		obj1 << "Grade : " << grade << endl;
	}

	obj1.close();
}
