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

using namespace std;

//Klasse Fahrzeug - Basisklasse für Auto
class Fahrzeug
{
private:

protected:
    string kennzeichen;

public:
    Fahrzeug();
    virtual ~Fahrzeug() {}

    //get/set-Funktionen
    string& getKennzeichen(void) {return this->kennzeichen;}
    void setRandomKennzeichen();

    virtual bool einfahren(Parkhaus *p);
    virtual bool ausfahren(Parkhaus *p);


};

#endif // FAHRZEUG_H
