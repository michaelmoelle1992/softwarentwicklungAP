#ifndef KLASSEN_H
#define KLASSEN_H

#include<iostream>
#include<stdlib.h>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstdlib>
#include<time.h>
#include<ctime>

using namespace std;

//Klasse: Parklatz - abgeleitet von Parkhaus
class Parkplatz
{
private:
    int etage;
    int platzID;
    Parkplatz *next;
protected:

public:

};

//Klasse Parkhaus - Basisklasse
class Parkhaus
{
private:
   Parkplatz *erster_platz;
   Parkplatz *letzter_platz;

protected:

public:
   Parkhaus() {}
    ~Parkhaus() {}
};

//Klasse Fahrzeug - Basisklasse für Auto
class Fahrzeug
{
private:

protected:
    string kennzeichen;
public:
    Fahrzeug() {}
    ~Fahrzeug() {}

    //get/set-Funktionen
    string& getKennzeichen(void) {return this->kennzeichen;}
    void setRandomKennzeichen();
};

//Klasse Auto - abgeleitet von Fahrzeug
class Auto : public Fahrzeug
{
private:

protected:
    string marke;
    string farbe;

public:
    Auto();
    ~Auto();
};





#endif // KLASSEN_H
