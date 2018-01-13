#ifndef GAMEBOY_H_
#define GAMEBOY_H_

#include "cpu.h"

typedef struct {
  cpu_gameboy *cpu;
}gameboy;

void initGameboy(gameboy *console);
void deleteGameboy(gameboy *console);
void resetGameboy(gameboy *console);

#endif
