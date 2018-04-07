#include<iostream>
#include<stdlib.h>
using namespace std;
/* structure is used to return two values from minMax() */
 struct Pair 
{
  int min;
  int max;
};  
 
Pair getMinMax(int arr[], int n)
{
  Pair minmax;     
  int i;  
 
  if (n%2 == 0)           
  {         
    if (arr[0] > arr[1])  
    {
      minmax.max = arr[0];
      minmax.min = arr[1];
    }  
    else
    {
      minmax.min = arr[0];
      minmax.max = arr[1];
    }
    i = 2;  
  }  
 
  
  else
  {
    minmax.min = arr[0];
    minmax.max = arr[0];
    i = 1;  
  }
   
   
  while (i < n-1)  
  {          
    if (arr[i] > arr[i+1])          
    {
      if(arr[i] > minmax.max)        
        minmax.max = arr[i];
      if(arr[i+1] < minmax.min)          
        minmax.min = arr[i+1];        
    } 
    else        
    {
      if (arr[i+1] > minmax.max)        
        minmax.max = arr[i+1];
      if (arr[i] < minmax.min)          
        minmax.min = arr[i];        
    }        
    i =i+ 2; 
  }            
 
  return minmax;
}    
 
//n le: T(n)=3(n-1)/2
//n chan: T(n)=3n/2 - 2

int main()
{
  int arr[] = {100, 11, 445, 1, 330, 300,112};
  int arr_size = 6;
Pair minmax = getMinMax (arr, arr_size);
  cout<<"Min la:"<<minmax.min<<endl;
  cout<<"nMax la:"<<minmax.max;
  return 0;
}
