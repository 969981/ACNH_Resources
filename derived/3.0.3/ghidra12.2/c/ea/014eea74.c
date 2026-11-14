
void FUN_014eea74(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_48 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_40 = PTR_DAT_04bb2010 + 0x10;
  local_38 = 0;
  if ((*(int *)(param_2 + 0x18) == 4 && *(int *)(param_2 + 0x98) != 0) &&
     (puStack_30 = puStack_40, lVar2 = FUN_014ba988(param_2 + 0x90), lVar2 != 0)) {
    local_58 = 0;
    local_50 = 0;
    local_68 = PTR_DAT_04bbbc20 + 0x10;
    uStack_60 = 0;
    FUN_02b86288(lVar2,&local_48,&local_68);
    local_28._0_4_ = (int)local_28 + 1;
    local_28._4_4_ = local_28._4_4_ + 1;
  }
  else {
    local_38._4_4_ = 0;
    local_38._0_4_ = 0;
    local_28._4_4_ = 1;
    local_28._0_4_ = 1;
  }
  puVar1 = PTR_DAT_04bb2e18;
  *(int *)(param_1 + 1) = (int)local_28 - (int)local_38;
  *(int *)((long)param_1 + 0xc) = local_28._4_4_ - local_38._4_4_;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

