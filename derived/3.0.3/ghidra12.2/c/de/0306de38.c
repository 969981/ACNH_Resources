
void FUN_0306de38(void)

{
  uint *puVar1;
  ulong uVar2;
  
  if (((*(long *)(DAT_0537d558 + 0x10) != 0) && ((*(uint *)(DAT_0537d558 + 0x80) & 0xfffffffe) == 2)
      ) && (*(int *)(*(long *)(DAT_0537d558 + 0x10) + 0x3e4) != 1)) {
    FUN_0306ea20();
    return;
  }
  uVar2 = (ulong)(short)DAT_04c487d4;
  if (uVar2 != 0xffffffffffffffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x11 & 1) != 0) {
      FUN_0306ebdc();
      return;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar2 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x17 & 1) != 0) {
      FUN_0306ed98();
      return;
    }
  }
  if ((*(long *)(DAT_0537d558 + 0x28) != 0) && (*(int *)(DAT_0537d558 + 0x80) == 1)) {
    FUN_0306f234();
    return;
  }
  if (DAT_04c487d4 != 0xffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar2 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) {
      FUN_0306f3f0();
      return;
    }
  }
  FUN_0306faec();
  return;
}

