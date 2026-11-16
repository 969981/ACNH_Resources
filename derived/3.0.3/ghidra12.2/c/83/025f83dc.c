
void FUN_025f83dc(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_a8;
  char *pcStack_a0;
  undefined4 local_98 [2];
  ulong local_90;
  undefined *local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_74 [12];
  undefined1 local_68;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return;
  }
  FUN_02602950(param_1,0x7f);
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
  local_74[0] = 0;
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
  local_74[0] = 0;
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
    if (*(long *)(param_1 + 8) != 0) {
      local_88 = puVar2 + 0x10;
      FUN_02605660(*(long *)(param_1 + 8),&local_88,(long)param_2[6]);
      local_80 = "MyColorDeco";
      if (*(long *)(param_1 + 8) != 0) {
        local_88 = puVar2 + 0x10;
        FUN_02605660(*(long *)(param_1 + 8),&local_88,(long)param_2[7]);
        local_80 = "SlotId";
        if (*(long *)(param_1 + 8) != 0) {
          local_88 = puVar2 + 0x10;
          FUN_026054d0(*(long *)(param_1 + 8),&local_88,(long)param_2[8]);
        }
      }
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_80 = "Customer";
  local_88 = puVar2 + 0x10;
  uVar4 = FUN_02603820(uVar3,param_2 + 9);
  if (((uVar4 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_88,uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_80 = "Housemate";
  local_88 = puVar2 + 0x10;
  uVar4 = FUN_02603820(uVar3,(long)param_2 + 0x26);
  lVar5 = *(long *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    if (lVar5 == 0) {
      return;
    }
    FUN_02605cc0(lVar5,&local_88,uVar3);
    lVar5 = *(long *)(param_1 + 8);
  }
  local_80 = "Section";
  if (lVar5 != 0) {
    local_88 = puVar2 + 0x10;
    FUN_02605660(lVar5,&local_88,(short)param_2[10]);
    local_80 = "Season";
    if (*(long *)(param_1 + 8) != 0) {
      local_88 = puVar2 + 0x10;
      FUN_02605660(*(long *)(param_1 + 8),&local_88,(long)param_2[0xb]);
    }
  }
  return;
}

