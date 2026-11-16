
void FUN_025b5698(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x42);
  puVar1 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 8) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 8);
    if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x38) & 1) != 0)) {
      iVar3 = *(int *)(lVar6 + 0x44) + 3;
      *(int *)(lVar6 + 0x44) = iVar3;
      local_40 = (undefined *)CONCAT44(local_40._4_4_,6);
      if (iVar3 <= (int)((*(uint *)(*(long *)PTR_DAT_04bc3578 + 0xb0) >> 6 & 1) +
                        *(int *)(lVar6 + 0x40))) {
        nn::prepo::AddInternetConnectionStatus
                  (*(PlayReport **)(lVar6 + 0x30),"NetworkInterface","LinkLevel","FrequencyBand");
      }
    }
    pcStack_38 = "IsLocal";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar1 + 0x10;
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,
                   *(int *)(*(long *)(*(long *)PTR_DAT_04bb21d8 + 0x3d8) + 0x10) == 1);
      pcStack_38 = "LibFrom";
      if (*(long *)(param_1 + 8) != 0) {
        local_40 = puVar1 + 0x10;
        FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)*(int *)(param_2 + 0x10));
        pcStack_38 = "Common";
        if (*(long *)(param_1 + 8) != 0) {
          local_40 = puVar1 + 0x10;
          FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)*(int *)(param_2 + 0x14));
          pcStack_38 = "Extra";
          if (*(long *)(param_1 + 8) != 0) {
            local_40 = puVar1 + 0x10;
            FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)*(int *)(param_2 + 0x18));
          }
        }
      }
    }
  }
  local_40 = puVar1 + 0x10;
  pcStack_38 = "VariantState";
  uVar2 = nn::err::ErrorResultVariant::GetState();
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar2);
  }
  iVar3 = nn::err::ErrorResultVariant::GetState();
  if (iVar3 == 2) {
    uVar5 = nn::err::ErrorResultVariant::operator_cast_to_ErrorCode
                      ((ErrorResultVariant *)(param_2 + 0x1c));
    local_40 = puVar1 + 0x10;
    pcStack_38 = "Code_Category";
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar5 & 0xffffffff);
    lVar6 = *(long *)(param_1 + 8);
    pcStack_38 = "Code_Number";
    if (lVar6 == 0) {
      return;
    }
    uVar5 = uVar5 >> 0x20;
  }
  else {
    iVar3 = nn::err::ErrorResultVariant::GetState();
    if (iVar3 != 1) {
      return;
    }
    uVar4 = nn::err::ErrorResultVariant::operator_cast_to_Result
                      ((ErrorResultVariant *)(param_2 + 0x1c));
    local_40 = puVar1 + 0x10;
    pcStack_38 = "Result_Module";
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar4 & 0x1ff);
    lVar6 = *(long *)(param_1 + 8);
    pcStack_38 = "Result_Description";
    if (lVar6 == 0) {
      return;
    }
    uVar5 = (ulong)(uVar4 >> 9 & 0x1fff);
  }
  local_40 = puVar1 + 0x10;
  FUN_02605660(lVar6,&local_40,uVar5);
  return;
}

