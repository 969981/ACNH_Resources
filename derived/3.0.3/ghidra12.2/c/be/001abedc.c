
void FUN_001abedc(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcc2d8;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = (long)(param_1 + 2);
  param_1[5] = 0x10;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)&PTR_LAB_04a426b8;
  FUN_0018b070(param_1 + 1,&DAT_0407ebb1,0xffffffffffffffff);
  param_1[7] = (long)&PTR_LAB_04a426b8;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = (long)(param_1 + 8);
  param_1[0xb] = 0x10;
  FUN_0018b070(param_1 + 7,&DAT_0407ebb1,0xffffffffffffffff);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}

