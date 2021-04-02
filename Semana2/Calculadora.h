#pragma once
class Calculadora
{
	//ATRIBUTOS O CARACTERISTICAS
private:
	int numero1;
	int numero2;
	//FUNCIONALIDAD
public:
	Calculadora();//FUNCIONALIDAD PARA CREAR OBJETOS DE CLASE
	~Calculadora();//ELIMINA EL OBJETO ALT+126 ~
	void Suma();
	void Resta();
	void Multiplicar();
	void Division();
	void Cambiar_valor_numero1(int nuevovalor);
	void Cambiar_valor_numero2(int nuevovalor);
	int Retornar_valor_numero1();
	int Retornar_valor_numero2();
};

