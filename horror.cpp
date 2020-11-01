
#include<iostream>
using namespace std;
int main(){
   //n is the number of elements in the array
   int n,i, largest,t;
   cin>>t;
   for(int j=1;j<=t;j++)
   {
   int num[50];
   //cout<<"Enter number of elements you want to enter: ";
   cin>>n;

   /* Loop runs from o to n, in such a way that first
    * element entered by user is stored in num[0], second
    * in num[1] and so on.
    */
  // for(int i = 0; i < n; i++) {
      //cout<<"Enter Element "<<(i+1)<< ": ";
      cout<<"Case "<<j<<": ";
      cin>>num[i];
   }
   // Storing first array element in "largest" variable
int   largest = num[0];
   for(int i = 1;i < n; i++) {
      /* We are comparing largest variable with every element
       * of array. If there is an element which is greater than
       * largest variable value then we are copying that variable
       * to largest, this way we have the largest element copied
       * to the variable named "largest" at the end of the loop
       *
       */
      if(largest < num[i])
         largest = num[i];
   }
   cout<<largest;
   }
   return 0;
}
