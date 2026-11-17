
void FUN_031839d8(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_01af4e8c(*param_2);
  uVar5 = *param_2;
  uVar4 = FUN_01af0020(uVar5);
  if (((uVar4 & 1) == 0) || (iVar3 = FUN_01af02d0(uVar5), iVar3 < 2)) {
    if (iVar2 == 0x17) {
      iVar2 = 10;
    }
    else {
      iVar2 = 0xb;
    }
  }
  else {
    if (iVar2 == 0x17) {
      if (*param_1 == 8) {
        return;
      }
      if (param_1[1] == 8) {
        return;
      }
      if (param_1[2] == 8) {
        return;
      }
      if (param_1[3] == 8) {
        return;
      }
      if (param_1[4] == 8) {
        return;
      }
      if (param_1[5] == 8) {
        return;
      }
      if (param_1[6] == 8) {
        return;
      }
      uVar1 = param_1[7];
      uVar4 = (ulong)uVar1;
      param_1[7] = uVar1 + 1;
      if (6 < uVar1) {
        uVar4 = 0;
      }
      param_1[uVar4] = 8;
      return;
    }
    iVar2 = 9;
  }
  if ((((*param_1 != iVar2) && (param_1[1] != iVar2)) && (param_1[2] != iVar2)) &&
     (((param_1[3] != iVar2 && (param_1[4] != iVar2)) &&
      ((param_1[5] != iVar2 && (param_1[6] != iVar2)))))) {
    uVar1 = param_1[7];
    uVar4 = (ulong)uVar1;
    if (6 < uVar1) {
      uVar4 = 0;
    }
    param_1[7] = uVar1 + 1;
    param_1[uVar4] = iVar2;
  }
  return;
}

