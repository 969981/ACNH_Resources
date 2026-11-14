
uint FUN_016e677c(byte *param_1)

{
  uint *puVar1;
  ulong uVar2;
  
  if (*param_1 < 8) {
    if (DAT_04c487d4 != 0xffff) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
      if (0xff < DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 6 & 1) != 0) && (uVar2 = FUN_02915598(), (uVar2 & 1) != 0)) {
        return 1;
      }
    }
  }
  else if (DAT_04c487d4 != 0xffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
    if (0xff < DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    return *puVar1 >> 6 & 1;
  }
  return 0;
}

