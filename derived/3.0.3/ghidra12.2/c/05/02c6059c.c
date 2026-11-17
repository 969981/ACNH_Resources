
uint FUN_02c6059c(long param_1,int param_2)

{
  long lVar1;
  
  if (DAT_0565e884 == param_2) {
    lVar1 = 0;
  }
  else if (DAT_0565e88c == param_2) {
    lVar1 = 1;
  }
  else if (DAT_0565e894 == param_2) {
    lVar1 = 2;
  }
  else if (DAT_0565e89c == param_2) {
    lVar1 = 3;
  }
  else if (DAT_0565e8a4 == param_2) {
    lVar1 = 4;
  }
  else if (DAT_0565e8ac == param_2) {
    lVar1 = 5;
  }
  else if (DAT_0565e8b4 == param_2) {
    lVar1 = 6;
  }
  else if (DAT_0565e8bc == param_2) {
    lVar1 = 7;
  }
  else if (DAT_0565e8c4 == param_2) {
    lVar1 = 8;
  }
  else if (DAT_0565e8cc == param_2) {
    lVar1 = 9;
  }
  else {
    if (DAT_0565e8d4 != param_2) {
      return 0;
    }
    lVar1 = 10;
  }
  if ((&DAT_0565e880)[lVar1 * 2] == 0xffffffff) {
    return 0;
  }
  return (uint)(*(ulong *)(param_1 + 8) >> ((ulong)(uint)(&DAT_0565e880)[lVar1 * 2] & 0x3f)) & 1;
}

