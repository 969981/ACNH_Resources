
void FUN_025a0ea4(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,6);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "InsectUniqueId";
  local_40 = puVar1;
  uVar4 = FUN_0277d6c4(*param_2);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar4);
  }
  pcStack_38 = "InsectTableId";
  lVar5 = *(long *)PTR_DAT_04bb4008;
  if (lVar5 == 0) {
    uVar3 = 0;
    lVar5 = *(long *)(param_1 + 8);
    local_40 = puVar1;
  }
  else {
    local_40 = puVar1;
    uVar4 = FUN_0277d6c4(*param_2);
    uVar3 = FUN_01a13160(lVar5,uVar4);
    lVar5 = *(long *)(param_1 + 8);
  }
  if (lVar5 != 0) {
    FUN_02605660(lVar5,&local_40,uVar3);
  }
  pcStack_38 = "ToolUniqueId";
  local_40 = puVar2 + 0x10;
  uVar4 = FUN_0277d6c4(param_2[1]);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar4);
  }
  uVar4 = FUN_025567f4(param_2[1]);
  pcStack_38 = "ToolDamage";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar2 + 0x10;
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar4);
  }
  return;
}

