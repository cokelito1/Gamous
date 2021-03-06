#ifndef GAMEBOY_H_
#define GAMEBOY_H_

#include "cpu.h"
#include "CartridgeROMONLY.h"

static const uint8_t NintendoLogo[] = {
  0xCE, 0xED, 0x66, 0x66, 0xCC, 0x0D, 0x00, 0x0B, 0x03, 0x73, 0x00, 0x83, 0x00, 0x0C, 0x00, 0x0D,
  0x00, 0x08, 0x11, 0x1F, 0x88, 0x89, 0x00, 0x0E, 0xDC, 0xCC, 0x6E, 0xE6, 0xDD, 0xDD, 0xD9, 0x99,
  0xBB, 0xBB, 0x67, 0x63, 0x6E, 0x0E, 0xEC, 0xCC, 0xDD, 0xDC, 0x99, 0x9F, 0xBB, 0xB9, 0x33, 0x3E,
};

typedef struct {
  cpu_gameboy *cpu;
  CartridgeRomOnly_Gameboy *cartridge;

  long long cycles;
}gameboy;

void initGameboy(gameboy *console);
void deleteGameboy(gameboy *console);
void resetGameboy(gameboy *console);

void loadRom(char *filePath, gameboy *console);

void run(gameboy *console);
void execute(gameboy *console);

#endif
