
uint FUN_02917388(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if ((long)(short)DAT_04c487cc == 0xffffffffffffffff) {
    return 0;
  }
  uVar2 = *param_1;
  if (0x22 < uVar2) {
    return 0;
  }
  puVar1 = &DAT_055c11c8 + ((long)(short)DAT_04c487cc & 0xffffffffU) * 2;
  if (0xff < DAT_04c487cc) {
    puVar1 = &DAT_055c11c8;
  }
  return (uint)puVar1[(int)uVar2 >> 5] >> (ulong)(uVar2 & 0x1f) & 1;
}

