#include "Jugador.h"


CJugador::CJugador()
{
}


CJugador::~CJugador()
{
}


CJugador::CJugador(int x, int y){

	this->x = x;
	this->y = y;
	ultima = Direcciones::Abajo;
	direccion = Direcciones::Ninguna;
	ancho = 56;
	alto = 68;
	indiceX = 0;
	indiceY = 0;
	vida = 3000;
	contMAPA=0;
	velox = -3;

	x_mapa = 0;
	y_mapa = 0;
	dx_mapa = 0;
	dy_mapa = 0;
	ancho_mapa = 640;
	alto_mapa = 960;
	

	colision = 0;
	colision_2 = 0;
	coordenada = 0;
}




int CJugador::GETx(){ return x; }
int CJugador::GETvida(){ return vida; }
int CJugador::GETy(){ return y; }
int CJugador::GETcolision(){ return colision; }
int CJugador::GETcolision_2(){ return colision_2; }
void CJugador::SETx(int x){ this->x = x; }
void CJugador::SETvida(int vida){ this->vida = vida; }
void CJugador::SETy(int y){ this->y = y; }
void CJugador::SETcolision(int colision){ this->colision = colision; }
void CJugador::SETcolision_2(int colision_2){ this->colision_2 = colision_2; }

int CJugador::GETvelox(){ return velox; }
void CJugador::SETvelox(int velox){ this->velox = velox; }

void CJugador::SETcoordenada(int coordenada){ this->coordenada = coordenada; }
int CJugador::GETcoordenada(){ return coordenada; }

int CJugador::GETcontMAPA(){ return contMAPA; }
void CJugador::SETcontMAPA(int contMAPA){ this->contMAPA = contMAPA; }

int CJugador::GETancho(){ return ancho; }
int CJugador::GETalto(){ return alto; }

void CJugador::SETancho(int ancho){ this->ancho = ancho; }
void CJugador::SETalto(int alto){ this->alto = alto; }

// DESARROLLO DEL JUEGO
void CJugador::dibujar_Juego(BufferedGraphics ^buffer, Bitmap ^bmp, Bitmap ^bmpMapa, int matriz[30][20], int cont){

	//CONTADOR CAMBIO DE MAPA
	contMAPA++;

	Rectangle CD = Rectangle((x+dx+15) , y+10, ancho-25 , alto-25 );
	Rectangle CA = Rectangle(x+10, (y+dy+15) , ancho-25 , alto-25 );
	Rectangle C2 = Rectangle(217, 0 ,207,32);
	
	int X, Y;
	buffer->Graphics->DrawImage(bmpMapa, X, Y - y, ancho_mapa, alto_mapa);
	SETcoordenada(Y - y);
	for (int i = 0; i <30; i++)
	{
		X = 0;
		for (int j = 0; j < 20; j++)
		{
			Rectangle C1 = Rectangle(X, Y - y, 32, 32);
			
			if (matriz[i][j] == 0 ){
			
				if (CD.IntersectsWith(C1))dx = 0;
				if (CA.IntersectsWith(C1))dy = 0;
				
			}
			if ( contMAPA >=1){
				if (CA.IntersectsWith(C2)){

					colision += 1;
					SETcontMAPA(0);
					x = 295;
					y = 425;
					
				}
				
			}

			X+= 32;
		}
		Y += 32;	
	}

	Rectangle porcionUsar(indiceX*ancho, indiceY*alto, ancho, alto);
	Rectangle aumento(x, y, ancho , alto );
	buffer->Graphics->DrawImage(bmp, aumento, porcionUsar, GraphicsUnit::Pixel);
	x += dx;
	y += dy;


	if (cont % 10 == 0){
		vida = vida - 30;
	}
	

}
void CJugador::mover_Juego(BufferedGraphics ^buffer, Bitmap ^bmp, Bitmap ^bmpMapa, int matriz[30][20], int cont){
	switch (direccion)
	{
	case Direcciones::Ninguna:
		dx= dy = 0;
		switch (ultima)
		{
		case Arriba:
		
			indiceX = 0;
			indiceY = 0;
			break;
		case Abajo:
			indiceX = 0;
			indiceY = 0;
			break;
		case Izquierda:
			indiceX = 0;
			indiceY = 0;
			break;
		case Derecha:
			indiceX = 0;
			indiceY = 0;
			break;

		}
		break;
	case  Direcciones::Arriba:
		indiceY = 0;
		if (indiceX = 0){
			indiceX++;

		}
		else
		{
			indiceX = 0;
		}
	
		dx = 0;
		dy= (GETvelox());
		ultima = Arriba;
		break;
	case  Direcciones::Abajo:
		indiceY = 0;
		if (indiceX = 0){
			indiceX++;

		}
		else
		{
			indiceX = 0;
		}
		
		dx= 0;
		dy = 15;
		ultima = Abajo;
		break;
	case  Direcciones::Izquierda:
		indiceY = 0;
		if (indiceX=0 )
			indiceX++;
		else
		{
			indiceX = 1;
		}
	
		dx = -15;
		dy = 0;
		ultima = Izquierda;
		break;
	case  Direcciones::Derecha:
		indiceY = 0;
		if (indiceX =1)
			indiceX++;
		else
		{
			indiceX = 2;
		}
	
		dx = 15;
		dy = 0;
		ultima = Derecha;
		break;

	}
	
	
	dibujar_Juego(buffer, bmp, bmpMapa,  matriz, cont);

}



