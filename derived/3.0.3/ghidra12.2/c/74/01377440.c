
undefined8 FUN_01377440(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_50;
  int local_48;
  int local_44;
  
  iVar2 = *(int *)(param_1 + 0x10);
  local_44 = *(int *)(param_1 + 0x14);
  lVar4 = *(long *)PTR_DAT_04bb27c8;
  local_50 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  if (iVar1 != local_44) {
    local_48 = iVar2;
    do {
      uVar3 = FUN_0094b728(lVar4 + 0x28,&local_50,param_2);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      if (local_48 < *(int *)(param_1 + 0x20)) {
        local_48 = local_48 + 1;
      }
      else {
        local_44 = local_44 + 1;
        local_48 = *(int *)(param_1 + 0x10);
      }
    } while (iVar2 != local_48 || iVar1 != local_44);
  }
  return 0;
}

