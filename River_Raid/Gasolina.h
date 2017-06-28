#pragma once
using namespace System;
using namespace System::Drawing;
class Gasolina
{
	int x_gasolina;
	int y_gasolina;
	int ancho_gasolina;
	int alto_gasolina;
public:
	Gasolina();
	~Gasolina();
	int GETx_gasolina();
	int GETy_gasolina();
	int GETancho_gasolina();
	int GETalto_gasolina();

	void SETx_gasolina(int x_gasolina);
	void SETy_gasolina(int y_gasolina);
	void SETancho_gasolina(int ancho_gasolina);
	void SETalto_gasolina(int alto_gasolina);

	void dibujar_gasolina(BufferedGraphics ^buffer, Bitmap ^bmp, int posX, int posY);
};

