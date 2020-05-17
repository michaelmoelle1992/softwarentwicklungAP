#include "parkplatz.h"
//Globale Variable
int Parkplatz::platzCounter = 0;
int Parkplatz::etagenCounter = 0;



Parkplatz::Parkplatz()
{
    int etageCounter = 0;

    while(platzCounter < 121)
    {
        this->nextParkplatz = nullptr;
        this->platzID = ++platzCounter;
        cout << "Parkplatz ID: " << platzID << endl;

        if(platzCounter % 24)
        {
            this->etage = ++etageCounter;
            cout << "Parkdeck-Nr: " << etage << endl;
        }
        else
        {
            this->etage = etageCounter;
            cout << "Parkdeck-Nr: " << etage << endl;
        }
    }
    cout << "Die maximale Anzahl an Parklaetzen ist erreicht." << endl;

}


//get-/set-Methoden
int Parkplatz::getPlatzID() const
{
    return platzID;
}

void Parkplatz::setPlatzID(int value)
{
    platzID = value;
}

bool Parkplatz::getIsBelegt() const
{
    return isBelegt;
}

void Parkplatz::setIsBelegt(bool value)
{
    isBelegt = value;
}

int Parkplatz::getEtage() const
{
    return etage;
}

void Parkplatz::setEtage(int value)
{
    etage = value;
}

Parkplatz *Parkplatz::getNextParkplatz() const
{
    return nextParkplatz;
}

void Parkplatz::setNextParkplatz(Parkplatz *value)
{
    nextParkplatz = value;
}
