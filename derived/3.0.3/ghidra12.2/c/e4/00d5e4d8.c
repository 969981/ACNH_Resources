
void FUN_00d5e4d8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_LAB_04950778;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *param_1 = &PTR_LAB_04b23ab0;
  FUN_007ef010((long)param_1 + 10,param_2 + 10);
  FUN_007ef010((long)param_1 + 0xc,param_2 + 0xc);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0x58);
  return;
}

