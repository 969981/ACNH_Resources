
void FUN_025f989c(long param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
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
  FUN_02602950(param_1,0x81);
  puVar3 = PTR_DAT_04bb2020;
  local_68 = 0;
  local_74[0] = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_78 = 0xd;
  pcStack_a0 = "ResortPlannerIdHash";
  puVar2 = PTR_DAT_04bb2c50 + 0x10;
  local_98[0] = 1;
  local_90 = 0;
  if (*param_2 <= DAT_04c88ed0) {
    local_90 = *param_2;
  }
  local_a8 = puVar1;
  local_88 = puVar2;
  local_80 = local_74;
  FUN_006e9a70(local_98,&local_88);
  (**(code **)(local_88 + 0x18))(&local_88);
  uVar4 = FUN_038aa900(local_80,0x67820ead19);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_a8,uVar4);
  }
  pcStack_a0 = "ResortIdHash";
  local_78 = 0xd;
  local_68 = 0;
  local_74[0] = 0;
  local_90 = 0;
  if (param_2[1] <= DAT_04c88ed0) {
    local_90 = param_2[1];
  }
  local_98[0] = 1;
  local_a8 = puVar1;
  local_88 = puVar2;
  local_80 = local_74;
  FUN_006e9a70(local_98,&local_88);
  (**(code **)(local_88 + 0x18))(&local_88);
  uVar4 = FUN_038aa900(local_80,0x67820ead19);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_a8,uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  local_88 = puVar3 + 0x10;
  local_80 = "Customer";
  uVar5 = FUN_02603820(uVar4,param_2 + 2);
  if (((uVar5 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_88,uVar4);
  }
  return;
}

