#include "klassen.h"

void Fahrzeug::setRandomKennzeichen()
{
    int i;

    int landkreis[3];
    char c_landkreis[3];
    int buchstaben[2];
    int zahlen[4];

    srand(unsigned(time(0)));

    //Funktion, um RandomKennzeichen zu generieren
    for(i=0;i<3;i++)
    {

        //Range für Landkreis: 65 bis 90 (A-Z /ASCI)
        landkreis[i] = rand() * (90 - 65) / RAND_MAX + 65;
        //ASCII-Wert in Buchstaben casten
        c_landkreis[i] = (char)landkreis[i];

        cout << "Zufallszahlen (ASCII): " << landkreis[i] << endl;
        cout << "Zufallsbuchstabe: " << c_landkreis[i] << endl;
    }


}
