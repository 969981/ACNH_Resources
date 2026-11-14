
void FUN_01d5204c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x27) == 2) {
    *param_2 = *param_3;
    uVar4 = param_3[3];
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[1] = uVar2;
    uVar2 = *(undefined8 *)((long)param_3 + 0x24);
    uVar3 = *(undefined8 *)((long)param_3 + 0x2c);
    *(undefined8 *)((long)param_2 + 0x34) = *(undefined8 *)((long)param_3 + 0x34);
    *(undefined8 *)((long)param_2 + 0x2c) = uVar3;
    *(undefined8 *)((long)param_2 + 0x24) = uVar2;
    uVar1 = *(uint *)((long)param_3 + 0x3c);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)((long)param_2 + 0x3c) = uVar1;
    uVar3 = param_3[10];
    uVar2 = param_3[9];
    param_2[8] = param_3[8];
    param_2[9] = uVar2;
    param_2[10] = uVar3;
    uVar1 = *(uint *)(param_3 + 0xb);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)(param_2 + 0xb) = uVar1;
    uVar2 = *(undefined8 *)((long)param_3 + 0x5c);
    uVar3 = *(undefined8 *)((long)param_3 + 100);
    *(undefined8 *)((long)param_2 + 0x6c) = *(undefined8 *)((long)param_3 + 0x6c);
    *(undefined8 *)((long)param_2 + 100) = uVar3;
    *(undefined8 *)((long)param_2 + 0x5c) = uVar2;
    uVar1 = *(uint *)((long)param_3 + 0x74);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)((long)param_2 + 0x74) = uVar1;
    uVar2 = param_3[0xf];
    uVar3 = param_3[0x11];
    param_2[0x10] = param_3[0x10];
    param_2[0x11] = uVar3;
    param_2[0xf] = uVar2;
    uVar1 = *(uint *)(param_3 + 0x12);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)(param_2 + 0x12) = uVar1;
    uVar2 = *(undefined8 *)((long)param_3 + 0x94);
    uVar3 = *(undefined8 *)((long)param_3 + 0x9c);
    *(undefined8 *)((long)param_2 + 0xa4) = *(undefined8 *)((long)param_3 + 0xa4);
    *(undefined8 *)((long)param_2 + 0x9c) = uVar3;
    *(undefined8 *)((long)param_2 + 0x94) = uVar2;
    uVar1 = *(uint *)((long)param_3 + 0xac);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)((long)param_2 + 0xac) = uVar1;
    uVar2 = param_3[0x16];
    uVar3 = param_3[0x18];
    param_2[0x17] = param_3[0x17];
    param_2[0x18] = uVar3;
    param_2[0x16] = uVar2;
    uVar1 = *(uint *)(param_3 + 0x19);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)(param_2 + 0x19) = uVar1;
    uVar2 = *(undefined8 *)((long)param_3 + 0xcc);
    uVar3 = *(undefined8 *)((long)param_3 + 0xd4);
    *(undefined8 *)((long)param_2 + 0xdc) = *(undefined8 *)((long)param_3 + 0xdc);
    *(undefined8 *)((long)param_2 + 0xd4) = uVar3;
    *(undefined8 *)((long)param_2 + 0xcc) = uVar2;
    uVar1 = *(uint *)((long)param_3 + 0xe4);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)((long)param_2 + 0xe4) = uVar1;
    uVar3 = param_3[0x1f];
    uVar2 = param_3[0x1e];
    param_2[0x1d] = param_3[0x1d];
    param_2[0x1e] = uVar2;
    param_2[0x1f] = uVar3;
    uVar1 = *(uint *)(param_3 + 0x20);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)(param_2 + 0x20) = uVar1;
    *(undefined4 *)((long)param_2 + 0x104) = *(undefined4 *)((long)param_3 + 0x104);
    *(undefined2 *)(param_2 + 0x21) = *(undefined2 *)(param_3 + 0x21);
    return;
  }
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *param_1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[1] = uVar2;
  uVar2 = *(undefined8 *)((long)param_3 + 0x24);
  uVar3 = *(undefined8 *)((long)param_3 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_3 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x24) = uVar2;
  uVar1 = *(uint *)((long)param_3 + 0x3c);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0x3c) = uVar1;
  uVar2 = param_3[8];
  uVar3 = param_3[10];
  param_1[9] = param_3[9];
  param_1[10] = uVar3;
  param_1[8] = uVar2;
  uVar1 = *(uint *)(param_3 + 0xb);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0xb) = uVar1;
  uVar2 = *(undefined8 *)((long)param_3 + 0x5c);
  uVar3 = *(undefined8 *)((long)param_3 + 100);
  *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_3 + 0x6c);
  *(undefined8 *)((long)param_1 + 100) = uVar3;
  *(undefined8 *)((long)param_1 + 0x5c) = uVar2;
  uVar1 = *(uint *)((long)param_3 + 0x74);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0x74) = uVar1;
  uVar2 = param_3[0xf];
  uVar3 = param_3[0x11];
  param_1[0x10] = param_3[0x10];
  param_1[0x11] = uVar3;
  param_1[0xf] = uVar2;
  uVar1 = *(uint *)(param_3 + 0x12);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x12) = uVar1;
  uVar2 = *(undefined8 *)((long)param_3 + 0x94);
  uVar3 = *(undefined8 *)((long)param_3 + 0x9c);
  *(undefined8 *)((long)param_1 + 0xa4) = *(undefined8 *)((long)param_3 + 0xa4);
  *(undefined8 *)((long)param_1 + 0x9c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x94) = uVar2;
  uVar1 = *(uint *)((long)param_3 + 0xac);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0xac) = uVar1;
  uVar3 = param_3[0x18];
  uVar2 = param_3[0x17];
  param_1[0x16] = param_3[0x16];
  param_1[0x17] = uVar2;
  param_1[0x18] = uVar3;
  uVar1 = *(uint *)(param_3 + 0x19);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x19) = uVar1;
  uVar2 = *(undefined8 *)((long)param_3 + 0xcc);
  uVar3 = *(undefined8 *)((long)param_3 + 0xd4);
  *(undefined8 *)((long)param_1 + 0xdc) = *(undefined8 *)((long)param_3 + 0xdc);
  *(undefined8 *)((long)param_1 + 0xd4) = uVar3;
  *(undefined8 *)((long)param_1 + 0xcc) = uVar2;
  uVar1 = *(uint *)((long)param_3 + 0xe4);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0xe4) = uVar1;
  uVar2 = param_3[0x1d];
  uVar3 = param_3[0x1f];
  param_1[0x1e] = param_3[0x1e];
  param_1[0x1f] = uVar3;
  param_1[0x1d] = uVar2;
  uVar1 = *(uint *)(param_3 + 0x20);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)((long)param_1 + 0x104) = *(undefined4 *)((long)param_3 + 0x104);
  *(undefined2 *)(param_1 + 0x21) = *(undefined2 *)(param_3 + 0x21);
  *(undefined4 *)(param_1 + 0x27) = 2;
  return;
}

