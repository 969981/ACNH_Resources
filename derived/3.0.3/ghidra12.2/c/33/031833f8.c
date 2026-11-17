
void FUN_031833f8(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  
  if (DAT_04c487d4 == -1) {
    uVar2 = 0;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar2 = *puVar1 >> 0x19 & 1;
  }
  if ((param_2 == 0) || (uVar2 != 0)) {
    return;
  }
  if ((param_2 < 200) || (param_2 - 1000 < 1000)) {
LAB_031835bc:
    if (999 < param_2) goto LAB_031835c4;
    if (param_2 < 100) goto LAB_031836f4;
  }
  else {
    if (param_2 - 11000 < 0xfffffc18) {
      if ((((*param_1 != 0x39) && (param_1[1] != 0x39)) && (param_1[2] != 0x39)) &&
         (((param_1[3] != 0x39 && (param_1[4] != 0x39)) &&
          ((param_1[5] != 0x39 && (param_1[6] != 0x39)))))) {
        uVar2 = param_1[7];
        uVar3 = (ulong)uVar2;
        if (6 < uVar2) {
          uVar3 = 0;
        }
        param_1[7] = uVar2 + 1;
        param_1[uVar3] = 0x39;
      }
      if (param_2 >> 4 < 0x271) goto LAB_031835bc;
    }
    if (((*param_1 != 0x3a) && (param_1[1] != 0x3a)) &&
       ((param_1[2] != 0x3a &&
        ((((param_1[3] != 0x3a && (param_1[4] != 0x3a)) && (param_1[5] != 0x3a)) &&
         (param_1[6] != 0x3a)))))) {
      uVar2 = param_1[7];
      uVar3 = (ulong)uVar2;
      if (6 < uVar2) {
        uVar3 = 0;
      }
      param_1[7] = uVar2 + 1;
      param_1[uVar3] = 0x3a;
    }
LAB_031835c4:
    if (((((*param_1 != 0x3b) && (param_1[1] != 0x3b)) &&
         ((param_1[2] != 0x3b && ((param_1[3] != 0x3b && (param_1[4] != 0x3b)))))) &&
        (param_1[5] != 0x3b)) && (param_1[6] != 0x3b)) {
      uVar2 = param_1[7];
      uVar3 = (ulong)uVar2;
      if (6 < uVar2) {
        uVar3 = 0;
      }
      param_1[7] = uVar2 + 1;
      param_1[uVar3] = 0x3b;
    }
  }
  if (((((*param_1 != 0x3c) && (param_1[1] != 0x3c)) && (param_1[2] != 0x3c)) &&
      ((param_1[3] != 0x3c && (param_1[4] != 0x3c)))) &&
     ((param_1[5] != 0x3c && (param_1[6] != 0x3c)))) {
    uVar2 = param_1[7];
    uVar3 = (ulong)uVar2;
    param_1[7] = uVar2 + 1;
    if (6 < uVar2) {
      uVar3 = 0;
    }
    param_1[uVar3] = 0x3c;
  }
LAB_031836f4:
  FUN_03181d14();
  return;
}

