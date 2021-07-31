#include <iostream>
#include <cstdlib>
#include <dynamicsplit.h>
using namespace std;
int main()
{
	int n;
	cout << "Enter the maximum capacity of the array \n" ;
	cin >> n ;
	n =abs(n);
	int i;
	
int A[n];
for(i=0;i<n;i++)
	{
		//cout<< "Enter the element(only number) at "<< i << "position \n" ;
		//cin >> A[i] ;
		A[i]= rand();
	}
    
		int ele;
cout << "Enter the element to search: \n" ;
cin >> ele ;
if(n < 100)
{
//	cout<< 4;
	Bilin bi;
	bi.search(A, n, ele); 
 } 
 else if(n>=100 && n<=1000)
 {
 	DiSplit ds;
	 ds.search(A, n, ele);
 }
 else if(n>=1000 && n<50000)
 {
 	Triplets tp;
 	tp.search( A, n, ele);
 }
 else if (n>= 50000 && n< 250000)
 {
 	Qsplit qs;
	qs.search(A, n, ele);
	//cout<< obj.mid1;
 }
 else
 {
 	PentSplit ps;
	 ps.search(A, n, ele);
 }
 return 0;
 } 

