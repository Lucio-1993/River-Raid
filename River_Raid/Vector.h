#pragma once
#include "Disparos.h"
#include "Enemigo.h"
#include "Jugador.h"
#include <vector>
using  namespace std;
class CVector
{
	vector<CDisparos*>arr;
	vector<CEnemigo1*>arreglo1;
	vector<CEnemigo1*>arreglo2;
	vector<CEnemigo1*>arreglo3;
	vector<CEnemigo1*>arreglo4;
	vector<CEnemigo1*>arreglo5;
	vector<CEnemigo1*>arreglo6;
	vector<CEnemigo1*>arreglo7;
	vector<CEnemigo1*>arreglo8;
	vector<CEnemigo1*>arreglo9;
	vector<CEnemigo1*>arreglo10;
	vector<CEnemigo1*>arreglo11;
	vector<CEnemigo1*>arreglo12;
	vector<CEnemigo1*>arreglo13;
	vector<CEnemigo1*>arreglo14;
	vector<CEnemigo1*>arreglo15;
	vector<CEnemigo1*>arreglo16;
	vector<CEnemigo1*>arreglo17;
	vector<CEnemigo1*>arreglo18;
	vector<CEnemigo1*>arreglo19;
	vector<CEnemigo1*>arreglo20;

	vector<CEnemigo2*>arreglo21;
	vector<CEnemigo2*>arreglo22;
	vector<CEnemigo2*>arreglo23;
	vector<CEnemigo2*>arreglo24;

	int contadoArr;
	
	

public:
	CVector();
	~CVector();
	

	void agregarDisparo(int posX, int posY);
	void dibujarDisparo(BufferedGraphics ^buffer, Bitmap ^bmp);

	void eliminar1(BufferedGraphics ^buffer, int posY);
	void eliminar2(BufferedGraphics ^buffer, int posY);
	void eliminar3 (BufferedGraphics ^buffer, int posY);
	void eliminar4 (BufferedGraphics ^buffer, int posY);
	void eliminar5 (BufferedGraphics ^buffer, int posY);
	void eliminar6 (BufferedGraphics ^buffer, int posY);
	void eliminar7 (BufferedGraphics ^buffer, int posY);
	void eliminar8 (BufferedGraphics ^buffer, int posY);
	void eliminar9 (BufferedGraphics ^buffer, int posY);
	void eliminar10 (BufferedGraphics ^buffer, int posY);
	void eliminar11 (BufferedGraphics ^buffer, int posY);
	void eliminar12 (BufferedGraphics ^buffer, int posY);
	void eliminar13 (BufferedGraphics ^buffer, int posY);
	void eliminar14 (BufferedGraphics ^buffer, int posY);
	void eliminar15 (BufferedGraphics ^buffer, int posY);
	void eliminar16 (BufferedGraphics ^buffer, int posY);
	void eliminar17 (BufferedGraphics ^buffer, int posY);
	void eliminar18 (BufferedGraphics ^buffer, int posY);
	void eliminar19 (BufferedGraphics ^buffer, int posY);
	void eliminar20 (BufferedGraphics ^buffer, int posY);

	void eliminar21(BufferedGraphics ^buffer, int posY);
	void eliminar22(BufferedGraphics ^buffer, int posY);
	void eliminar23(BufferedGraphics ^buffer, int posY);
	void eliminar24(BufferedGraphics ^buffer, int posY);

	
	void agregarEnemigo(BufferedGraphics ^buffer, int tipo, int posY);
	void moverEnemigo(BufferedGraphics ^buffer, int tipo);
	void dibujarEnemigo(BufferedGraphics ^buffer, Bitmap ^bmp, int posY, int tipo);
	int  GETconARR();
	void SETconARR(int contadoArr);
	
	
	
};

