#ifndef CARTRIDGEROMONLY_H_
#define CARTRIDGEROMONLY_H_

#define ROM_SIZE 32768

typedef struct {
  uint8_t rom[ROM_SIZE];
}CartridgeRomOnly_Gameboy;

#endif
