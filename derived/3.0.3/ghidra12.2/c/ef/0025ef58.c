
void FUN_0025ef58(long *param_1,long param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 2) = param_3;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = param_5;
  *(undefined4 *)(param_1 + 5) = param_6;
  puVar1 = PTR_DAT_04bcd8c0 + 0x10;
  param_1[6] = param_7;
  param_1[8] = param_8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = (long)puVar1;
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x12) = 0x11;
  *(undefined4 *)((long)param_1 + 0x14) = 0x30;
  return;
}

