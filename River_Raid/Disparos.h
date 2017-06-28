#pragma once
using namespace System;
using namespace System::Drawing;
class CDisparos
{
	int x_disparo;
	int y_disparo;
	int dy_disparo;
	bool eliminar;
	int RecursoX;
	int RecursoY;


public:
	CDisparos();
	CDisparos(int x_disparo, int y_disparo);
	~CDisparos();

	int GETx_disparo();
	int GETy_disparo();
	int GETdy_disparo();
	bool GETeliminar();

	void SETx_disparo(int x_disparo);
	void SETy_disparo(int y_disparo);
	void SETdy_disparo(int dy_disparo);
	void SETeliminar(bool eliminar);

	int GETRecursoX();
	int GETRecursoY();
	 void SETRecursoX(int value);
	 void SETRecursoY(int value);

	void dibujar_disparo(BufferedGraphics ^buffer, Bitmap ^bmpDisparo);
	

};




