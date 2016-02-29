#include <iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class student
{
	string  usn,name,sem;
public:
	void read();
	void pack();
	void display();
	void unpack();
	void search();
};
fstream fp;
void student::read(void)
{
	cout<<"enter usn,name,sem"<<endl;
	cin>>usn;
	cin>>name;
	cin>>sem;
}
void student::pack(void)
{
	string buffer;
	buffer=usn+"|"+name+"|"+sem;
	buffer.resize(100,'$');
	fp<<buffer<<endl;
}
void student::unpack()
{

}

void student::search()
{

}
int main()
{
	int choice;
	student s;
	while(1)
	{
	cout<<"1.read data 2.search"<<endl;
	cout<<"enter ua choice"<<endl;
	cin>>choice;

	switch(choice)
	{
	case 1:s.read();
		fp.open("file1.txt",ios::out|ios::app);
		if(!fp)
		cout<<"not open"<<endl;
		s.pack();
		fp.close();
		break;
	case 2:s.search();
			break;
	default: exit(0);
	break;
	}

	}
	return 0;
}
