
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00146f44(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((long)param_2 < 1) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = ram0x0407ebb2;
    return;
  }
  if (param_2 < 360000) {
    lVar2 = param_2 + (long)(int)((param_2 & 0xffffffff) / 0xe10) * -0xe10;
    iVar1 = (int)lVar2 / 0x3c;
    FUN_001460b8(param_1,9,"%2ld:%02ld:%02ld",(param_2 & 0xffffffff) / 0xe10,(long)iVar1,
                 lVar2 + (long)iVar1 * -0x3c);
    return;
  }
  if (param_2 < 86400000) {
    FUN_001460b8(param_1,9,"%3ldd %02ldh",param_2 / 0x15180,(param_2 % 0x15180) / 0xe10);
    return;
  }
  FUN_001460b8(param_1,9,"%7ldd");
  return;
}

