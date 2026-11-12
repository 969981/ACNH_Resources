
undefined8
FUN_00948e68(long param_1,long param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  float local_a4 [2];
  float local_9c;
  byte local_74;
  byte local_73;
  byte local_72;
  byte local_71;
  
  if ((int)*(uint *)(param_2 + 8) < 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if ((-1 < (int)*(uint *)(param_2 + 0xc)) &&
       (lVar3 = *(long *)(param_1 + 0x80),
       *(uint *)(param_2 + 8) < *(uint *)(lVar3 + 0x38) &&
       *(uint *)(param_2 + 0xc) < *(uint *)(lVar3 + 0x3c))) {
      FUN_00962530(lVar3,param_2,local_a4);
      uVar8 = 1;
      *param_3 = (uint)local_74;
      *param_4 = (uint)local_73;
      *param_5 = (uint)local_72;
      *param_6 = (uint)local_71;
    }
  }
  if (DAT_04cfae30 == 0) {
    cVar5 = '\a';
    cVar4 = '\a';
    cVar6 = '\a';
    cVar7 = '\a';
    uVar2 = *(uint *)(param_2 + 8);
  }
  else {
    lVar3 = *(long *)(DAT_04cfae30 + 0xa8);
    uVar2 = *(uint *)(param_2 + 8);
    if ((lVar3 == 0) || ((int)uVar2 < 0)) {
      cVar5 = '\a';
      cVar4 = '\a';
      cVar6 = '\a';
      cVar7 = '\a';
    }
    else {
      uVar1 = *(uint *)(param_2 + 0xc);
      cVar4 = '\a';
      if ((-1 < (int)uVar1) && (uVar2 < *(uint *)(lVar3 + 0x38) && uVar1 < *(uint *)(lVar3 + 0x3c)))
      {
        if ((*(long *)(lVar3 + 0x60) == 0) ||
           (uVar1 = uVar2 + *(uint *)(lVar3 + 0x38) * uVar1, *(uint *)(lVar3 + 0x58) <= uVar1)) {
          cVar4 = '\a';
        }
        else {
          cVar4 = *(char *)(*(long *)(lVar3 + 0x60) + (long)(int)uVar1 * 0x34 + 0x30);
        }
      }
      cVar6 = '\a';
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((-1 < (int)uVar1) && (uVar2 < *(uint *)(lVar3 + 0x38) && uVar1 < *(uint *)(lVar3 + 0x3c)))
      {
        if ((*(long *)(lVar3 + 0x60) == 0) ||
           (uVar1 = uVar2 + *(uint *)(lVar3 + 0x38) * uVar1, *(uint *)(lVar3 + 0x58) <= uVar1)) {
          cVar6 = '\a';
        }
        else {
          cVar6 = *(char *)(*(long *)(lVar3 + 0x60) + (long)(int)uVar1 * 0x34 + 0x31);
        }
      }
      cVar7 = '\a';
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((-1 < (int)uVar1) && (uVar2 < *(uint *)(lVar3 + 0x38) && uVar1 < *(uint *)(lVar3 + 0x3c)))
      {
        if ((*(long *)(lVar3 + 0x60) == 0) ||
           (uVar1 = uVar2 + *(uint *)(lVar3 + 0x38) * uVar1, *(uint *)(lVar3 + 0x58) <= uVar1)) {
          cVar7 = '\a';
        }
        else {
          cVar7 = *(char *)(*(long *)(lVar3 + 0x60) + (long)(int)uVar1 * 0x34 + 0x32);
        }
      }
      cVar5 = '\a';
      uVar1 = *(uint *)(param_2 + 0xc);
      if (((-1 < (int)uVar1) && (uVar2 < *(uint *)(lVar3 + 0x38))) &&
         (uVar1 < *(uint *)(lVar3 + 0x3c))) {
        if ((*(long *)(lVar3 + 0x60) == 0) ||
           (uVar1 = uVar2 + *(uint *)(lVar3 + 0x38) * uVar1, *(uint *)(lVar3 + 0x58) <= uVar1)) {
          cVar5 = '\a';
        }
        else {
          cVar5 = *(char *)(*(long *)(lVar3 + 0x60) + (long)(int)uVar1 * 0x34 + 0x33);
        }
      }
    }
  }
  local_a4[0] = (float)(int)uVar2 * 5.0 + 2.5;
  local_9c = (float)*(int *)(param_2 + 0xc) * 5.0 + 2.5 + -1.25;
  if (cVar4 == '\a') {
    uVar2 = FUN_0097a980(local_a4);
    if (uVar2 != 7) {
      *param_3 = uVar2;
    }
    uVar2 = FUN_0097aa70(local_a4);
    if (uVar2 != 7) {
      *param_3 = uVar2;
    }
  }
  local_a4[0] = local_a4[0] + -1.25;
  local_9c = local_9c + 1.25;
  if (cVar6 == '\a') {
    uVar2 = FUN_0097a980(local_a4);
    if (uVar2 != 7) {
      *param_4 = uVar2;
    }
    uVar2 = FUN_0097aa70(local_a4);
    if (uVar2 != 7) {
      *param_4 = uVar2;
    }
  }
  local_a4[0] = local_a4[0] + 1.25;
  local_9c = local_9c + 1.25;
  if (cVar7 == '\a') {
    uVar2 = FUN_0097a980(local_a4);
    if (uVar2 != 7) {
      *param_5 = uVar2;
    }
    uVar2 = FUN_0097aa70(local_a4);
    if (uVar2 != 7) {
      *param_5 = uVar2;
    }
  }
  local_9c = local_9c + -1.25;
  local_a4[0] = local_a4[0] + 1.25;
  if (cVar5 == '\a') {
    uVar2 = FUN_0097a980(local_a4);
    if (uVar2 != 7) {
      *param_6 = uVar2;
    }
    uVar2 = FUN_0097aa70(local_a4);
    if (uVar2 != 7) {
      *param_6 = uVar2;
    }
  }
  return uVar8;
}

