#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


#define dir "/usr/local/share/samples/"
#define base "bass/plink_"


char *PROGRAM_NAME = "bass2";
char *PROGRAM_VERSION = "0.01";

int
main()
    {

    int octave = 4;
    songInit();
    int instrument = readScale(dir, "bass/plink_");
    setTempo(360);
    setTime(4,4);
    setStride(0.05);       
    setSustain(0.99995);    
    setAmplitude(0.2);    


    openOutput("bass2.rra",0,0);
    int spot;

    setAmplitude(.05);

    rest(measuresToBeats(25.5));


    int i;


    for (i = 0; i < 4; i++) {
        play(W/2, instrument, octave-3, 12);
        play(W/2, instrument, octave-3, 16);
        play(W/2, instrument, octave-3, 19);
        play(W/2, instrument, octave-3, 24);
        play(W/2, instrument, octave-3, 19);
        play(W/2, instrument, octave-3, 16);

        play(W/2, instrument, octave-3, 9);
        play(W/2, instrument, octave-3, 12);
        play(W/2, instrument, octave-3, 16);
        play(W/2, instrument, octave-3, 21);
        play(W/2, instrument, octave-3, 16);
        play(W/2, instrument, octave-3, 12);

        play(W/2, instrument, octave-3, 5);
        play(W/2, instrument, octave-3, 9);
        play(W/2, instrument, octave-3, 12);
        play(W/2, instrument, octave-3, 17);
        play(W/2, instrument, octave-3, 12);
        play(W/2, instrument, octave-3, 9);

        play(W/2, instrument, octave-3, 7);
        play(W/2, instrument, octave-3, 11);
        play(W/2, instrument, octave-3, 14);
        play(W/2, instrument, octave-3, 19);
        play(W/2, instrument, octave-3, 14);
        play(W/2, instrument, octave-3, 11);
    }


    rest(.3);
    c(6, W, instrument, octave-2);
    c(6, W/2, instrument, octave-2);
    c(6, W, instrument, octave-2);
    c(6, W/2, instrument, octave-2);
    c(4, W, instrument, octave-2);
    c(4, W/2, instrument, octave-2);
    c(4, W, instrument, octave-2);
    c(4, W/2, instrument, octave-2);
    c(5, W, instrument, octave-2);
    c(5, W/2, instrument, octave-2);
    c(5, W, instrument, octave-2);
    c(5, W/2, instrument, octave-2);
    c(3, W, instrument, octave-2);
    c(3, W/2, instrument, octave-2);
    c(3, W, instrument, octave-2);
    c(3, W/2, instrument, octave-2);
    c(6, W, instrument, octave-2);
    c(6, W/2, instrument, octave-2);
    c(6, W, instrument, octave-2);
    c(6, W/2, instrument, octave-2);
    c(4, W, instrument, octave-2);
    c(4, W/2, instrument, octave-2);
    c(4, W, instrument, octave-2);
    c(4, W/2, instrument, octave-2);

    rest(measuresToBeats(5.5));
    for (i = 0; i < 4; i++) {
        play(W/2, instrument, octave-3, 12);
        play(W/2, instrument, octave-3, 16);
        play(W/2, instrument, octave-3, 19);
        play(W/2, instrument, octave-3, 24);
        play(W/2, instrument, octave-3, 19);
        play(W/2, instrument, octave-3, 16);

        play(W/2, instrument, octave-3, 9);
        play(W/2, instrument, octave-3, 12);
        play(W/2, instrument, octave-3, 16);
        play(W/2, instrument, octave-3, 21);
        play(W/2, instrument, octave-3, 16);
        play(W/2, instrument, octave-3, 12);

        play(W/2, instrument, octave-3, 5);
        play(W/2, instrument, octave-3, 9);
        play(W/2, instrument, octave-3, 12);
        play(W/2, instrument, octave-3, 17);
        play(W/2, instrument, octave-3, 12);
        play(W/2, instrument, octave-3, 9);

        play(W/2, instrument, octave-3, 7);
        play(W/2, instrument, octave-3, 11);
        play(W/2, instrument, octave-3, 14);
        play(W/2, instrument, octave-3, 19);
        play(W/2, instrument, octave-3, 14);
        play(W/2, instrument, octave-3, 11);
    }


    closeOutput();

    return 0;
    }








































