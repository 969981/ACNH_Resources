
bool FUN_0098951c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 local_30;
  undefined8 local_28;
  undefined *local_20;
  int local_18;
  int iStack_14;
  
  if (*(char *)(param_1 + 0xa4) == '\0') {
    return true;
  }
  bVar7 = false;
  local_20 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(param_2 + 8);
  if ((*(int *)(param_1 + 0xd0) <= iVar1) &&
     (local_18 = *(int *)(param_1 + 0xe0) - iVar1, iVar1 <= *(int *)(param_1 + 0xe0))) {
    bVar7 = false;
    iVar2 = *(int *)(param_2 + 0xc);
    if ((*(int *)(param_1 + 0xd4) <= iVar2) &&
       (iVar4 = *(int *)(param_1 + 0xe4) - iVar2, iVar2 <= *(int *)(param_1 + 0xe4))) {
      iVar3 = *(int *)(param_1 + 0xa0);
      if (iVar3 == -0x80000000) {
        iStack_14 = iVar4;
      }
      else if (iVar3 == -0x40000000) {
        iStack_14 = local_18;
        local_18 = iVar2;
      }
      else {
        iStack_14 = iVar1;
        local_18 = iVar4;
        if (iVar3 != 0x40000000) {
          iStack_14 = iVar2;
          local_18 = iVar1;
        }
      }
      local_30 = 0;
      local_28 = 0;
      if (*(char *)(param_1 + 0xe8) == '\0') {
        uVar8 = FUN_00979eb0(param_1 + 8,&local_20,(long)&local_28 + 4,&local_28,(long)&local_30 + 4
                             ,&local_30);
        uVar5 = local_30;
        uVar6 = local_28;
      }
      else {
        uVar8 = FUN_0097a150(param_1 + 8,&local_20,(long)&local_28 + 4,&local_28,(long)&local_30 + 4
                             ,&local_30,*(undefined4 *)(param_1 + 0xec));
        uVar5 = local_30;
        uVar6 = local_28;
      }
      if ((uVar8 & 1) == 0) {
        bVar7 = false;
      }
      else {
        local_28._4_4_ = (int)((ulong)uVar6 >> 0x20);
        local_28._0_4_ = (int)uVar6;
        local_30._4_4_ = (int)((ulong)uVar5 >> 0x20);
        local_30._0_4_ = (int)uVar5;
        bVar7 = ((local_28._4_4_ == 7 && (int)local_28 == 7) && local_30._4_4_ == 7) &&
                (int)local_30 == 7;
      }
    }
  }
  return bVar7;
}

