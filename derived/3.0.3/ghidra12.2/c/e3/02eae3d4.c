
void FUN_02eae3d4(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc7008 + 0x10;
  param_1[0x596a] = (long)(PTR_DAT_04bb2df8 + 0x10);
  param_1[0x250] = (long)puVar1;
  FUN_03ebae78(param_1 + 0x251);
  param_1[0x42] = (long)(PTR_DAT_04bc7038 + 0x10);
  FUN_03ebae78(param_1 + 0x43);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

