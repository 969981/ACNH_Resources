
void FUN_025970dc(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_68 [2];
  ulong local_60;
  undefined *local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined1 local_38;
  
  FUN_02602950(param_1,local_68[(long)*(int *)(param_1 + 0x28) + -9]);
  puVar3 = PTR_DAT_04bb2020;
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "UploadTime";
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    FUN_02605660(*(long *)(param_1 + 8),&local_58,*param_2);
    lVar4 = *(long *)(param_1 + 8);
    local_50 = "DataSize";
    if (lVar4 == 0) {
      return;
    }
    uVar2 = param_2[4];
    break;
  case 1:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "DownloadTime";
    if (*(long *)(param_1 + 8) != 0) {
      local_58 = puVar1;
      FUN_02605660(*(long *)(param_1 + 8),&local_58,*param_2);
      local_50 = "DataSize";
      if (*(long *)(param_1 + 8) != 0) {
        local_58 = puVar1;
        FUN_02605660(*(long *)(param_1 + 8),&local_58,param_2[4]);
        local_58 = puVar3 + 0x10;
        local_50 = "SearchType";
        if (*(long *)(param_1 + 8) != 0) {
          FUN_02605660(*(long *)(param_1 + 8),&local_58,(long)(int)param_2[5]);
        }
      }
    }
    local_48 = 0xd;
    local_78 = puVar3 + 0x10;
    local_38 = 0;
    pcStack_70 = "DreamLandIdHash";
    local_50 = local_44;
    local_44[0] = 0;
    local_58 = PTR_DAT_04bb2c50 + 0x10;
    local_68[0] = 1;
    local_60 = 0;
    if (*(ulong *)(param_2 + 2) <= DAT_04c88ed0) {
      local_60 = *(ulong *)(param_2 + 2);
    }
    FUN_006e9a70(local_68,&local_58);
    (**(code **)(local_58 + 0x18))(&local_58);
    uVar5 = FUN_038aa900(local_50,0x67820ead19);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_78,uVar5);
    }
    if (param_2[5] == 3) {
      lVar4 = *(long *)(param_1 + 8);
      local_50 = "BlackListHitNum";
      goto joined_r0x02597278;
    }
    lVar4 = *(long *)(param_1 + 8);
    local_50 = "BlackListHitNum";
    if (lVar4 == 0) {
      return;
    }
    lVar6 = 0;
    goto LAB_02597374;
  case 2:
    lVar4 = *(long *)(param_1 + 8);
    local_50 = "WatchTime";
    if (lVar4 == 0) {
      return;
    }
    uVar2 = *param_2;
    break;
  default:
    goto switchD_02597148_caseD_3;
  case 4:
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "DreamLandId";
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    FUN_02605660(*(long *)(param_1 + 8),&local_58,*(undefined8 *)(param_2 + 2));
    lVar4 = *(long *)(param_1 + 8);
    local_50 = "BlackListNum";
joined_r0x02597278:
    if (lVar4 == 0) {
      return;
    }
    lVar6 = (long)(int)param_2[6];
LAB_02597374:
    local_58 = puVar3 + 0x10;
    FUN_026054d0(lVar4,&local_58,lVar6);
    goto switchD_02597148_caseD_3;
  }
  local_58 = puVar3 + 0x10;
  FUN_02605660(lVar4,&local_58,uVar2);
switchD_02597148_caseD_3:
  return;
}

