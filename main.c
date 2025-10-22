#include <stdio.h>
#include <stdlib.h>

//prototype
void Test(int altitude);


int main(void) {
  //kører test funktion
  Test(150);
  Test(100);
  Test(50);
  Test(0);
  Test(-1);
}

void Test(int altitude) {
  //Tænder eller slukker thruster
  int thruster = 0;
  if (altitude<=100 && altitude>0){
    thruster=1;
  }else {
    thruster=0;
  }
  //tjekker og den opfører sig ordentlig
  int behaviorCorrect = (altitude > 100 && thruster == 0) ||
                        (altitude <= 100 && altitude > 0 && thruster == 1) ||
                        (altitude <= 0 && thruster == 0);
  
  //svarer til if statement hvor hvis sandt så yes ellers så no
  char *behaviorCorrectIcon = behaviorCorrect ? "Yes" : "No";
  //printer svar 
  printf("For altitude %3d, your thruster is %d |%s|\n", altitude, thruster,
         behaviorCorrectIcon);
}