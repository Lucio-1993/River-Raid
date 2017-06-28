#include "Vector.h"


CVector::CVector()
{
	
	contadoArr = 0;
}


CVector::~CVector()
{
}
void CVector::agregarDisparo(int posX, int posY){

	arr.push_back(new CDisparos(posX, posY));
	
}
void CVector::dibujarDisparo(BufferedGraphics ^buffer, Bitmap ^bmp){



	for (int i = 0; i < arr.size(); i++)
	{
		arr[i]->dibujar_disparo(buffer, bmp);
	
	}

	
}


void CVector::agregarEnemigo(BufferedGraphics ^buffer,int tipo, int posY){
	Random r;
	int dx;
	int x;
	int y;

	switch (tipo)
	{
	case 0:
		eliminar1(buffer,posY); 
		dx = r.Next(10, 15);
		x = r.Next(10, 50);
		y = r.Next(150, 200);
		arreglo1.push_back(new CEnemigo1(dx, x, y));  break;
	case 1:
		eliminar2(buffer, posY);
		dx = r.Next(15, 20);
		x = r.Next(60, 300);
		y = r.Next(250, 350);
		arreglo2.push_back(new CEnemigo1(dx, x, y)); break;
	case 2:
		eliminar3(buffer, posY);
		dx = r.Next(20, 25);
		x = r.Next(300, 500);
		y = r.Next(350, 450);
		arreglo3.push_back(new CEnemigo1(dx, x, y)); break;
	case 3:
		eliminar4(buffer, posY);
		dx = r.Next(25, 30);
		x = r.Next(60, 300);
		y = r.Next(450, 550);
		arreglo4.push_back(new CEnemigo1(dx, x, y)); break;
	case 4:
		eliminar5(buffer, posY);
		dx = r.Next(25, 30);
		x = r.Next(10, 50);
		y = r.Next(550, 600);
		arreglo5.push_back(new CEnemigo1(dx, x, y)); break;

	case 5:
		eliminar6(buffer, posY);
		dx = r.Next(10, 15);
		x = r.Next(10, 50);
		y = r.Next(150, 200);
		arreglo6.push_back(new CEnemigo1(dx, x, y)); break;
	case 6:
		eliminar7(buffer, posY);
		dx = r.Next(15, 20);
		x = r.Next(60, 300);
		y = r.Next(250, 350);
		arreglo7.push_back(new CEnemigo1(dx, x, y)); break;
	case 7:
		eliminar8(buffer, posY);
		dx = r.Next(20, 25);
		x = r.Next(300, 500);
		y = r.Next(350, 450);
		arreglo8.push_back(new CEnemigo1(dx, x, y)); break;
	case 8:
		eliminar9(buffer, posY);
		dx = r.Next(25, 30);
		x = r.Next(60, 300);
		y = r.Next(450, 550);
		arreglo9.push_back(new CEnemigo1(dx, x, y)); break;
	case 9:
		eliminar10(buffer, posY);
		dx = r.Next(25, 30);
		x = r.Next(10, 50);
		y = r.Next(550, 600);
		arreglo10.push_back(new CEnemigo1(dx, x, y)); break;///////////////////
	case 10:
		eliminar11(buffer, posY);
		dx = r.Next(10, 15);
		x = r.Next(10, 50);
		y = r.Next(150, 200);
		arreglo11.push_back(new CEnemigo1(dx, x, y)); break;
	case 11:
		eliminar12(buffer, posY);
		dx = r.Next(15, 20);
		x = r.Next(60, 300);
		y = r.Next(250, 350);
		arreglo12.push_back(new CEnemigo1(dx, x, y)); break;
	case 12:
		eliminar13(buffer, posY);
		dx = r.Next(20, 25);
		x = r.Next(300, 500);
		y = r.Next(350, 450);
		arreglo13.push_back(new CEnemigo1(dx, x, y)); break;
	case 13:
		eliminar14(buffer, posY);
		dx = r.Next(25, 30);
		x = r.Next(60, 300);
		y = r.Next(450, 550);
		arreglo14.push_back(new CEnemigo1(dx, x, y)); break;
	case 14:
		eliminar15(buffer, posY);
		dx = r.Next(25, 30);
		x = r.Next(10, 50);
		y = r.Next(550, 600);
		arreglo15.push_back(new CEnemigo1(dx, x, y)); break;
	case 15:
		eliminar16(buffer, posY);
		dx = r.Next(25, 30);
		x = r.Next(10, 50);
		y = r.Next(550, 600);
		arreglo16.push_back(new CEnemigo1(dx, x, y)); break;
	case 16:
		eliminar17(buffer, posY);
		dx = r.Next(15, 20);
		x = r.Next(60, 300);
		y = r.Next(250, 350);
		arreglo17.push_back(new CEnemigo1(dx, x, y)); break;
	case 17:
		eliminar18(buffer, posY);
		dx = r.Next(20, 25);
		x = r.Next(300, 500);
		y = r.Next(350, 450);
		arreglo18.push_back(new CEnemigo1(dx, x, y)); break;
	case 18:
		eliminar19(buffer, posY);
		dx = r.Next(25, 30);
		x = r.Next(60, 300);
		y = r.Next(450, 550);
		arreglo19.push_back(new CEnemigo1(dx, x, y)); break;
	case 19:
		eliminar20(buffer, posY);
		dx = r.Next(25, 30);
		x = r.Next(10, 50);
		y = r.Next(550, 600);
		arreglo20.push_back(new CEnemigo1(dx, x, y)); break;
	
	case 20:
		eliminar21(buffer, posY);
		dx = r.Next(15, 20);
		x = r.Next(60, 300);
		y = r.Next(250, 350);
		arreglo21.push_back(new CEnemigo2(dx, x, y)); break;
	case 21:
		eliminar22(buffer, posY);
		dx = r.Next(20, 25);
		x = r.Next(300, 500);
		y = r.Next(350, 450);
		arreglo22.push_back(new CEnemigo2(dx, x, y)); break;
	case 22:
		eliminar23(buffer, posY);
		dx = r.Next(25, 30);
		x = r.Next(60, 300);
		y = r.Next(450, 550);
		arreglo23.push_back(new CEnemigo2(dx, x, y)); break;
	case 23:
		eliminar24(buffer, posY);
		dx = r.Next(15, 20);
		x = r.Next(10, 50);
		y = r.Next(350, 600);
		arreglo24.push_back(new CEnemigo2(dx, x, y)); break;

	

	}

}
void CVector::dibujarEnemigo(BufferedGraphics ^buffer, Bitmap ^bmp, int posY,int tipo/*, Rectangle X*/){

	switch (tipo)
	{
	case 0:
		for (vector<CEnemigo1*>::iterator it = arreglo1.begin();
			it != arreglo1.end(); it++)
		{
			
			(*it)->dibujar_enemigo(buffer, bmp, posY/*, X*/); break;

		}break;
	case 1:
		for (vector<CEnemigo1*>::iterator it = arreglo2.begin();
			it != arreglo2.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*, X*/); break;

		}break;
	case 2:
		for (vector<CEnemigo1*>::iterator it = arreglo3.begin();
			it != arreglo3.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*, X*/); break;

		}break;
	case 3:
		for (vector<CEnemigo1*>::iterator it = arreglo4.begin();
			it != arreglo4.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*, X*/); break;

		}break;
	case 4:
		for (vector<CEnemigo1*>::iterator it = arreglo5.begin();
			it != arreglo5.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 5:
		for (vector<CEnemigo1*>::iterator it = arreglo6.begin();
			it != arreglo6.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 6:
		for (vector<CEnemigo1*>::iterator it = arreglo7.begin();
			it != arreglo7.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 7:
		for (vector<CEnemigo1*>::iterator it = arreglo8.begin();
			it != arreglo8.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 8:
		for (vector<CEnemigo1*>::iterator it = arreglo9.begin();
			it != arreglo9.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 9:
		for (vector<CEnemigo1*>::iterator it = arreglo10.begin();
			it != arreglo10.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 10:
		for (vector<CEnemigo1*>::iterator it = arreglo11.begin();
			it != arreglo11.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 11:
		for (vector<CEnemigo1*>::iterator it = arreglo12.begin();
			it != arreglo12.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 12:
		for (vector<CEnemigo1*>::iterator it = arreglo13.begin();
			it != arreglo13.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 13:
		for (vector<CEnemigo1*>::iterator it = arreglo14.begin();
			it != arreglo14.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 14:
		for (vector<CEnemigo1*>::iterator it = arreglo15.begin();
			it != arreglo15.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 15:
		for (vector<CEnemigo1*>::iterator it = arreglo16.begin();
			it != arreglo16.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 16:
		for (vector<CEnemigo1*>::iterator it = arreglo17.begin();
			it != arreglo17.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 17:
		for (vector<CEnemigo1*>::iterator it = arreglo18.begin();
			it != arreglo18.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 18:
		for (vector<CEnemigo1*>::iterator it = arreglo19.begin();
			it != arreglo19.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 19:
		for (vector<CEnemigo1*>::iterator it = arreglo20.begin();
			it != arreglo20.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 20:
		for (vector<CEnemigo2*>::iterator it = arreglo21.begin();
			it != arreglo21.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 21:
		for (vector<CEnemigo2*>::iterator it = arreglo22.begin();
			it != arreglo22.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 22:
		for (vector<CEnemigo2*>::iterator it = arreglo23.begin();
			it != arreglo23.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	case 23:
		for (vector<CEnemigo2*>::iterator it = arreglo24.begin();
			it != arreglo24.end(); it++)
		{

			(*it)->dibujar_enemigo(buffer, bmp, posY/*,X*/); break;

		}break;
	}

	

}
void CVector::moverEnemigo(BufferedGraphics ^buffer, int tipo){

	switch (tipo)
	{
	case 0:
		for (int i = 0; i < arreglo1.size(); i++)
		{

			arreglo1[i]->mover_enemigo(buffer); break;

		}break;
	case 1:
		for (int i = 0; i < arreglo2.size(); i++)
		{

			arreglo2[i]->mover_enemigo(buffer); break;

		}break;
	case 2:
		for (int i = 0; i < arreglo3.size(); i++)
		{

			arreglo3[i]->mover_enemigo(buffer); break;

		}break;
	case 3:
		for (int i = 0; i < arreglo4.size(); i++)
		{

			arreglo4[i]->mover_enemigo(buffer); break;

		}break;
	case 4:
		for (int i = 0; i < arreglo5.size(); i++)
		{

			arreglo5[i]->mover_enemigo(buffer); break;

		}break;
	
	case 5:
		for (int i = 0; i < arreglo6.size(); i++)
		{

			arreglo6[i]->mover_enemigo(buffer); break;

		}break;
	case 6:
		for (int i = 0; i < arreglo7.size(); i++)
		{

			arreglo7[i]->mover_enemigo(buffer); break;

		}break;
	case 7:
		for (int i = 0; i < arreglo8.size(); i++)
		{

			arreglo8[i]->mover_enemigo(buffer); break;

		}break;
	case 8:
		for (int i = 0; i < arreglo9.size(); i++)
		{

			arreglo9[i]->mover_enemigo(buffer); break;

		}break;
	case 9:
		for (int i = 0; i < arreglo10.size(); i++)
		{

			arreglo10[i]->mover_enemigo(buffer); break;

		}break;
	case 10:
		for (int i = 0; i < arreglo11.size(); i++)
		{

			arreglo11[i]->mover_enemigo(buffer); break;

		}break;
	case 11:
		for (int i = 0; i < arreglo12.size(); i++)
		{

			arreglo12[i]->mover_enemigo(buffer); break;

		}break;
	case 12:
		for (int i = 0; i < arreglo13.size(); i++)
		{

			arreglo13[i]->mover_enemigo(buffer); break;

		}break;
	case 13:
		for (int i = 0; i < arreglo14.size(); i++)
		{

			arreglo14[i]->mover_enemigo(buffer); break;

		}break;
	case 14:
		for (int i = 0; i < arreglo15.size(); i++)
		{

			arreglo15[i]->mover_enemigo(buffer); break;

		}break;
	case 15:
		for (int i = 0; i < arreglo16.size(); i++)
		{
			
			arreglo16[i]->mover_enemigo(buffer); break;

		}break;
	case 16:
		for (int i = 0; i < arreglo17.size(); i++)
		{

			arreglo17[i]->mover_enemigo(buffer); break;

		}break;
	case 17:
		for (int i = 0; i < arreglo18.size(); i++)
		{

			arreglo18[i]->mover_enemigo(buffer); break;

		}break;
	case 18:
		for (int i = 0; i < arreglo19.size(); i++)
		{

			arreglo19[i]->mover_enemigo(buffer); break;

		}break;
	case 19:
		for (int i = 0; i < arreglo20.size(); i++)
		{

			arreglo20[i]->mover_enemigo(buffer); break;

		}break;
	case 20:
		for (int i = 0; i < arreglo21.size(); i++)
		{

			arreglo21[i]->mover_enemigo(buffer); break;

		}break;
	case 21:
		for (int i = 0; i < arreglo22.size(); i++)
		{

			arreglo22[i]->mover_enemigo(buffer); break;

		}break;
	case 22:
		for (int i = 0; i < arreglo23.size(); i++)
		{

			arreglo23[i]->mover_enemigo(buffer); break;

		}break;
	case 23:
		for (int i = 0; i < arreglo24.size(); i++)
		{

			arreglo24[i]->mover_enemigo(buffer); break;

		}break;

	}


}

int  CVector::GETconARR(){ return contadoArr; }
void CVector::SETconARR(int contadoArr){ this->contadoArr = contadoArr; }


void CVector::eliminar1(BufferedGraphics ^buffer, int posY){

	for (int i = 0; i < arr.size(); i++)
		{
			
			Rectangle R2 = Rectangle(arr[i]->GETRecursoX() +15, arr[i]->GETRecursoY()-2  , 5, 2);
			
			
			for (int j = 0; j < arreglo1.size(); j++)
			{
				Rectangle R1 = Rectangle(arreglo1[j]->GETx_enemigo(), arreglo1[j]->GETy_enemigo() + posY, arreglo1[j]->GETancho_enemigo(), arreglo1[j]->GETalto_enemigo());
				
			
				if (R1.IntersectsWith(R2)){

					arreglo1[j]->SETdx_enemigo(0);
					arreglo1[j]->SETx_enemigo(-300);
					SETconARR(contadoArr + 10);

				}
				break;
		}
	}

	
	
}

void CVector::eliminar2(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() - 2, 5, 2);
	


		for (int j = 0; j < arreglo2.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo2[j]->GETx_enemigo(), arreglo2[j]->GETy_enemigo() + posY, arreglo2[j]->GETancho_enemigo(), arreglo2[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo2[j]->SETdx_enemigo(0);
				arreglo2[j]->SETx_enemigo(-300);
				SETconARR(contadoArr + 10);

			}break;
		}
	}


}



// LKDCLNDFVKJDFVKJNDKFVNKJFNVKJDNKVNKDNVJKNVNVNV   VJKFNVJKDNFKNDFVKJFV   JVKDFNVKDFNVJKDFNVJK

void CVector::eliminar3	(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{
		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() - 2, 5, 2);
		

		for (int j = 0; j < arreglo3.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo3[j]->GETx_enemigo(), arreglo3[j]->GETy_enemigo() + posY, arreglo3[j]->GETancho_enemigo(), arreglo3[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo3[j]->SETdx_enemigo(0);
				arreglo3[j]->SETx_enemigo(-300);
				SETconARR(contadoArr + 10);

			}
		
			
			
			
			
			break;
		}
	}



}
void CVector::eliminar4	(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{
		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() - 2, 5, 2);
	


		for (int j = 0; j < arreglo4.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo4[j]->GETx_enemigo(), arreglo4[j]->GETy_enemigo() + posY, arreglo4[j]->GETancho_enemigo(), arreglo4[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo4[j]->SETdx_enemigo(0);
				arreglo4[j]->SETx_enemigo(-400);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar5	(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() - 2, 5, 2);
		


		for (int j = 0; j < arreglo5.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo5[j]->GETx_enemigo(), arreglo5[j]->GETy_enemigo() + posY, arreglo5[j]->GETancho_enemigo(), arreglo5[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo5[j]->SETdx_enemigo(0);
				arreglo5[j]->SETx_enemigo(-500);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar6	(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{
		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() - 2, 5, 2);
		


		for (int j = 0; j < arreglo6.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo6[j]->GETx_enemigo(), arreglo6[j]->GETy_enemigo() + posY, arreglo6[j]->GETancho_enemigo(), arreglo6[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo6[j]->SETdx_enemigo(0);
				arreglo6[j]->SETx_enemigo(-600);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar7	(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 65, 5, 2);
		


		for (int j = 0; j < arreglo7.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo7[j]->GETx_enemigo(), arreglo7[j]->GETy_enemigo() + posY, arreglo7[j]->GETancho_enemigo(), arreglo7[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo7[j]->SETdx_enemigo(0);
				arreglo7[j]->SETx_enemigo(-700);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar8	(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{
		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 65, 5, 2);
		


		for (int j = 0; j < arreglo8.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo8[j]->GETx_enemigo(), arreglo8[j]->GETy_enemigo() + posY, arreglo8[j]->GETancho_enemigo(), arreglo8[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo8[j]->SETdx_enemigo(0);
				arreglo8[j]->SETx_enemigo(-800);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar9	(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 65, 5, 2);
		


		for (int j = 0; j < arreglo9.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo9[j]->GETx_enemigo(), arreglo9[j]->GETy_enemigo() + posY, arreglo9[j]->GETancho_enemigo(), arreglo9[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo9[j]->SETdx_enemigo(0);
				arreglo9[j]->SETx_enemigo(-900);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar10(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 65, 5, 2);
	


		for (int j = 0; j < arreglo10.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo10[j]->GETx_enemigo(), arreglo10[j]->GETy_enemigo() + posY, arreglo10[j]->GETancho_enemigo(), arreglo10[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo10[j]->SETdx_enemigo(0);
				arreglo10[j]->SETx_enemigo(-1000);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar11(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 65, 5, 2);
	


		for (int j = 0; j < arreglo11.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo11[j]->GETx_enemigo(), arreglo11[j]->GETy_enemigo() + posY, arreglo11[j]->GETancho_enemigo(), arreglo11[j]->GETalto_enemigo());
		

			if (R1.IntersectsWith(R2)){

				arreglo11[j]->SETdx_enemigo(0);
				arreglo11[j]->SETx_enemigo(-1100);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar12(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 65, 5, 2);
		


		for (int j = 0; j < arreglo12.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo12[j]->GETx_enemigo(), arreglo12[j]->GETy_enemigo() + posY, arreglo12[j]->GETancho_enemigo(), arreglo12[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo12[j]->SETdx_enemigo(0);
				arreglo12[j]->SETx_enemigo(-1200);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar13(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 65, 5, 2);
		


		for (int j = 0; j < arreglo13.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo13[j]->GETx_enemigo(), arreglo13[j]->GETy_enemigo() + posY, arreglo13[j]->GETancho_enemigo(), arreglo13[j]->GETalto_enemigo());
		


			if (R1.IntersectsWith(R2)){

				arreglo13[j]->SETdx_enemigo(0);
				arreglo13[j]->SETx_enemigo(-1300);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar14(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 65, 5, 2);
		


		for (int j = 0; j < arreglo14.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo14[j]->GETx_enemigo(), arreglo14[j]->GETy_enemigo() + posY, arreglo14[j]->GETancho_enemigo(), arreglo14[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo14[j]->SETdx_enemigo(0);
				arreglo14[j]->SETx_enemigo(-1400);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar15(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{
		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 65, 5, 2);
		


		for (int j = 0; j < arreglo15.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo15[j]->GETx_enemigo(), arreglo15[j]->GETy_enemigo() + posY, arreglo15[j]->GETancho_enemigo(), arreglo15[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo15[j]->SETdx_enemigo(0);
				arreglo15[j]->SETx_enemigo(-1500);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar16(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 200, 5, 2);
		

		for (int j = 0; j < arreglo16.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo16[j]->GETx_enemigo(), arreglo16[j]->GETy_enemigo() + posY, arreglo16[j]->GETancho_enemigo(), arreglo16[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo16[j]->SETdx_enemigo(0);
				arreglo16[j]->SETx_enemigo(-1600);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar17(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 200, 5, 2);
		


		for (int j = 0; j < arreglo17.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo17[j]->GETx_enemigo(), arreglo17[j]->GETy_enemigo() + posY, arreglo17[j]->GETancho_enemigo(), arreglo17[j]->GETalto_enemigo());
			

			if (R1.IntersectsWith(R2)){

				arreglo17[j]->SETdx_enemigo(0);
				arreglo17[j]->SETx_enemigo(-1700);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}
void CVector::eliminar18(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() +200, 5, 2);
		


		for (int j = 0; j < arreglo18.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo18[j]->GETx_enemigo(), arreglo18[j]->GETy_enemigo() + posY, arreglo18[j]->GETancho_enemigo(), arreglo18[j]->GETalto_enemigo());
			

			if (R1.IntersectsWith(R2)){

				arreglo18[j]->SETdx_enemigo(0);
				arreglo18[j]->SETx_enemigo(-1800);
				SETconARR(contadoArr + 10);

			}break;
		}
	}
}
void CVector::eliminar19(BufferedGraphics ^buffer, int posY){



		for (int i = 0; i < arr.size(); i++)
		{

			Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 200, 5, 2);
			


			for (int j = 0; j < arreglo19.size(); j++)
			{
				Rectangle R1 = Rectangle(arreglo19[j]->GETx_enemigo(), arreglo19[j]->GETy_enemigo() + posY, arreglo19[j]->GETancho_enemigo(), arreglo19[j]->GETalto_enemigo());
			


				if (R1.IntersectsWith(R2)){

					arreglo19[j]->SETdx_enemigo(0);
					arreglo19[j]->SETx_enemigo(-1900);
					SETconARR(contadoArr + 10);

				}break;
			}
		}



	}
void CVector::eliminar20(BufferedGraphics ^buffer, int posY){



		for (int i = 0; i < arr.size(); i++)
		{

			Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 300, 5, 2);
		


			for (int j = 0; j < arreglo20.size(); j++)
			{
				Rectangle R1 = Rectangle(arreglo20[j]->GETx_enemigo(), arreglo20[j]->GETy_enemigo() + posY, arreglo20[j]->GETancho_enemigo(), arreglo20[j]->GETalto_enemigo());
			


				if (R1.IntersectsWith(R2)){

					arreglo20[j]->SETdx_enemigo(0);
					arreglo20[j]->SETx_enemigo(-2000);
					SETconARR(contadoArr + 10);

				}break;
			}
		}



	}


//////////////////////////////////
void CVector::eliminar21(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{
		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 300, 5, 2);
		


		for (int j = 0; j < arreglo21.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo21[j]->GETx_enemigo(), arreglo21[j]->GETy_enemigo() + posY, arreglo21[j]->GETancho_enemigo(), arreglo21[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo21[j]->SETdx_enemigo(0);
				arreglo21[j]->SETx_enemigo(-2100);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}

void CVector::eliminar22(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 300, 5, 2);
		


		for (int j = 0; j < arreglo22.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo22[j]->GETx_enemigo(), arreglo22[j]->GETy_enemigo() + posY, arreglo22[j]->GETancho_enemigo(), arreglo22[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo22[j]->SETdx_enemigo(0);
				arreglo22[j]->SETx_enemigo(-2200);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}

void CVector::eliminar23(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{

		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 300, 5, 2);
		


		for (int j = 0; j < arreglo23.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo23[j]->GETx_enemigo(), arreglo23[j]->GETy_enemigo() + posY, arreglo23[j]->GETancho_enemigo(), arreglo23[j]->GETalto_enemigo());
			


			if (R1.IntersectsWith(R2)){

				arreglo23[j]->SETdx_enemigo(0);
				arreglo23[j]->SETx_enemigo(-2300);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}

void CVector::eliminar24(BufferedGraphics ^buffer, int posY){



	for (int i = 0; i < arr.size(); i++)
	{
		Rectangle R2 = Rectangle(arr[i]->GETRecursoX() + 15, arr[i]->GETRecursoY() + 300, 5, 2);
		

		for (int j = 0; j < arreglo24.size(); j++)
		{
			Rectangle R1 = Rectangle(arreglo24[j]->GETx_enemigo(), arreglo24[j]->GETy_enemigo() + posY, arreglo24[j]->GETancho_enemigo(), arreglo24[j]->GETalto_enemigo());
			

			if (R1.IntersectsWith(R2)){

				arreglo24[j]->SETdx_enemigo(0);
				arreglo24[j]->SETx_enemigo(-2400);
				SETconARR(contadoArr + 10);

			}break;
		}
	}



}