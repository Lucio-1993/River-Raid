#include "Enemigo.h"

CEnemigo1::CEnemigo1(int dx_enemigo, int x_enemigo, int y_enemigo)
{
	

	this->x_enemigo = x_enemigo;
	this->y_enemigo = y_enemigo;
	this->dx_enemigo = dx_enemigo;
	ancho_enemigo = 105;
	alto_enemigo = 61;
	indiceX_enemigo = 1;
	eliminar = false;
	contador = 0;
}


CEnemigo1::~CEnemigo1()
{
}

int CEnemigo1::GETx_enemigo(){ return x_enemigo; }
int CEnemigo1::GETy_enemigo(){ return y_enemigo; }
int CEnemigo1::GETindiceX_enemigo(){ return  indiceX_enemigo; }
int CEnemigo1::GETdx_enemigo(){ return dx_enemigo; }

void CEnemigo1::SETx_enemigo(int x_enemigo){ this->x_enemigo = x_enemigo; }
void CEnemigo1::SETy_enemigo(int y_enemigo){ this->y_enemigo = y_enemigo; }
void CEnemigo1::SETindiceX_enemigo(int indiceX_enemigo){ this->indiceX_enemigo = indiceX_enemigo; }
void CEnemigo1::SETdx_enemigo(int dx_enemigo){ this->dx_enemigo = dx_enemigo; }

int CEnemigo1::GETancho_enemigo(){ return ancho_enemigo; }
int CEnemigo1::GETalto_enemigo(){ return alto_enemigo; }

void CEnemigo1::SETancho_enemigo(int ancho_enemigo){ this->ancho_enemigo = ancho_enemigo; }
void CEnemigo1::SETalto_enemigo(int alto_enemigo){ this->alto_enemigo = alto_enemigo; }

bool CEnemigo1::GETeliminar(){ return eliminar; }
void CEnemigo1::SETeliminar(bool eliminar){ this->eliminar = eliminar; }

int CEnemigo1::GETcontador(){ return contador; }
void CEnemigo1::SETcontador(int contador){ this->contador = contador; }



void CEnemigo1::dibujar_enemigo(BufferedGraphics ^buffer, Bitmap ^bmpEnemigo, int posY/*, Rectangle X*/){
	Rectangle porcionUsarEnemigo(indiceX_enemigo*ancho_enemigo, 0, ancho_enemigo, alto_enemigo);
	buffer->Graphics->DrawImage(bmpEnemigo, x_enemigo, y_enemigo+posY, porcionUsarEnemigo, GraphicsUnit::Pixel);
	Rectangle E = Rectangle(x_enemigo, y_enemigo + posY, ancho_enemigo, alto_enemigo);
	if (x_enemigo + ancho_enemigo >= buffer->Graphics->VisibleClipBounds.Width){
		SETdx_enemigo(dx_enemigo*-1);
		SETindiceX_enemigo(0);
	}
	if (x_enemigo <= 0){
		SETdx_enemigo(dx_enemigo*-1);
		SETindiceX_enemigo(1);
	}
	x_enemigo += dx_enemigo;


}
void CEnemigo1::mover_enemigo(BufferedGraphics ^buffer){
	
	

}

CEnemigo2::CEnemigo2(int dx_enemigo, int x_enemigo, int y_enemigo)
{


	this->x_enemigo = x_enemigo;
	this->y_enemigo = y_enemigo;
	this->dx_enemigo = dx_enemigo;
	ancho_enemigo = 61;
	alto_enemigo = 105;
	indiceX_enemigo = 1;
	eliminar = false;
}


CEnemigo2::~CEnemigo2()
{
}

int CEnemigo2::GETx_enemigo(){ return x_enemigo; }
int CEnemigo2::GETy_enemigo(){ return y_enemigo; }
int CEnemigo2::GETindiceX_enemigo(){ return  indiceX_enemigo; }
int CEnemigo2::GETdx_enemigo(){ return dx_enemigo; }

void CEnemigo2::SETx_enemigo(int x_enemigo){ this->x_enemigo = x_enemigo; }
void CEnemigo2::SETy_enemigo(int y_enemigo){ this->y_enemigo = y_enemigo; }
void CEnemigo2::SETindiceX_enemigo(int indiceX_enemigo){ this->indiceX_enemigo = indiceX_enemigo; }
void CEnemigo2::SETdx_enemigo(int dx_enemigo){ this->dx_enemigo = dx_enemigo; }

int CEnemigo2::GETancho_enemigo(){ return ancho_enemigo; }
int CEnemigo2::GETalto_enemigo(){ return alto_enemigo; }

void CEnemigo2::SETancho_enemigo(int ancho_enemigo){ this->ancho_enemigo = ancho_enemigo; }
void CEnemigo2::SETalto_enemigo(int alto_enemigo){ this->alto_enemigo = alto_enemigo; }

bool CEnemigo2::GETeliminar(){ return eliminar; }
void CEnemigo2::SETeliminar(bool eliminar){ this->eliminar = eliminar; }


void CEnemigo2::dibujar_enemigo(BufferedGraphics ^buffer, Bitmap ^bmpEnemigo, int posY/*, Rectangle X*/){
	Rectangle porcionUsarEnemigo(indiceX_enemigo*ancho_enemigo, 0, ancho_enemigo, alto_enemigo);
	buffer->Graphics->DrawImage(bmpEnemigo, x_enemigo, y_enemigo + posY, porcionUsarEnemigo, GraphicsUnit::Pixel);
	Rectangle E = Rectangle(x_enemigo, y_enemigo + posY, ancho_enemigo, alto_enemigo);
	if (x_enemigo + ancho_enemigo >= buffer->Graphics->VisibleClipBounds.Width){
		SETdx_enemigo(dx_enemigo*-1);
		SETindiceX_enemigo(0);
	}
	if (x_enemigo <= 0){
		SETdx_enemigo(dx_enemigo*-1);
		SETindiceX_enemigo(1);
	}
	x_enemigo += dx_enemigo;


}
void CEnemigo2::mover_enemigo(BufferedGraphics ^buffer){



}