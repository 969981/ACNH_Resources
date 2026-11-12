
undefined8 FUN_00a71bb8(long param_1,byte *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  
  if (*(int *)(param_1 + 0x614) == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x63c) == 0) {
    lVar2 = 1;
  }
  else if (*(int *)(param_1 + 0x664) == 0) {
    lVar2 = 2;
  }
  else if (*(int *)(param_1 + 0x68c) == 0) {
    lVar2 = 3;
  }
  else if (*(int *)(param_1 + 0x6b4) == 0) {
    lVar2 = 4;
  }
  else if (*(int *)(param_1 + 0x6dc) == 0) {
    lVar2 = 5;
  }
  else if (*(int *)(param_1 + 0x704) == 0) {
    lVar2 = 6;
  }
  else if (*(int *)(param_1 + 0x72c) == 0) {
    lVar2 = 7;
  }
  else {
    if (*(int *)(param_1 + 0x754) != 0) {
      return 0;
    }
    lVar2 = 8;
  }
  bVar3 = *param_2;
  lVar2 = param_1 + lVar2 * 0x28;
  *(undefined8 *)(lVar2 + 0x600) = param_3;
  *(undefined8 *)(lVar2 + 0x608) = param_3;
  *(undefined4 *)(lVar2 + 0x610) = param_4;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(lVar2 + 0x5f8) = bVar3;
  *(undefined8 *)(lVar2 + 0x614) = 0x400000002;
  uVar1 = FUN_00a75000(param_1,param_2);
  if (uVar1 != 0xffffffff) {
    bVar3 = *param_2;
    param_1 = param_1 + (ulong)uVar1 * 0x18;
    *(undefined8 *)(param_1 + 0x528) = param_3;
    *(undefined4 *)(param_1 + 0x530) = 0;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(param_1 + 0x520) = bVar3;
  }
  return 1;
}

