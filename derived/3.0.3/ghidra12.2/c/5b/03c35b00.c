
undefined1 FUN_03c35b00(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (0x40 < uVar5) {
    return 3;
  }
  uVar6 = param_1[2];
  if (uVar6 < (ulong)param_1[4]) {
    uVar4 = param_1[3];
    if (uVar6 == uVar4) {
      uVar3 = 1;
      if (0x3f < uVar5) {
        uVar3 = 2;
      }
      return uVar3;
    }
    bVar2 = uVar6 - (uVar5 >> 3) < uVar4;
    uVar1 = (int)uVar6 - (int)uVar4;
    if (!bVar2) {
      uVar1 = uVar5 >> 3;
    }
    uVar5 = uVar5 + uVar1 * -8;
  }
  else {
    uVar1 = uVar5 >> 3;
    bVar2 = false;
    uVar5 = uVar5 & 7;
  }
  param_1[2] = (undefined8 *)(uVar6 - uVar1);
  *(uint *)(param_1 + 1) = uVar5;
  *param_1 = *(undefined8 *)(uVar6 - uVar1);
  return bVar2;
}

