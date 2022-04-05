#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	string nombre, linea, aux;
	int n1,n2,n3,n4;
	float n1f, n2f, n3f, n4f;
	vector<string> registro;
	ifstream archivo("notas.txt");
	if(!archivo)
		{
			cout << "Archivo no existe.";
			return 0;
		}
	
	while (getline(archivo, linea)){
		stringstream ss(linea);
		ss >> nombre >> n1 >> n2 >> n3 >> n4;
		float n1f = (float) n1;
		float n2f = (float) n2;
		float n3f = (float) n3;
		float n4f = (float) n4;
		aux = nombre + " " + to_string(n1f)  + " " + to_string(n2f) + " " + to_string(n3f) + " " + to_string(n4f);
		registro.push_back(aux);
	}
	
	cout << "Los estudiantes con sus respectivas notas son: " << endl;
	for (int i=0; i<registro.size(); i++)
	{
		cout << registro[i] << endl;
	}
}

