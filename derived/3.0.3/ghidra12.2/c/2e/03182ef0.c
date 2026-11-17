
void FUN_03182ef0(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = FUN_01af4e8c(*param_2);
  if (iVar2 == 0x11) {
    uVar3 = FUN_02915598(param_2[1]);
    if ((((((uVar3 & 1) != 0) && (*param_1 != 0x12)) && (param_1[1] != 0x12)) &&
        ((param_1[2] != 0x12 && (param_1[3] != 0x12)))) &&
       ((param_1[4] != 0x12 && ((param_1[5] != 0x12 && (param_1[6] != 0x12)))))) {
      uVar1 = param_1[7];
      uVar3 = (ulong)uVar1;
      if (6 < uVar1) {
        uVar3 = 0;
      }
      param_1[7] = uVar1 + 1;
      param_1[uVar3] = 0x12;
    }
  }
  else if (iVar2 == 0x10) {
    FUN_03181a74(param_1,param_2);
  }
  FUN_03181d14(param_1);
  return;
}

