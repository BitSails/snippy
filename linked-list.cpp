//zfa}

class Node
{
  public:
     int data = 0;
     Node* link = nullptr;

};//self-referential class




/************************************************************
 *                                                          *
 *                Insertion at position k                   *
 *                                                          *
 ************************************************************/

// assumes frontPtr, val, k, appropriately declared


Node* newPtr = new Node{val};//Step 1

{
if (k == 1) // special case 
{
  newPtr->link = frontPtr; //2a (special)
  frontPtr = newPtr;// 2b (special)

}
}
Node* iPtr = frontPtr;//step 2a


//traverse list to (k-1)th node
 for(int i = 0; i < k -1 ; i++)//step 2b
   iPtr = iPtr->link;

 newPtr->link = iPtr->link;//step 3a
 iPtr->link = newPtr;//step 3b





//deletion
if( k == 1)//case 1
{
   Node* delPtr = frontPtr;
   frontPtr = frontPtr->link;//point to 2nd node
   delete delPtr;
} 

Node* iPtr = frontPtr;//step 2a

//traverse list to (k-1)th node
 for(int i = 0; i < k -1 ; i++)//step 2b
   iPtr = iPtr->link;

Node* delPtr = iPtr->link;//step 3a
iPtr->link = delPtr->link; //steb 3b
   delete delPtr;

