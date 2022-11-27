#include "pch.h"
#include "DB.h"
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace variables
{
	char* myGlobalVariable;

	char* getGlobalVariable()
	{
		return myGlobalVariable;
	}
}


DB::DB()
{
	this->connectionString = "datasource = localhost; username = root; password = ""; database = reserva; convert zero datetime=True";
	this->conn = gcnew MySqlConnection(this->connectionString);
}

void DB::AbrirConexion()
{
	this->conn->Open();
}

void DB::CerrarConexion()
{
	this->conn->Close();
}


//Login
bool DB::Login(String^ u, String^ c)
{
	String^ sql = "select * from usuario where Nombre = '" + u + "' and Contraseña = '" + c + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql,this->conn);
	MySqlDataReader^ dataReader;

	try {
		dataReader = cursor->ExecuteReader();
		if (dataReader->Read())
		{
			
			return true;
			
		}
		else
		{
			return false;
		}
	}
	catch (Exception^ x)
	{
		return false;
	}
}



//Usuario-
DataTable^ DB::getData()
{
	String^ sql = "SELECT usuario.nombre AS Nombre,apellido AS Apellido,dni AS DNI,matricula AS Matricula,area.nombre AS Area FROM usuario INNER JOIN area on usuario.area_id=area.id WHERE usuario.estado=1;" ;
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::InsertarUsuario(String^ n, String^ a, String^ d, String^ f, String^ di, String^ m, Object^ area)
{
	String^ sql= "INSERT INTO usuario(nombre,apellido,dni,nacimiento,direccion,matricula,area_id) VALUES('"+ n +"', '"+ a +"', '"+ d +"' , '"+ f +"', '"+ di +"' , '"+ m +"' , "+ area +")";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
		
		MessageBox::Show("Se Guardo Con Exito");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::ModificarUsuario(String^ n, String^ a, String^ d, String^ m, Object^ area, String^ ref) {
	String^ sql = "update usuario set nombre= '" + n + "' ,apellido= '" + a + "' ,dni= '" + d + "',matricula= '" + m + "',area_id= '" + area + "' WHERE dni = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}

}

void DB::EliminarUsuario(String^ ref)
{
	String^ sql = "update usuario set estado= '" + 0 + "' WHERE dni = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}

}

DataTable^ DB::UsuarioNombres()
{
	String^ sql = "SELECT *, nombre AS Nombre FROM usuario WHERE estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}



//Horario de Alimento-
void DB::InsertarHorarioAlimento(Object^ a, Object^ u, String^ h, Object^ c)
{

	String^ sql = "INSERT INTO horario_alimentacion(animal_id,usuario_id,horario,comida_id) VALUES(" + a + ", " + u + ", " + h + ", " + c + ")";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se Guardo Con Exito");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ListadoHorariosComida()
{
	String^ sql = "SELECT animales.nombre AS Animal, usuario.nombre AS Usuario, horario AS Horario, comida.nombre AS Comida FROM horario_alimentacion INNER JOIN animales ON horario_alimentacion.animal_id=animales.id INNER JOIN usuario ON horario_alimentacion.usuario_id=usuario.id INNER JOIN comida ON horario_alimentacion.comida_id=comida.id WHERE horario_alimentacion.estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::ModificarHorariosComida(Object^ a, Object^ u, String^ h, Object^ c, String^ ref)
{

	String^ sql = "UPDATE horario_alimentacion SET animal_id= " + a + ",usuario_id= " + u + " ,horario= '" + h + "' ,comida_id= " + c + "  WHERE horario = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarHorariosComida(String^ ref)
{
	String^ sql = "update horario_alimentacion set estado= '" + 0 + "' WHERE animal_id = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se borro con Exito");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}



//Animales-
void DB::InsertarAnimal(String^ a, Object^ e, Object^ h, String^ estado)
{

	String^ sql = "INSERT INTO animales(nombre,especie_id,habitad_id,estado_animal) VALUES('" + a + "', " + e + ", " + h + ",'" + estado + "' )";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se Guardo Con Exito");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ListadoAnimales()
{
	String^ sql = "SELECT animales.nombre AS Animal, especies.tipo AS Especie, habitad.nombre AS Habitad,estado_animal AS Estado FROM animales INNER JOIN especies ON animales.especie_id=especies.id INNER JOIN habitad ON animales.habitad_id=habitad.id WHERE animales.estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::ModificarAnimal(String^ a, Object^ e, Object^ h, String^ estado, String^ ref)
{

	String^ sql = "update animales set 	nombre= '" + a + "',especie_id= " + e + " ,habitad_id= " + h + ", estado_animal	='" + estado + "'  WHERE nombre = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarAnimal(String^ ref)
{
	String^ sql = "update animales set estado= '" + 0 + "' WHERE nombre = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se borro con Exito");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::AnimalesNombres()
{
	String^ sql = "SELECT *, nombre AS Nombre FROM animales WHERE estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}



//Rol-
void DB::InsertarRol(String^ a)
{

	String^ sql = "INSERT INTO rol(nombre) VALUES('" + a + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se Guardo Con Exito");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ListadoRol()
{
	String^ sql = "SELECT nombre AS Rol FROM rol WHERE estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::ModificarRol(String^n, String^ref)
{

	String^ sql = "update rol set nombre= '" + n + "'WHERE nombre = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarRol(String^ ref)
{
	String^ sql = "update rol set estado= '" + 0 + "' WHERE nombre = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se borro con Exito");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}



//Licencias-
void DB::InsertarLicencias(Object^ u, String^ d, String^ i, String^ f)
{

	String^ sql = "INSERT INTO licencias(usuario_id,descripcion,fecha_inicio,fecha_fin) VALUES(" + u + ", '" + d + "', '" + i + "','" + f + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se Guardo Con Exito");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ListadoLicencias()
{
	String^ sql = "SELECT usuario.nombre AS Nombre, descripcion AS Descripcion, fecha_inicio AS Inicio,fecha_fin AS Fin FROM licencias INNER JOIN usuario on licencias.usuario_id=usuario.id WHERE licencias.estado= 1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::ModificarLicencia(Object^ u, String^ d, String^ i, String^ f, String^ ref)
{

	String^ sql = "update licencias set usuario_id= " + u + ",descripcion= '" + d + "',fecha_inicio= '" + i + "',fecha_fin= ' " + f + "' WHERE usuario_id = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarLicencia(String^ ref)
{
	String^ sql = "update licencias set estado= '" + 0 + "' WHERE descripcion = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se borro con Exito");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}



//Area-
void DB::InsertarArea(String^ a)
{

	String^ sql = "INSERT INTO area(nombre) VALUES('" + a + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se Guardo Con Exito");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ListadoArea()
{
	String^ sql = "SELECT nombre AS Area FROM area WHERE estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::ModificarArea(String^ a, String^ ref)
{

	String^ sql = "update area set nombre= '" + a + "' WHERE nombre = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarArea(String^ ref)
{
	String^ sql = "update area set estado= '" + 0 + "' WHERE nombre = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se borro con Exito");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ListadosArea()
{
	String^ sql = "SELECT *,nombre AS Area FROM area WHERE estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}



//Habitat-
void DB::InsertarHabitat(String^ a)
{

	String^ sql = "INSERT INTO habitad(nombre) VALUES('" + a + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se Guardo Con Exito");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ListadoHabitat()
{
	String^ sql = "SELECT nombre AS Habitat FROM habitad WHERE estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::ModificarHabitat(String^ n, String^ ref)
{

	String^ sql = "update habitad set nombre= '" + n + "'WHERE nombre = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarHabitat(String^ ref)
{
	String^ sql = "update habitad set estado= '" + 0 + "' WHERE nombre = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se borro con Exito");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::HabitatNombres()
{
	String^ sql = "SELECT *, nombre AS Habitat FROM habitad WHERE estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}



//Mantenimiento-
void DB::InsertarMantenimiento(String^ d, Object^ h, Object^ a, Object^ u)
{

	String^ sql = "INSERT INTO mantenimiento(descripcion,habitad_id,area_id,usuario_id) VALUES('" + d + "', " + h + " , " + a + " , " + u + " )";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se Guardo Con Exito");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ListadoMantenimiento()
{
	String^ sql = "SELECT mantenimiento.descripcion AS Descripcion, habitad.nombre AS Habitat, area.nombre AS Area, usuario.nombre AS Usuario FROM mantenimiento INNER JOIN habitad ON mantenimiento.habitad_id=habitad.id INNER JOIN area ON mantenimiento.area_id=area.id INNER JOIN usuario ON mantenimiento.usuario_id=usuario.id WHERE mantenimiento.estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::ModificarMantenimiento(String^ d, Object^ h, Object^ a, Object^ u, String^ ref)
{

	String^ sql = "update mantenimiento set descripcion= '" + d + "',habitad_id= '" + h + "' ,area_id= '" + a + "' ,usuario_id= '" + u + "' WHERE descripcion = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarMantenimiento(String^ ref)
{
	String^ sql = "update mantenimiento set estado= '" + 0 + "' WHERE nombre = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se borro con Exito");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}



//Especies-
void DB::InsertarEspecies(String^ t)
{

	String^ sql = "INSERT INTO especies(tipo) VALUES('" + t + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se Guardo Con Exito");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ListadoEspecies()
{
	String^ sql = "SELECT tipo AS Tipo FROM especies WHERE estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::ModificarEspecie(String^ t, String^ ref)
{

	String^ sql = "update especies set tipo= '" + t + "'WHERE tipo = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarEspecie(String^ ref)
{
	String^ sql = "update especies set estado= '" + 0 + "' WHERE tipo = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se borro con Exito");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::EspecieNombres()
{
	String^ sql = "SELECT *, tipo AS Especie FROM especies WHERE estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}



//Revision-
void DB::InsertarRevision(Object^ a, String^ m, Object^ u)
{

	String^ sql = "INSERT INTO revision(animal_id,motivo,usuario_id) VALUES('" + a + "', '" + m + "' , " + u + ")";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se Guardo Con Exito");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ListadoRevision()
{
	String^ sql = "SELECT animales.nombre AS Animal, motivo AS Motivo, usuario.nombre AS Usuario FROM revision INNER JOIN animales ON revision.animal_id=animales.id INNER JOIN usuario ON revision.usuario_id=usuario.id WHERE revision.estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::ModificarRevision(Object^ a, String^ m, Object^ u, String^ ref)
{

	String^ sql = "update revision set animal_id= " + a + " , motivo= '" + m + "', usuario_id= " + u + " WHERE animal_id= '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarRevision(String^ ref)
{
	String^ sql = "UPDATE revision SET estado= '" + 0 + "' WHERE animal_id= '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se borro con Exito");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}



//Comida
void DB::InsertarComida(String^ n)
{

	String^ sql = "INSERT INTO comida(nombre) VALUES('" + n + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se Guardo Con Exito");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ListadoComida()
{
	String^ sql = "SELECT nombre AS Comida FROM comida WHERE estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::ModificarComida(String^ n, String^ ref)
{

	String^ sql = "update comida set nombre= '" + n + "'WHERE nombre = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::EliminarComida(String^ ref)
{
	String^ sql = "update comida set estado= '" + 0 + "' WHERE nombre = '" + ref + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{

		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Se borro con Exito");
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

DataTable^ DB::ComidaNombres()
{
	String^ sql = "SELECT *,nombre AS Comida FROM comida WHERE estado=1";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}