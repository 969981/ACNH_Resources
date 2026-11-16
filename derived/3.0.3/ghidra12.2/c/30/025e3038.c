
void FUN_025e3038(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602bc0(param_1,0);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "IsNewCreatePlayer";
  local_40 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,param_2[1]);
    pcStack_38 = "IsNewCreateLand";
    local_40 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,*param_2);
      local_40 = puVar2 + 0x10;
      pcStack_38 = "IsMoveVillager";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_40,param_2[2]);
      }
    }
  }
  if (param_2[1] == '\0') {
    FUN_02602f20(param_1);
    FUN_02603050(param_1);
    FUN_026031e0(param_1);
    lVar3 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
  }
  if (lVar3 != 0) {
    FUN_02604200(lVar3,*(long *)PTR_DAT_04bb2268 + 0xc4);
  }
  local_40 = puVar2 + 0x10;
  pcStack_38 = "RomHash";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_40,*(undefined8 *)(param_1 + 0x28));
  }
  FUN_025e3154(param_1);
  return;
}

