
void FUN_033a820c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar8 = *(long *)(param_1 + 0xb8);
  if (lVar8 == 0) {
    lVar9 = 1;
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) goto LAB_033a82bc;
LAB_033a8280:
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar5 = (long *)(lVar8 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
      goto LAB_033a82c8;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar8;
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
LAB_033a82bc:
      plVar5 = malloc(0x218);
      goto LAB_033a82c8;
    }
    plVar5 = *(long **)(param_1 + 0xb8);
    if (plVar5 == (long *)0x0) goto LAB_033a8280;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x218,8);
LAB_033a82c8:
  FUN_03868244(plVar5,param_2,param_3);
  *(undefined2 *)(plVar5 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(plVar5 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
  plVar5[0x37] = 0xffffffff;
  plVar5[0x38] = 0xffffffff;
  plVar5[0x3b] = 0;
  *(undefined4 *)(plVar5 + 0x3c) = 0;
  *(undefined4 *)((long)plVar5 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(plVar5 + 0x40) = 0;
  *(undefined1 *)((long)plVar5 + 0x202) = 0;
  plVar5[0x41] = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[0x3d] = 0;
  plVar5[0x3e] = 0;
  plVar5[0x35] = (long)(puVar3 + 0x10);
  plVar5[0x36] = 0xffffffff;
  *(undefined1 *)(plVar5 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar6 = *(byte *)(param_3 + 0xe);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(plVar5 + 0x3f) = bVar6;
    *(undefined4 *)((long)plVar5 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  plVar5[0x42] = 0;
  puVar2 = PTR_DAT_04bc50e0;
  plVar5[0x3e] = -1;
  plVar5[0x13] = param_1;
  *plVar5 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar5 + 0x15) = 1;
  FUN_0386890c(plVar5,param_3);
  *(undefined4 *)(plVar5 + 0x15) = 2;
  (**(code **)(*plVar5 + 0x48))(plVar5);
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  plVar7 = (long *)(param_1 + 0x40);
  lVar8 = *plVar7;
  plVar5 = (long *)((long)*(int *)(param_1 + 0x54) + (long)plVar5);
  *plVar7 = (long)plVar5;
  *plVar5 = lVar8;
  plVar5[1] = (long)plVar7;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar5;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  if (lVar9 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar9;
  }
  return;
}

