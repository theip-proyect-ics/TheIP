//CREADO POR RelioXxCorp
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#define MAXSLOT 10
//NO TOCAR LAS LIBRERIAS BAJO NINGUN CONCEPTO
//LIBRERIAS QUE HE AÑADIDO YO(RLX) PARA HECER CONCEPT OBJECTS Y LLAMADAS AL SISTEMA SON: <objbase.h> <shlwapi.h> <shlobj.h> <windows.h> <tchar.h>

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "sqlite3.h" 
#include <tchar.h>
#include <string.h>
#include <fstream>
#include <sstream>
#include <vector>
//#include <string>

//Headers Nuestros

#include "Presentacion.h"
#include "Profesor.h"
#include "Alumno.h"
#include "Grado.h"
#include "Disponibilidad.h"
#include "Parrilla.h"

//WINDOWS.H MIERDAS DE SU FUNCINAMIENTO
// Global variables

// The main window class name.
//FIN DE LAS MIERDAS DE WINDOWS.h




using namespace std;

//Variables de base de datos de objetos
//-------------------------------
char *argvg[10];
#define MAXMEMBERS 100
Alumno *alumno[MAXMEMBERS];
int contadoralumnoscreados = 0;
Profesor *profesor[MAXMEMBERS];
int contadorprofesorescreados = 0;
TFG *tfg[MAXMEMBERS];
int contadortfgcreados = 0;
Grado *grado[MAXMEMBERS];
int contadorgradocreados = 0;
Grado gradoi[4] = { { "IDCD" },{ "DPIN" },{ "ANIM" },{ "DD" } };
//string line;

//-------------------------------

//Variables de la base de datos
//----------------------------
sqlite3 *db;
char *zErrMsg = 0;
int rc;
const char *sql;
const char *sqlcreate;
int tipocreate;
//----------------------------


string emailgp = "";
int gradogp;
int TFGSmaxgp;
int profesorseleccionado = -1;
string line;
ifstream ficheroalumnos;
bool slota;
int dia;
int slot;

static int callback(void *NotUsed, int argc, char **argv, char **azColName);

void creategradoprofesor(char **argv) {//ESto son los create alumno en ello tenemos los 4 parametros que pasa el servidor sql 
	string par[3]; //Sql nos da los parametros en char por lo tanto tenemos que transformarlo a string
	for (int i = 0; i < 3; i++) //El primer parametro es informacion de la clase solo necesitamos en este caaso del 1 al parametro 4
	{
		par[i] = argv[i];
		cout << i << " es: " << par[i] << endl;
	}
	gradogp = stoi(argv[1]) - 1;
	TFGSmaxgp = stoi(argv[2]);
//	printf("Parametros stoi : %d, %d\n", gradogp, TFGSmaxgp);
//	printf("Profesor seleccionado: %d\n", profesorseleccionado);
//	cout << "ID profesor: " << profesor[profesorseleccionado]->emaili<< endl;
	profesor[profesorseleccionado]->anadirGrado(gradogp, TFGSmaxgp); //cambiar
	 
	return;
}
void addslots(char **argv) {//ESto son los create alumno en ello tenemos los 4 parametros que pasa el servidor sql 
	string par[3]; //Sql nos da los parametros en char por lo tanto tenemos que transformarlo a string
	for (int i = 0; i < 3; i++) //El primer parametro es informacion de la clase solo necesitamos en este caaso del 1 al parametro 4
	{
		par[i] = argv[i];
		cout << i << " es: " << par[i] << endl;
	}
	for (int i = 0; i < contadorprofesorescreados; i++) {
		if (profesor[i]->emaili == par[0])
		{
			profesorseleccionado = i;
		}
	}

	
//	printf("Profesor seleccionado: %d \n", profesorseleccionado);
//	cout << "ID profesor: " << profesor[profesorseleccionado]->emaili << endl;
//	cout << "Dia: " << dia<< " Slot: "<< slot << endl;
	if (slota == true)
		profesor[profesorseleccionado]->crearDisponibilidad(dia, slot); //cambiar
	if (slota == false)
		profesor[profesorseleccionado]->eliminarDisponibilidad(dia, slot); //cambiar
		
	return;
}
void createalumno(char **argv) {//ESto son los create alumno en ello tenemos los 4 parametros que pasa el servidor sql 
	string par[4]; //Sql nos da los parametros en char por lo tanto tenemos que transformarlo a string
	for (int i = 0; i < 4; i++) //El primer parametro es informacion de la clase solo necesitamos en este caaso del 1 al parametro 4
		par[i] = argv[i];	

//	cout << "eso es" << par[0] << endl;	
	alumno[contadoralumnoscreados] = new Alumno{ par[0], par[1], par[2], stoi(par[3])};//Creamos la clase enviando los parametros aqui tenemos un problema y es que grado no es una string como tal por lo tanto tendremos que añadirlo en un futuro con una clave foranea
	tfg[contadoralumnoscreados] = alumno[contadoralumnoscreados]->getTfg();
	cout << "es" << par[2] << endl;

	cout << "alumnos creados: " << contadoralumnoscreados << endl;

	contadoralumnoscreados++;//Añadimos 1 al contador de los alumnos creados para que la proxima vez que añadamos un nuevo alumno se cree en el siguiente string y no se sobreescriva
	//tipocreate = 0; //Aqui reseteamos el tipocreate para que no vuelva a pasar por aqui 
	return;
}
void createprofesor(char **argv) { //aqui lo mismo que lo anterior pero esta vez con los profesores
	string par[4];
//	cout << 0 << " es: " << argv[0] << endl;
	for (int i = 0; i < 4; i++) {
		par[i ] = argv[i];
		cout << i <<" es: " << par[i] << endl;
	}

	bool doctorado = 0;
	if (par[3] == "1")
			doctorado = 1;
	profesor[contadorprofesorescreados] = new Profesor{ par[0], par[1], par[2], doctorado};
	contadorprofesorescreados++;
	return;
}
void createtfg(char **argv) {//Igual pero con TFG
	string par[3];
	for (int i = 1; i < 4; i++)
		par[i - 1] = argv[i];

//	tfg[contadortfgcreados] = new TFG{ par[0],NULL };
	cout << "es" << par[2] << endl;
	contadortfgcreados++;
	tipocreate = 0;
	return;
}
void creategrado(char **argv) {//Igual pero con TFG
	string par[1];
	for (int i = 1; i < 3; i++)
		par[i - 1] = argv[i];

	grado[contadorgradocreados] = new Grado{ par[0] };
	cout << "es" << par[2] << endl;
	contadorgradocreados++;
	tipocreate = 0;
	return;
}


void arglobal(int argc, char **argv) {


	for (int j = 0; j < argc; j++)
	{
		strcpy(argvg[j], argv[j]);
		printf("hola : %s", argvg[1]);

		//argvg[j] = strdup(argv[j]);
	}
}
static int callback(void *NotUsed, int argc, char **argv, char **azColName) { //Esta es la funcion callback ccada vez que usamos las consultas sql se ejecutara esto
	int i; //Tenemos 3 modos dependiendo del tipocreate, si no hemos usado una de las funciones para crear hara una consulta sql normal
//	strcpy(argvg[j], argv[j]);
	//	arglobal(argc, argv);
	printf("Numero de argumentos: %d\n", argc);
	if (tipocreate == 1)
		createalumno(argv);
	else if (tipocreate == 2)
		createprofesor(argv);
	else if (tipocreate == 3)
		createtfg(argv);
	else if (tipocreate == 4)
		creategrado(argv);
	else if (tipocreate == 5)
		creategradoprofesor(argv);
	else if (tipocreate == 6)
		addslots(argv);	
	else {
		for (i = 0; i < argc; i++)
		{//Por ignacio
			printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
		}
		printf("\n");
	}
	
	return 0;
}
void insertarclasealumno() {//Esto es para crear la clase que a su vez llamara a la funcion que temos antes que sera la callback
	sql = "SELECT * from ALUMNO"; //Esto sirve para seleccionar todom, si solo queremos por ejemplo añadir los alumnos que se llamen  jacinto en vez de select * pondremos select * where nombre=alumno
	tipocreate = 1;
	printf("HOLA JORGE\n");
	rc = sqlite3_exec(db, sql, callback, NULL, &zErrMsg);
	tipocreate = 0;
}
void insertarclaseprofesor() {//Esto igual que la funcion anterios pero con la clase profesor
	sql = "SELECT * from PROFESOR";
	tipocreate = 2;
	rc = sqlite3_exec(db, sql, callback, NULL, &zErrMsg);
	tipocreate = 0;
}
void insertarclasetfg() {//Y esto con la clase tfg
	sql = "SELECT * from TFG";
	tipocreate = 3;
	rc = sqlite3_exec(db, sql, callback, NULL, &zErrMsg);
	tipocreate = 0;
}
void insertarclasegrado() {//Esto es para crear la clase que a su vez llamara a la funcion que temos antes que sera la callback
	sql = "SELECT * from grado"; //Esto sirve para seleccionar todom, si solo queremos por ejemplo añadir los alumnos que se llamen  jacinto en vez de select * pondremos select * where nombre=alumno
	tipocreate = 4;
	rc = sqlite3_exec(db, sql, callback, NULL, &zErrMsg);
	tipocreate = 0;
}
void insertarclasegradoprofesor() {//Esto es para crear la clase que a su vez llamara a la funcion que temos antes que sera la callback
	for (int i = 0; i < contadorprofesorescreados; i++) {
		profesorseleccionado = i;
		string sqls = "Select * from GradoProfesor where Profesor = '";//pos 4
		sqls += profesor[i]->emaili;
		sqls += "';";
		sql = "SELECT * from GradoProfesor "; //Esto sirve para seleccionar todom, si solo queremos por ejemplo añadir los alumnos que se llamen  jacinto en vez de select * pondremos select * where nombre=alumno
		cout << "consulta" << sqls << endl;
		tipocreate = 5;
		sql = sqls.c_str();
		rc = sqlite3_exec(db, sql, callback, NULL, &zErrMsg);
	}
	tipocreate = 0;
}
void aniadirslots() {
	printf("Adding slots\n");
	string nombre;
	string apellido;

	string booldat;
	string diat;
	ficheroalumnos.open("Slots1.csv");
	int posdelete;
	bool flag1l=true;
	while (getline(ficheroalumnos, line))
	{
		if (flag1l == 1) {
			flag1l = false;
			continue;
		}
		cout << line << endl;;
		printf("Reading\n");
		//line.insert(0, "'");
		nombre.clear();
		apellido.clear();
		booldat.clear();
		diat.clear();
		dia = 0;
		slot = 0;
		for (int i = 0, flag = -1;i < line.length(); i++)
		{
				if (line.at(i) != ',' && flag >= 2) {
				//cout << "Reading Slot" << endl;
				//cout << " l:" << line.at(i);
				if (line.at(i) == '0')
					slota = false;
				if (line.at(i) == '1')
					slota = true;

			}
			//cout <<" l:" << line.at(i);
			//cout << "flag: " << flag << endl;
			if (line.at(i) == ' ' && (flag == 0 || flag == -1)) {
				//printf("getting space\n");
				i++;
				flag++;
			}

			if (line.at(i) == ',') {
				//printf("Getting comma");
				flag++;
				//i++;
				if (flag == 2) {
				//	cout << "diat:" << diat;
					dia = stoi(diat);
					dia--;
				}
				if (flag > 2) {
					slot++;
					//i--;
					//cout << "booldat: "<< booldat << endl;
					//slota = stoi(booldat);
					//booldat.clear();
				/*	if (slota == false) {
						cout << "false" << endl;
					}
					else
						cout << "true" << endl;*/
					//CLASE

					string sqls = "Select * from Profesor where (Nombre  = '";//pos 4
					sqls += nombre;
					sqls += "' and Apellido1 = '";
					sqls += apellido;
					sqls += "');";
			//		cout << "consulta" << sqls << endl;
				//	cout << "dia: " << dia << endl;
				//	cout << "slot: " << slot << endl;
					sql = sqls.c_str();
					tipocreate = 6;
					rc = sqlite3_exec(db, sql, callback, NULL, &zErrMsg);
					{
						tipocreate = 0;
						sqls.clear();
						string sloti;
						sloti = to_string(slot);
						string flagi;
						if (slota)
							flagi = "1";
						if (!slota)
							flagi = "0";
						sqls.insert(0, "INSERT or IGNORE INTO Disponibilidad (Dia ,Slot, Flag) \nVALUES (");
						sqls += diat;
						sqls += ", ";
						sqls += sloti;
						sqls += ", ";
						sqls += flagi;
						sqls += " ); ";
						
					//	cout << sqls << '\n';

						sql = sqls.c_str();//PASAR STRING A CONST CHAR*

						rc = sqlite3_exec(db, sql, callback, NULL, &zErrMsg);
						tipocreate = 6;
					}
				}
				continue;
			}
			if (flag == -1)
				nombre += line.at(i);
			else if (flag == 0)
				apellido += line.at(i);
			else if (flag == 1)
				diat += line.at(i);
		/*	else{
				cout << "Reading Slot" << endl;
				cout << " l:" << line.at(i);
				if (line.at(i) == '0') 
					slota = false;
				if (line.at(i) == '1')
						slota = true;
				
			}*/
		

		}
		printf("string creada\n");
		//line += " ); ";
		//
		//line.insert(0, "INSERT OR REPLACE INTO Profesor (Nombre ,Apellido1 ,Correo ,Doctorado) \nVALUES (");//poner ignore
		/*cout << line << '\n';
		cout << "datos:" << endl;
		cout << nombre << endl;
		cout << apellido << endl;
		cout << dia << endl;
		cout << slot << endl;*/
		tipocreate = 0;
		//Insert Database
	}
	tipocreate = 0;
	ficheroalumnos.close();
}

int main(int argc, char* argv[]) {
	const char* data = "Callback function called";
	printf("Bienvenido %s,\n\n", getenv("USERNAME"));
	int opcionmenu1 = 0;
	system("title VIRUS BY RELIOXX 100000% REAL NO FAKE LINK IN DESCRIPTION");


	//aniadirslots();


	while (1) {
		printf("\n\nBienvenido al menu de IP\n"
			"Opcion 0 crear base de datos vacía\n"
			"Opion 21 cargar ip.db\n"
			"Opcion 1 Operaciones Automaticas de prueba\n"
			"Opcion 4 Cargar el fichero CSV\n"
			"opcion 6 actualizar base de datos\n"
			"opcion 11 seleccion de todos profesores\n"
			"opcion 14 seleccion de todas las disponibilidades\n"
		);
		cin >> opcionmenu1;

		system("cls");
		if (opcionmenu1 == 0) {
			rc = sqlite3_open("savedb.db", &db);
			if (rc) {
				fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
				return(0);
			}
			else {
				fprintf(stdout, "Opened database successfully\n");
			}

			//ficheroalumnos.open("BDR.txt");
			//rc = sqlite3_exec(db, sqlcreate, callback, 0, &zErrMsg);
			//while (getline(ficheroalumnos, line))
			//{
			ifstream ifs("BDR.txt");
			string content((std::istreambuf_iterator<char>(ifs)),
				(std::istreambuf_iterator<char>()));
			sql = content.c_str();//PASAR STRING A CONST CHAR*
			cout << content << endl;
			rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

			if (rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}
			else {
				fprintf(stdout, "Table created successfully\n");
			}
			//}
			//ficheroalumnos.close();
		}
		if (opcionmenu1 == 1) {
			/* Open database */
			rc = sqlite3_open("savedb.db", &db);

			if (rc) {
				fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
				return(0);
			}
			else {
				fprintf(stdout, "Opened database successfully\n");
			}

			/* Execute SQL statement */
			rc = sqlite3_exec(db, sqlcreate, callback, 0, &zErrMsg);

			if (rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}
			else {
				fprintf(stdout, "Table created successfully\n");
			}

			//Primero se crea el grado
			insertarclasegrado();

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
		if (opcionmenu1 == 4) {
			ficheroalumnos.open("Alumnos1.csv");
			while (getline(ficheroalumnos, line))
			{
		//		printf("Reading\n");
				line.insert(0, "'");
				int posdelete = 0;
				for (int i = 0, flag = -1; i < line.length(); i++)
				{

					if (line.at(i) == ',') {
						flag++;
					}
					if (line.at(i) == ',' && flag == 0) {
				//		printf("getting comma\n");
						//cout << line << '\n';
						line.insert(i, "'");
								line.insert(i + 2, "'");
						i += 2;
					}
					if (line.at(i) == ',' && flag == 1) {
				//		printf("getting comma\n");
						//cout << line << '\n';
						line.insert(i, "'");
					line.insert(i + 2, "'");
						i += 2;}
					if (line.at(i) == ',' && flag == 2) {
				//		printf("getting comma\n");
						//cout << line << '\n';
						line.insert(i, "'");
						//			line.insert(i + 2, "'");
						i += 2;
					}


				}
				line.insert(0, "INSERT or IGNORE INTO Alumno (Nombre ,Apellido1 ,Correo ,Grado ,TFGid ) \nVALUES (");
				line += " ); ";
			//	cout << line << '\n';
				//   getchar();

				   //PASAR A SQL

				sql = line.c_str();//PASAR STRING A CONST CHAR*

				rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

				if (rc != SQLITE_OK) {
					fprintf(stderr, "SQL error: %s\n", zErrMsg);
					sqlite3_free(zErrMsg);
				}
				else {
					fprintf(stdout, "Operation done successfully\n");
				}
			}
			insertarclasealumno();
			ficheroalumnos.close();
		}
		if (opcionmenu1 == 5) {
			ficheroalumnos.open("Profesores1.csv");
			int posdelete;
			while (getline(ficheroalumnos, line))
			{
			//	printf("Reading\n");
				line.insert(0, "'");
				for (int i = 0, flag1 = 0, flag2 = 0, flag3 = -1, contadorc = 0, stop=0; i < line.length() && stop==0; i++)
				{
					if (line.at(i) == ' ' && flag1 == 0) {
					//	printf("getting space\n");
						//strncpy(nombre, line.c_str(), i);//strncpy(dest, src + beginIndex, endIndex - beginIndex);
						//int beginindex = i;
						//line.erase(0, i);
						line.insert(i, "'");
						line.insert(i + 1, ",");
						line.insert(i + 3, "'");
						i += 4;
						flag1 = 1;
					}
					if (line.at(i) == ',') {
						contadorc++;
						if (contadorc == 3) {
							//	int lastpos = );
							posdelete = i;
							line.erase(posdelete, line.length() - posdelete);
							stop = 1;
						}
					}
					if (stop == 0) {
						if (line.at(i) == ',' && flag2 == 0) {
					//		printf("getting comma\n");
							//cout << line << '\n';
							line.insert(i, "'");
							line.insert(i + 2, "'");
							i += 2;
							flag2 = 1;
							flag3 = 0;
							//strncpy(apellido, line.c_str(), i);//strncpy(dest, src + beginIndex, endIndex - beginIndex);
						}
						if (line.at(i) == ',' && flag3 == 0 && stop == 0) {
					//		printf("getting comma\n");
							//cout << line << '\n';
							line.insert(i, "'");
							i++;
							flag3 = 1;
							//strncpy(apellido, line.c_str(), i);//strncpy(dest, src + beginIndex, endIndex - beginIndex);
						}
					}

				}
			//	printf("string creada\n");
				line += " ); ";
				line.insert(0, "INSERT OR REPLACE INTO Profesor (Nombre ,Apellido1 ,Correo ,Doctorado) \nVALUES (");//poner ignore
			//	cout << line << '\n';
				//PASAR A SQL
				sql = line.c_str();//PASAR STRING A CONST CHAR*
				rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

			}
			ficheroalumnos.close();
			ficheroalumnos.open("Profesores1.csv");
//			int posdelete;
			string linetext[4] ;
			while (getline(ficheroalumnos, line))
			{
				linetext[0] = "";
				linetext[1] = "";
				linetext[2] = "";
				linetext[3] = "";
			//	printf("Reading\n");

				for (int i = 0, flag=0; i < line.length(); i++)
				{


					if (line.at(i) == ',') {
					//	printf("nuevoflag\n");
						flag++;
						if (flag == 1) {
							i++;
							linetext[0].append("'");
						}
						if(flag==2){
							linetext[0].append("'");
								linetext[0].append(",");

							//[0].insert(linetext[0].length(), "'");
							linetext[1] = linetext[0];
							linetext[2] = linetext[0];
							linetext[3] = linetext[0];
							linetext[0] += "1";
							linetext[1] += "2";
							linetext[2] += "3";
							linetext[3] += "4";
							linetext[0] += ",";
							i++;
						}
					}
					if (flag == 1)
					{
						linetext[0] += line.at(i);
					}
					if (flag == 2)
					{
						linetext[0] += line.at(i);
					}
					if (flag == 3)
					{
						linetext[1] += line.at(i);
					}
					if (flag == 4)
					{
						linetext[2] += line.at(i);
					}
					if (flag == 5)
					{
						linetext[3] += line.at(i);
					}
				}

				line += " ); ";
				//line.insert(0, "INSERT or IGNORE INTO Profesor (Nombre ,Apellido1 ,Correo ,Doctorado) \nVALUES (");

				for (int i = 0; i < 4; i++) {
					linetext[i] += " ); ";
					linetext[i].insert(0, "INSERT or IGNORE INTO GradoProfesor  (Profesor  ,Grado  ,TFGsMax ) \nVALUES (");
				//	cout << linetext[i] << '\n';
					sql = linetext[i].c_str();//PASAR STRING A CONST CHAR*
					rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
					if (rc != SQLITE_OK) {
						fprintf(stderr, "SQL error: %s\n", zErrMsg);
						sqlite3_free(zErrMsg);
					}
					else {
						fprintf(stdout, "Operation done successfully\n");
					}
				}
			}
			ficheroalumnos.close();
			insertarclaseprofesor();
			insertarclasegradoprofesor();
			

			for (int j = 0; j < contadorprofesorescreados; j++) {
				for (int i = 0; i < profesor[j]->getNGrados(); i++) {
					cout << "   grado del profesor " << j << ": " << profesor[j]->getGrados()[i] << " - " << profesor[j]->getNumTFGs(i) << endl;
				}
			}

			tipocreate = 0;
			//ficheroalumnos.open("Profesores1.csv");
			//quitar guiones
			
			

			
		}
		if (opcionmenu1 == 6) {
			rc = sqlite3_open("savedb.db", &db);
			rc = sqlite3_exec(db, sqlcreate, callback, 0, &zErrMsg);
			//Primero insertamos alumno
			line.insert(0, "b"); //"INSERT or IGNORE INTO ALUMNOS (IDALUMNO,NOMBRE,APELLIDO1,APELLIDO2,CORREO,GRADO) \nVALUES (");
			line += " ); ";
			cout << line << '\n';
			//   getchar();
			//for(int i=0)
			//PASAR A SQL

			sql = line.c_str();//PASAR STRING A CONST CHAR*

			rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

			if (rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}
			else {
				fprintf(stdout, "Operation done successfully\n");
			}
		}
		if (opcionmenu1 == 7) {
			aniadirslots();
			for (int i = 0; i < contadorprofesorescreados; i++) {
				cout << "Profesor: " << profesor[i]->getNombre() << " - " << profesor[i]->getDisponibilidad()->getDisponibilidad(0, 0) << endl;
			}

		}
		if (opcionmenu1 == 11) {
			rc = sqlite3_exec(db, "Select * from Profesor", callback, (void*)data, &zErrMsg);

			if (rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}
			else {
				fprintf(stdout, "Operation done successfully\n");
			}
		}
		if (opcionmenu1 == 12) {
			rc = sqlite3_exec(db, "Select * from Alumno", callback, (void*)data, &zErrMsg);

			if (rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}
			else {
				fprintf(stdout, "Operation done successfully\n");
			}
		}
		if (opcionmenu1 == 13) {
			rc = sqlite3_exec(db, "Select * from GradoProfesor", callback, (void*)data, &zErrMsg);

			if (rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}
			else {
				fprintf(stdout, "Operation done successfully\n");
			}
		}		
		if (opcionmenu1 == 14) {
			rc = sqlite3_exec(db, "Select * from Disponibilidad", callback, (void*)data, &zErrMsg);

			if (rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}
			else {
				fprintf(stdout, "Operation done successfully\n");
			}
		}
		if (opcionmenu1 == 20) {
			rc = sqlite3_exec(db, "Select * from GradoProfesor", callback, (void*)data, &zErrMsg);

			if (rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}
			else {
				fprintf(stdout, "Operation done successfully\n");
			}
		}
		if (opcionmenu1 == 21) {
			rc = sqlite3_open("savedb.db", &db);

			if (rc != SQLITE_OK) {
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}
			else {
				fprintf(stdout, "Operation done successfully\n");
			}
		}
		if (opcionmenu1 == 30) {

			cout << "Inserte número de días:" << endl;
			cin >> dia;

			cout << "Inserte número de slots por día" << endl;
			cin >> slot;

			cout << contadoralumnoscreados << endl;

			Parrilla nuevo(0,dia, slot, contadoralumnoscreados,contadorprofesorescreados);
			nuevo.generarParrilla(*tfg,*profesor);

		}
	}
	return 0;
}

