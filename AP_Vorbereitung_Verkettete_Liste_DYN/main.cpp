#include "parkhaus.h"
#include "parkplatz.h"

int main()
{
    //Auto Doris("Opel","Quietschrot");

    Parkhaus MoelleTower;

    int i;
    Parkplatz *plaetze[120]; //Ein Array aus Pointern (Danke Digga)

    for(i=0;i<121;i++)
    {
        plaetze[i] = new Parkplatz();
        MoelleTower + plaetze[i] ;

        //MoelleTower + new Parkplatz()
    }


    return 0;
}
