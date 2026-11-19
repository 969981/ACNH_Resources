
undefined8 FUN_03b47ab8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x14) == 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 == 0) {
      return 0;
    }
    lVar1 = *(long *)(lVar2 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar1 = lVar2 + 0x70;
    }
    if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x11) >> 5 & 1) == 0)) {
      FUN_03b60e78(0);
      if (DAT_05aebc00 == '\0') {
        uVar3 = FUN_03b46a00(0,*(long *)(param_1 + 8) + 8,0);
      }
      else {
        uVar3 = FUN_03b600e4(0,*(long *)(param_1 + 8) + 0x50,0);
      }
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 3;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return 1;
}

