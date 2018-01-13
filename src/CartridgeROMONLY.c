#include "CartridgeROMONLY.h"

void initCartridge(CartridgeRomOnly_Gameboy *cartridge)
{
	for (int i = 0; i < ROM_SIZE; i++)
	{
		cartridge->rom[i] = 0x00;
	}
}
