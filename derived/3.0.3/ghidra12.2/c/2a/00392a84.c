
void FUN_00392a84(long *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  puVar1 = PTR_DAT_04bd0948;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  param_1[6] = param_3;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00391ee0(param_1 + 8,param_4);
  param_1[0x11] = param_4;
  param_1[0x12] = (long)(param_1 + 0x12);
  param_1[0x13] = (long)(param_1 + 0x12);
  return;
}

