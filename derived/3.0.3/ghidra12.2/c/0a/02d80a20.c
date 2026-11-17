
long * FUN_02d80a20(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_04bb3350;
  lVar10 = *(long *)(param_1 + 0xb8);
  if (lVar10 == 0) {
    lVar11 = 1;
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) goto LAB_02d80ad8;
LAB_02d80a9c:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto LAB_02d80ae4;
    }
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar10;
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
LAB_02d80ad8:
      plVar7 = malloc(0x2c8);
      goto LAB_02d80ae4;
    }
    plVar7 = *(long **)(param_1 + 0xb8);
    if (plVar7 == (long *)0x0) goto LAB_02d80a9c;
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x2c8,8);
LAB_02d80ae4:
  FUN_03868244(plVar7,param_2,param_4);
  *(undefined2 *)(plVar7 + 0x39) = 0;
  puVar4 = PTR_DAT_04bc5668;
  *(undefined4 *)(plVar7 + 0x3a) = 0;
  puVar5 = PTR_DAT_04bd4738;
  plVar7[0x37] = 0xffffffff;
  plVar7[0x38] = 0xffffffff;
  plVar7[0x3b] = 0;
  *(undefined4 *)(plVar7 + 0x3c) = 0;
  *(undefined4 *)((long)plVar7 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(plVar7 + 0x40) = 0;
  *(undefined1 *)((long)plVar7 + 0x202) = 0;
  plVar7[0x41] = 0;
  *plVar7 = (long)(puVar4 + 0x10);
  plVar7[0x3d] = 0;
  plVar7[0x3e] = 0;
  plVar7[0x35] = (long)(puVar5 + 0x10);
  plVar7[0x36] = 0xffffffff;
  *(undefined1 *)(plVar7 + 0x3f) = 0xff;
  if (param_4 == 0) {
    plVar7[0x3e] = -1;
    puVar4 = PTR_DAT_04bc8278;
    plVar7[0x42] = 0;
    plVar7[0x43] = 0;
    plVar7[0x44] = 0;
    plVar7[0x45] = 0;
    plVar7[0x46] = 0;
    plVar7[0x47] = 0;
    plVar7[0x48] = 0;
    plVar7[0x49] = 0;
    plVar7[0x4a] = 0;
    plVar7[0x4b] = 0;
    plVar7[0x4c] = 0;
    plVar7[0x4d] = 0;
    plVar7[0x4e] = 0;
    plVar7[0x4f] = 0;
    plVar7[0x50] = 0;
    plVar7[0x51] = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    plVar7[0x52] = 0;
    plVar7[0x53] = 0;
    plVar7[0x54] = 0;
    plVar7[0x55] = 0;
    plVar7[0x56] = 0;
    plVar7[0x57] = 0;
    plVar7[0x58] = 0;
  }
  else {
    bVar8 = *(byte *)(param_4 + 0xe);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    *(byte *)(plVar7 + 0x3f) = bVar8;
    uVar2 = *(undefined4 *)(param_4 + 0x10);
    plVar7[0x3e] = -1;
    puVar4 = PTR_DAT_04bc8278;
    plVar7[0x42] = 0;
    plVar7[0x43] = 0;
    plVar7[0x44] = 0;
    plVar7[0x45] = 0;
    plVar7[0x46] = 0;
    plVar7[0x47] = 0;
    plVar7[0x48] = 0;
    *(undefined4 *)((long)plVar7 + 0x1fc) = uVar2;
    plVar7[0x49] = 0;
    plVar7[0x4a] = 0;
    plVar7[0x4b] = 0;
    plVar7[0x4c] = 0;
    plVar7[0x4d] = 0;
    plVar7[0x4e] = 0;
    plVar7[0x4f] = 0;
    plVar7[0x50] = 0;
    plVar7[0x51] = 0;
    plVar7[0x52] = 0;
    plVar7[0x53] = 0;
    plVar7[0x54] = 0;
    plVar7[0x55] = 0;
    plVar7[0x56] = 0;
    plVar7[0x57] = 0;
    plVar7[0x58] = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    plVar7[0x42] = *(long *)(param_4 + 0x18);
  }
  nn::os::LockMutex((MutexType *)(param_3 + 0x188));
  plVar9 = (long *)(param_3 + 0x50);
  lVar10 = *plVar9;
  plVar1 = (long *)((long)*(int *)(param_3 + 100) + (long)plVar7);
  *plVar9 = (long)plVar1;
  *plVar1 = lVar10;
  plVar1[1] = (long)plVar9;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar1;
  }
  *(int *)(param_3 + 0x60) = *(int *)(param_3 + 0x60) + 1;
  plVar7[9] = param_3;
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x188));
  plVar7[0x13] = param_1;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,param_4);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (lVar11 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar11;
  }
  return plVar7;
}

