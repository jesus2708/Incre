#include "stdafx.h"  //________________________________________ Incre.cpp
#include "Incre.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Incre app;
	return app.BeginDialog(IDI_Incre, hInstance);
}

void Incre::Window_Open(Win::Event& e)
{
}

void Incre::btCalcular_Click(Win::Event& e)
{
	double x = 10;
	double y = 0;
	double input = tbxNumero.DoubleValue;
	if (input >= 1)
	{
		int resultado = input + 10;
		this->tbxNumero.DoubleValue = resultado;
	}
}

