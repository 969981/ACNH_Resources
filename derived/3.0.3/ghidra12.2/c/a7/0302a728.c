
void FUN_0302a728(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  byte local_4a;
  undefined4 local_48;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar9 = *(long *)(param_1 + 0x98);
  local_58 = PTR_DAT_04bc39b0 + 0x10;
  local_4a = *(byte *)(param_1 + 0x1f8);
  local_50 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  if (7 < local_4a) {
    local_4a = 0xff;
  }
  local_4c = 1;
  local_48 = 0xffffffff;
  lVar8 = *(long *)(lVar9 + 0xb8);
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "MyDesignExchangeBGSeq";
  if (lVar8 == 0) {
    lVar10 = 1;
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) goto LAB_0302a83c;
LAB_0302a800:
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar8 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
      goto LAB_0302a848;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar8;
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
LAB_0302a83c:
      plVar5 = malloc(0x218);
      goto LAB_0302a848;
    }
    plVar5 = *(long **)(lVar9 + 0xb8);
    if (plVar5 == (long *)0x0) goto LAB_0302a800;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x218,8);
LAB_0302a848:
  FUN_03868244(plVar5,&local_68,&local_58);
  *(undefined2 *)(plVar5 + 0x39) = 0;
  puVar3 = PTR_DAT_04bd4738;
  plVar5[0x37] = 0xffffffff;
  plVar5[0x38] = 0xffffffff;
  *(undefined4 *)(plVar5 + 0x3a) = 0;
  plVar5[0x3b] = 0;
  *(undefined4 *)(plVar5 + 0x3c) = 0;
  *(undefined2 *)(plVar5 + 0x40) = 0;
  *(undefined1 *)((long)plVar5 + 0x202) = 0;
  plVar5[0x41] = 0;
  plVar5[0x35] = (long)(puVar3 + 0x10);
  plVar5[0x36] = 0xffffffff;
  bVar6 = local_4a;
  if (7 < local_4a) {
    bVar6 = 0xff;
  }
  *(byte *)(plVar5 + 0x3f) = bVar6;
  *(undefined4 *)((long)plVar5 + 0x1fc) = local_48;
  plVar5[0x3d] = 0;
  plVar5[0x3e] = -1;
  puVar3 = PTR_DAT_04bc7d80;
  plVar5[0x42] = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  plVar7 = (long *)(param_1 + 0x50);
  lVar8 = *plVar7;
  plVar1 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar5);
  *plVar7 = (long)plVar1;
  *plVar1 = lVar8;
  plVar1[1] = (long)plVar7;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar1;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar5[9] = param_1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  plVar5[0x13] = lVar9;
  *(undefined4 *)(plVar5 + 0x15) = 1;
  FUN_0386890c(plVar5,&local_58);
  *(undefined4 *)(plVar5 + 0x15) = 2;
  (**(code **)(*plVar5 + 0x48))(plVar5);
  if (lVar10 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar10;
  }
  *(long **)(param_1 + 0x218) = plVar5;
  return;
}

