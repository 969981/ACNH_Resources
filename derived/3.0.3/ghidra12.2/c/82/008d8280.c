
undefined4 FUN_008d8280(void)

{
  uint *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_0180ae80();
  if ((uVar2 & 1) == 0) {
    if (DAT_04c487d4 != 0xffff) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)(short)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x13 & 1) != 0) {
        return 4;
      }
    }
    uVar2 = FUN_0180ae80();
    if (((uVar2 & 1) == 0) && (DAT_04c487d4 != 0xffff)) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)(short)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 & 1) != 0) {
        return 2;
      }
    }
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
      uVar3 = 3;
    }
    else {
      uVar2 = (ulong)(short)DAT_04c487d4;
      if (uVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)(short)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar1 >> 1 & 1) != 0) && ((*puVar1 >> 0x19 & 1) != 0)) {
          return 5;
        }
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar2 & 0xffffffff) * 8);
        if (0xff < DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar1 >> 1 & 1) == 0) || ((*puVar1 >> 0x19 & 1) == 0)) {
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar2 & 0xffffffff) * 8);
          if (0xff < DAT_04c487d4) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          uVar3 = 0;
          if ((*puVar1 & 2) != 0) {
            uVar3 = 6;
          }
          return uVar3;
        }
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

