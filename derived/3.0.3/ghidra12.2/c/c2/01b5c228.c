
undefined4 FUN_01b5c228(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((((2 < uVar1 || 2 < uVar3) || 2 < uVar2) || 1 < uVar4) &&
      (((2 < uVar1 || 2 < uVar3) || 2 < uVar2) || uVar4 != 2)) {
    return 0xffffffff;
  }
  if (((((*param_1 != 2) && (param_1[1] != 2)) && (param_1[2] != 2)) && (param_1[3] != 2)) ||
     (((*param_1 != 1 && (param_1[1] != 1)) && ((param_1[2] != 1 && (param_1[3] != 1)))))) {
    return 0xffffffff;
  }
  if (uVar1 == 2) {
    return 0;
  }
  if (uVar3 == 2) {
    return 1;
  }
  uVar5 = 2;
  if ((uVar2 != 2) && (uVar5 = 3, uVar4 != 2)) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

