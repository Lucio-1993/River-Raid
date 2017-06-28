#include "Datos.h"


CDatos::CDatos()
{
	puntaje = 0;
	combustible = 0;
	enemigos = 0;
}


CDatos::~CDatos()
{
}

int CDatos::SETpuntaje(){ return puntaje; }
int CDatos::SETcombustible(){ return combustible; }
int CDatos::SETenemigos(){ return enemigos; }

void CDatos::GETpuntaje(int puntaje){ this->puntaje = puntaje; }
void CDatos::GETcombustible(int combustible){ this->combustible = combustible; }
void CDatos::GETenemigos(int enemigos){ this->enemigos = enemigos; }