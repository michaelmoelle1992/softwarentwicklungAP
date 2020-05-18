#include "parkhaus.h"
#include "parkplatz.h"
#include "auto.h"


int main()
{
    //Wenn was nicht funktioniert, setz es in die main.cpp!!!
    srand(time(nullptr)); //Seed für Zufallszahlen darf nur einmal im Programm gesetzt werden

    Auto Doris("Opel","Quietschrot");
    Auto Alex("Mercedes","Schwarz");


    Parkhaus MoelleTower;

    int i;
    Parkplatz *plaetze[120]; //Ein Array aus Pointern (Danke Digga)

    for(i=0;i<119;i++)
    {
        plaetze[i] = new Parkplatz();
        MoelleTower + plaetze[i] ;

        //MoelleTower + new Parkplatz()
    }


    Alex.einfahren(&MoelleTower);
    Doris.einfahren(&MoelleTower);



    return 0;
}
