#include <stdio.h>
#include <stdlib.h>

#include "gameboy.h"

int main()
{
  gameboy *console = malloc(sizeof(gameboy));
  initGameboy(console);
  loadRom("C:\\Users\\Coke\\Desktop\\Gamous\\build\\Debug\\tetris.gb", console);

  int test = 0;
  for(int i=0; i<2048; i++)
  {
    for(int j=0; j<16; j++)
    {
      printf("%d ", console->cartridge->rom[test]);
      test++;
    }
  }

  deleteGameboy(console);
  free(console);
  return 0;
}
