
void FUN_012ffa84(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04bbc240;
  puVar1 = PTR_DAT_04bbc5b8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bbc5b0 + 0x10);
  param_1[1] = (long)puVar1;
  puVar1 = PTR_DAT_04bb2e18 + 0x10;
  param_1[2] = (long)(puVar2 + 0x10);
  param_1[3] = 0;
  param_1[4] = (long)puVar1;
  memset(param_1 + 5,0,0x128);
  FUN_0137c524(param_1 + 6);
  puVar2 = PTR_DAT_04bbc5d8;
  puVar1 = PTR_DAT_04bb2018;
  param_1[0x2c] = 0;
  param_1[0x2a] = (long)(puVar2 + 0x10);
  param_1[0x2b] = (long)(puVar1 + 0x10);
  param_1[0x2d] = (long)(puVar1 + 0x10);
  param_1[0x2e] = 0;
  FUN_0137c6ec(param_1);
  *param_1 = (long)&PTR_LAB_0498da00;
  return;
}

