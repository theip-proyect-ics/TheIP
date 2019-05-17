#pragma once
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Usuario {

protected:

	string nombre;
	string apellidos;
	string email;
	int numUsuarios;
		

public:
	Usuario(string , string , string);
	~Usuario();

	void setNombre(string nombre);
	void setApellido(string apellido);
	void setEmail(string email);

	string getEmail();
	string getApellido();
	string getNombre();
};

