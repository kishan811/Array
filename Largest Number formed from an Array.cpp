/* Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.

Input:
The first line of input consists number of the test cases. The description of T test cases is as follows:
The first line of each test case contains the size of the array, and the second line has the elements of the array.

Output:
In each separate line print the largest number formed by arranging the elements of the array in the form of a string.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 102
0 ≤ A[i] ≤ 103

Example:
Input:
2
5
3 30 34 5 9
4
54 546 548 60

Output:
9534330
6054854654
*/

//Program in C++ -

#include<bits/stdc++.h>
using namespace std;

int my_compare(string x,string y)
{
    string xy=x.append(y);
    string yx=y.append(x);
    
    return xy.compare(yx)>0 ? 1 : 0 ;
    
    
}

int main()
 {
	
	int t;
	cin>>t;
	while(t--)
{
  int n;
	cin>>n;
	vector<string>arr(n);
	for(int i=0;i<n;i++)
	     cin>>arr[i];
	    
	sort(arr.begin(),arr.end(),my_compare);
	
  for(int i=0;i<n;i++)
       cout<<arr[i];
   cout<<"\n";

}
	
	return 0;
}
