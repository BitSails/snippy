

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
