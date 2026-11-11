
void FUN_0046b780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 2);
  param_1[6] = 1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)((long)param_1 + 0x24) = 0x3fff;
  param_1[5] = 0x1fffffff;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 6);
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  if (*(int *)(param_1 + 1) != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_0043d590(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}

