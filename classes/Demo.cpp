  //implementation file for class Demo

   // implementation of our  methods

 #include <iostream>
 #include "Demo.h"//include definition of class Demo


 using namespace std;

 // :: is called 
 // binary scope resolution operator
 void Demo::fun()
 {
   cout<<"having lots of fun"
       <<endl;

 }

//default constructor
 Demo::Demo()
 {
   //initialize all data members
   var = 0;
 }


//overloaded c'tor (constructor)
 Demo::Demo( int val)
 {
   //initialize all data members
  var = val;
 }

 void Demo::setVar(int val )
 {
   var = val;
 }

 int Demo::getVar()
 {
  return var;
 }
