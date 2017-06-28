#pragma once


class CDatos
{

	int puntaje;
	int combustible;
	int enemigos;


public:
	CDatos();
	~CDatos();


	int SETpuntaje();
	int SETcombustible();
	int SETenemigos();

	void GETpuntaje(int puntaje);
	void GETcombustible(int combustible);
	void GETenemigos(int enemigos);
};

