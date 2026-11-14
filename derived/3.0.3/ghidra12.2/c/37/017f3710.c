
undefined4 FUN_017f3710(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0xa8);
  if (iVar2 == 1) {
    return 1;
  }
  if ((1 < iVar2) && (iVar2 < 6)) {
    return 2;
  }
  if ((5 < iVar2) && (iVar2 < 0x11)) {
    return 3;
  }
  if ((0x10 < iVar2) && (iVar2 < 0x13)) {
    return 4;
  }
  uVar3 = 6;
  if (iVar2 != 0x14) {
    uVar3 = 3;
  }
  uVar1 = 5;
  if (iVar2 != 0x13) {
    uVar1 = uVar3;
  }
  return uVar1;
}

