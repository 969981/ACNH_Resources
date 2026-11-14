
void FUN_01ca992c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  param_1[6] = param_1 + 5;
  param_1[7] = 0xffffffff00000000;
  param_1[4] = 0xffffffff00000000;
  param_1[5] = param_1 + 5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = param_1 + 8;
  param_1[9] = param_1 + 8;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  plVar9 = param_1 + 0xf;
  *plVar9 = (long)puVar1;
  param_1[0xc] = param_1 + 0xb;
  param_1[0xd] = 0xffffffff00000000;
  param_1[10] = 0xffffffff00000000;
  param_1[0xb] = param_1 + 0xb;
  puVar3 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,plVar9);
    param_1[0x10] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar8 = (long *)(lVar6 + 0x70);
      lVar7 = *plVar8;
      plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)plVar9);
      *plVar8 = (long)plVar2;
      *plVar2 = lVar7;
      plVar2[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar2;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  puVar4 = PTR_DAT_04bc1068;
  lVar6 = *(long *)puVar3;
  param_1[0x15] = plVar9;
  param_1[0x16] = 0;
  plVar9 = param_1 + 0x1b;
  *plVar9 = (long)puVar1;
  param_1[0x1c] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = puVar4 + 0x10;
  param_1[0x17] = &PTR_LAB_04a45450;
  param_1[0x18] = param_1;
  param_1[0x19] = FUN_01ca9b30;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,plVar9);
    param_1[0x1c] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar8 = (long *)(lVar6 + 0x70);
      lVar7 = *plVar8;
      plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)plVar9);
      *plVar8 = (long)plVar2;
      *plVar2 = lVar7;
      plVar2[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar2;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  param_1[0x1b] = puVar4 + 0x10;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = plVar9;
  param_1[0x22] = 0;
  param_1[0x23] = &PTR_LAB_04a45450;
  param_1[0x24] = param_1;
  param_1[0x25] = &LAB_01caa1c0;
  param_1[0x26] = 0;
  uVar5 = FUN_006bd550("AppReliable",0);
  *(undefined2 *)((long)param_1 + 0x14c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x28;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x27) = uVar5;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x38;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x38;
  return;
}

