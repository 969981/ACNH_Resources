
void FUN_00152740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_00143300(param_1[0x2a]);
  FUN_00143300(param_1[0x22]);
  FUN_00143e94(param_1 + 0x5f);
  FUN_00143e94(param_1 + 0x71);
  *param_2 = *param_1;
  uVar4 = *(uint *)((long)param_1 + 0x41c);
  uVar5 = *(uint *)((long)param_2 + 0x41c) & 0xffffff00 |
          *(uint *)((long)param_2 + 0x41c) & 0x7f | (uVar4 >> 7 & 1) << 7;
  *(uint *)((long)param_2 + 0x41c) = uVar5;
  if ((uVar4 >> 7 & 1) != 0) {
    FUN_00143300(param_2[0x42]);
    param_2[0x42] = 0;
    FUN_00143300(param_2[0x43]);
    param_2[0x43] = 0;
    param_2[0x42] = param_1[0x42];
    param_2[0x43] = param_1[0x43];
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    uVar5 = *(uint *)((long)param_2 + 0x41c);
  }
  uVar4 = *(uint *)((long)param_1 + 0x41c);
  *(uint *)((long)param_2 + 0x41c) = uVar5 & 0xfffffe00 | uVar5 & 0xff | (uVar4 >> 8 & 1) << 8;
  if ((uVar4 >> 8 & 1) != 0) {
    FUN_00143300(param_2[0x30]);
    param_2[0x30] = 0;
    FUN_00143300(param_2[0x28]);
    param_2[0x28] = 0;
    FUN_00143300(param_2[0x31]);
    param_2[0x31] = 0;
    FUN_00143300(param_2[0x29]);
    param_2[0x29] = 0;
    param_2[0x30] = param_1[0x30];
    param_2[0x28] = param_1[0x28];
    param_2[0x31] = param_1[0x31];
    param_2[0x29] = param_1[0x29];
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  FUN_00143300(param_2[0x18]);
  param_2[0x18] = 0;
  FUN_00143300(param_2[0x1e]);
  param_2[0x1e] = 0;
  uVar1 = param_1[0x18];
  uVar2 = param_1[0x19];
  uVar3 = param_1[0x1b];
  param_2[0x1a] = param_1[0x1a];
  param_2[0x1b] = uVar3;
  param_2[0x18] = uVar1;
  param_2[0x19] = uVar2;
  uVar1 = param_1[0x1e];
  uVar2 = param_1[0x1f];
  uVar3 = param_1[0x21];
  param_2[0x20] = param_1[0x20];
  param_2[0x21] = uVar3;
  param_2[0x1e] = uVar1;
  param_2[0x1f] = uVar2;
  *(undefined4 *)((long)param_2 + 0x19c) = *(undefined4 *)((long)param_1 + 0x19c);
  *(undefined4 *)(param_2 + 0x33) = *(undefined4 *)(param_1 + 0x33);
  FUN_00143300(param_2[0x1c]);
  param_2[0x1c] = 0;
  param_2[0x1c] = param_1[0x1c];
  param_1[0x1c] = 0;
  FUN_00157c08(param_2);
  *(uint *)((long)param_2 + 0x41c) = *(uint *)((long)param_2 + 0x41c) | 2;
  FUN_00143300(param_1[0x42]);
  param_1[0x42] = 0;
  FUN_00143300(param_1[0x43]);
  param_1[0x43] = 0;
  FUN_00143300(param_1[0x44]);
  param_1[0x44] = 0;
  FUN_00143300(param_1[0x30]);
  param_1[0x30] = 0;
  FUN_00143300(param_1[0x28]);
  param_1[0x28] = 0;
  FUN_00143300(param_1[0x31]);
  param_1[0x31] = 0;
  FUN_00143300(param_1[0x29]);
  param_1[0x29] = 0;
  FUN_00143300(param_1[0xcd]);
  param_1[0xcd] = 0;
  FUN_00143b8c(param_1 + 0x99,0);
  FUN_00143b8c(param_1 + 0x9d,0);
  FUN_00143300(param_1[0xa1]);
  param_1[0xa1] = 0;
  return;
}

