
undefined8 FUN_014e44ac(void)

{
  uint *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(short)DAT_04c487d4;
  if (uVar3 != 0xffffffffffffffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) != 0) {
      return 1;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar3 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) != 0) {
      return 1;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar3 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) {
      return 1;
    }
  }
  uVar3 = FUN_0180c600();
  if ((uVar3 & 1) == 0) {
    if (DAT_04c487d4 == 0xffff) {
      return 0;
    }
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) >> 2 & 1) == 0) {
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)(short)DAT_04c487d4) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) == 0) {
        return 0;
      }
      uVar3 = FUN_0180ade0();
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
  }
  return 1;
}

