#include "fahrzeug.h"

//Konstruktor der Klasse Fahrzeug
Fahrzeug::Fahrzeug()
{
}

void Fahrzeug::setRandomKennzeichen()
{
    int i;

    string s_landkreis = "";
    string s_buchstaben = "";
    string s_zahlen = "";
    string s_kennzeichen = "";

    srand(unsigned(time(0)));

    for(i=0;i<3;i++)
    {
        //Range für Landkreis: 65 bis 90 (A-Z /ASCI)
        s_landkreis += (char)(rand() % (90 - 65 + 1) + 65);
        //ASCII-Wert in Buchstaben casten
        //Fiktiver Landkreis (Überprüfung folgt demnächst)
    }

    for(i=0;i<2;i++)
    {
        //Wunschbuchstaben nach dem Landkreis
        s_buchstaben += (char)(rand() % (90 - 65 + 1) + 65);
    }

    for(i=0;i<4;i++)
    {
        //Zahlen nach den Buchstaben
        //Zahlen laut ASCII-Tabelle: 48 - 57
         s_zahlen += std::to_string(rand() % (57 - 48 + 1) + 1);
    }

    s_kennzeichen = s_landkreis + '-' + s_buchstaben + '-' + s_zahlen;

    cout << "Zufaelliges Kennzeichen: " << s_kennzeichen << endl;

    this->kennzeichen = s_kennzeichen;
}


//Virtuelle Funktionen
bool Fahrzeug::einfahren()
{

}

bool Fahrzeug::ausfahren()
{

}

