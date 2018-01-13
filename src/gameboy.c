#include "gameboy.h"
#include <stdlib.h>

void initGameboy(gameboy *console)
{
  console->cpu = malloc(sizeof(cpu_gameboy));
  initCPU(console->cpu);

  console->cpu->main.AF.WORD = 0x01B0;
  console->cpu->main.BC.WORD = 0x0013;
  console->cpu->main.DE.WORD = 0x00D8;
  console->cpu->main.HL.WORD = 0x014D;
  console->cpu->SP.WORD = 0xFFFE;

  console->cpu->memory[0xFF05] = 0x00;
  console->cpu->memory[0xFF06] = 0x00;
  console->cpu->memory[0xFF07] = 0x00;
  console->cpu->memory[0xFF10] = 0x80;
  console->cpu->memory[0xFF11] = 0xBF;
  console->cpu->memory[0xFF12] = 0xF3;
  console->cpu->memory[0xFF14] = 0xBF;
  console->cpu->memory[0xFF16] = 0x3F;
  console->cpu->memory[0xFF17] = 0x00;
  console->cpu->memory[0xFF19] = 0xBF;
  console->cpu->memory[0xFF1A] = 0x7F;
  console->cpu->memory[0xFF1B] = 0xFF;
  console->cpu->memory[0xFF1C] = 0x9F;
  console->cpu->memory[0xFF1E] = 0xBF;
  console->cpu->memory[0xFF20] = 0xFF;
  console->cpu->memory[0xFF21] = 0x00;
  console->cpu->memory[0xFF22] = 0x00;
  console->cpu->memory[0xFF23] = 0xBF;
  console->cpu->memory[0xFF24] = 0x77;
  console->cpu->memory[0xFF25] = 0xF3;
  console->cpu->memory[0xFF26] = 0xF1;
  console->cpu->memory[0xFF40] = 0x91;
  console->cpu->memory[0xFF42] = 0x00;
  console->cpu->memory[0xFF43] = 0x00;
  console->cpu->memory[0xFF45] = 0x00;
  console->cpu->memory[0xFF47] = 0xFC;
  console->cpu->memory[0xFF48] = 0xFF;
  console->cpu->memory[0xFF49] = 0xFF;
  console->cpu->memory[0xFF4A] = 0x00;
  console->cpu->memory[0xFF4B] = 0x00;
  console->cpu->memory[0xFFFF] = 0x00;
}

void deleteGameboy(gameboy *console)
{
  free(console->cpu);
}

void resetGameboy(gameboy *console)
{
  deleteGameboy(console);
  initGameboy(console);
}
