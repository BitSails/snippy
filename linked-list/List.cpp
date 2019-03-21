#include "List.h"


class List::Node//inner (self-referential) class
{
  public:
     int data = 0;
     Node* link = nullptr;

};//self-referential class

List::~List()//remove any nodess  iinnn  
{
  clear();

}
    
void List::insertAt(int val, int k)
{
Node* newPtr = new Node{val};//Step 1


if (k == 1) // special case 
{
  newPtr->link = frontPtr; //2a (special)
  frontPtr = newPtr;// 2b (special)
}
else
 {

   Node* iPtr = frontPtr;//step 2a


  //traverse list to (k-1)th node
   for(int i = 0; i < k -1 ; i++)//step 2b
     iPtr = iPtr->link;

    newPtr->link = iPtr->link;//step 3a
    iPtr->link = newPtr;//step 3b

    }
   
   num_elements++;

void List::removeAt(int k)
{
if( k == 1)//case 1
{
   Node* delPtr = frontPtr;
   frontPtr = frontPtr->link;//point to 2nd node
} 
else
{
Node* iPtr = frontPtr;//step 2a

//traverse list to (k-1)th node
 for(int i = 0; i < k -1 ; i++)//step 2b
   iPtr = iPtr->link;

Node* delPtr = iPtr->link;//step 3a
iPtr->link = delPtr->link; //steb 3b
 }

  delete delPtr;
  num_elements--;



}


int getAt(int k)
{

//see lab
}  


int size()
{

}
     

void clear()
{
//OPTION 1
Node* iPtr = frontPtr;
while (iPtr != nullptr)
{
  frontPtr = frontPtr->link;// advance front pointer
  delete iPtr;//delete first node
  iPtr = frontPtr;//continue traversing
} 


}

/*
OPTION 2

while (size() != 0)
 removeAt(1);

*/


