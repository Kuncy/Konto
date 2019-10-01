#include <iostream>
#include "Konto.h"
#include <string>

using namespace std;

int main()
{
	int auswahl = 0;
	bool auswahlbeenden = false;
	double tmp = 0;
	Konto * k1 = new Konto(5000, "Mustermann", "Max",1.5);
	Konto * k2 = new Konto(350, "Adalbert", "Pnio",1.5);
	Konto * k3 = new Konto();

	k1->BerechneZinsen();
	cout << "Konto 1: " << k1->GetKontoNummer() << "|Zins: " << k1->getZins()<< "|KontoStand: " << k1->GetKontostand() << endl;
	cout << "Konto 2: " << k2->GetKontoNummer() << "|Zins: " << k2->getZins() << endl;
	cout << "Konto 3: " << k3->GetKontoNummer() << "|Zins: " << k3->getZins() << endl;


	do {
		cout << "Auswahl: " << endl;
		cout << "Kontostand Abfrage (1)" << endl;
		cout << "Einzahlen (2)" << endl;
		cout << "Auszahlen (3)" << endl;
		cout << "Kontoauszug (4)" << endl;
		cout << "Beenden (5)" << endl;
		cin >> auswahl;
		switch (auswahl)
		{
		case 1:
			cout << "Kontostand: " << k1->GetKontostand() << endl;
			auswahlbeenden = false;
			break;
		case 2:
			cout << "Bitte geben Sie einen Wert ein: " << endl;
			cin >> tmp;
			k1->Einzahlen(tmp);
			cout << "Es wurde " << tmp << " Euro eingezahlt" << endl;
			break;
		case 3:
			cout << "Bitte geben Sie einen Wert ein: " << endl;
			cin >> tmp;
			k1->Auszahlen(tmp);
			cout << "Es wurde " << tmp << " Euro ausgezahlt" << endl;
			break;
		case 4:
			k1->Kontoauszug();
			break;
		case 5:
			auswahlbeenden = true;
			break;
		}
	} while (auswahlbeenden != true);
	return 0;
}
