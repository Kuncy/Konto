#include "Konto.h"
#include "SparKonto.h"
#include <iostream>
#include <string>

int Konto::count = 12345678;

Konto::Konto(){
	Kontostand = 0;
	count++;
	Kontonummer = count;
}
Konto::Konto(double uKontostand, std::string uname, std::string uvname, float uZins):SparKonto(uZins)
{
	Kontostand = uKontostand;
	name = uname;
	vname = uvname;
	count++;
	Kontonummer = count;
}
Konto::~Konto(){
}
int Konto::GetKontoNummer(){
	return Kontonummer;
}
double Konto::GetKontostand(){
	return Kontostand;
}
std::string Konto::GetName(){
	return name;
}
std::string Konto::GetVName(){
	return vname;
}
void Konto::Einzahlen(double uWert){
	if (uWert == 0) return;
	Kontostand += uWert;
}
void Konto::Auszahlen(double uWert){
	if (Kontostand > uWert||Kontostand <= -2000) return;
	if (uWert == 0) return;
	Kontostand -= uWert;
}
void Konto::Kontoauszug(){
	std::cout << " KontoInhaber: " << name << ", " << vname << std::endl;
	std::cout << " KontoNr: " << Kontonummer << " | " << Kontostand << " Euro" << std::endl;
}
float SparKonto::getZins(){
	return this->Zins;
}
void SparKonto::setZins(float Zins){
	this->Zins = Zins;
}
SparKonto::SparKonto() {

}
SparKonto::SparKonto(float Zins) {
	this->Zins = Zins;
}
void Konto::BerechneZinsen(){
	if (Zins <= 0) return;

	Kontostand += (Kontostand / 100)*Zins;
}