
void FUN_03c10864(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  char *pcVar10;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_03c11314(param_1,param_2,"ProcessSwitch");
  *param_1 = &PTR_LAB_04b7cf98;
  param_1[0x45] = &PTR_LAB_04b7d070;
  FUN_038e18e4(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  FUN_038e3114(param_1 + 0x4f,0,0x7fff);
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_038e3114(param_1 + 0x59,0,0x7fff);
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x68] = &PTR_LAB_04b7d138;
  *(undefined1 *)((long)param_1 + 0x38c) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x70] = (undefined1 *)((long)param_1 + 0x38c);
  *(undefined4 *)(param_1 + 0x71) = 0x100;
  *(undefined1 *)((long)param_1 + 0x48b) = 0;
  puVar1 = PTR_DAT_04bb21f8 + 0x10;
  *(undefined1 *)((long)param_1 + 0x4ac) = 0;
  param_1[0x6f] = puVar1;
  param_1[0x94] = (undefined1 *)((long)param_1 + 0x4ac);
  *(undefined4 *)(param_1 + 0x95) = 0x100;
  puVar4 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  *(undefined1 *)((long)param_1 + 0x5ab) = 0;
  param_1[0x93] = puVar1;
  puVar1 = PTR_DAT_04bb3350;
  *(undefined4 *)((long)param_1 + 0x32c) = 0;
  if (lVar9 == 0) {
    puVar8 = malloc(0x110);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar7 = (long *)(lVar9 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x110,8);
    }
  }
  lVar6 = *(long *)puVar4;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
  puVar3 = (undefined8 *)(lVar6 + 8);
  if (lVar9 != 0) {
    puVar3 = (undefined8 *)(lVar9 + 0xa8);
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "AppletThread";
  FUN_038e1f88(puVar8,&local_40,*puVar3,0x11,0,0x7fffffff,0x10000,1);
  *puVar8 = &PTR_FUN_04b7d090;
  if (*(int *)((long)puVar8 + 0xcc) == 0) {
    nn::os::StartThread((ThreadType *)puVar8[0x1d]);
    uVar5 = nn::os::GetThreadId((ThreadType *)puVar8[0x1d]);
    *(undefined4 *)(puVar8 + 0x19) = uVar5;
    if (*(int *)((long)puVar8 + 0xcc) == 0) {
      *(undefined4 *)((long)puVar8 + 0xcc) = 1;
    }
  }
  *(undefined1 *)((long)puVar8 + 0x104) = 0;
  param_1[0x66] = puVar8;
  pcVar10 = (char *)param_1[0x70];
  if (pcVar10 != "htmlcontents.htdocs/index.html") {
    iVar2 = 0x1e;
    if (*(int *)(param_1 + 0x71) < 0x1f) {
      iVar2 = *(int *)(param_1 + 0x71) + -1;
    }
    memcpy(pcVar10,"htmlcontents.htdocs/index.html",(long)iVar2);
    pcVar10[iVar2] = '\0';
  }
  pcVar10 = (char *)param_1[0x94];
  param_1[0x92] = 0;
  if (pcVar10 != "https://www.nintendo.co.jp") {
    iVar2 = 0x1a;
    if (*(int *)(param_1 + 0x95) < 0x1b) {
      iVar2 = *(int *)(param_1 + 0x95) + -1;
    }
    memcpy(pcVar10,"https://www.nintendo.co.jp",(long)iVar2);
    pcVar10[iVar2] = '\0';
  }
  param_1[0xb6] = 0;
  if (*(long *)PTR_DAT_04bb6250 != 0) {
    *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)(*(long *)PTR_DAT_04bb6250 + 0x178);
  }
  nn::oe::SetOperationModeChangedNotificationEnabled(true);
  nn::oe::SetPerformanceModeChangedNotificationEnabled(true);
  nn::oe::SetResumeNotificationEnabled(true);
  nn::oe::EnterExitRequestHandlingSection();
  return;
}

