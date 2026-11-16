
void FUN_025aa1e8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "growup_npc";
  FUN_0260140c(param_1,&local_30);
  *param_1 = &PTR_FUN_04a85b08;
  puVar1 = PTR_DAT_04bb2268;
  param_1[5] = 0;
  if (*(char *)(*(long *)puVar1 + 0xb1) == '\0') {
    if (param_1[1] == 0) {
      lVar3 = 0;
    }
    else {
      lVar2 = *(long *)(param_1[1] + 8);
      lVar3 = 0;
      if ((lVar2 != 0) && (lVar3 = FUN_03f28fa0(lVar2,0x10), lVar3 == 0)) {
        *(undefined1 *)(*(long *)puVar1 + 0xb1) = 1;
      }
    }
    param_1[5] = lVar3;
    FUN_025aa380(param_1);
    FUN_025aa590(param_1);
    FUN_025ab2c0(param_1);
  }
  return;
}

