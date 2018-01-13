#ifndef GAMEBOY_H_
#define GAMEBOY_H_

#include "cpu.h"
#include "CartridgeROMONLY.h"

typedef struct {
  cpu_gameboy *cpu;
  CartridgeRomOnly_Gameboy *cartridge;
}gameboy;

void initGameboy(gameboy *console);
void deleteGameboy(gameboy *console);
void resetGameboy(gameboy *console);

void loadRom(char *filePath, gameboy *console);

#endif
