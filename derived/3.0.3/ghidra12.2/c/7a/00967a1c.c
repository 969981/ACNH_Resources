
undefined4 FUN_00967a1c(long param_1,long param_2)

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
  undefined1 auStack_64 [48];
  char local_34;
  char local_33;
  
  uVar2 = *(uint *)(param_2 + 8);
  if ((int)uVar2 < 0) {
LAB_00967ab8:
    uVar1 = FUN_00967538(param_1,param_2);
    if (((uVar1 & 1) != 0) && (uVar1 = FUN_009670d0(param_1,param_2), (uVar1 & 1) != 0))
    goto LAB_00967afc;
    uVar3 = 0;
    uVar2 = *(uint *)(param_2 + 8);
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    cVar9 = '\0';
    uVar6 = *(uint *)(param_1 + 0x38);
    uVar7 = *(uint *)(param_1 + 0x3c);
    if ((((int)uVar5 < 0) || (uVar6 <= uVar2)) || (uVar7 <= uVar5)) {
LAB_00967a84:
      cVar8 = '\0';
      if (((-1 < (int)uVar5) && (uVar2 < uVar6)) && (uVar5 < uVar7)) {
        FUN_00962530(param_1,param_2,auStack_64);
        cVar8 = local_33;
      }
    }
    else {
      FUN_00962530(param_1,param_2,auStack_64);
      uVar2 = *(uint *)(param_2 + 8);
      cVar9 = local_34;
      if (-1 < (int)uVar2) {
        uVar5 = *(uint *)(param_2 + 0xc);
        uVar6 = *(uint *)(param_1 + 0x38);
        uVar7 = *(uint *)(param_1 + 0x3c);
        goto LAB_00967a84;
      }
      cVar8 = '\0';
    }
    if ((cVar9 == '.') ||
       ((cVar8 != '.' && ((cVar9 != '\x05' || ((cVar8 != '\x01' && (cVar8 != '\f'))))))))
    goto LAB_00967ab8;
LAB_00967afc:
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
    if (local_33 == '%') {
      if ((int)uVar2 < 0) {
        return 2;
      }
      uVar4 = 2;
      if (((-1 < (int)*(uint *)(param_2 + 0xc)) && (uVar2 < *(uint *)(param_1 + 0x38))) &&
         (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0x3c))) {
        FUN_00962530(param_1,param_2,auStack_64);
        if (local_34 != '%') {
          uVar3 = 2;
        }
        uVar2 = *(uint *)(param_2 + 8);
        goto LAB_00967b98;
      }
    }
    else {
LAB_00967b98:
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
    if (local_33 == '+') {
      if ((int)uVar2 < 0) {
        return uVar4;
      }
      if ((((int)*(uint *)(param_2 + 0xc) < 0) || (*(uint *)(param_1 + 0x38) <= uVar2)) ||
         (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_2 + 0xc))) goto LAB_00967c70;
      FUN_00962530(param_1,param_2,auStack_64);
      uVar3 = 2;
      if (local_34 != ')') {
        uVar3 = uVar4;
      }
      uVar2 = *(uint *)(param_2 + 8);
      uVar4 = uVar3;
    }
    if ((int)uVar2 < 0) {
      return uVar4;
    }
  }
LAB_00967c70:
  if (((((int)*(uint *)(param_2 + 0xc) < 0) || (*(uint *)(param_1 + 0x38) <= uVar2)) ||
      (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_2 + 0xc))) ||
     (FUN_00962530(param_1,param_2,auStack_64), local_33 != '\b')) {
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
  if (local_34 != '\b') {
    uVar4 = 4;
  }
  return uVar4;
}

