
undefined8 FUN_001139a0(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (*param_1 != 0) {
    if ((param_2 & 0xffff) == 0) {
      return 0;
    }
    uVar1 = param_2 - 1 & 0xffff;
    if (*(ushort *)(param_1 + 3) <= uVar1) {
      return 0;
    }
    if ((0x80U >> (ulong)(param_2 - 1 & 7) & (uint)*(byte *)(*param_1 + (ulong)(uVar1 >> 3))) == 0)
    {
      if (*(short *)((long)param_1 + 0x1a) == 0) {
        return 0;
      }
    }
    else if (*(short *)((long)param_1 + 0x1a) != 0) {
      return 0;
    }
  }
  if (param_1[1] != 0) {
    if ((param_3 & 0xffff) == 0) {
      return 0;
    }
    uVar1 = param_3 - 1 & 0xffff;
    if (*(ushort *)((long)param_1 + 0x1c) <= uVar1) {
      return 0;
    }
    if ((0x80U >> (ulong)(param_3 - 1 & 7) & (uint)*(byte *)(param_1[1] + (ulong)(uVar1 >> 3))) == 0
       ) {
      if (*(short *)((long)param_1 + 0x1e) == 0) {
        return 0;
      }
    }
    else if (*(short *)((long)param_1 + 0x1e) != 0) {
      return 0;
    }
  }
  return 1;
}

