
uint FUN_02911fc0(ushort param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (param_1 == 0xffff) {
    return 0;
  }
  uVar2 = *param_2;
  if (0x22 < uVar2) {
    return 0;
  }
  puVar1 = &DAT_055c11c8 + ((long)(short)param_1 & 0xffffffffU) * 2;
  if ((param_1 & 0xff00) != 0) {
    puVar1 = &DAT_055c11c8;
  }
  return (uint)puVar1[(int)uVar2 >> 5] >> (ulong)(uVar2 & 0x1f) & 1;
}

