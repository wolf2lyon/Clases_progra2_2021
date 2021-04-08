#include<iostream>
#include  <ctime>
#include  < conio.h >

#include<string>
using namespace std;
#pragma once
class CCuenta
{
public:
	CCuenta();
	CCuenta(string titula, double monto);
	~CCuenta();
	double getmonto();
	string gettitular();
	void deposito(double cantidad);
	bool retiro(double cantidad);
private:
	string titular;
	double monto;

};

CCuenta::CCuenta()
{
	titular = "";
	monto = 0;
}

CCuenta::~CCuenta()
{
}
CCuenta::CCuenta(string titular, double monto = 0)
{
	this->titular = titular;
	this->monto = monto;
}
double CCuenta::getmonto() { return monto; }
string CCuenta::gettitular() { return titular; }
void CCuenta::deposito(double cantidad) { monto += cantidad; }
bool CCuenta::retiro(double cantidad)
{
	if (cantidad > monto)return false;
	monto -= cantidad;
	return true;
}
