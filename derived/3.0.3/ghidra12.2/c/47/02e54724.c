
void FUN_02e54724(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *local_50;
  char *pcStack_48;
  
  puVar3 = PTR_DAT_04bb3350;
  lVar8 = *(long *)(param_1 + 0x98);
  if (lVar8 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar8 + 0xb8);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "KeyGuideWeddingPartySeq";
  if (lVar7 == 0) {
    lVar9 = 1;
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 != 0) {
LAB_02e547b4:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_02e547fc;
      }
      goto LAB_02e547d8;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar7;
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 != 0) {
      plVar5 = *(long **)(lVar8 + 0xb8);
      if (plVar5 == (long *)0x0) goto LAB_02e547b4;
LAB_02e547d8:
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x218,8);
      goto LAB_02e547fc;
    }
  }
  plVar5 = malloc(0x218);
LAB_02e547fc:
  FUN_03868244(plVar5,&local_50,0);
  *(undefined2 *)(plVar5 + 0x39) = 0;
  puVar1 = PTR_DAT_04bd4738;
  *(undefined4 *)(plVar5 + 0x3a) = 0;
  plVar5[0x3b] = 0;
  plVar5[0x37] = 0xffffffff;
  plVar5[0x38] = 0xffffffff;
  *(undefined4 *)(plVar5 + 0x3c) = 0;
  *(undefined4 *)((long)plVar5 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(plVar5 + 0x40) = 0;
  *(undefined1 *)((long)plVar5 + 0x202) = 0;
  plVar5[0x41] = 0;
  plVar5[0x35] = (long)(puVar1 + 0x10);
  plVar5[0x36] = 0xffffffff;
  *(undefined1 *)(plVar5 + 0x3f) = 0xff;
  plVar5[0x3d] = 0;
  plVar5[0x3e] = -1;
  puVar1 = PTR_DAT_04bc6d50 + 0x10;
  *(undefined4 *)(plVar5 + 0x42) = 0;
  *plVar5 = (long)puVar1;
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  plVar6 = (long *)(param_1 + 0x50);
  lVar7 = *plVar6;
  plVar2 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar5);
  *plVar6 = (long)plVar2;
  *plVar2 = lVar7;
  plVar2[1] = (long)plVar6;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar5[9] = param_1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  plVar5[0x13] = lVar8;
  *(undefined4 *)(plVar5 + 0x15) = 1;
  FUN_0386890c(plVar5,0);
  *(undefined4 *)(plVar5 + 0x15) = 2;
  (**(code **)(*plVar5 + 0x48))(plVar5);
  if (lVar9 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar9;
  }
  *(long **)(param_1 + 0x218) = plVar5;
  return;
}

