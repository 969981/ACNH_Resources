
void FUN_029341b0(long param_1,byte param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined4 local_24;
  
  local_30 = 0;
  local_50 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_48 = PTR_DAT_04bb2010 + 0x10;
  local_40 = 0;
  puStack_38 = puStack_48;
  if (((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0xc) != 0x1a)) ||
     ((*(byte *)(param_1 + 8) & 1) != 0)) {
    if (((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0xc) != 0x1b)) ||
       ((*(byte *)(param_1 + 8) & 1) != 0)) {
      uVar2 = FUN_02a8ec10(param_1);
      if ((uVar2 & 1) == 0) {
        return;
      }
      local_24 = 0;
      uVar2 = FUN_02b677c0(&local_24,*(undefined4 *)(param_1 + 0xc));
      uVar1 = local_24;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      FUN_02b62490(&local_50,uVar1);
    }
    else {
      FUN_02b62940(&local_50,param_1 + 0x10);
    }
  }
  else {
    FUN_02b62710(&local_50,param_1 + 0x10);
  }
  if (local_30._4_4_ + 1 != local_40._4_4_) {
    lVar3 = *(long *)PTR_DAT_04bb4848;
    *(byte *)(lVar3 + 0x900) = param_2 & 1;
    *(int *)(lVar3 + 0x8fc) = local_30._4_4_;
    *(undefined4 *)(lVar3 + 0x8e8) = (undefined4)local_40;
    *(int *)(lVar3 + 0x8ec) = local_40._4_4_;
    *(undefined1 *)(lVar3 + 0x902) = 1;
    *(undefined4 *)(lVar3 + 0x8f8) = (undefined4)local_30;
  }
  return;
}

