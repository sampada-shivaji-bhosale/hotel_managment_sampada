#include<iostream>
using namespace std;
void fun()
{
	try
	{
		throw "hello";
		cout<<"charcter is thrown ."<<endl;
	}
	catch(const char*)
	{
		cout<<" now caught in function "<<endl;
		throw;
	}
}
int main()
{
	try
	{
		fun();
	}
	catch(const char*)
	{
		cout<<"Now the caught in main function ."<<endl;
	}
	return 0;
	
}
