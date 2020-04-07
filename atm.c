#include "atm.h"

unsigned int get_money(unsigned short int money){
  unsigned int count = 0;
  unsigned int domination[8] = {2000, 500, 100, 50, 20, 10, 5, 1};
  unsigned short int remaining = money;
  if(remaining > 31999){
    return count;
  }
  int size = sizeof(domination)/sizeof(unsigned int);
  for(int i = 0;i < size;i++){
      count =  count << sizeof(unsigned int);
      count += remaining/domination[i];
      remaining = remaining % domination[i];
    }
  return count;
}