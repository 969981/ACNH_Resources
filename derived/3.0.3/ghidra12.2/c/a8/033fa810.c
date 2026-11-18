
byte FUN_033fa810(void)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  
  if ((DAT_05abff60 == 0) || (DAT_04c487d4 == -1)) {
    return 0;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((((*puVar1 >> 0x19 & 1) == 0) || (bVar2 = 7, (*puVar1 >> 7 & 1) == 0)) ||
     ((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0)))) {
    return 0;
  }
  if (DAT_05ab5ea8 == 0) {
    bVar3 = 0;
  }
  else if (*(int *)(DAT_05ab5ea8 + 0x14) == 4) {
    bVar3 = 1;
    bVar2 = 1;
  }
  else {
    bVar2 = *(int *)(DAT_05ab5ea8 + 0x14) == 5;
    bVar3 = 1;
  }
  return bVar3 & bVar2;
}

