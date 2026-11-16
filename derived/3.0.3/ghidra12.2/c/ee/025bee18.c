
void FUN_025bee18(long param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x5e);
  puVar3 = PTR_DAT_04bb2020;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "Situation";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar2;
    FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)*param_2);
    pcStack_38 = "ProcessTimeMsec";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar2;
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,*(undefined8 *)(param_2 + 2));
      local_40 = puVar3 + 0x10;
      pcStack_38 = "IsNetworkAvailable";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_40,(char)param_2[4]);
        if (((*(long *)(param_1 + 8) != 0) &&
            (lVar4 = *(long *)(*(long *)(param_1 + 8) + 8), lVar4 != 0)) &&
           ((*(uint *)(lVar4 + 0x38) & 1) != 0)) {
          iVar1 = *(int *)(lVar4 + 0x44) + 3;
          *(int *)(lVar4 + 0x44) = iVar1;
          local_40 = (undefined *)CONCAT44((int)((ulong)local_40 >> 0x20),6);
          if (iVar1 <= (int)((*(uint *)(*(long *)PTR_DAT_04bc3578 + 0xb0) >> 6 & 1) +
                            *(int *)(lVar4 + 0x40))) {
            nn::prepo::AddInternetConnectionStatus
                      (*(PlayReport **)(lVar4 + 0x30),"NetworkInterface","LinkLevel","FrequencyBand"
                      );
          }
        }
      }
    }
  }
  return;
}

