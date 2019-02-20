 // This program is a client of classes A and Demo

 #include <iostream>
 #include <vector>
 #include <string>
 #include "A.h" //include class definition
 #include "Demo.h"

 using namespace std;


 void myfun(A var);

 int main()
 {
   A a1, a2;
  Demo d1, d2;//initialized by default c'tor
  Demo d3 (17); //initilized  with overloaded c'tor
  Demo d4 = {21}; //different syntax for overloaded c'tor

  //by default we can
  a2  = a1; // default assignment

  //however, by default we cannot print
  //cout<<a1; //error

  myfun(a2);// pass a2 as an argument

    cout<<"Welcome to class demo..."<<endl;   

    d1.fun();//call the method fun, in object d1    
    //dot operator allows acces to class members



  cout<<"d2.var = "<<d2.getVar()<<endl;
  cout<<"d1.var = "<<d1.getVar()<<endl;
  cout<<"d3.var = "<<d3.getVar()<<endl;
  cout<<"d4.var = "<<d4.getVar()<<endl;

  //  d2.var =5; //error (var is private)

  d2.setVar(5);// correct way

 }//end main

 void myfun(A a)
 {
   cout<<"fun with a"<<endl;

 }
    
