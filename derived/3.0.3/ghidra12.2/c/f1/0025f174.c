
void FUN_0025f174(long *param_1,long param_2,undefined2 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 2) = param_3;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_5;
  puVar1 = PTR_DAT_04bcd8d8 + 0x10;
  *(undefined1 *)((long)param_1 + 0x12) = param_4;
  *param_1 = (long)puVar1;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 0x14;
  return;
}

