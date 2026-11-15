
void FUN_02048934(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04bb3350;
  lVar8 = *(long *)(param_1 + 0x2b8);
  if (lVar8 == 0) {
    lVar9 = 1;
    iVar3 = *(int *)(param_1 + 0x2c0);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar8;
    iVar3 = *(int *)(param_1 + 0x2c0);
  }
  if (iVar3 == 0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      plVar6 = malloc(0x1f0);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1f0,8);
      }
    }
    *(undefined8 *)((long)plVar6 + 0x1d) = 0;
    puVar2 = PTR_DAT_04bb5bb8;
    puVar1 = PTR_DAT_04bb5cb0 + 0x10;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *plVar6 = (long)puVar1;
    plVar6[1] = 0;
    puVar1 = PTR_DAT_04bb5ba8;
    plVar6[10] = (long)(puVar2 + 0x10);
    plVar6[0x10] = 0;
    plVar6[0x11] = 0;
    puVar1 = puVar1 + 0x10;
    plVar6[0x16] = 0;
    plVar6[0x17] = 0;
    plVar6[0x1c] = 0;
    plVar6[0x1d] = 0;
    plVar6[0x22] = 0;
    plVar6[0x23] = 0;
    plVar6[0x28] = 0;
    plVar6[0x29] = 0;
    plVar6[0x2e] = 0;
    plVar6[0x2f] = 0;
    plVar6[0x34] = 0;
    plVar6[0x35] = 0;
    plVar6[0xc] = (long)puVar1;
    plVar6[0xd] = 0;
    plVar6[0xe] = 0;
    plVar6[0xf] = (long)puVar1;
    plVar6[0x12] = (long)puVar1;
    plVar6[0x13] = 0;
    plVar6[0x14] = 0;
    plVar6[0x15] = (long)puVar1;
    plVar6[0x18] = (long)puVar1;
    plVar6[0x19] = 0;
    plVar6[0x1a] = 0;
    plVar6[0x1b] = (long)puVar1;
    plVar6[0x1e] = (long)puVar1;
    plVar6[0x1f] = 0;
    plVar6[0x20] = 0;
    plVar6[0x21] = (long)puVar1;
    plVar6[0x24] = (long)puVar1;
    plVar6[0x25] = 0;
    plVar6[0x26] = 0;
    plVar6[0x27] = (long)puVar1;
    plVar6[0x2a] = (long)puVar1;
    plVar6[0x2b] = 0;
    plVar6[0x2c] = 0;
    plVar6[0x2d] = (long)puVar1;
    plVar6[0x30] = (long)puVar1;
    plVar6[0x31] = 0;
    plVar6[0x32] = 0;
    plVar6[0x33] = (long)puVar1;
    *(undefined4 *)(plVar6 + 0x36) = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    *(undefined1 *)(plVar6 + 0x37) = 0;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    plVar6[0x3a] = 0;
    *(undefined4 *)(plVar6 + 0x3d) = 0;
    *(undefined4 *)(plVar6 + 0xb) = 0;
    plVar6[0x38] = (long)puVar1;
    plVar6[0x39] = (long)puVar2;
    plVar6[0x3b] = (long)puVar2;
    plVar6[0x3c] = 0;
    plVar6[5] = 0x41a0000041200000;
    plVar6[6] = 0x41a00000;
    *(undefined4 *)((long)plVar6 + 0x1c) = 0x800;
    *(undefined1 *)((long)plVar6 + 0x1ec) = 1;
    plVar6[7] = 0;
    plVar6[8] = 0x43de8000;
    *(undefined4 *)(plVar6 + 9) = 0x44250000;
    *(undefined4 *)((long)plVar6 + 0x4c) = 0x200000;
    if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
      *(long **)(*(long *)(param_1 + 0x2c8) + (long)*(int *)(param_1 + 0x2c0) * 8) = plVar6;
      *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
    }
    lVar8 = *(long *)PTR_DAT_04bb27c8;
    if ((lVar8 != 0) && (plVar6[2] == 0 && plVar6[1] == 0)) {
      nn::os::LockMutex((MutexType *)(lVar8 + 0x50));
      plVar7 = (long *)(lVar8 + 0x70);
      lVar5 = *plVar7;
      plVar6 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)plVar6);
      *plVar7 = (long)plVar6;
      *plVar6 = lVar5;
      plVar6[1] = (long)plVar7;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar6;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x50));
    }
  }
  if (lVar9 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar9;
  }
  return;
}

