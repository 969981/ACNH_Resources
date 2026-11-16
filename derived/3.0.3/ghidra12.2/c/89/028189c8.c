
undefined4 FUN_028189c8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar1 == 0 && lVar2 == 0) {
    return 0xffffffff;
  }
  if ((*param_1 == lVar1) && (param_1[1] == lVar2)) {
    return 0;
  }
  if ((param_1[9] == lVar1) && (param_1[10] == lVar2)) {
    return 1;
  }
  if ((param_1[0x12] == lVar1) && (param_1[0x13] == lVar2)) {
    return 2;
  }
  if ((param_1[0x1b] == lVar1) && (param_1[0x1c] == lVar2)) {
    return 3;
  }
  if ((param_1[0x24] == lVar1) && (param_1[0x25] == lVar2)) {
    return 4;
  }
  if ((param_1[0x2d] == lVar1) && (param_1[0x2e] == lVar2)) {
    return 5;
  }
  if ((param_1[0x36] == lVar1) && (param_1[0x37] == lVar2)) {
    return 6;
  }
  uVar3 = 7;
  if (param_1[0x40] != lVar2 || param_1[0x3f] != lVar1) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

