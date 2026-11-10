
ulong FUN_002a7450(int *param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  
  if (param_1[0x300] < 1) {
    return 0xffffffff;
  }
  uVar2 = 0;
  piVar1 = param_1;
  do {
    if (*piVar1 == param_2) {
      return uVar2 & 0xffffffff;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 6;
  } while ((uint)param_1[0x300] != uVar2);
  return 0xffffffff;
}

