#include<iostream>
#include<ctime> // clock , CLOCKS_PERS_SEC
using namespace std;

long long fib(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return fib(n-1) + fib(n-2);
}

int main(){
	int n;
	
	
	cout<<"ingrese n (recomendado n<=45) ";cin>>n;
	

	clock_t inicio=clock();
	long long f=fib(n);
	clock_t fin=clock();
	double ms =1000.0*(fin-inicio)/CLOCKS_PER_SEC;
	cout<<"\nf("<<n<<") = "<<f<<endl;
	cout<<"tiempo recursivo (CPU) = "<<ms<<" ms\n";
	return 0;
	
	
}
