
void FUN_0025f0e8(long *param_1,long param_2,undefined2 param_3)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 2) = param_3;
  *(undefined2 *)(param_1 + 3) = 0;
  puVar1 = PTR_DAT_04bcd8d0 + 0x10;
  *(undefined1 *)((long)param_1 + 0x12) = 0x13;
  *param_1 = (long)puVar1;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 0x10;
  return;
}

