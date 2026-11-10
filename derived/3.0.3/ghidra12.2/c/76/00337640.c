
void FUN_00337640(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4[4];
  param_1[1] = param_4[5];
  *param_1 = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  param_1[2] = *(undefined8 *)(param_3 + 0x20);
  param_1[3] = uVar1;
  uVar1 = *param_4;
  param_1[5] = param_4[1];
  param_1[4] = uVar1;
  uVar1 = param_4[2];
  param_1[7] = param_4[3];
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_4 + 0x7c);
  *(float *)((long)param_1 + 0x44) =
       (float)*(int *)(param_4 + 0xe) +
       (float)(*(int *)(param_4 + 0xe) + -1) * *(float *)(param_2 + 0x10);
  *(float *)(param_1 + 9) = (float)*(int *)((long)param_4 + 0x74);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(param_4 + 0x10);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)((long)param_4 + 0x44);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_4 + 9);
  *(float *)((long)param_1 + 0x5c) = (float)*(int *)(param_3 + 0x48);
  return;
}

