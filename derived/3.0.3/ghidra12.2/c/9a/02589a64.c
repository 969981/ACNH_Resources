
void FUN_02589a64(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x15);
  uVar3 = FUN_0277d6c4(*param_2);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "ToolUniqueId";
  local_40 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
  }
  uVar3 = FUN_025567f4(*param_2);
  pcStack_38 = "ToolDamage";
  local_40 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
    local_40 = puVar2 + 0x10;
    cVar4 = *(char *)(param_2 + 2);
    pcStack_38 = "IsPopItem";
    if (*(long *)(param_1 + 8) == 0) goto LAB_02589b14;
    FUN_026054d0(*(long *)(param_1 + 8),&local_40);
  }
  cVar4 = *(char *)(param_2 + 2);
LAB_02589b14:
  if (cVar4 != '\0') {
    uVar3 = FUN_0277d6c4(param_2[1]);
    local_40 = puVar2 + 0x10;
    pcStack_38 = "PopItemUniqueId";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
    }
  }
  return;
}

