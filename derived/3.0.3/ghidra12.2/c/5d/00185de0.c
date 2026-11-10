
void FUN_00185de0(long *param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcbc78;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)&PTR_LAB_04a426b8;
  param_1[4] = (long)(param_1 + 2);
  param_1[5] = 0x10;
  FUN_0018b070(param_1 + 1,*(undefined8 *)(param_2 + 0x18),0xffffffffffffffff);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = (long)(param_1 + 7);
  return;
}

