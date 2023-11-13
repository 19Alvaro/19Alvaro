#include<iostream>

using namespace std;


struct empleados{
	char nombre[30];
	char apellido_paterno[30];
	char apellido_materno[30];
	int edad;
	char sexo[20];
	double salario;
	char fecha_nacimiento[20];
	
} empleado1 ={"Jesus","Sanchez","Campos",25,"Maculino",20000,"12-07-1986"},
  empleado2 ={"Gloria","Cardenas","Osorio",31,"Femenino",25000,"19-07-1988"},
  empleado3 ={"Carlos","Olvera","Guillen",29,"Maculino",21000,"21-03-1987"},
  empleado4 ={"Zammy","Gutierrez","Sosa",32,"Femenino",18000,"02-09-1990"},
  empleado5 ={"Ricardo","Cardenas","Lopez",21,"Maculino",17200,"30-02-1983"};


int main(){
	
 	cout<<"Trabajador1:" <<empleado1.nombre<<endl;
	cout<<"apellido_paterno:" <<empleado1.apellido_paterno<<endl;
	cout<<"apellido_materno:" <<empleado1.apellido_materno<<endl;
	cout<<"edad:" <<empleado1.edad<<endl;
	cout<<"sexo:" <<empleado1.sexo<<endl;
	cout<<"salario:" <<empleado1.salario<<endl;
	cout<<"fecha_nacimiento:" <<empleado1.fecha_nacimiento<<endl;
	
	cout<<"\nTrabajador2:" <<empleado2.nombre<<endl;
	cout<<"apellido_paterno:" <<empleado2.apellido_paterno<<endl;
	cout<<"apellido_materno:" <<empleado2.apellido_materno<<endl;
	cout<<"edad:" <<empleado2.edad<<endl;
	cout<<"sexo:" <<empleado2.sexo<<endl;
	cout<<"salario:" <<empleado2.salario<<endl;
	cout<<"fecha_nacimiento:" <<empleado2.fecha_nacimiento<<endl;
	
	cout<<"\nTrabajador3:" <<empleado3.nombre<<endl;
	cout<<"apellido_paterno:" <<empleado3.apellido_paterno<<endl;
	cout<<"apellido_materno:" <<empleado3.apellido_materno<<endl;
	cout<<"edad:" <<empleado3.edad<<endl;
	cout<<"sexo:" <<empleado3.sexo<<endl;
	cout<<"salario:" <<empleado3.salario<<endl;
	cout<<"fecha_nacimiento:" <<empleado3.fecha_nacimiento<<endl;
	
	cout<<"\nTrabajador4:" <<empleado4.nombre<<endl;
	cout<<"apellido_paterno:" <<empleado4.apellido_paterno<<endl;
	cout<<"apellido_materno:" <<empleado4.apellido_materno<<endl;
	cout<<"edad:" <<empleado4.edad<<endl;
	cout<<"sexo:" <<empleado4.sexo<<endl;
	cout<<"salario:" <<empleado4.salario<<endl;
	cout<<"fecha_nacimiento:" <<empleado4.fecha_nacimiento<<endl;
	
	cout<<"\nTrabajador5:" <<empleado5.nombre<<endl;
	cout<<"apellido_paterno:" <<empleado5.apellido_paterno<<endl;
	cout<<"apellido_materno:" <<empleado5.apellido_materno<<endl;
	cout<<"edad:" <<empleado5.edad<<endl;
	cout<<"sexo:" <<empleado5.sexo<<endl;
	cout<<"salario:" <<empleado5.salario<<endl;
	cout<<"fecha_nacimiento:" <<empleado5.fecha_nacimiento<<endl;
	
	return 0;
}
