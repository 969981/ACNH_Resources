
void FUN_03182fe8(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((((*param_1 != 0x35) && (param_1[1] != 0x35)) && (param_1[2] != 0x35)) &&
     (((param_1[3] != 0x35 && (param_1[4] != 0x35)) &&
      ((param_1[5] != 0x35 && (param_1[6] != 0x35)))))) {
    uVar1 = param_1[7];
    uVar2 = (ulong)uVar1;
    if (6 < uVar1) {
      uVar2 = 0;
    }
    param_1[7] = uVar1 + 1;
    param_1[uVar2] = 0x35;
  }
  if (((*param_1 != 0x34) && (param_1[1] != 0x34)) &&
     ((param_1[2] != 0x34 &&
      ((((param_1[3] != 0x34 && (param_1[4] != 0x34)) && (param_1[5] != 0x34)) &&
       (param_1[6] != 0x34)))))) {
    uVar1 = param_1[7];
    uVar2 = (ulong)uVar1;
    if (6 < uVar1) {
      uVar2 = 0;
    }
    param_1[7] = uVar1 + 1;
    param_1[uVar2] = 0x34;
  }
  if (((((*param_1 != 0x33) && (param_1[1] != 0x33)) &&
       ((param_1[2] != 0x33 && ((param_1[3] != 0x33 && (param_1[4] != 0x33)))))) &&
      (param_1[5] != 0x33)) && (param_1[6] != 0x33)) {
    uVar1 = param_1[7];
    uVar2 = (ulong)uVar1;
    if (6 < uVar1) {
      uVar2 = 0;
    }
    param_1[7] = uVar1 + 1;
    param_1[uVar2] = 0x33;
  }
  if (((((*param_1 != 0x32) && (param_1[1] != 0x32)) && (param_1[2] != 0x32)) &&
      ((param_1[3] != 0x32 && (param_1[4] != 0x32)))) &&
     ((param_1[5] != 0x32 && (param_1[6] != 0x32)))) {
    uVar1 = param_1[7];
    uVar2 = (ulong)uVar1;
    if (6 < uVar1) {
      uVar2 = 0;
    }
    param_1[7] = uVar1 + 1;
    param_1[uVar2] = 0x32;
  }
  FUN_03181d14();
  return;
}

