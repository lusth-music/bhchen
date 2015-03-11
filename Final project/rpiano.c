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

    int bassOctave = 2;
    int guitarOctave = 4;

    songInit();

    // int instrument = readScale(dir,"piano/bright_");
    int instrument = readScale(dir,"bass/plink_");
    int instrument2 = readScale(dir, "guitar-acoustic/note_");
    setTempo(320);
    setTime(4,4);
    setStride(0.05);       
    setSustain(0.99995);    
    setAmplitude(0.2);    


    openOutput("rpiano.rra",0,0);
    int spot;

    // intro solo bass bit
    spot = getLocation();
    play(4, instrument, bassOctave, 3); 
    play(4, instrument, bassOctave, 3);
    play(1, instrument, bassOctave, 3);
    play(1, instrument, bassOctave, 3);
    play(1, instrument, bassOctave, 3);
    play(1, instrument, bassOctave, 3);
    play(1, instrument, bassOctave, 3);
    play(1, instrument, bassOctave, 3);
    play(1, instrument, bassOctave, 5);
    play(1, instrument, bassOctave, 7);
    //
    play(1, instrument, bassOctave, 8);
    play(1, instrument, bassOctave, 8);
    play(1, instrument, bassOctave, 12); 
    play(1, instrument, bassOctave, 12);
    play(1, instrument, bassOctave, 15); 
    play(1, instrument, bassOctave, 15);
    play(1, instrument, bassOctave, 17); 
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 18); 
    play(1, instrument, bassOctave, 18);
    play(1, instrument, bassOctave, 17); 
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 15); 
    play(1, instrument, bassOctave, 15);
    play(1, instrument, bassOctave, 12); 
    play(1, instrument, bassOctave, 12);
    play(1, instrument, bassOctave, 8);
    play(1, instrument, bassOctave, 8);
    play(1, instrument, bassOctave, 12); 
    play(1, instrument, bassOctave, 12);
    play(1, instrument, bassOctave, 15); 
    play(1, instrument, bassOctave, 15);
    play(1, instrument, bassOctave, 17); 
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 18); 
    play(1, instrument, bassOctave, 18);
    play(1, instrument, bassOctave, 17); 
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 15); 
    play(1, instrument, bassOctave, 15);
    play(1, instrument, bassOctave, 12); 
    play(1, instrument, bassOctave, 12);

    play(1, instrument, bassOctave, 13);
    play(1, instrument, bassOctave, 13);
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 20);
    play(1, instrument, bassOctave, 20);
    play(1, instrument, bassOctave, 22);
    play(1, instrument, bassOctave, 22);
    play(1, instrument, bassOctave, 23);
    play(1, instrument, bassOctave, 23);
    play(1, instrument, bassOctave, 22);
    play(1, instrument, bassOctave, 22);
    play(1, instrument, bassOctave, 20);
    play(1, instrument, bassOctave, 20);
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 17);

    play(1, instrument, bassOctave, 8);
    play(1, instrument, bassOctave, 8);
    play(1, instrument, bassOctave, 12); 
    play(1, instrument, bassOctave, 12);
    play(1, instrument, bassOctave, 15); 
    play(1, instrument, bassOctave, 15);
    play(1, instrument, bassOctave, 17); 
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 18); 
    play(1, instrument, bassOctave, 18);
    play(1, instrument, bassOctave, 17); 
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 15); 
    play(1, instrument, bassOctave, 15);
    play(1, instrument, bassOctave, 12); 
    play(1, instrument, bassOctave, 12);


    play(1, instrument, bassOctave, 15); 
    play(1, instrument, bassOctave, 15);
    play(1, instrument, bassOctave, 19); 
    play(1, instrument, bassOctave, 19);
    play(1, instrument, bassOctave, 22); 
    play(1, instrument, bassOctave, 22);
    play(1, instrument, bassOctave, 19); 
    play(1, instrument, bassOctave, 19);

    play(1, instrument, bassOctave, 13); 
    play(1, instrument, bassOctave, 13);
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 20);
    play(1, instrument, bassOctave, 20);
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 17);

    play(1, instrument, bassOctave, 8);
    play(1, instrument, bassOctave, 8);
    play(1, instrument, bassOctave, 12); 
    play(1, instrument, bassOctave, 12);
    play(1, instrument, bassOctave, 15); 
    play(1, instrument, bassOctave, 15);
    play(1, instrument, bassOctave, 17); 
    play(1, instrument, bassOctave, 15);
    setLocation(spot);
    //drumb section for intro
    drumkitKick(1, 1.5, "x---------------", SX);
    drumkitKick(1, 1.5, "x---------------", SX);
    drumkitKick(1, 1.5, "x---x---x---x---", SX);
    drumkitKick(1, 1.5, "x---x---x---x---", SX);
    int i;
    for (i = 0; i < 11; i++) {
        spot = getLocation();
        drumkitKick(1, 1.5, "x---------------", SX);setLocation(spot);
        drumkitSnare(1, 1, "--------x-------", SX);setLocation(spot);
        drumkitHHOpen(1, .3, "x---x---x---x---", SX);
        spot = getLocation();
        drumkitKick(1, 1.5, "----x-----------", SX);setLocation(spot);
        drumkitSnare(1, 1, "--------x-------", SX);setLocation(spot);
        drumkitHHOpen(1, .3, "x---x---x---x---", SX);
    }

    spot = getLocation();
    drumkitKick(1, 1.5, "----x---x---x---", SX);
    drumkitKick(1, 1.5, "x---x---x---x---", SX); setLocation(spot);
    drumkitSnare(1, 2, "----x---x---x---", SX);
    drumkitSnare(1, 2, "x---x---x---x---", SX); setLocation(spot);
    drumkitHHOpen(1, .5, "----x---x---x---", SX);
    drumkitHHOpen(1, .5, "x---x---x---x---", SX);

    setLocation(spot);
    rest(1); 
    play(1, instrument, bassOctave, 18);
    play(1, instrument, bassOctave, 18); 
    play(1, instrument, bassOctave, 18);
    play(1, instrument, bassOctave, 18); 
    play(1, instrument, bassOctave, 18);
    play(1, instrument, bassOctave, 18); 
    play(1, instrument, bassOctave, 18);

    setLocation(spot);
    rest(1);
    setAmplitude(.1);
    c(5, W/4, instrument2, guitarOctave);
    c(5, W/4, instrument2, guitarOctave);
    c(5, W/4, instrument2, guitarOctave);
    c(5, W/4, instrument2, guitarOctave);
    c(5, W/4, instrument2, guitarOctave);
    c(5, W/4, instrument2, guitarOctave);
    c(5, W/4, instrument2, guitarOctave);

    // // // /////////////////////////////////////////intro ends here/////////////////////////////////////////////////

    spot = getLocation();

    setAmplitude(.07);
    for (i = 0; i < 2; i++) {
        play(1, instrument, bassOctave, 8);
        play(1, instrument, bassOctave, 8);
        play(1, instrument, bassOctave, 12); 
        play(1, instrument, bassOctave, 12);
        play(1, instrument, bassOctave, 15); 
        play(1, instrument, bassOctave, 15);
        play(1, instrument, bassOctave, 17); 
        play(1, instrument, bassOctave, 17);
        play(1, instrument, bassOctave, 18); 
        play(1, instrument, bassOctave, 18);
        play(1, instrument, bassOctave, 17); 
        play(1, instrument, bassOctave, 17);
        play(1, instrument, bassOctave, 15); 
        play(1, instrument, bassOctave, 15);
        play(1, instrument, bassOctave, 12); 
        play(1, instrument, bassOctave, 12);
    }
    play(1, instrument, bassOctave, 13);
    play(1, instrument, bassOctave, 13);
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 20);
    play(1, instrument, bassOctave, 20);
    play(1, instrument, bassOctave, 22);
    play(1, instrument, bassOctave, 22);
    play(1, instrument, bassOctave, 23);
    play(1, instrument, bassOctave, 23);
    play(1, instrument, bassOctave, 22);
    play(1, instrument, bassOctave, 22);
    play(1, instrument, bassOctave, 20);
    play(1, instrument, bassOctave, 20);
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 17);

    play(1, instrument, bassOctave, 8);
    play(1, instrument, bassOctave, 8);
    play(1, instrument, bassOctave, 12); 
    play(1, instrument, bassOctave, 12);
    play(1, instrument, bassOctave, 15); 
    play(1, instrument, bassOctave, 15);
    play(1, instrument, bassOctave, 17); 
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 18); 
    play(1, instrument, bassOctave, 18);
    play(1, instrument, bassOctave, 17); 
    play(1, instrument, bassOctave, 17);
    play(1, instrument, bassOctave, 15); 
    play(1, instrument, bassOctave, 15);
    play(1, instrument, bassOctave, 12); 
    play(1, instrument, bassOctave, 12);

    
    setLocation(spot);
    int spot2;
    //drumb section for intro

    setAmplitude(.13);
    for (i = 0; i < 8; i++) {
        spot2 = getLocation();
        drumkitKick(1, 1.5, "x---------------", SX);setLocation(spot2);
        drumkitSnare(1, 1, "--------x-------", SX);setLocation(spot2);
        drumkitHHOpen(1, .3, "x---x---x---x---", SX);
        spot2 = getLocation();
        drumkitKick(1, 1.5, "----x-----------", SX);setLocation(spot2);
        drumkitSnare(1, 1, "--------x-------", SX);setLocation(spot2);
        drumkitHHOpen(1, .3, "x---x---x---x---", SX);
    }


    setLocation(spot);

    setAmplitude(.06);
    for (i = 0; i < 4; i++) {
        c(5, W/2, instrument2, guitarOctave);
        c(5, W/4, instrument2, guitarOctave);
        c(5, W/2, instrument2, guitarOctave);
        c(5, W/2, instrument2, guitarOctave);
        c(5, W/4, instrument2, guitarOctave);
    }
    for (i = 0; i < 2; i++) {
        c(8, W/2, instrument2, guitarOctave);
        c(8, W/4, instrument2, guitarOctave);
        c(8, W/2, instrument2, guitarOctave);
        c(8, W/2, instrument2, guitarOctave);
        c(8, W/4, instrument2, guitarOctave);
    }
    for (i = 0; i < 2; i++) {
        c(5, W/2, instrument2, guitarOctave);
        c(5, W/4, instrument2, guitarOctave);
        c(5, W/2, instrument2, guitarOctave);
        c(5, W/2, instrument2, guitarOctave);
        c(5, W/4, instrument2, guitarOctave);
    }


    closeOutput();

    return 0;
    }








































