
void FUN_025f86a0(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *local_a8;
  char *pcStack_a0;
  undefined4 local_98 [2];
  ulong local_90;
  undefined *local_88;
  char *local_80;
  undefined4 local_78;
  char local_74 [12];
  undefined1 local_68;
  
  if (*(int *)(param_1 + 0x28) != 1) {
    return;
  }
  FUN_02602950(param_1,0x80);
  puVar2 = PTR_DAT_04bb2020;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "PromoteNum";
  if (*(long *)(param_1 + 8) != 0) {
    local_88 = local_a8;
    FUN_026054d0(*(long *)(param_1 + 8),&local_88,(long)*param_2);
  }
  local_68 = 0;
  pcStack_a0 = "ResortPlannerIdHash";
  puVar1 = PTR_DAT_04bb2c50 + 0x10;
  local_90 = 0;
  if (*(ulong *)(param_2 + 2) <= DAT_04c88ed0) {
    local_90 = *(ulong *)(param_2 + 2);
  }
  local_74[0] = '\0';
  local_78 = 0xd;
  local_98[0] = 1;
  local_88 = puVar1;
  local_80 = local_74;
  FUN_006e9a70(local_98,&local_88);
  (**(code **)(local_88 + 0x18))(&local_88);
  uVar3 = FUN_038aa900(local_80,0x67820ead19);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_a8,uVar3);
  }
  pcStack_a0 = "ResortIdHash";
  local_78 = 0xd;
  local_68 = 0;
  local_74[0] = '\0';
  local_90 = 0;
  if (*(ulong *)(param_2 + 4) <= DAT_04c88ed0) {
    local_90 = *(ulong *)(param_2 + 4);
  }
  local_98[0] = 1;
  local_a8 = puVar2 + 0x10;
  local_88 = puVar1;
  local_80 = local_74;
  FUN_006e9a70(local_98,&local_88);
  (**(code **)(local_88 + 0x18))(&local_88);
  uVar3 = FUN_038aa900(local_80,0x67820ead19);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_a8,uVar3);
    local_80 = "MyColor";
    if (*(long *)(param_1 + 8) == 0) {
LAB_025f88cc:
      local_88 = puVar2 + 0x10;
      lVar4 = *(long *)(param_1 + 0x40);
      goto joined_r0x025f88bc;
    }
    local_88 = puVar2 + 0x10;
    FUN_02605660(*(long *)(param_1 + 8),&local_88,(long)param_2[6]);
    puVar1 = puVar2 + 0x10;
    local_80 = "MyColorDeco";
    local_88 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_88,(long)param_2[7]);
      local_80 = "SlotId";
      local_88 = puVar1;
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_88,(long)param_2[8]);
        local_88 = puVar2 + 0x10;
        local_80 = "FacilityID";
        if (*(long *)(param_1 + 8) != 0) {
          FUN_02605660(*(long *)(param_1 + 8),&local_88,(long)param_2[9]);
          lVar4 = *(long *)(param_1 + 0x40);
          goto joined_r0x025f88bc;
        }
        goto LAB_025f88cc;
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x40);
joined_r0x025f88bc:
  if (lVar4 != 0) {
    FUN_02611580(lVar4,param_2 + 10);
    local_80 = "RollNpcNum";
    if (*(long *)(param_1 + 8) != 0) {
      local_88 = puVar2 + 0x10;
      FUN_026054d0(*(long *)(param_1 + 8),&local_88,(long)*(int *)(*(long *)(param_1 + 0x40) + 8));
      local_80 = "RollNpc";
      if (*(long *)(param_1 + 8) != 0) {
        local_88 = puVar2 + 0x10;
        FUN_02605b30(*(long *)(param_1 + 8),&local_88,
                     *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10));
      }
    }
  }
  return;
}

