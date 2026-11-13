
uint FUN_00dc06a8(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_026f58bc(lVar4);
    pcVar2 = *(code **)(param_1 + 0xf0);
    uVar3 = *(ulong *)(param_1 + 0xf8) & 1;
    if (uVar3 == 0 && pcVar2 == (code *)0x0) {
      uVar1 = 0;
    }
    else {
      if (uVar3 != 0) {
        pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0xf8) >> 1)));
      }
      uVar1 = (*pcVar2)();
    }
    FUN_026f59a4(lVar4);
  }
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  return uVar1 & 1;
}

