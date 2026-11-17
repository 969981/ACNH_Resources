
void FUN_031832cc(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((((*param_1 != 0x15) && (param_1[1] != 0x15)) && (param_1[2] != 0x15)) &&
     (((param_1[3] != 0x15 && (param_1[4] != 0x15)) &&
      ((param_1[5] != 0x15 && (param_1[6] != 0x15)))))) {
    uVar1 = param_1[7];
    uVar2 = (ulong)uVar1;
    if (6 < uVar1) {
      uVar2 = 0;
    }
    param_1[7] = uVar1 + 1;
    param_1[uVar2] = 0x15;
  }
  if ((((*param_1 != 0x13) && (param_1[1] != 0x13)) &&
      ((param_1[2] != 0x13 &&
       (((param_1[3] != 0x13 && (param_1[4] != 0x13)) && (param_1[5] != 0x13)))))) &&
     (param_1[6] != 0x13)) {
    uVar1 = param_1[7];
    uVar2 = (ulong)uVar1;
    if (6 < uVar1) {
      uVar2 = 0;
    }
    param_1[7] = uVar1 + 1;
    param_1[uVar2] = 0x13;
  }
  FUN_03181d14();
  return;
}

