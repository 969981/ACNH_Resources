
uint FUN_016763d0(long param_1)

{
  uint uVar1;
  undefined *local_38;
  undefined *puStack_30;
  int local_28;
  int iStack_24;
  undefined *local_20;
  int local_18;
  int iStack_14;
  
  local_38 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_30 = PTR_DAT_04bb2010 + 0x10;
  local_28 = *(int *)(param_1 + 8);
  iStack_24 = *(int *)(param_1 + 0xc);
  local_18 = local_28 + 1;
  iStack_14 = iStack_24 + 1;
  local_20 = puStack_30;
  uVar1 = FUN_01676430(&local_38);
  return uVar1 & 1;
}

