#include <stdio.h>
#include <stdlib.h>

#include "gameboy.h"

int main()
{
  gameboy *console = malloc(sizeof(gameboy));
  initGameboy(console);

  printf("%d %d\n", console->cpu->SP.WORD, console->cpu->SP.WORD);

  deleteGameboy(console);
  free(console);
  return 0;
}
