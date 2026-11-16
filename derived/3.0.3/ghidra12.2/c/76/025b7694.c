
void FUN_025b7694(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined *local_48;
  char *pcStack_40;
  int local_34;
  
  local_50 = 0x4600000045;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_50 + (long)*(int *)(param_1 + 0x28) * 4));
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "EndReason";
  if (*(long *)(param_1 + 8) != 0) {
    local_48 = puVar1;
    FUN_02605660(*(long *)(param_1 + 8),&local_48,(long)*param_2);
    pcStack_40 = "IsHost";
    if (*(long *)(param_1 + 8) != 0) {
      local_48 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_48,(char)param_2[2]);
      pcStack_40 = "SessionID";
      if (*(long *)(param_1 + 8) != 0) {
        local_48 = puVar2 + 0x10;
        FUN_02605660(*(long *)(param_1 + 8),&local_48,param_2[1]);
        pcStack_40 = "SaveTryCount";
        if (*(long *)(param_1 + 8) != 0) {
          local_48 = puVar2 + 0x10;
          FUN_02605660(*(long *)(param_1 + 8),&local_48,param_2[3]);
          local_48 = puVar2 + 0x10;
          pcStack_40 = "SaveFailStreakCountMax";
          if (*(long *)(param_1 + 8) != 0) {
            FUN_02605660(*(long *)(param_1 + 8),&local_48,param_2[4]);
          }
        }
      }
    }
  }
  if (*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) goto LAB_025b77f0;
    lVar4 = -1;
  }
  else {
    local_34 = *(int *)(*(long *)PTR_DAT_04bbaed0 + 0x3c);
    lVar4 = (long)local_34;
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) goto LAB_025b77f0;
  }
  pcStack_40 = "MultiPlaySession";
  local_48 = puVar2 + 0x10;
  FUN_026054d0(lVar3,&local_48,lVar4);
LAB_025b77f0:
  if (*(int *)(param_1 + 0x28) == 1) {
    local_48 = puVar2 + 0x10;
    pcStack_40 = "IsCloudIsland";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_48,(char)param_2[5]);
    }
  }
  *(ulong *)(*(long *)PTR_DAT_04bb2268 + 0xb8) =
       *(ulong *)(*(long *)PTR_DAT_04bb2268 + 0xb8) & 0xfffffffffffffffb;
  return;
}

