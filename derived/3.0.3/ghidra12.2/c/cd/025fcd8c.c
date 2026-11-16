
void FUN_025fcd8c(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return;
  }
  FUN_02602950(param_1,0x7b);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "IsFromResortPlannerApp";
  if (*(long *)(param_1 + 8) != 0) {
    local_50 = puVar1;
    FUN_026054d0(*(long *)(param_1 + 8),&local_50,*param_2);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  pcStack_48 = "Customer";
  local_50 = puVar1;
  uVar3 = FUN_02603820(uVar5,param_2 + 2);
  if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_50,uVar5);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = puVar2 + 0x10;
  pcStack_48 = "Housemate";
  local_50 = puVar1;
  uVar3 = FUN_02603820(uVar5,param_2 + 4);
  lVar4 = *(long *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    if (lVar4 == 0) {
      return;
    }
    FUN_02605cc0(lVar4,&local_50,uVar5);
    lVar4 = *(long *)(param_1 + 8);
  }
  pcStack_48 = "Section";
  if (lVar4 != 0) {
    local_50 = puVar1;
    FUN_02605660(lVar4,&local_50,*(undefined2 *)(param_2 + 6));
    local_50 = puVar2 + 0x10;
    pcStack_48 = "Season";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_50,(long)*(int *)(param_2 + 8));
    }
  }
  return;
}

