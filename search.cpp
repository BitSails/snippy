

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int linearSearch(auto Data, auto key)
{
	for(int i = 0; i < Data.size(); i++ )
	{
	     if (Data[i] == key)
	         return i;//found it
	} 

       return -1; //not found


}






int binarySearch(auto Data, auto key)
{
	int first = 0;
	int last = Data.size() - 1;
	int mid; 
	
	while(first <= last)//more elements
	{ 
            mid = (first+last)/2;//calc middle
		
		if(Data[mid] == key)//found it
		  return mid;
		
		if (key < Data[mid])
		   last = mid - 1;//search left side of list
		else
		   first = mid + 1;//search right side of list 
		     
	}//end while
	
	   return -1;//element not found
	}














int main()
{
	vector<int> nums = {12, 19, 10, 18, 20, 25, 16, 14, 27, 22};
	
	
	int search_key;
    
    cout<<"Please enter a searchkey: ";
    cin>>search_key;
    
    cout<<endl<<"data: "<<endl;
    //print(strings);

    std::sort(nums.begin(), nums.end());
	int i = binarySearch(nums, search_key);
    	
	
	if (i == -1)
	   cout<<endl<<search_key<<" not found"<<endl;
	else
	  cout<<endl<<search_key<<" found at index "<<i<<endl;   
	
/*	
	cout<<"unsorted nums: ";
	
	print(nums);
	insertionSort(nums);   
	
	cout<<endl<<endl<<"sorted nums: ";
	
	print(nums);
*/	
	return 0;
	
	}










	//vector<string> strings {"khaki","kitty white", "chartreuse", "fuchia", "sky blue", "burnt orange"};

void bubbleSort(vector<int> A)
{
	for(int count = 0; count < A.size(); count++)
	   for(int i = 0 ; i < A.size()-1; i++)
	       if(A[i] > A[i+1])//out of order
	        swap(A[i], A[i+1]);
	}

void selectionSort(int A[], int N)
{
   for(int count = 0; count < N; count++)
   {
	   int smallest = count;//assume A[count] is smallest (intitially)
	   
	   //find the smallest element in A[count...N-1]
	   for(int i = smallest+1 ; i < N; i++)
	   {
	       if(A[i] < A[smallest])//out of order
	        smallest = i;
	    }//we have found the smallest   

	        swap(A[count], A[smallest]);
	
   }
}



void insertionSort2(vector<int>& A)
{
   int cur_index;

   for(int pass = 1; pass < A.size(); pass++)
   {
   
      cur_index = pass;

  while(cur_index > 0 and A[cur_index]  < A[cur_index - 1])
	  {
	    /// A[cur_index ] = A[cur_index - 1];
          swap(A[cur_index ] , A[cur_index - 1]);
		 cur_index--;
	  }//end of shifting

	///  A[cur_index] = insert;

  
   }//end for


}//end insertion sort
