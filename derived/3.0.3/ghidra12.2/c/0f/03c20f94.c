
void FUN_03c20f94(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  *param_1 = &PTR_FUN_04b7e1e8;
  FUN_038e18e4(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  FUN_038e3114(param_1 + 10,0,0x7fff);
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_038e3114(param_1 + 0x14,0,0x7fff);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar5 = malloc(0x90);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar6 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x90,8);
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "content";
  pcStack_58 = "content";
  local_50 = local_60;
  FUN_038b1ea0(plVar5,&local_50,&local_60);
  *plVar5 = (long)(PTR_DAT_04bd0bd0 + 0x10);
  param_1[0x20] = plVar5;
  lVar6 = *(long *)puVar2;
  if (lVar6 == 0) {
    plVar5 = malloc(0x90);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar5 = (long *)(lVar6 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x90,8);
    }
  }
  local_60 = puVar1 + 0x10;
  pcStack_58 = "Aoc";
  pcStack_48 = "aoc";
  local_50 = local_60;
  FUN_038b1ea0(plVar5,&local_50,&local_60);
  *plVar5 = (long)(PTR_DAT_04bd0bc0 + 0x10);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = plVar5;
  return;
}

