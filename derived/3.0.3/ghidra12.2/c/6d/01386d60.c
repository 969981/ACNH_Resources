
void FUN_01386d60(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_30;
  char *pcStack_28;
  
  *param_1 = 0xfffe;
  FUN_0277d4ac(param_1);
  puVar1 = PTR_DAT_04bb2010;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = puVar1 + 0x10;
  param_1[2] = 0;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "TapIndoorSelectCloudIsland";
    iVar2 = FUN_02743000(&local_30);
    if ((iVar2 != 0) || (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) != 0)) {
      local_30 = (undefined *)0x44a;
      FUN_0277d4ac(&local_30);
      *(undefined4 *)param_1 = (undefined4)local_30;
      *(undefined4 *)((long)param_1 + 4) = local_30._4_4_;
      uVar3 = 0x1d;
      goto LAB_01386e28;
    }
  }
  local_30 = (undefined *)0x33a2;
  FUN_0277d4ac(&local_30);
  *(undefined4 *)param_1 = (undefined4)local_30;
  *(undefined4 *)((long)param_1 + 4) = local_30._4_4_;
  uVar3 = 0x1e;
LAB_01386e28:
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = 0x22;
  *(undefined4 *)((long)param_1 + 0x14) = uVar3;
  return;
}

