
long * FUN_033b4fbc(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar9 = *(long *)(param_1 + 0xb8);
  if (lVar9 == 0) {
    lVar10 = 1;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) goto LAB_033b506c;
LAB_033b5030:
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      goto LAB_033b5078;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar9;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
LAB_033b506c:
      plVar6 = malloc(0x218);
      goto LAB_033b5078;
    }
    plVar6 = *(long **)(param_1 + 0xb8);
    if (plVar6 == (long *)0x0) goto LAB_033b5030;
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x218,8);
LAB_033b5078:
  FUN_03868244(plVar6,param_2,param_3);
  *(undefined2 *)(plVar6 + 0x39) = 0;
  puVar3 = PTR_DAT_04bc5668;
  *(undefined4 *)(plVar6 + 0x3a) = 0;
  puVar4 = PTR_DAT_04bd4738;
  plVar6[0x37] = 0xffffffff;
  plVar6[0x38] = 0xffffffff;
  plVar6[0x3b] = 0;
  *(undefined4 *)(plVar6 + 0x3c) = 0;
  *(undefined4 *)((long)plVar6 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(plVar6 + 0x40) = 0;
  *(undefined1 *)((long)plVar6 + 0x202) = 0;
  plVar6[0x41] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  plVar6[0x3d] = 0;
  plVar6[0x3e] = 0;
  plVar6[0x35] = (long)(puVar4 + 0x10);
  plVar6[0x36] = 0xffffffff;
  *(undefined1 *)(plVar6 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar7 = *(byte *)(param_3 + 0xe);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(plVar6 + 0x3f) = bVar7;
    *(undefined4 *)((long)plVar6 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  plVar6[0x42] = 0;
  puVar3 = PTR_DAT_04bc63e0;
  plVar6[0x3e] = -1;
  plVar6[0x13] = param_1;
  *plVar6 = (long)(puVar3 + 0x10);
  *(undefined4 *)(plVar6 + 0x15) = 1;
  FUN_0386890c(plVar6,param_3);
  *(undefined4 *)(plVar6 + 0x15) = 2;
  (**(code **)(*plVar6 + 0x48))(plVar6);
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  plVar8 = (long *)(param_1 + 0x40);
  lVar9 = *plVar8;
  plVar1 = (long *)((long)*(int *)(param_1 + 0x54) + (long)plVar6);
  *plVar8 = (long)plVar1;
  *plVar1 = lVar9;
  plVar1[1] = (long)plVar8;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar1;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  if (lVar10 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar10;
  }
  return plVar6;
}

