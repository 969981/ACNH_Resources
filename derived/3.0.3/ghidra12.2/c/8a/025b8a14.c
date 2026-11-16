
void FUN_025b8a14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_4c;
  int local_44;
  undefined *local_40;
  char *pcStack_38;
  
  local_4c = 0x5500000051;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_4c + (long)*(int *)(param_1 + 0x28) * 4));
  puVar1 = PTR_DAT_04bb2020;
  if (*(int *)(param_1 + 0x28) != 0) goto LAB_025b8bb4;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "IsLocal";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,
                 *(int *)(*(long *)(*(long *)PTR_DAT_04bb21d8 + 0x3d8) + 0x10) == 1);
  }
  FUN_02603730(param_1);
  if (*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) {
    lVar5 = *(long *)(param_1 + 8);
    local_40 = puVar1 + 0x10;
    pcStack_38 = "MultiPlaySession";
    if (lVar5 != 0) {
      lVar6 = -1;
      goto LAB_025b8b04;
    }
  }
  else {
    local_44 = *(int *)(*(long *)PTR_DAT_04bbaed0 + 0x3c);
    local_40 = puVar1 + 0x10;
    pcStack_38 = "MultiPlaySession";
    lVar6 = (long)local_44;
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 != 0) {
LAB_025b8b04:
      pcStack_38 = "MultiPlaySession";
      local_40 = puVar1 + 0x10;
      FUN_026054d0(lVar5,&local_40,lVar6);
    }
  }
  lVar5 = *(long *)PTR_DAT_04bcb7d8;
  nn::os::LockMutex((MutexType *)(lVar5 + 0xd0));
  puVar2 = PTR_DAT_04bcb8b8;
  if (*(long *)PTR_DAT_04bcb8b8 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00223668(&local_40,*(undefined8 *)PTR_DAT_04bcb8c0);
    if (((int)local_40 == 0) && (iVar3 = FUN_0029b330(*(undefined8 *)puVar2), iVar3 == 3)) {
      uVar4 = FUN_0029becc(*(undefined8 *)puVar2);
    }
    else {
      uVar4 = *(undefined4 *)
               (*(long *)puVar2 + (ulong)*(byte *)(*(long *)puVar2 + 0x162) * 4 + 0x180);
    }
  }
  local_40 = puVar1 + 0x10;
  pcStack_38 = "SessionID";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar4);
  }
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0xd0));
LAB_025b8bb4:
  FUN_025b8be0(param_1);
  FUN_025b92fc(param_1);
  return;
}

