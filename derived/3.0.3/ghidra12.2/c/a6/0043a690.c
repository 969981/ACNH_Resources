
ulong FUN_0043a690(long param_1,char param_2,int param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  
  if (0 < param_3) {
    lVar1 = 0;
    do {
      if (*(char *)(param_1 + lVar1) == '\0') {
        return 0xffffffff;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_3);
  }
  if (param_4 <= param_3) {
    return 0xffffffff;
  }
  uVar2 = (ulong)param_3;
  while( true ) {
    if (*(char *)(param_1 + uVar2) == '\0') {
      return 0xffffffff;
    }
    if (*(char *)(param_1 + uVar2) == param_2) break;
    uVar2 = uVar2 + 1;
    if ((long)param_4 <= (long)uVar2) {
      return 0xffffffff;
    }
  }
  return uVar2 & 0xffffffff;
}

