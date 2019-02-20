
#include <iostream>
#include <vector>
#include <string>

using namespace std;


void bubble(auto& Data)
{
   for(int i = 0 ; i < Data.size(); i++)
    {
     for(int j = 0; j < Data.size() - 1; j ++)
      {
        if(Data[j] > Data[j+1])
        { 
            swap(Data[j] , Data[j+1]);
        }//end if
      }//inner for
     
    }//outer for
}


void insertion(auto & Data)
{
   for (int i = 1; i < Data.size(); i++)
    {
     int j = i; 
  
     while(j> 0 and Data[j] < Data[j-1]) 
      {
        swap(Data[j], Data[j-1]);
        j--; 
    }//end while loop (i.e. pass) 
}//end for loop
}//end insertion


void selection(auto & Data)
{
   for (int i = 0; i < Data.size(); i++)
    {
     int min = i;//index of smallest
   
     for(int j = i+1; j < Data.size();j++)      
       {
          if( Data[j] < Data[min])
           {//found smaller element
              min = j;//update smallest 
                      //index
        }
      }//end inner for
     
      swap(Data[i], Data[min]);

    }//end of outer loop
}//end selection function
int main()
{
    cout<<"Welcome ..."<<endl;   
    vector<int> V = {12, 10, 18, 15, 18,9};
    vector<float> V2 = {3.14, 2.81, 1.09, 2.75, 1.22};

    string s = "peppa pig";
    vector<string> words = {"i", 
                           "am",
                           "very",
                           "sleepy"};

int a = 56;
 insertion(V2);
// selection(a);
 selection(V);

 cout<<"s = "<<s<<endl;
bubble(s);
 cout<<"s sorted = "<<s<<endl<<endl;


cout<<"----------------------------------------\n\n";
cout<<"V before bubblesort = "<<endl;
 for (auto x: V)
   cout<<x<<" ";


bubble(V);

cout<<"\n\n`V after bubblesort = "<<endl;
 for (auto x: V)
   cout<<x<<" ";

cout<<"----------------------------------------\n\n";
cout<<"words before insertionsort = "<<endl;
 for (auto x: words)
   cout<<x<<" ";


 insertion(words);
cout<<"words after insertionsort = "<<endl;

 for (auto x: words)
   cout<<x<<" ";
    
} 

