#include "auto.h"
#include "fahrzeug.h"

//Konstruktor der Klasse Auto
Auto::Auto(string m, string f)
{
    this->marke = m;
    this->farbe = f;
    this->setRandomKennzeichen();
}



//get-/set-Methoden
string Auto::getMarke() const
{
    return marke;
}

void Auto::setMarke(const string &value)
{
    marke = value;
}
