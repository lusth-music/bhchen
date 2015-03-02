#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


#define dir "/usr/local/share/samples/"
#define base "bass/plink_"


char *PROGRAM_NAME = "rpiano";
char *PROGRAM_VERSION = "0.01";

int
main()
    {

    int octave = 4;

    songInit();

    int instrument = readScale(dir,"piano/bright_");
    int instrument2 = readScale(dir, "vocals/doo_");
    setTempo(250);
    setTime(4,4);
    setStride(0.05);       
    setSustain(0.99995);    
    setAmplitude(0.3);    


    openOutput("rpiano.rra",0,0);
    int spot;

    int i;
    for (i = 0; i < 2; i++) {
        spot = getLocation();
        c(1, W/3, instrument, octave);
        c(1, W/3, instrument, octave);
        c(1, W/3, instrument, octave);

        c(6, W/3, instrument, octave - 1);
        c(6, W/3, instrument, octave - 1);
        c(6, W/3, instrument, octave - 1);

        ci2(4, W/3, instrument, octave - 1);
        ci2(4, W/3, instrument, octave - 1);
        ci2(4, W/3, instrument, octave - 1);

        ci2(5, W/3, instrument, octave - 1);
        ci2(5, W/3, instrument, octave - 1);
        ci2(5, W/3, instrument, octave - 1);

        /////////////////////////////////////////////////////////////////////

        setLocation(spot);
        play(W/3, instrument2, octave, C);
        play(W/3, instrument2, octave, E);
        play(W/3, instrument2, octave, G);

        play(W/3, instrument2, octave+1, C);
        play(W/3, instrument2, octave, B);
        play(W/3, instrument2, octave, A);

        play(W/3, instrument2, octave-1, A);
        play(W/3, instrument2, octave, C);
        play(W/3, instrument2, octave, E);

        play(W/3, instrument2, octave, G);
        play(W/3, instrument2, octave, F);
        play(W/3, instrument2, octave, E);
    }

    cpower2(1, W, instrument, octave);
    closeOutput();

    return 0;
    }








































