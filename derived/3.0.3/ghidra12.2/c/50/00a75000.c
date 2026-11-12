
undefined4 FUN_00a75000(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  byte bVar4;
  
  bVar1 = *param_2;
  bVar2 = *(byte *)(param_1 + 0x520);
  if (bVar1 < 8) {
    bVar4 = bVar2;
    if (7 < bVar2) {
      bVar4 = 0xff;
    }
    if (bVar4 == bVar1) {
      return 0;
    }
    bVar4 = *(byte *)(param_1 + 0x538);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar4 == bVar1) {
      return 1;
    }
    bVar4 = *(byte *)(param_1 + 0x550);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar4 == bVar1) {
      return 2;
    }
    bVar4 = *(byte *)(param_1 + 0x568);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar4 == bVar1) {
      return 3;
    }
    bVar4 = *(byte *)(param_1 + 0x580);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar4 == bVar1) {
      return 4;
    }
    bVar4 = *(byte *)(param_1 + 0x598);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar4 == bVar1) {
      return 5;
    }
    bVar4 = *(byte *)(param_1 + 0x5b0);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar4 == bVar1) {
      return 6;
    }
    bVar4 = *(byte *)(param_1 + 0x5c8);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar4 == bVar1) {
      return 7;
    }
    bVar4 = *(byte *)(param_1 + 0x5e0);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (bVar4 == bVar1) {
      return 8;
    }
  }
  if (7 < bVar2) {
    return 0;
  }
  if (7 < *(byte *)(param_1 + 0x538)) {
    return 1;
  }
  if (7 < *(byte *)(param_1 + 0x550)) {
    return 2;
  }
  if (7 < *(byte *)(param_1 + 0x568)) {
    return 3;
  }
  if (7 < *(byte *)(param_1 + 0x580)) {
    return 4;
  }
  if (7 < *(byte *)(param_1 + 0x598)) {
    return 5;
  }
  if (7 < *(byte *)(param_1 + 0x5b0)) {
    return 6;
  }
  if (7 < *(byte *)(param_1 + 0x5c8)) {
    return 7;
  }
  uVar3 = 8;
  if (*(byte *)(param_1 + 0x5e0) < 8) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

