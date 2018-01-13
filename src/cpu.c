#include "cpu.h"

void initCPU(cpu_gameboy *cpu)
{
  cpu->SP = 0x00;
  cpu->PC = 0x00;

  for(int i=0; i<MEMORY_SIZE; i++)
    cpu->memory[i] = 0x00;

  cpu->main.AF.WORD = 0x00;
  cpu->main.BC.WORD = 0x00;
  cpu->main.DE.WORD = 0x00;
  cpu->main.HL.WORD = 0x00;
}
