#include <stdio.h>
#include <stdlib.h>

#include "gameboy.h"

int main()
{
  gameboy *console = malloc(sizeof(gameboy));
  initGameboy(console);
  loadRom("C:\\Users\\Coke\\Desktop\\Gamous\\build\\Debug\\tetris.gb", console);

  run(console);

  deleteGameboy(console);
  free(console);
  return 0;
}
