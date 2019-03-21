#ifndef LIST_H
#define LIST_H
// Implementing a List ADT (using a linked-list)
class List
{
   public://operations
    
     //Destructor
     ~List();
    
     //insert element at k-th position
     void insertAt(int element, int k);
      
     //remove the k-th element
     void removeAt(int k);

     //view the k-th element
     int getAt(int k);

     //return number of elements 
     int size();
     
     //make the ADT empty (again) 
     void clear();



     private:
        class Node;//forward declaration 
                   //(declared in List.cpp)
        
        Node* frontPtr = nullptr;
        //initializing frontPtr here means we don't need        // to write a contstructor 

        int num_elements = 0; //see above comment
};


#endif
