#include <iostream>
#include <cstdlib>
using namespace std;
 class Bilin
{
    protected: 
	    int front,rear,count;
    
	public:	
	
       void search( int A[], int n,  int ele)
         {
         	front = 0;
         	rear = n-1;
         	count =0;
         	while(rear>=front)
         	{   
         		if(A[rear]==ele )
         		{++count;
         			cout<< count <<"\n" << " Element found at " << rear <<endl;
				 }
				 else if ( A[front]==ele)
				 {
				 	++count;
				 	cout<< count <<"\n" << " Element found at " << front ;
				 }
				 rear-- , front++ ;
			 }
         	if(count==1)
         	{
         		cout<<"Element not repeated \n";
			 }
			 else if (count == 0)
			 {
			 	cout<< "Element not found in the set \n";
			 }
	    	} 
};

class DiSplit : public Bilin 
{
	protected :
		int mid1 , back1;
		
	public:
		
		void search( int A[], int n,  int ele)
         {
         	front = 0;
         	rear = n-1;
         	mid1 = n/2;
         	back1 = mid1-1;
         	count =0;
         	while(rear!=mid1 && front != back1)
         	{   
         		if(A[rear]==ele )
         		{++count;
         			cout<< count <<"Element found at \n" << rear;
				 }
				 else if ( A[front]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << front ;
				 }
				  else if ( A[mid1]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << mid1 ;
				 }
				  else if ( A[back1]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << back1 ;
				 }
				 rear-- , back1--;
				 front++ , mid1++;
				  }
         	if(count==1)
         	{
         		cout<<"Element not repeated \n";
			 }
			 else if (count == 0)
			 {
			 	cout<< "Element not found in the set \n";
			 }
	    	}
};

class Triplets : public DiSplit
{
	protected : 
	     int mid2, back2;
	     
	  	public:
		
		void search( int A[], int n,  int ele)
         {
         	front = 0;
         	rear = n-1;
         	mid1 = n/3;
         	back1 = mid1-1;
         	mid2 = (n*2)/3;
         	back2 = mid2-1;
         	count =0;
         	while(rear!=mid2 && front != back1 && mid1 != back2)
         	{   
         		if(A[rear]==ele )
         		{++count;
         			cout<< count <<"Element found at \n" << rear;
				 }
				 else if ( A[front]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << front ;
				 }
				  else if ( A[mid1]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << mid1 ;
				 }
				  else if ( A[back1]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << back1 ;
				 }
				 else if ( A[back2]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << back2 ;
				 }
				 else if ( A[mid2]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << mid2 ;
				 }
				 rear-- , back1--, back2--;
				 front++ , mid1++, mid2++;
				  }
         	if(count==1)
         	{
         		cout<<"Element not repeated \n";
			 }
			 else if (count == 0)
			 {
			 	cout<< "Element not found in the set \n";
			 }
	    	}   
	    
 }; 
 
 class Qsplit : public Triplets
{
	protected : 
	     int mid3, back3;
	     
	  	public:
		
		void search( int A[], int n,  int ele)
         {
         	front = 0;
         	rear = n-1;
         	mid1 = n/4;
         	back1 = mid1-1;
         	mid2 = n/2;
         	back2 = mid2-1;
         	mid3 = (n*3)/4;
         	back3 = mid3-1; 
         	count =0;
         	while(rear!=mid3 && front != back1 && mid1 != back2 && mid2 != back3) 
         	{   
         		if(A[rear]==ele )
         		{++count;
         			cout<< count <<"Element found at \n" << rear;
				 }
				 else if ( A[front]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << front ;
				 }
				  else if ( A[mid1]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << mid1 ;
				 }
				  else if ( A[back1]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << back1 ;
				 }
				 else if ( A[back2]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << back2 ;
				 }
				 else if ( A[mid2]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << mid2 ;
				 }
				 else if ( A[mid3]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << mid3 ;
				 }
				 else if ( A[back3]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << back3 ;
				 }
				 rear-- , back1--, back2--, back3--;
				 front++ , mid1++, mid2++, mid3++;
				  }
         	if(count==1)
         	{
         		cout<<"Element occured only once and not repeated \n";
			 }
			 else if (count == 0)
			 {
			 	cout<< "Element not found in the set \n";
			 }
	    	}   
	    
 }; 
 
 class PentSplit : public Qsplit
{
	private : 
	     int mid4, back4;
	     
	public :
		
		void search( int A[], int n,  int ele)
         {
         	front = 0;
         	rear = n-1;
         	mid1 = n/5;
         	back1 = mid1-1;
         	mid2 = (n*2)/5;
         	back2 = mid2-1;
         	mid3 = (n*3)/5;
         	back3 = mid3-1;
         	mid4 = (n*4)/5;
         	back4 = mid4-1;
         	count =0;
         	while(rear!=mid4 && front != back1 && mid1 != back2 &&  mid2 != back3 && mid3 != back4)
         	{   
         		if(A[rear]==ele )
         		{++count;
         			cout<< count <<"Element found at \n" << rear;
				 }
				 else if ( A[front]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << front ;
				 }
				  else if ( A[mid1]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << mid1 ;
				 }
				  else if ( A[back1]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << back1 ;
				 }
				 else if ( A[back2]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << back2 ;
				 }
				 else if ( A[mid2]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << mid2 ;
				 }
				 else if ( A[back4]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << back4 ;
				 }
				 else if ( A[back3]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << back3 ;
				 }
				 else if ( A[mid3]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << mid3 ;
				 }
				 else if ( A[mid4]==ele)
				 {
				 	++count;
				 	cout<< count <<"Element found at \n" << mid4 ;
				 }
				 rear-- , back1--, back2--, back3--, back4--;
				 front++ , mid1++, mid2++, mid3++, mid4++;
				  }
				  
         	if(count==1)
         	{
         		cout<<"Element occured once and not repeated \n";
			 }
			 else if (count == 0)
			 {
			 	cout<< "Element not found in the set \n";
			 }
	    	}   
	    
 }; 

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
		cout<< "Enter the element(only number) at "<< i << "position \n" ;
		cin >> A[i] ;
		//A[i]= rand();
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

