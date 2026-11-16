
void FUN_0285baf4(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_48;
  char *pcStack_40;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb46b0;
  local_34 = 0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
LAB_0285bb88:
    local_34 = 2;
    if (*(long *)puVar2 != 0) {
      lVar3 = FUN_026eec4c(*(long *)puVar2,2);
      if (lVar3 != 0) {
        local_48 = PTR_DAT_04bb2020 + 0x10;
        pcStack_40 = "RumorPFavoriteProgressDays";
        FUN_0274dc60(&local_34,&local_48,*param_2);
      }
      local_34 = 3;
      if (*(long *)puVar2 == 0) goto LAB_0285bc98;
      lVar3 = FUN_026eec4c(*(long *)puVar2,3);
      if (lVar3 != 0) {
        local_48 = PTR_DAT_04bb2020 + 0x10;
        pcStack_40 = "RumorPFavoriteProgressDays";
        FUN_0274dc60(&local_34,&local_48,*param_2);
      }
    }
  }
  else {
    lVar3 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,0);
    puVar1 = PTR_DAT_04bb2020;
    if (lVar3 != 0) {
      local_48 = PTR_DAT_04bb2020 + 0x10;
      pcStack_40 = "RumorPFavoriteProgressDays";
      FUN_0274dc60(&local_34,&local_48,*param_2);
    }
    local_34 = 1;
    if (*(long *)puVar2 != 0) {
      lVar3 = FUN_026eec4c(*(long *)puVar2,1);
      if (lVar3 != 0) {
        local_48 = puVar1 + 0x10;
        pcStack_40 = "RumorPFavoriteProgressDays";
        FUN_0274dc60(&local_34,&local_48,*param_2);
      }
      goto LAB_0285bb88;
    }
  }
  local_34 = 4;
  if (*(long *)puVar2 != 0) {
    lVar3 = FUN_026eec4c(*(long *)puVar2,4);
    if (lVar3 != 0) {
      local_48 = PTR_DAT_04bb2020 + 0x10;
      pcStack_40 = "RumorPFavoriteProgressDays";
      FUN_0274dc60(&local_34,&local_48,*param_2);
    }
    local_34 = 5;
    if (*(long *)puVar2 == 0) {
      return;
    }
    lVar3 = FUN_026eec4c(*(long *)puVar2,5);
    if (lVar3 != 0) {
      local_48 = PTR_DAT_04bb2020 + 0x10;
      pcStack_40 = "RumorPFavoriteProgressDays";
      FUN_0274dc60(&local_34,&local_48,*param_2);
    }
  }
LAB_0285bc98:
  local_34 = 6;
  if (*(long *)puVar2 != 0) {
    lVar3 = FUN_026eec4c(*(long *)puVar2,6);
    if (lVar3 != 0) {
      local_48 = PTR_DAT_04bb2020 + 0x10;
      pcStack_40 = "RumorPFavoriteProgressDays";
      FUN_0274dc60(&local_34,&local_48,*param_2);
    }
    local_34 = 7;
    if ((*(long *)puVar2 != 0) && (lVar3 = FUN_026eec4c(*(long *)puVar2,7), lVar3 != 0)) {
      local_48 = PTR_DAT_04bb2020 + 0x10;
      pcStack_40 = "RumorPFavoriteProgressDays";
      FUN_0274dc60(&local_34,&local_48,*param_2);
    }
  }
  return;
}

