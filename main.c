#include <stdio.h>
#include "atm.h"

int display_notes(unsigned int notes){
  unsigned int dominations[8] = {1,5,10,20,50,100,500,2000},position = 0xf;
  int num_of_notes;
  for(int i = 0; i < 8; i++){
    num_of_notes=notes & position;
    if(num_of_notes){
    printf("%u notes of %u\n",num_of_notes,dominations[i]);
    }
    notes = notes >> 4;
  }
  return 0;
}

int main(void){
  unsigned short int amounts[] = {1, 10, 39, 589, 2590, 31999};
  for (int i = 0; i < 6; i++){
    unsigned int notes = get_money(amounts[i]);
    printf("%5u %08x\n", amounts[i], notes);
    display_notes(notes);
  }

  return 0;
}
