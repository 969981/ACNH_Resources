
void FUN_0096a3f8(long param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  if (((*(char *)(param_1 + 0x30) != '\a' || *(char *)(param_1 + 0x31) != '\a') ||
      *(char *)(param_1 + 0x32) != '\a') || *(char *)(param_1 + 0x33) != '\a') {
    if ((param_3 & 1) == 0) {
      uVar1 = *param_2;
      *param_2 = uVar1 | 4;
      if ((((*(byte *)(param_1 + 0x30) < 0x34) &&
           ((1L << ((ulong)*(byte *)(param_1 + 0x30) & 0x3f) & 0x8000000000300U) != 0)) &&
          (*(byte *)(param_1 + 0x31) < 0x34)) &&
         ((((1L << ((ulong)*(byte *)(param_1 + 0x31) & 0x3f) & 0x8000000000300U) != 0 &&
           (*(byte *)(param_1 + 0x32) < 0x34)) &&
          (((1L << ((ulong)*(byte *)(param_1 + 0x32) & 0x3f) & 0x8000000000300U) != 0 &&
           ((*(byte *)(param_1 + 0x33) < 0x34 &&
            ((1L << ((ulong)*(byte *)(param_1 + 0x33) & 0x3f) & 0x8000000000300U) != 0)))))))) {
        uVar1 = uVar1 | 0x8004;
      }
      else {
        uVar1 = uVar1 & 0xffff7fff | 4;
      }
    }
    else {
      uVar1 = *param_2 & 0xffff7ffb;
    }
    *param_2 = uVar1;
  }
  if ((((*(char *)(param_1 + 0x30) == '@') || (*(char *)(param_1 + 0x31) == '@')) ||
      (*(char *)(param_1 + 0x32) == '@')) || (*(char *)(param_1 + 0x33) == '@')) {
    uVar1 = *param_2 | 0x80000;
  }
  else {
    uVar1 = *param_2 & 0xfff7ffff;
  }
  *param_2 = uVar1;
  return;
}

