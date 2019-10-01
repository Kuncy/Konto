#pragma once

class SparKonto
{
public:
	SparKonto();
	SparKonto(float);
	float getZins();
	void setZins(float);

protected:
	float Zins;
};