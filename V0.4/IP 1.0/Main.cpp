//CREADO POR RelioXxCorp
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


//NO TOCAR LAS LIBRERIAS BAJO NINGUN CONCEPTO
//LIBRERIAS QUE HE AÑADIDO YO(RLX) PARA HECER CONCEPT OBJECTS Y LLAMADAS AL SISTEMA SON: <objbase.h> <shlwapi.h> <shlobj.h> <windows.h> <tchar.h>

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "sqlite3.h" 
#include <shlobj.h>
#include <shlwapi.h>
#include <objbase.h>
#include <windows.h>
#include <tchar.h>
#include <string.h>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <mmdeviceapi.h>
#include <endpointvolume.h> //Esta es para subir el volumen

//Headers Nuestros

#include "Presentacion.h"
#include "Profesor.h"
#include "Alumno.h"
#include "Grado.h"
#include "Disponibilidad.h"

//WINDOWS.H MIERDAS DE SU FUNCINAMIENTO
// Global variables

// The main window class name.
//FIN DE LAS MIERDAS DE WINDOWS.h




using namespace std;
//Variables de base de datos de objetos
//-------------------------------
#define MAXMEMBERS 50
Alumno *alumno[MAXMEMBERS];
int contadoralumnoscreados = 0;
Profesor *profesor[MAXMEMBERS];
int contadorprofesorescreados = 0;
TFG *tfg[MAXMEMBERS];
int contadortfgcreados = 0;
Grado grado = { "IDCD" };

//-------------------------------

//Variables de la base de datos
//----------------------------
sqlite3 *db;
char *zErrMsg = 0;
int rc;
const char *sql;
int tipocreate;
//----------------------------

void createalumno(char **argv) {//ESto son los create alumno en ello tenemos los 4 parametros que pasa el servidor sql 
	string par[4]; //Sql nos da los parametros en char por lo tanto tenemos que transformarlo a string
	for (int i = 1; i < 4; i++) //El primer parametro es informacion de la clase solo necesitamos en este caaso del 1 al parametro 4
		par[i - 1] = argv[i];

	alumno[contadoralumnoscreados] = new Alumno{ par[0], par[1], par[3], grado };//Creamos la clase enviando los parametros aqui tenemos un problema y es que grado no es una string como tal por lo tanto tendremos que añadirlo en un futuro con una clave foranea
	cout << "es" << par[3] << endl;
	contadoralumnoscreados++;//Añadimos 1 al contador de los alumnos creados para que la proxima vez que añadamos un nuevo alumno se cree en el siguiente string y no se sobreescriva
	tipocreate = 0; //Aqui reseteamos el tipocreate para que no vuelva a pasar por aqui 
	return;
}

void createprofesor(char **argv) { //aqui lo mismo que lo anterior pero esta vez con los profesores
	string par[4];
	for (int i = 1; i < 4; i++)
		par[i - 1] = argv[i];

	profesor[contadorprofesorescreados] = new Profesor{ par[0], par[1], par[2] };
	cout << "es" << par[2] << endl;
	contadorprofesorescreados++;
	tipocreate = 0;
	return;
}

void createtfg(char **argv) {//Igual pero con TFG
	/*string par[3];
	for (int i = 1; i < 4; i++)
		par[i - 1] = argv[i];

	tfg[contadortfgcreados] = new TFG{ par[0],NULL };
	cout << "es" << par[2] << endl;
	contadortfgcreados++;
	tipocreate = 0;*/
	return;
}
static int callback(void *NotUsed, int argc, char **argv, char **azColName) { //Esta es la funcion callback ccada vez que usamos las consultas sql se ejecutara esto
	int i; //Tenemos 3 modos dependiendo del tipocreate, si no hemos usado una de las funciones para crear hara una consulta sql normal
	if (tipocreate == 1)
		createalumno(argv);
	else if (tipocreate == 2)
		createprofesor(argv);
	else if (tipocreate == 3)
		createtfg(argv);
	else {
		for (i = 0; i < argc; i++)
		{//Por ignacio
			printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
		}
		printf("\n");
	}
	tipocreate = 0;
	return 0;
}
void insertarclasealumno() {//Esto es para crear la clase que a su vez llamara a la funcion que temos antes que sera la callback
	sql = "SELECT * from ALUMNOS"; //Esto sirve para seleccionar todom, si solo queremos por ejemplo añadir los alumnos que se llamen  jacinto en vez de select * pondremos select * where nombre=alumno
	tipocreate = 1;
	rc = sqlite3_exec(db, sql, callback, NULL, &zErrMsg);

}
void insertarclaseprofesor() {//Esto igual que la funcion anterios pero con la clase profesor
	sql = "SELECT * from PROFESOR";
	tipocreate = 2;
	rc = sqlite3_exec(db, sql, callback, NULL, &zErrMsg);

}
void insertarclasetfg() {//Y esto con la clase tfg
	sql = "SELECT * from TFG";
	tipocreate = 3;
	rc = sqlite3_exec(db, sql, callback, NULL, &zErrMsg);

}


int main(int argc, char* argv[]) {
	
	const char* data = "Callback function called";
	printf("Bienvenido %s,\n\n", getenv("USERNAME"));
	int opcionmenu1 = 0;
	system("title VIRUS BY RELIOXX 100000% REAL NO FAKE LINK IN DESCRIPTION");

	string line;
	ifstream ficheroalumnos;

	printf("Bienvenido al menu De Sqlite de RLX Technologies\n"
		"Opcion 1 Operaciones Automaticas de prueba\n"
		"Opcion 2 Leer Test.db\n"
		"Opcion 4 Cargar el fichero CSV\n"
	);
	cin >> opcionmenu1;

	system("cls");
	if (opcionmenu1 == 2)
	{
		/* Open database */
		rc = sqlite3_open("test.db", &db);//Abrimos la base de datos con nombre test.db
	  //De aqui
		if (rc) {
			fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));//mensaje de error
			return(0);
		}
		else {
			fprintf(stdout, "Opened database successfully\n");
		}
		//A aqui podeis ignorar, pero aun asi lo explico, la variable rc es un boolenao que nos dira si ha fallado  o no ha fallado.
		sql = "SELECT * from COMPANY";
		/* Execute SQL statement */
		rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
		//rc = sqlite3_exec(db, sql, createalumno, (void*)data, &zErrMsg);

	}


	else if (opcionmenu1 == 1) {
		/* Open database */
		rc = sqlite3_open("ip.db", &db);

		if (rc) {
			fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
			return(0);
		}
		else {
			fprintf(stdout, "Opened database successfully\n");
		}

		sql =
			"DROP TABLE Grado;" \
			"DROP TABLE Profesor;" \
			"DROP TABLE Disponibilidad;" \
			"DROP TABLE Alumno;" \
			"DROP TABLE TFG;" \
			"DROP TABLE GradoProfesor;" \
			"DROP TABLE Presentacion;" \

			"CREATE TABLE Grado(" \
			"Nombre text," \
			"ID int Primary key" \
			");" \

			"CREATE TABLE Presentacion(" \
			"ID int Primary key," \
			"Dia int not null," \
			"Slot int not null," \
			"Aula int not null," \
			"Convocatoria int not null," \
			"Prof1 text not null," \
			"Prof2 text not null," \
			"Prof3 text," \
			"Tutor text," \
			"FOREIGN KEY(Prof1) REFERENCES Profesor(Correo) ON UPDATE CASCADE ON DELETE SET NULL," \
			"FOREIGN KEY(Prof2) REFERENCES Profesor(Correo) ON UPDATE CASCADE ON DELETE SET NULL," \
			"FOREIGN KEY(Prof3) REFERENCES Profesor(Correo) ON UPDATE CASCADE ON DELETE SET NULL," \
			"FOREIGN KEY(Tutor) REFERENCES Profesor(Correo) ON UPDATE CASCADE ON DELETE SET NULL" \
			");" \

			"CREATE TABLE Disponibilidad(" \
			"Dia int not null," \
			"Slot int not null," \
			"Flag bool not null," \
			"Primary key(Dia, Slot)" \
			");" \

			"CREATE TABLE Profesor(" \
			"Correo text Primary key," \
			"Doctorado bool not null," \
			"Nombre text not null," \
			"Apellido1 text not null," \
			"Apellido2 text," \
			"Tutor int," \
			"FOREIGN KEY(Tutor) REFERENCES TFG(ID) ON UPDATE CASCADE ON DELETE SET NULL" \
			");" \

			"CREATE TABLE GradoProfesor(" \
			"Profesor text," \
			"Grado int," \
			"TFGsMax int not null," \
			"TFGsRealizados int not null," \
			"PRIMARY KEY(Profesor, Grado)," \
			"FOREIGN KEY(Profesor) REFERENCES Profesor(Correo) ON UPDATE CASCADE ON DELETE CASCADE," \
			"FOREIGN KEY(Grado) REFERENCES Grado(ID) ON UPDATE CASCADE ON DELETE CASCADE" \
			");" \

			"CREATE TABLE TFG(" \
			"ID int Primary key," \
			"Tutor text not null," \
			"Presentacion int not null," \
			"FOREIGN KEY(Tutor) REFERENCES Profesor(Correo) ON UPDATE CASCADE ON DELETE SET NULL," \
			"FOREIGN KEY(Presentacion) REFERENCES Presentacion(ID) ON UPDATE CASCADE ON DELETE SET NULL" \
			");" \

			"CREATE TABLE Alumno(" \
			"Correo text Primary key," \
			"Nombre text not null," \
			"Apellido1 text not null," \
			"Apellido2 text," \
			"Grado int not null," \
			"TFG int not null," \
			"FOREIGN KEY(Grado) REFERENCES Grado(ID) ON UPDATE CASCADE ON DELETE SET NULL," \
			"FOREIGN KEY(TFG) REFERENCES TFG(ID) ON UPDATE CASCADE ON DELETE SET NULL" \
			"); ";

		/* Execute SQL statement */
		rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Table created successfully\n");
		}


		/* Execute SQL statement */
		rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Records created successfully\n");
		}

		/* Create SQL statement */
		sql = "SELECT Nombre from ALUMNOS";

		/* Execute SQL statement */
		rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Operation done successfully\n");
		}

		sqlite3_close(db);

	}

	return 0;
}

