#include "Disparos.h"

CDisparos::CDisparos()
{
}
CDisparos::CDisparos(int x_disparo, int y_disparo)
{
	this->x_disparo = x_disparo;
	this->y_disparo = y_disparo;
	dy_disparo=15;
	eliminar = false;
	RecursoX = x_disparo;
	RecursoY = y_disparo;
}


CDisparos::~CDisparos()
{
}

int CDisparos::GETx_disparo(){ return x_disparo; }
int CDisparos::GETy_disparo(){ return y_disparo; }
int CDisparos::GETdy_disparo(){ return dy_disparo; }

void CDisparos::SETx_disparo(int x_disparo){ this->x_disparo = x_disparo; }
void CDisparos::SETy_disparo(int y_disparo){ this->y_disparo = y_disparo; }
void CDisparos::SETdy_disparo(int dy_disparo){ this->dy_disparo = dy_disparo; }

bool CDisparos::GETeliminar(){ return eliminar; }
void CDisparos::SETeliminar(bool eliminar){ this->eliminar = eliminar; }

int CDisparos::GETRecursoX(){ return RecursoX; }
int CDisparos::GETRecursoY(){ return RecursoY-=5; }
void CDisparos::SETRecursoX(int value){ value = RecursoX; }
void CDisparos::SETRecursoY(int value){ value = RecursoY; }

void CDisparos::dibujar_disparo(BufferedGraphics ^buffer, Bitmap ^bmpDisparo){

	
	buffer->Graphics->DrawImage(bmpDisparo,x_disparo,y_disparo);
	
	y_disparo -= 8;
	Rectangle E = Rectangle(x_disparo+5, y_disparo+10, 30, 30);
	
	SETRecursoY(y_disparo -= dy_disparo);
}


