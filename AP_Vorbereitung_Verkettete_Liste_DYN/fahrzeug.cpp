#include "fahrzeug.h"
#include "parkplatz.h"
#include "parkhaus.h"
//Konstruktor der Klasse Fahrzeug
Parkplatz *Fahrzeug::getBelegter_Platz() const
{
    return belegter_Platz;
}

void Fahrzeug::setBelegter_Platz(Parkplatz *value)
{
    belegter_Platz = value;
}

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
    int zahlen_i[3];
    char zahlen_c[3];

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
        zahlen_i[i] = rand() % (57 - 48 + 1) + 1;
        itoa(*(zahlen_i + i),(zahlen_c + i),10);
        s_zahlen += zahlen_c[i];
    }

    s_kennzeichen = s_landkreis + '-' + s_buchstaben + '-' + s_zahlen;

    cout << "Zufaelliges Kennzeichen: " << s_kennzeichen << endl;

    this->kennzeichen = s_kennzeichen;
}


//Virtuelle Funktionen
void Fahrzeug::einfahren(Parkhaus *p)
{
    //Wenn ein Fahrzeug einfährt soll es per Randomverfahren einen
    //Parkplatz auf einem Parkdeck zugewiesen werden
    int parkdeck = 0;
    int platz = 0;
    int j = 0;
    Parkplatz *location;

    //120Plätze / 5Parkdecks = 24

    parkdeck = rand() % (5 - 0 + 1) + 0;

    if(parkdeck == 0) platz = rand() % (24 - 0 + 1) + 0;
    else if(parkdeck == 1) platz = rand() % (48 - 24 + 1) + 24;
    else if(parkdeck == 2) platz = rand() % (72 - 48 + 1) + 48;
    else if(parkdeck == 3) platz = rand() % (96 - 72 + 1) + 72;
    else if(parkdeck == 4) platz = rand() % (120 - 96 + 1) + 96;

    location = p->getErster_platz();
    while(location != nullptr)
    {

       if(location->getPlatzID() == platz)
       {
           if(location->getIsBelegt() == true)
           {
               this->einfahren(p); //Rekusiver virtueller Methodenaufruf
           }
           else
           {

                location->setIsBelegt(true); //ES IST WAHR! DER PLATZ IST BESETZT
                setBelegter_Platz(location);
                cout << "Folgender Parklpatz wird belegt" << endl;
                cout << "Platz-ID: " << location->getPlatzID() << endl;
                cout << "Parkdeck: " << location->getEtage() << endl;
                cout << "Fahrzeug: " << this->kennzeichen << endl;

                break; //ABBRUCHBEDINGUNG
           }
       }
       location = location->getNextParkplatz();
       j++;
    }
}

void Fahrzeug::ausfahren(Parkhaus *p)
{
   Parkplatz *freizugebener_platz;

   freizugebener_platz = this->getBelegter_Platz();

   freizugebener_platz->setIsBelegt(false); //Ausfahrt! Aber rucki-zucki!

   cout << this->getKennzeichen() << " hat das Parkhaus Verlassen." << endl;
   cout << "Platz-ID: " << freizugebener_platz->getPlatzID() << " ist wieder frei." << endl;
}

