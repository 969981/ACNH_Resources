
undefined4 FUN_0096865c(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  undefined1 auStack_64 [50];
  char local_32;
  char local_31;
  
  uVar2 = *(uint *)(param_2 + 8);
  if ((int)uVar2 < 0) {
LAB_009686f8:
    uVar1 = FUN_009677a4(param_1,param_2);
    if (((uVar1 & 1) != 0) && (uVar1 = FUN_009673c0(param_1,param_2), (uVar1 & 1) != 0))
    goto LAB_0096873c;
    uVar3 = 0;
    uVar2 = *(uint *)(param_2 + 8);
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    cVar9 = '\0';
    uVar6 = *(uint *)(param_1 + 0x38);
    uVar7 = *(uint *)(param_1 + 0x3c);
    if ((((int)uVar5 < 0) || (uVar6 <= uVar2)) || (uVar7 <= uVar5)) {
LAB_009686c4:
      cVar8 = '\0';
      if (((-1 < (int)uVar5) && (uVar2 < uVar6)) && (uVar5 < uVar7)) {
        FUN_00962530(param_1,param_2,auStack_64);
        cVar8 = local_31;
      }
    }
    else {
      FUN_00962530(param_1,param_2,auStack_64);
      uVar2 = *(uint *)(param_2 + 8);
      cVar9 = local_32;
      if (-1 < (int)uVar2) {
        uVar5 = *(uint *)(param_2 + 0xc);
        uVar6 = *(uint *)(param_1 + 0x38);
        uVar7 = *(uint *)(param_1 + 0x3c);
        goto LAB_009686c4;
      }
      cVar8 = '\0';
    }
    if ((cVar9 == '.') ||
       ((cVar8 != '.' && ((cVar9 != '\x05' || ((cVar8 != '\x01' && (cVar8 != '\f'))))))))
    goto LAB_009686f8;
LAB_0096873c:
    uVar3 = 1;
    uVar2 = *(uint *)(param_2 + 8);
  }
  if ((int)uVar2 < 0) {
    return uVar3;
  }
  uVar4 = uVar3;
  if ((int)*(uint *)(param_2 + 0xc) < 0) {
    uVar6 = *(uint *)(param_2 + 0xc);
  }
  else if ((uVar2 < *(uint *)(param_1 + 0x38)) &&
          (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0x3c))) {
    FUN_00962530(param_1,param_2,auStack_64);
    uVar2 = *(uint *)(param_2 + 8);
    if (local_31 == '%') {
      if ((int)uVar2 < 0) {
        return 2;
      }
      uVar4 = 2;
      if (((-1 < (int)*(uint *)(param_2 + 0xc)) && (uVar2 < *(uint *)(param_1 + 0x38))) &&
         (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0x3c))) {
        FUN_00962530(param_1,param_2,auStack_64);
        if (local_32 != '%') {
          uVar3 = 2;
        }
        uVar2 = *(uint *)(param_2 + 8);
        goto LAB_009687d8;
      }
    }
    else {
LAB_009687d8:
      uVar4 = uVar3;
      if ((int)uVar2 < 0) {
        return uVar3;
      }
    }
    uVar6 = *(uint *)(param_2 + 0xc);
  }
  else {
    uVar6 = *(uint *)(param_2 + 0xc);
  }
  if (((-1 < (int)uVar6) && (uVar2 < *(uint *)(param_1 + 0x38))) &&
     (uVar6 < *(uint *)(param_1 + 0x3c))) {
    FUN_00962530(param_1,param_2,auStack_64);
    uVar2 = *(uint *)(param_2 + 8);
    if (local_31 == '+') {
      if ((int)uVar2 < 0) {
        return uVar4;
      }
      if ((((int)*(uint *)(param_2 + 0xc) < 0) || (*(uint *)(param_1 + 0x38) <= uVar2)) ||
         (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_2 + 0xc))) goto LAB_009688b0;
      FUN_00962530(param_1,param_2,auStack_64);
      uVar3 = 2;
      if (local_32 != ')') {
        uVar3 = uVar4;
      }
      uVar2 = *(uint *)(param_2 + 8);
      uVar4 = uVar3;
    }
    if ((int)uVar2 < 0) {
      return uVar4;
    }
  }
LAB_009688b0:
  if (((((int)*(uint *)(param_2 + 0xc) < 0) || (*(uint *)(param_1 + 0x38) <= uVar2)) ||
      (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_2 + 0xc))) ||
     (FUN_00962530(param_1,param_2,auStack_64), local_31 != '\b')) {
    return uVar4;
  }
  if ((int)*(uint *)(param_2 + 8) < 0) {
    return 4;
  }
  if ((int)*(uint *)(param_2 + 0xc) < 0) {
    return 4;
  }
  if (*(uint *)(param_1 + 0x38) <= *(uint *)(param_2 + 8)) {
    return 4;
  }
  if (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_2 + 0xc)) {
    return 4;
  }
  FUN_00962530(param_1,param_2,auStack_64);
  if (local_32 != '\b') {
    uVar4 = 4;
  }
  return uVar4;
}

