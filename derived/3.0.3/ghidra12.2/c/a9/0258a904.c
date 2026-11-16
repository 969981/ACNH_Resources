
void FUN_0258a904(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x16);
  uVar3 = FUN_0277d6c4(*(undefined8 *)(param_2 + 2));
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "ToolUniqueId";
  local_40 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
  }
  uVar3 = FUN_025567f4(*(undefined8 *)(param_2 + 2));
  pcStack_38 = "ToolDamage";
  local_40 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
    puVar1 = puVar2 + 0x10;
    pcStack_38 = "TreeKind";
    local_40 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)*param_2);
      pcStack_38 = "TreeGrowLevel";
      local_40 = puVar1;
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),&local_40,(char)param_2[1]);
        local_40 = puVar2 + 0x10;
        cVar4 = (char)param_2[6];
        pcStack_38 = "IsPopItem";
        if (*(long *)(param_1 + 8) == 0) goto LAB_0258aa00;
        FUN_026054d0(*(long *)(param_1 + 8),&local_40);
      }
    }
  }
  cVar4 = (char)param_2[6];
LAB_0258aa00:
  if (cVar4 != '\0') {
    uVar3 = FUN_0277d6c4(*(undefined8 *)(param_2 + 4));
    local_40 = puVar2 + 0x10;
    pcStack_38 = "PopItemUniqueId";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
    }
  }
  return;
}

