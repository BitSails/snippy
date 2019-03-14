

 #include <iostream>
 #define BREAK "\n---------------------------------------------------\n\n"

 #include <string>
 #include "classes/Demo.h"

 
 using namespace std;



int main()
{
        string s = "i<3code";// s is an object	
	Demo d = {18};
        string * sptr = new string{"pointers are fun"};// sptr is a pointer to a string object
		
	
	cout<<" The string s is '"<<s<<"'"<<endl;
	cout<<" s.size() is "<<s.size()<<endl;
	cout<<" s.npos is '"<<s.npos<<"'"<<endl;
        cout<<BREAK;

	cout<<" The pointer sptr is "<<sptr<<endl;
	cout<<" size of sptr's data is "<<sptr->size()<<endl;
	cout<<" npos of sptr's data is '"<<sptr->npos<<"'"<<endl;
}
