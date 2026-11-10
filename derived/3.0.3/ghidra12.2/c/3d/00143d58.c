
undefined8 FUN_00143d58(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_2 + 0x11);
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  bVar2 = *(byte *)(param_1 + 0x11);
  *(byte *)(param_2 + 0x11) = bVar1 & 0xfe | bVar2 & 1;
  bVar2 = bVar2 & 1 | (*(byte *)(param_1 + 0x11) >> 1 & 1) << 1;
  *(byte *)(param_2 + 0x11) = bVar1 & 0xfc | bVar2;
  bVar2 = bVar2 | (*(byte *)(param_1 + 0x11) >> 2 & 1) << 2;
  *(byte *)(param_2 + 0x11) = bVar1 & 0xf8 | bVar2;
  *(byte *)(param_2 + 0x11) = bVar1 & 0xf0 | bVar2 | *(byte *)(param_1 + 0x11) & 8;
  if (param_1[2] == 0) {
    param_2[2] = 0;
  }
  else {
    lVar3 = FUN_00143320();
    param_2[2] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[3] == 0) {
    param_2[3] = 0;
  }
  else {
    lVar3 = FUN_00143320();
    param_2[3] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[4] == 0) {
    param_2[4] = 0;
  }
  else {
    lVar3 = FUN_00143320();
    param_2[4] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[5] == 0) {
    param_2[5] = 0;
  }
  else {
    lVar3 = FUN_00143320();
    param_2[5] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[6] == 0) {
    param_2[6] = 0;
  }
  else {
    lVar3 = FUN_00143320();
    param_2[6] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[7] == 0) {
    param_2[7] = 0;
  }
  else {
    lVar3 = FUN_00143320();
    param_2[7] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_1[8] == 0) {
    param_2[8] = 0;
  }
  else {
    lVar3 = FUN_00143320();
    param_2[8] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

