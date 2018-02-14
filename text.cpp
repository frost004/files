#include <iostream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
	ofstream myfile {abc.txt};
	if (myfile)
	{
		myfile <<a<<" "<<b<<" "<<c;
 	}else
	cout << "error openning abc.txt";
	myfile.close();
	


 
   return 0;
}
