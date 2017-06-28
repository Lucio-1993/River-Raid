#pragma once
using namespace System;
using namespace System::Drawing;

class CEnemigo1
{

	// ENEMIGO 1
	int x_enemigo;
	int y_enemigo;
	int dx_enemigo;
	int ancho_enemigo;
	int alto_enemigo;
	int indiceX_enemigo;
	bool eliminar;
	int contador;


public:
	CEnemigo1(int dx_enemigo, int x_enemigo, int y_enemigo);
	~CEnemigo1();
		
	int GETx_enemigo();
	int GETy_enemigo();
	int GETdx_enemigo();
	int GETindiceX_enemigo();
	int GETancho_enemigo();
	int GETalto_enemigo();
	int GETcontador();
	void SETcontador(int contador);

	void SETx_enemigo(int x_enemigo);
	void SETy_enemigo(int x_enemigo);
	void SETdx_enemigo(int dx_enemigo);
	void SETindiceX_enemigo(int indiceX_enemigo);
	void SETalto_enemigo(int alto_enemigo);
	void SETancho_enemigo(int ancho_enemigo);
	

	bool GETeliminar();
	void SETeliminar(bool eliminar);

	void dibujar_enemigo(BufferedGraphics ^buffer, Bitmap ^bmpEnemigo, int posY/*, Rectangle X*/);
	void mover_enemigo(BufferedGraphics ^buffer);

};

class CEnemigo2
{

	// ENEMIGO 2
	int x_enemigo;
	int y_enemigo;
	int dx_enemigo;
	int ancho_enemigo;
	int alto_enemigo;
	int indiceX_enemigo;
	bool eliminar;



public:
	CEnemigo2(int dx_enemigo, int x_enemigo, int y_enemigo);
	~CEnemigo2();

	int GETx_enemigo();
	int GETy_enemigo();
	int GETdx_enemigo();
	int GETindiceX_enemigo();
	int GETancho_enemigo();
	int GETalto_enemigo();

	void SETx_enemigo(int x_enemigo);
	void SETy_enemigo(int x_enemigo);
	void SETdx_enemigo(int dx_enemigo);
	void SETindiceX_enemigo(int indiceX_enemigo);
	void SETalto_enemigo(int alto_enemigo);
	void SETancho_enemigo(int ancho_enemigo);

	bool GETeliminar();
	void SETeliminar(bool eliminar);

	void dibujar_enemigo(BufferedGraphics ^buffer, Bitmap ^bmpEnemigo, int posY/*, Rectangle X*/);
	void mover_enemigo(BufferedGraphics ^buffer);
};