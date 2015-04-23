#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"

#define dir "/usr/local/share/samples/piano/"
#define base "bright_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "drums";
char *PROGRAM_VERSION = "0.01";



int main()
{
    int instrument;
    int octave = 2;
    int i;

    songInit();

    instrument = readScale(dir,base);

    setTempo(120);
    setTime(4,4);
    setStride(0.09);
    setSustain(0.99995);
    setAmplitude(0.2);

    openOutput("drums.rra",0,0);

    rest(2);

    int spot = getLocation();
    drumkitHHClosed(1,1,"----x---",SX);setLocation(spot);
    drumkitKick(1,1,    "x-----x-",SX);


    for (i = 0; i < 23; i++){
        spot = getLocation();
        drumkitHHClosed(1,1,"----x---",SX);setLocation(spot);
        drumkitKick(1,3,    "x-----x-",SX);
    }
    rest(.1);

    for (i = 0; i < 6; i++){
        spot = getLocation();
        drumkitHHClosed(1,1,"----x---",SX);setLocation(spot);
        drumkitKick(1,3,    "x-----x-",SX);
    }

    setTempo(90);

    drumkitKick(1,3,    "-xxxxxx-",SX);


    setTempo(120);
    rest(measuresToBeats(.5));


    for (i = 0; i < 15; i++){
        spot = getLocation();
        drumkitHHClosed(1,1,"----x---",SX);setLocation(spot);
        drumkitKick(1,3,    "x-----x-",SX);
    }
    spot = getLocation();
    drumkitHHClosed(1,1,"--------",SX);setLocation(spot);
    drumkitKick(1,3,    "x-------",SX);

    rest(.7);

    for (i = 0; i < 8; i++){
        spot = getLocation();
        drumkitHHClosed(1,1,"----x---",SX);setLocation(spot);
        drumkitKick(1,3,    "x-----x-",SX);
    }

    closeOutput();

    return 0;
}

