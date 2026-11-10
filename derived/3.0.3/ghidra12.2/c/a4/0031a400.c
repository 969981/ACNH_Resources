
void FUN_0031a400(long *param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  puVar1 = PTR_DAT_04bced00;
  param_1[10] = (long)(param_1 + 8);
  param_1[0xb] = 0x10;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)param_1 + 0x24) = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x200;
  param_1[7] = (long)&PTR_LAB_04a426b8;
  FUN_0018a58c(param_1 + 7,&DAT_0407ebb1);
  return;
}

