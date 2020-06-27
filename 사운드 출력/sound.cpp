#include<stdio.h>
#include<Windows.h>

#define C1 32.7032
#define D1 36.7081
#define E1 41.2034
#define F1 43.6535
#define G1 48.9994
#define A1 55.0000
#define B1 61.7354

#define C2 65.4064 
#define D2 73.4162
#define E2 82.4069
#define F2 87.3071
#define G2 97.9989
#define A2 110.0000
#define B2 123.4708

#define C3 130.8128  
#define D3 146.8324
#define E3 164.8138
#define F3 174.6141
#define G3 195.9977
#define A3 220.0000
#define B3 246.9417

#define C4 261.6256  
#define D4 293.6648
#define E4 329.6276
#define F4 349.2282
#define G4 391.9954 
#define A4 440.0000
#define B4 493.8833

#define C5 523.2511  
#define D5 587.3295 
#define E5 659.2551
#define F5 698.4565
#define G5 783.9909
#define A5 880.0000
#define B5 987.7666

#define C6 1046.502
#define D6 1175
#define E6 1318.510
#define F6 1396.913
#define G6 1567.982
#define A6 1760.000
#define B6 1975.533

#define C7 2093.005 
#define D7 2349.318
#define E7 2637.020
#define F7 2793.826 
#define G7 3135.963 
#define A7 3520.000 
#define B7 3951.066

#define C8 4186.009 
#define D8 4698.636
#define E8 5274.041 
#define F8 5587.652
#define G8 6271.927
#define A8 7040.000 
#define B8 7902.133


void PrintBeep(DWORD A,int Duration)
{
    Beep(A, 100*Duration);
    Sleep(200);
    
}

//비행기 출력
void main()
{
    PrintBeep(E4, 3);
    PrintBeep(D4, 1);
    PrintBeep(C4, 2);
    PrintBeep(D4, 2);

    PrintBeep(E4, 2);
    PrintBeep(E4, 2);
    PrintBeep(E4, 6);

    PrintBeep(D4, 2);
    PrintBeep(D4, 2);
    PrintBeep(D4, 6);

    PrintBeep(E4, 2);
    PrintBeep(G4, 2);
    PrintBeep(G4, 6);

    PrintBeep(E4, 3);
    PrintBeep(D4, 1);
    PrintBeep(C4, 2);
    PrintBeep(D4, 2);

    PrintBeep(E4, 2);
    PrintBeep(E4, 2);
    PrintBeep(E4, 6);

    PrintBeep(D4, 2);
    PrintBeep(D4, 2);
    PrintBeep(E4, 3);
    PrintBeep(D4, 1);

    PrintBeep(C4, 8);

    return;
    
}