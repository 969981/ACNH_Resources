
void FUN_027c0f28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar4 = param_2[2];
  uVar6 = param_2[3];
  uVar5 = param_2[4];
  uVar1 = param_2[5];
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  param_1[2] = uVar4;
  param_1[3] = uVar6;
  param_1[4] = uVar5;
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 9) = 2;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar3 = *(undefined1 *)((long)param_2 + 0x69);
  *(undefined2 *)((long)param_1 + 0x6a) = 0;
  *(undefined1 *)((long)param_1 + 0x69) = uVar3;
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  uVar6 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = uVar6;
  uVar4 = *(undefined8 *)((long)param_2 + 0x4c);
  uVar5 = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x5c) = *(undefined8 *)((long)param_2 + 0x5c);
  *(undefined8 *)((long)param_1 + 0x54) = uVar5;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar4;
  uVar2 = *(uint *)((long)param_2 + 100);
  if (1 < uVar2) {
    uVar2 = 0;
  }
  *(uint *)((long)param_1 + 100) = uVar2;
  return;
}

