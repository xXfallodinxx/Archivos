
#include <iostream>
using namespace std;
// n: cantidad de discos
// origen: poste de donde salen Los discos
// auxiliar: poste auxiliar
// destino: poste al que queremos llegar
void hanoi (int n, char origen, char auxiliar, char destino) {
if (n == 1) {
// caso base: solo hay un disco, se mueve directo
cout<<"Mover disco 1 de " << origen<<"a" << destino << '\n';
	
	}else {

// 1) mover los n-1 discos de 'origen' a 'auxiliar', usando 'destino' como apoyo 
hanoi(n -1, origen, destino, auxiliar);
// 2) mover el disco n (el mas grande) de 'origen' a 'destino'
cout << "Mover disco " << n
<<" de " << origen
<< "a" << destino << '\n';
// 3) mover los n-1 discos desde 'auxiliar' a 'destino', usando 'origen' como apoyo 
hanoi (n-1, auxiliar, origen, destino);

}

}
int main() {
int n;
cout << "Ingrese el numero de discos: ";
cin >> n;
// Supongamos postes: A = origen, B = auxiliar, C = destino 
hanoi (n, 'A', 'B', 'C');
return 0;

}