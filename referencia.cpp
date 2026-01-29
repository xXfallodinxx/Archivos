#include<iostream>
using namespace std;

int inc_val(int y){
	y=y+1;
	return y;
}
void inc_ref(int &y){
	y=y+1;
	
}

int main(){
	int a=1,b;
	cout<< "====paso por valor=="<<endl;
	a=1;
	b=inc_val(a);
	cout<<"a = "<<a<<", b = "<<b<<endl;
	cout<<"\n ====paso por referencia=== "<<endl;
	a=1;
	inc_ref(a);
	cout<<" a = "<<a<<endl;
	return 0;
}