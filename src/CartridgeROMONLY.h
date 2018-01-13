#ifndef CARTRIDGEROMONLY_H_
#define CARTRIDGEROMONLY_H_

#include <stdint.h>

#define ROM_SIZE 32768

typedef struct {
  uint8_t rom[ROM_SIZE];
}CartridgeRomOnly_Gameboy;

void initCartridge(CartridgeRomOnly_Gameboy *cartridge);

#endif
