#ifndef PARKPLATZ_H
#define PARKPLATZ_H

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

//Klasse: Parklatz - abgeleitet von Parkhaus
class Parkplatz //in diesem Sinne ein Listenelement
{
private:

protected:
    int etage;
    int platzID;
    bool isBelegt = false; //false = nicht belegt
    Parkplatz *nextParkplatz;//true = belegt
    static int platzCounter;
    static int etagenCounter;
public:
    Parkplatz();
    ~Parkplatz() {}

    int getEtage() const;
    void setEtage(int value);
    int getPlatzID() const;
    void setPlatzID(int value);
    bool getIsBelegt() const;
    void setIsBelegt(bool value);
    Parkplatz *getNextParkplatz() const;
    void setNextParkplatz(Parkplatz *value);
};
#endif // PARKPLATZ_H
