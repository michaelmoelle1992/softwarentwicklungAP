#ifndef PARKHAUS_H
#define PARKHAUS_H

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
using namespace std;
#include "parkplatz.h"

//Klasse Parkhaus - Basisklasse
class Parkhaus : public Parkplatz //In diesem Sinne die Liste
{
private:
   Parkplatz *erster_platz; //Hilfspointer
   Parkplatz *letzter_platz;

protected:

public:
   Parkhaus();
    ~Parkhaus() {}
   Parkplatz *getErster_platz() const;
   void setErster_platz(Parkplatz *value);
   Parkplatz *getLetzter_platz() const;
   void setLetzter_platz(Parkplatz *value);
   //Operator-Überladung (+) zum Hinzufügen der Parklätze
   Parkhaus& operator+(Parkplatz &p);
};

#endif // PARKHAUS_H
