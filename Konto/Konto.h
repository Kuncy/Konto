#ifndef KONTO_H
#define KONTO_H

#include <string>
#include "SparKonto.h"

class Konto:public SparKonto
{
public:
	Konto();
	Konto(double, std::string, std::string, float);
	~Konto();
	double GetKontostand();
	std::string GetName();
	std::string GetVName();
	int GetKontoNummer();
	void Einzahlen(double);
	void Auszahlen(double);
	void Kontoauszug();
	void BerechneZinsen();

protected:
	double Kontostand;
	std::string name;
	std::string vname;
	int Kontonummer;
	static int count;
};

#endif // KONTO_H
