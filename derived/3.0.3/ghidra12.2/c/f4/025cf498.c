
void FUN_025cf498(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb1) != '\0') {
    return;
  }
  FUN_02602950(param_1,5);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "UniqueID";
  local_40 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,*param_2);
    pcStack_38 = "PreValue";
    local_40 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)(int)param_2[1]);
      puVar1 = puVar2 + 0x10;
      pcStack_38 = "PostValue";
      local_40 = puVar1;
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)(int)param_2[2]);
        pcStack_38 = "IsLocal";
        local_40 = puVar1;
        if (*(long *)(param_1 + 8) != 0) {
          FUN_026054d0(*(long *)(param_1 + 8),&local_40,
                       *(int *)(*(long *)(*(long *)PTR_DAT_04bb21d8 + 0x3d8) + 0x10) == 1);
        }
      }
    }
  }
  lVar5 = *(long *)PTR_DAT_04bcb7d8;
  nn::os::LockMutex((MutexType *)(lVar5 + 0xd0));
  puVar1 = PTR_DAT_04bcb8b8;
  if (*(long *)PTR_DAT_04bcb8b8 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00223668(&local_40,*(undefined8 *)PTR_DAT_04bcb8c0);
    if (((int)local_40 == 0) && (iVar3 = FUN_0029b330(*(undefined8 *)puVar1), iVar3 == 3)) {
      uVar4 = FUN_0029becc(*(undefined8 *)puVar1);
    }
    else {
      uVar4 = *(undefined4 *)
               (*(long *)puVar1 + (ulong)*(byte *)(*(long *)puVar1 + 0x162) * 4 + 0x180);
    }
  }
  local_40 = puVar2 + 0x10;
  pcStack_38 = "SessionID";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar4);
  }
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0xd0));
  FUN_025cf640(param_1);
  return;
}

