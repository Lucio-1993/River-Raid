#pragma once
using namespace System;
using namespace System::Drawing;

enum Direcciones
{
	Ninguna, Arriba, Abajo, Izquierda, Derecha
};
class CJugador
{

	int vida;
	
	int x;
	int y;
	int dx;
	int dy;
	int alto;
	int ancho;
	int indiceX;
	int indiceY;
	Direcciones ultima;

	int velox;

	int x_mapa;
	int y_mapa;
	int dx_mapa;
	int dy_mapa;
	int ancho_mapa;
	int alto_mapa;

	int contMAPA;

	int colision;
	int colision_2;

	int coordenada;
	
public:
	CJugador();
	~CJugador();

	CJugador(int x, int y);

	Direcciones direccion;

	int GETvida();
	int GETx();
	int GETy();
	int GETcolision();
	int GETcolision_2();
	int GETcoordenada();

	

	void SETvida(int vida);
	void SETx(int x);
	void SETy(int y);
	void SETcolision(int colision);
	void SETcolision_2(int colision_2);
	void SETcoordenada(int coordenada);

	int GETcontMAPA();
	void SETcontMAPA(int contMAPA);
	
	int GETancho();
	int GETalto();
	int GETvelox(); 
	void SETvelox(int velox);
	void SETancho(int ancho);
	void SETalto(int alto);



	void dibujar_Juego(BufferedGraphics ^buffer, Bitmap ^bmp, Bitmap ^bmpMapa, int matriz[30][20], int cont);
	void mover_Juego(BufferedGraphics ^buffer, Bitmap ^bmp, Bitmap ^bmpMapa, int matriz[30][20], int cont);
	

	
};

