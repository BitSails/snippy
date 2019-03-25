/*
Author: COMP1115 Semester 1, 2014 class
Purpose: Continue introduction to the pointer data type
Date: 18th Sept. 2014
*/


 #include <iostream>


 using namespace std;



int main()
{
	int var1 = 45;
	char var2 = 'A';
	
	cout<<endl;
	cout<<"var1 = "<<var1<<endl;
	
	cout<<"var2 = '"<<var2<<"'"<<endl;
	
	cout<<endl<<endl<<endl;
	
	
	
		
	
	cout<<"The address of var1 = "<<&var1<<endl;
	
	 int* ptr0 ; //uninitialized pointer (DANGEROUS)
	 int* ptr1 = nullptr;
	 cout<<"ptr0 = "<<ptr0<<endl;
	 cout<<"ptr1 = "<<ptr1<<endl;
	 //cout<<"ptr1 is pointing to the data  "<<*ptr1<<endl;
	 //crashes program
      
 
       int* ptr2 = &var1;
    cout<<"\n\nThe address of var1 = "<<&var1<<endl;
 	cout<<"The value of ptr2 is "<<ptr2<<endl;
 	cout<<"ptr2 is pointing to the data "<<*ptr2<<endl;
 	cout<<"The address of ptr2 is "<<&ptr2<<endl;
 	   
        ptr1 = ptr2;
        *ptr1 = 30;
	
 	cout<<"\n\nThe value of ptr1 is "<<ptr1<<endl;
 	cout<<"ptr1 is pointing to the data "<<*ptr1<<endl;
 	cout<<"The value of ptr2 is "<<ptr2<<endl;
 	cout<<"ptr2 is pointing to the data "<<*ptr2<<endl;


        int* ptr3 = new int{17};
        //do something cool with ptr3

        delete ptr3;//deallocate memory that ptr3 points to
	return 0;
	
}


/*
 

*/
