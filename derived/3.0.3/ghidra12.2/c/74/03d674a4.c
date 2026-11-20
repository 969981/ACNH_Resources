
void FUN_03d674a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar2 = *(long **)(param_3 + 0x58);
  local_38 = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_38);
    puVar1 = PTR_DAT_04bb2020;
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "RegionType";
    if (local_38 != 0) {
      uVar3 = FUN_03c9c780(local_38,&local_48);
      if ((uVar3 & 1) == 0) {
        local_48 = puVar1 + 0x10;
        pcStack_40 = "RegionLanguageType";
        if (local_38 == 0) {
          return;
        }
        uVar3 = FUN_03c9c780(local_38,&local_48);
        if ((uVar3 & 1) != 0) {
          local_48 = puVar1 + 0x10;
          pcStack_40 = "RegionLanguageType";
          uVar4 = FUN_03c68d44(param_2,&local_48,PTR_PTR_04bb2238);
          param_1[1] = uVar4;
        }
      }
      else {
        local_48 = puVar1 + 0x10;
        pcStack_40 = "RegionType";
        uVar4 = FUN_03c68d44(param_2,&local_48,PTR_PTR_04bb2238);
        *param_1 = uVar4;
      }
      local_48 = puVar1 + 0x10;
      pcStack_40 = "StopRandom";
      if ((local_38 != 0) && (uVar3 = FUN_03c9c780(local_38,&local_48), (uVar3 & 1) != 0)) {
        local_48 = puVar1 + 0x10;
        pcStack_40 = "StopRandom";
        uVar4 = FUN_03c68d44(param_2,&local_48,PTR_PTR_04bb2238);
        param_1[2] = uVar4;
      }
    }
  }
  return;
}

