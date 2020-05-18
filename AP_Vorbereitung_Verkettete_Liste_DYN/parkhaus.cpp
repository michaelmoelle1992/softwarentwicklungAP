#include "parkhaus.h"

//Konstruktor der Klasse Parkhaus
Parkhaus::Parkhaus()
{
    cout << "Das Park-ANWESEN von Herrn Moelle ist hiermit eroeffnet!" << endl;
    cout << "Viele Vergnuegen!" << endl;

    this->erster_platz = nullptr;
    this->letzter_platz = nullptr;
}



//get-/set-Methoden
Parkplatz *Parkhaus::getLetzter_platz() const
{
    return letzter_platz;
}

void Parkhaus::setLetzter_platz(Parkplatz *value)
{
    letzter_platz = value;
}

Parkplatz *Parkhaus::getErster_platz() const
{
    return erster_platz;
}

void Parkhaus::setErster_platz(Parkplatz *value)
{
    erster_platz = value;
}


//Operator-Überladung
Parkhaus &Parkhaus::operator+(Parkplatz *p)
{
    Parkplatz *temp = this->erster_platz;

    if(temp == nullptr) //Erste Platz im Parkhaus
    {
        this->setErster_platz(p);
        this->setLetzter_platz(p);

        return *this;
    }
    else
    {
        while(temp->getNextParkplatz() != nullptr) //Gehe bis ans letzte Element
        {
            temp = temp->getNextParkplatz();
        }
        temp->setNextParkplatz(p);
        this->setLetzter_platz(p);

        return *this;
    }
}
