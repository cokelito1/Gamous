#ifndef CPU_H_
#define CPU_H_

#include <stdint.h>

#define MEMORY_SIZE 0x10000

typedef union {
  uint16_t WORD;
  struct {
    #if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
    uint8_t L,H;
    #else
    uint8_t H,L;
    #endif
  }BYTES;
}register_gameboy;

typedef struct {
  register_gameboy AF, BC, DE, HL;
}bank_gameboy;

typedef struct {
  bank_gameboy main;

  uint8_t memory[MEMORY_SIZE];

  register_gameboy PC;
  register_gameboy SP;
}cpu_gameboy;

void initCPU(cpu_gameboy *);

void NOP(cpu_gameboy *);

#endif
