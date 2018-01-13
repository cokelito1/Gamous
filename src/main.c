#include <stdio.h>
#include <stdlib.h>

#include "cpu.h"

int main()
{
  cpu_gameboy *cpu = malloc(sizeof(cpu_gameboy));
  cpu->main.AF.WORD = 0x1234;

  printf("%d %d\n", cpu->main.AF.BYTES.H, cpu->main.AF.BYTES.L);

  free(cpu);
  return 0;
}
