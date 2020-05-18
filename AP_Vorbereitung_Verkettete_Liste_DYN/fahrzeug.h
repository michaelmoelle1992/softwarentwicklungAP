#ifndef FAHRZEUG_H
#define FAHRZEUG_H

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstdio>
#include<cmath>
#include<string>
#include<string.h>
#include<cstdlib>
#include<time.h>
#include<ctime>
#include<cstring>
#include"parkhaus.h"
#include"parkplatz.h"

using namespace std;

//Klasse Fahrzeug - Basisklasse für Auto
class Fahrzeug
{
private:

protected:
    string kennzeichen;
    Parkplatz *belegter_Platz;

public:
    Fahrzeug();
    virtual ~Fahrzeug() {}

    //get/set-Funktionen
    string& getKennzeichen(void) {return this->kennzeichen;}
    void setRandomKennzeichen();

    virtual void einfahren(Parkhaus *p);
    virtual void ausfahren(Parkhaus *p);


    Parkplatz *getBelegter_Platz() const;
    void setBelegter_Platz(Parkplatz *value);
};

#endif // FAHRZEUG_H
