
void FUN_025e3ff4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "sys_start_multi_villagers";
  local_40 = puVar1;
  FUN_025ffac8(param_1,&local_40,param_2);
  puVar3 = PTR_DAT_04bb2268;
  *param_1 = &PTR_FUN_04a866c0;
  lVar4 = *(long *)puVar3;
  if (*(char *)(lVar4 + 0xb1) != '\0') {
    return;
  }
  pcStack_38 = "PlayerNum";
  if (param_1[1] != 0) {
    local_40 = puVar1;
    FUN_026054d0(param_1[1],&local_40,(long)*(int *)(*(long *)PTR_DAT_04bb39b0 + 0xf8));
    lVar4 = *(long *)puVar3;
    local_40 = puVar2 + 0x10;
    uVar5 = *(ulong *)(lVar4 + 0xb8);
    pcStack_38 = "IsRetry";
    if (param_1[1] == 0) goto LAB_025e40d0;
    FUN_026054d0(param_1[1],&local_40,uVar5 >> 1 & 1);
    lVar4 = *(long *)puVar3;
  }
  uVar5 = *(ulong *)(lVar4 + 0xb8);
LAB_025e40d0:
  *(ulong *)(lVar4 + 0xb8) = uVar5 | 2;
  return;
}

