#include<string.h>
#include<iostream>
using namespace std;
class strings{
	public:
		char s[20];
		void getstring(char str[])
		{
			strcpy(s,str);
		}
		void operator+(strings);
};
void strings::operator+(strings ob)
{
	strcat(s,ob.s);
	cout<<"\n Concatenated String Is:"<<s;
}
int main()
{
	strings ob1,ob2;
	char string1[10],string2[10];
	cout<<"\n Enter The First String:";
	cin>>string1;
	ob1.getstring(string1);
	cout<<"\n Enter The Second String:";
	cin>>string2;
	ob2.getstring(string2);
	//Calling+operator to Join/Contanate string
	ob1+ob2;
	return 0;
}
