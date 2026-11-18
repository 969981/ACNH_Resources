
/* WARNING: Removing unreachable block (ram,0x036e58a4) */

uint FUN_036e5810(long param_1)

{
  uint *puVar1;
  
  if ((((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) &&
      ((*(int *)(param_1 + 0x14) == 4 || (*(int *)(param_1 + 0x14) == 5)))) || (DAT_04c487d4 == -1))
  {
    return 0;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  return *puVar1 >> 0x1a & 1;
}

