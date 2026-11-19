
void FUN_03c54130(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  char *local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_04b810f0;
  FUN_038e18e4(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  FUN_038e3114(param_1 + 10,0,0x7fff);
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_038e3114(param_1 + 0x14,0,0x7fff);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar4 = malloc(0xa0);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0xa0,8);
    }
  }
  FUN_03a0c824(plVar4);
  param_1[0x20] = plVar4;
  local_48 = "WorkerMgr";
  local_50 = 0x20;
  local_68 = 0x1000000010;
  uStack_60 = 0x10000000000010;
  local_40 = 0;
  local_38 = 0;
  local_58 = 0x10000000100000;
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_68);
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x160);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x160,8);
    }
  }
  FUN_03c54744(pvVar5);
  param_1[0x21] = pvVar5;
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    plVar4 = malloc(0x1700);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x1700,8);
  }
  if (plVar4 != (long *)0x0) {
    *(long **)((long)pvVar5 + 0x48) = plVar4;
    plVar4[0x2b2] = 0;
    *plVar4 = (long)(plVar4 + 0x2e);
    plVar4[0x2e] = (long)(plVar4 + 0x5c);
    plVar4[0x5c] = (long)(plVar4 + 0x8a);
    plVar4[0x8a] = (long)(plVar4 + 0xb8);
    plVar4[0xb8] = (long)(plVar4 + 0xe6);
    plVar4[0xe6] = (long)(plVar4 + 0x114);
    plVar4[0x114] = (long)(plVar4 + 0x142);
    plVar4[0x142] = (long)(plVar4 + 0x170);
    plVar4[0x170] = (long)(plVar4 + 0x19e);
    plVar4[0x19e] = (long)(plVar4 + 0x1cc);
    plVar4[0x1cc] = (long)(plVar4 + 0x1fa);
    plVar4[0x1fa] = (long)(plVar4 + 0x228);
    plVar4[0x228] = (long)(plVar4 + 0x256);
    plVar4[0x256] = (long)(plVar4 + 0x284);
    plVar4[0x284] = (long)(plVar4 + 0x2b2);
    *(long **)((long)pvVar5 + 0x50) = plVar4;
    *(undefined4 *)((long)pvVar5 + 0x58) = 0x10;
  }
  return;
}

