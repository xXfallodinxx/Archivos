#include<iostream>
#include<ctime>
using namespace std;

void hanoiContar(int n,char origen,char auxiliar,char destino,long long &movs){
	if(n==1){
		movs++;	
		}
		else{
			hanoiContar(n-1,origen,destino,auxiliar,movs);
			movs++;
			hanoiContar(n-1,auxiliar,origen,destino,movs );
		}
	
	
} 

int main(){
	int n;
	
	cout<<"ingrese el numero de discos ( recomendado n<=30)";
	cin>>n;
	
	if (n<=0) {
		cout<<"El numero de discos debe ser positivo\n";
		return 0;
	}

long long movimientos =0;
clock_t inicio=clock();
hanoiContar(n,'A','B','C',movimientos);
clock_t fin=clock();
double ms=1000.0 *(fin-inicio)/CLOCKS_PER_SEC;
cout<<"\nNumero total de movimientos"<<movimientos<<endl;
cout<<"Tiempo (cpu) = "<<ms<< "ms"<<endl;
return 0 ;

}