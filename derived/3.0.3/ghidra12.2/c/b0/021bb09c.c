
uint FUN_021bb09c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "SeasonEventIndoorUpdateHour";
  local_30 = puVar1;
  FUN_02743234(&local_30,0);
  pcStack_28 = "SeasonEventIndoorUpdateMinute";
  local_30 = puVar1;
  FUN_02743234(&local_30,0);
  *(undefined4 *)(param_1 + 0x55f90) = 1;
  uVar3 = FUN_0290d828();
  uVar2 = 0;
  if ((uVar3 & 1) == 0) {
    if ((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) {
      uVar2 = 1;
      local_30._0_4_ = 1;
      uVar3 = FUN_021b92e0(param_1,&local_30,0);
      if ((uVar3 & 1) == 0) {
        local_30._0_4_ = 2;
        uVar3 = FUN_021b92e0(param_1,&local_30,0);
        if ((uVar3 & 1) == 0) {
          local_30 = (undefined *)CONCAT44(local_30._4_4_,3);
          uVar2 = FUN_021b92e0(param_1,&local_30,0);
        }
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2 & 1;
}

