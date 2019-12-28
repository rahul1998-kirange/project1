#include<iostream>
using namespace std;
			//Aggregation Example

//Date class implementation

class Student			//container class
{
	int rollno;
	char name[20];
	Date *dob;
public:
	Student()
	{
		rollno=1;
		strcpy(name,"abc");
		dob=new Date;
	}p
	Student(int r, char *n, int d, int m, int y)
	{
		rollno=r;
		strcpy(name,n);p
		dob=new Date(d,m,y);
	}
	void display()
	{
		cout<<rollno<<endl;
		cout<<name<<endl;
		dob->display();
	}
};
int main() {
	Student s1;
	s1.display();
	return 0;
}



