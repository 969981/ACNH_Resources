
uint FUN_016e6498(void)

{
  uint *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 0x1a & 1) != 0) && ((*puVar1 >> 1 & 1) != 0)) {
      return 1;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 0x1a & 1) != 0) && ((*puVar1 & 1) != 0)) {
      return 1;
    }
  }
  uVar3 = FUN_0180c600();
  if (((uVar3 & 1) != 0) ||
     (((uVar3 = FUN_016cf9f0(), (uVar3 & 1) != 0 && (DAT_0523adf0 != 0)) &&
      (*(int *)(DAT_0523adf0 + 0x98) != 0)))) {
    return 1;
  }
  if (DAT_04c487d4 == -1) {
    return 0;
  }
  puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar2 = PTR_DAT_04bc39f8;
  }
  return *(uint *)(puVar2 + 4) & 1;
}

