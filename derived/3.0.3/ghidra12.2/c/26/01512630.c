
bool FUN_01512630(void)

{
  uint *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(short)DAT_04c487d4;
  if (uVar2 == 0xffffffffffffffff) {
LAB_01512730:
    return *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b ||
           *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)(short)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 3 & 1) == 0) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar2 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x11 & 1) == 0) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar2 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 0x17 & 1) == 0) || ((*puVar1 >> 1 & 1) == 0)) goto LAB_01512730;
    }
  }
  return true;
}

