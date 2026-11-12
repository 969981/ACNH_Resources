
void FUN_0068a9e8(undefined8 *param_1,long param_2,int param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = param_3;
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x14) =
       *(undefined4 *)(*(long *)(param_2 + 0x38) + (long)param_3 * 0x20 + 0x10);
  return;
}

