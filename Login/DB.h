#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

namespace variables // prevents polluting the global namespace
{
	extern char* getGlobalVariable();
}


ref class DB
{
	private:
		String^ connectionString;
		MySqlConnection^ conn;

	public:
		DB();


	//Abrir Conexion	
		void AbrirConexion();
		void CerrarConexion();


	//Login
		bool Login(String^ u, String^ c);


	//Usuario
		DataTable^ getData();
		void InsertarUsuario(String^, String^, String^, String^, String^, String^, Object^);
		void DB::ModificarUsuario(String^, String^, String^, String^, Object^, String^);
		void DB::EliminarUsuario(String^);
		DataTable^ UsuarioNombres();
	

	//Alimento
		void InsertarHorarioAlimento(Object^, Object^, String^, Object^);
		DataTable^ ListadoHorariosComida();
		void DB::ModificarHorariosComida(Object^, Object^, String^, Object^, String^);
		void DB::EliminarHorariosComida(String^);


	//Animales
		void InsertarAnimal(String^, Object^, Object^, String^);
		DataTable^ ListadoAnimales();
		void DB::ModificarAnimal(String^, Object^, Object^, String^, String^);
		void DB::EliminarAnimal(String^);
		DataTable^ DB::AnimalesNombres();


	//Rol
	void InsertarRol(String^);
	DataTable^ ListadoRol();
	void DB::ModificarRol(String^, String^);
	void DB::EliminarRol(String^);


	//Licencias
	void InsertarLicencias(Object^, String^, String^, String^);
	DataTable^ ListadoLicencias();
	void DB::ModificarLicencia(Object^, String^, String^, String^, String^);
	void DB::EliminarLicencia(String^);


	//Area
	void InsertarArea(String^);
	DataTable^ ListadoArea();
	void DB::ModificarArea(String^, String^);
	void DB::EliminarArea(String^);
	DataTable^ ListadosArea();


	//Habitat
	void InsertarHabitat(String^);
	DataTable^ ListadoHabitat();
	void DB::ModificarHabitat(String^, String^);
	void DB::EliminarHabitat(String^);
	DataTable^ HabitatNombres();

	//Mantenimiento
	void InsertarMantenimiento(String^, Object^, Object^, Object^);
	DataTable^ ListadoMantenimiento();
	void DB::ModificarMantenimiento(String^, Object^, Object^, Object^, String^);
	void DB::EliminarMantenimiento(String^);


	//Especies
	void InsertarEspecies(String^);
	DataTable^ ListadoEspecies();
	void DB::ModificarEspecie(String^, String^);
	void DB::EliminarEspecie(String^); 
	DataTable^ EspecieNombres();


	//Revision
	void InsertarRevision(Object^, String^, Object^);
	DataTable^ ListadoRevision();
	void DB::ModificarRevision(Object^, String^, Object^, String^);
	void DB::EliminarRevision(String^);

	//Comida
	void InsertarComida(String^);
	DataTable^ ListadoComida();
	void DB::ModificarComida(String^, String^);
	void DB::EliminarComida(String^);
	DataTable^ DB::ComidaNombres();
};

