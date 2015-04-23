#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


#define dir "/usr/local/share/samples/"
#define base "bass/plink_"


char *PROGRAM_NAME = "bass";
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

    openOutput("bass.rra",0,0);
    int spot;

    setAmplitude(.08);


    play(W/2, instrument, octave-2,7);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,11);

    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    c(1, W/2, instrument, octave-1);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 11);

    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,9);
    c(6, W/2, instrument, octave-2);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,7);

    play(W/2, instrument, octave-2,5);
    play(W/2, instrument, octave-2,5);
    play(W/2, instrument, octave-2,5);
    ci2(4, W/2, instrument, octave-2);
    play(W/2, instrument, octave-2,5);
    play(W/2, instrument, octave-2,9);
    
    play(W/2, instrument, octave-2,7);
    play(W/2, instrument, octave-2,7);
    play(W/2, instrument, octave-2,7);
    ci2(5, W/2, instrument, octave-2);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,11);
 
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    c(1, W/2, instrument, octave-1);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 11);

    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,9);
    c(6, W/2, instrument, octave-2);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,7);

    play(W/2, instrument, octave-2,5);
    play(W/2, instrument, octave-2,5);
    play(W/2, instrument, octave-2,5);
    ci2(4, W/2, instrument, octave-2);
    play(W/2, instrument, octave-2,5);
    play(W/2, instrument, octave-2,5);
    
    ci2(5, W/2, instrument, octave-2);

    rest(6);  
    setAmplitude(.05);
    

// /////////////////////////////////////////////////////////////////////////
    


    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);
    
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 14);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);
    
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 9);
    play(W * 1.5, instrument, octave-2, 7);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);
    
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 14);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);
    
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 9);
    play(W * 1.5, instrument, octave-2, 7);

    rest(2);

    play(W/2, instrument, octave-1, 7);
    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 7);
    play(W/2, instrument, octave-1, 5);
    play(W/2, instrument, octave-1, 5);
    play(W/2, instrument, octave-1, 5);
    play(W/2, instrument, octave-1, 5);
    play(W/2, instrument, octave-1, 5);
    play(W/2, instrument, octave-1, 7);
    play(W/2, instrument, octave-1, 7);
    play(W/2, instrument, octave-1, 7);
    play(W/2, instrument, octave-1, 7);
    play(W/2, instrument, octave-1, 7);
    play(W/2, instrument, octave-1, 7);
    play(W/2, instrument, octave-1, 5);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);

    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 9);
    play(W/2, instrument, octave-1, 7);
    play(W/2, instrument, octave-1, 5);
    play(W/2, instrument, octave-1, 5);
    play(W/2, instrument, octave-1, 5);
    play(W/2, instrument, octave-1, 5);
    play(W/2, instrument, octave-1, 5);

    play(W/2, instrument, octave-1, 2);
    c(5, W/2, instrument, octave-2);
    c(5, W/2, instrument, octave-2);
    c(5, W/2, instrument, octave-2);
    c(5, W/2, instrument, octave-2);
    c(5, W/2, instrument, octave-2);
    c(5, W/2, instrument, octave-2);

    rest(6);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);
    
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 14);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);
    
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 9);
    play(W * 1.5, instrument, octave-2, 7);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);
    
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 14);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);

    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-1, 4);
    play(W/2, instrument, octave-2, 12);
    play(W * 1.5, instrument, octave-2, 12);
    
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 9);
    play(W * 1.5, instrument, octave-2, 7);



    rest(6);




    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    c(1, W/2, instrument, octave-1);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 11);

    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,9);
    c(6, W/2, instrument, octave-2);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,7);

    play(W/2, instrument, octave-2,5);
    play(W/2, instrument, octave-2,5);
    play(W/2, instrument, octave-2,5);
    ci2(4, W/2, instrument, octave-2);
    play(W/2, instrument, octave-2,5);
    play(W/2, instrument, octave-2,9);
    
    play(W/2, instrument, octave-2,7);
    play(W/2, instrument, octave-2,7);
    play(W/2, instrument, octave-2,7);
    ci2(5, W/2, instrument, octave-2);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,11);
 
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 12);
    c(1, W/2, instrument, octave-1);
    play(W/2, instrument, octave-2, 12);
    play(W/2, instrument, octave-2, 11);

    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,9);
    c(6, W/2, instrument, octave-2);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,7);

    play(W/2, instrument, octave-2,5);
    play(W/2, instrument, octave-2,5);
    play(W/2, instrument, octave-2,5);
    ci2(4, W/2, instrument, octave-2);
    play(W/2, instrument, octave-2,7);
    play(W/2, instrument, octave-2,9);
    
    play(W/2, instrument, octave-2,7);
    play(W/2, instrument, octave-2,7);
    play(W/2, instrument, octave-2,7);
    ci2(5, W/2, instrument, octave-2);
    play(W/2, instrument, octave-2,9);
    play(W/2, instrument, octave-2,11);

    c(1, W*2, instrument, octave-1);
    closeOutput();

    return 0;
    }








































