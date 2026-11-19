
void FUN_03899520(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_04bd0d40;
  *param_1 = &PTR_LAB_04b61a38;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  puVar1 = puVar2 + 0x10;
  plVar10 = param_1 + 1;
  *plVar10 = (long)puVar1;
  puVar4 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar5 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar10);
    param_1[2] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar8 = (long *)(lVar5 + 0x70);
      lVar7 = *plVar8;
      plVar9 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar10);
      *plVar8 = (long)plVar9;
      *plVar9 = lVar7;
      plVar9[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar9;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  plVar9 = param_1 + 0xd;
  *plVar9 = (long)puVar1;
  puVar1 = PTR_DAT_04bc1068;
  lVar5 = *(long *)puVar4;
  param_1[9] = &PTR_LAB_04b61a88;
  param_1[0xe] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = plVar10;
  param_1[8] = 0;
  param_1[1] = puVar1 + 0x10;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (lVar5 != 0) {
    lVar5 = FUN_038cb610(lVar5,plVar9);
    param_1[0xe] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar8 = (long *)(lVar5 + 0x70);
      lVar7 = *plVar8;
      plVar10 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar9);
      *plVar8 = (long)plVar10;
      *plVar10 = lVar7;
      plVar10[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar10;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  puVar2 = puVar2 + 0x10;
  lVar5 = *(long *)puVar4;
  plVar10 = param_1 + 0x19;
  *plVar10 = (long)puVar2;
  param_1[0x15] = &PTR_LAB_04b61a88;
  param_1[0xd] = puVar1 + 0x10;
  param_1[0x1a] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = plVar9;
  param_1[0x14] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (lVar5 != 0) {
    lVar5 = FUN_038cb610(lVar5,plVar10);
    param_1[0x1a] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar8 = (long *)(lVar5 + 0x70);
      lVar7 = *plVar8;
      plVar9 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar10);
      *plVar8 = (long)plVar9;
      *plVar9 = lVar7;
      plVar9[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar9;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  lVar5 = *(long *)puVar4;
  param_1[0x19] = &PTR_FUN_04b61b00;
  puVar3 = param_1 + 0x25;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = plVar10;
  param_1[0x20] = 0;
  param_1[0x21] = &PTR_LAB_04b61b20;
  param_1[0x25] = puVar2;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  if (lVar5 != 0) {
    lVar5 = FUN_038cb610(lVar5,puVar3);
    param_1[0x26] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar9 = (long *)(lVar5 + 0x70);
      lVar7 = *plVar9;
      plVar10 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)puVar3);
      *plVar9 = (long)plVar10;
      *plVar10 = lVar7;
      plVar10[1] = (long)plVar9;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar10;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  param_1[0x25] = &PTR_FUN_04b61b00;
  param_1[0x2d] = &PTR_LAB_04b61b20;
  param_1[0x31] = 0x3e8000f4240;
  param_1[0x32] = 0x500000001;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x34] = param_1 + 0x34;
  param_1[0x35] = param_1 + 0x34;
  param_1[0x3c] = 0xffffffff;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = puVar3;
  param_1[0x2c] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0xffffffff;
  uVar6 = nn::os::GetSystemTick();
  param_1[0x3d] = uVar6;
  uVar6 = nn::os::GetSystemTick();
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[9] = &DAT_04b61ab0;
  param_1[10] = param_1;
  param_1[0xb] = &LAB_03899890;
  param_1[0xc] = 0;
  param_1[0x15] = &DAT_04b61ab0;
  param_1[0x16] = param_1;
  param_1[0x17] = &LAB_0389a590;
  param_1[0x18] = 0;
  param_1[0x23] = &LAB_0389ab80;
  param_1[0x24] = 0;
  param_1[0x3e] = uVar6;
  param_1[0x3f] = 0;
  param_1[0x21] = &PTR_LAB_04b61ad8;
  param_1[0x22] = param_1;
  param_1[0x2d] = &PTR_LAB_04b61ad8;
  param_1[0x2e] = param_1;
  param_1[0x2f] = &LAB_0389ac1c;
  param_1[0x30] = 0;
  return;
}

