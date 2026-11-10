
long FUN_00173f14(byte *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    lVar1 = -1;
  }
  else {
    lVar1 = 0;
    do {
      if (*param_1 - 0x3a < 0xfffffff6 || 0xccccccccccccccc < lVar1) {
        return -1;
      }
      uVar2 = (ulong)(*param_1 - 0x30);
      if ((long)(uVar2 ^ 0x7fffffffffffffff) < lVar1 * 10) {
        return -1;
      }
      lVar1 = uVar2 + lVar1 * 10;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return lVar1;
}

