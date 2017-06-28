#include "Gasolina.h"


Gasolina::Gasolina()
{
	x_gasolina=0;
	y_gasolina=0;
	ancho_gasolina=82;
	alto_gasolina=99;
}


Gasolina::~Gasolina()
{
}
int Gasolina::GETx_gasolina(){ return x_gasolina; }
int Gasolina::GETy_gasolina(){ return y_gasolina; }
int Gasolina::GETancho_gasolina(){ return ancho_gasolina; }
int Gasolina::GETalto_gasolina(){ return alto_gasolina;}
	
void Gasolina::SETx_gasolina(int x_gasolina){ this->x_gasolina = x_gasolina; }
void Gasolina::SETy_gasolina(int y_gasolina){ this->y_gasolina = y_gasolina; }
void Gasolina::SETancho_gasolina(int ancho_gasolina){ this->ancho_gasolina = ancho_gasolina; }
void Gasolina::SETalto_gasolina(int alto_gasolina){ this->alto_gasolina = alto_gasolina; }

void Gasolina::dibujar_gasolina(BufferedGraphics ^buffer, Bitmap ^bmp, int posX, int posY){
	buffer->Graphics->DrawImage(bmp, x_gasolina+posX, y_gasolina+posY, ancho_gasolina, alto_gasolina); 

}