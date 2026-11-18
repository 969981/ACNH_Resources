
void FUN_03593c20(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined4 local_60;
  undefined2 local_5c;
  byte local_5a;
  undefined4 local_58;
  
  lVar4 = (**(code **)(*param_1 + 0x2b0))(param_1,param_1);
  puVar2 = PTR_DAT_04bb2718;
  param_1[0x383d] = lVar4;
  puVar3 = PTR_DAT_04bb3350;
  lVar4 = param_1[0x13];
  local_68 = PTR_DAT_04bc39b0 + 0x10;
  local_60 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  local_5c = 1;
  local_58 = 0xffffffff;
  local_5a = *(byte *)(param_1 + 0x3f);
  if (7 < local_5a) {
    local_5a = 0xff;
  }
  if (lVar4 == 0) {
    plVar6 = (long *)0x0;
    goto LAB_03593ec8;
  }
  lVar9 = *(long *)(lVar4 + 0xb8);
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "UIDIYDialogConfirmNumSeq";
  if (lVar9 == 0) {
    lVar10 = 1;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) goto LAB_03593d60;
LAB_03593d24:
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_03593d48;
    plVar6 = (long *)0x0;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar9;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
LAB_03593d60:
      plVar6 = malloc(0x228);
    }
    else {
      plVar6 = *(long **)(lVar4 + 0xb8);
      if (plVar6 == (long *)0x0) goto LAB_03593d24;
LAB_03593d48:
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x228,8);
    }
  }
  FUN_03868244(plVar6,&local_78,&local_68);
  *(undefined2 *)(plVar6 + 0x39) = 0;
  puVar2 = PTR_DAT_04bd4738;
  plVar6[0x37] = 0xffffffff;
  plVar6[0x38] = 0xffffffff;
  *(undefined4 *)(plVar6 + 0x3a) = 0;
  plVar6[0x3b] = 0;
  *(undefined4 *)(plVar6 + 0x3c) = 0;
  *(undefined2 *)(plVar6 + 0x40) = 0;
  *(undefined1 *)((long)plVar6 + 0x202) = 0;
  plVar6[0x41] = 0;
  plVar6[0x35] = (long)(puVar2 + 0x10);
  plVar6[0x36] = 0xffffffff;
  bVar7 = local_5a;
  if (7 < local_5a) {
    bVar7 = 0xff;
  }
  *(byte *)(plVar6 + 0x3f) = bVar7;
  *(undefined4 *)((long)plVar6 + 0x1fc) = local_58;
  plVar6[0x3d] = 0;
  plVar6[0x3e] = -1;
  puVar2 = PTR_DAT_04bc6818;
  *(undefined4 *)((long)plVar6 + 0x224) = 0;
  *(undefined1 *)(plVar6 + 0x44) = 0;
  plVar6[0x43] = 0;
  plVar6[0x42] = 0;
  *plVar6 = (long)(puVar2 + 0x10);
  nn::os::LockMutex((MutexType *)(param_1 + 0x31));
  plVar8 = param_1 + 10;
  lVar9 = *plVar8;
  plVar1 = (long *)((long)*(int *)((long)param_1 + 100) + (long)plVar6);
  *plVar8 = (long)plVar1;
  *plVar1 = lVar9;
  plVar1[1] = (long)plVar8;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar1;
  }
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  plVar6[9] = (long)param_1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x31));
  plVar6[0x13] = lVar4;
  *(undefined4 *)(plVar6 + 0x15) = 1;
  FUN_0386890c(plVar6,&local_68);
  *(undefined4 *)(plVar6 + 0x15) = 2;
  (**(code **)(*plVar6 + 0x48))(plVar6);
  if (lVar10 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar10;
  }
  lVar4 = plVar6[0x14];
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x80) != lVar4 + 0x78) {
      lVar10 = (long)*(int *)(lVar4 + 0x8c);
      lVar9 = *(long *)(lVar4 + 0x80) - lVar10;
      do {
        *(undefined4 *)(lVar9 + 0x3ec) = 0x30;
        lVar9 = *(long *)(lVar9 + lVar10 + 8) - lVar10;
      } while (lVar9 != (lVar4 + 0x78) - lVar10);
    }
  }
LAB_03593ec8:
  param_1[0x383c] = (long)plVar6;
  return;
}

