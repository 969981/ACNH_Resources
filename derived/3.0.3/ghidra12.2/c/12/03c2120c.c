
void FUN_03c2120c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  memset(param_1,0,0xcb8);
  FUN_0399dd90(param_1);
  param_1[0x19b] = 0;
  *param_1 = &PTR_FUN_04b7e208;
  param_1[0x196] = &PTR_LAB_04b7e2d8;
  *(undefined1 *)(param_1 + 0x19c) = 1;
  FUN_0390cee0(param_1 + 0x19e);
  param_1[0x1c4] = 0;
  *(undefined4 *)(param_1 + 0x1c5) = 0xffffffff;
  param_1[0x1cd] = "agl::TextureData";
  param_1[0x1c3] = 0;
  *(undefined4 *)(param_1 + 0x1ce) = 0x10000;
  param_1[0x1c2] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  *(undefined4 *)(param_1 + 0x1d1) = 0xff;
  *(undefined4 *)((long)param_1 + 0xe8c) = 0;
  param_1[0x1ba] = PTR_DAT_04bd1198 + 0x10;
  param_1[0x1d2] = 0x80000000000;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d7] = &DAT_3f8000003f800000;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = &DAT_3f8000003f800000;
  puVar1 = PTR_DAT_04bd1178 + 0x10;
  param_1[0x1e2] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1df] = 0;
  param_1[0x1de] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1db] = 0;
  param_1[0x1da] = 0;
  param_1[0x1d6] = puVar1;
  FUN_0390cee0(param_1 + 0x1e3);
  puVar3 = PTR_DAT_04bd0d40;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x1ff] = puVar3 + 0x10;
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar8 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1 + 0x1ff);
    param_1[0x200] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar5 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x1ff));
      *plVar10 = (long)plVar5;
      *plVar5 = lVar9;
      plVar5[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar5;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  puVar6 = PTR_DAT_04bb2020;
  param_1[0x204] = &DAT_0407ebb1;
  param_1[0x203] = puVar6 + 0x10;
  puVar4 = PTR_DAT_04bbd830;
  param_1[0x205] = 0;
  *(undefined4 *)(param_1 + 0x206) = 1;
  *(undefined8 *)((long)param_1 + 0x103c) = 0;
  *(undefined8 *)((long)param_1 + 0x1044) = 0;
  *(undefined8 *)((long)param_1 + 0x104c) = 0;
  puVar2 = puVar4 + 0x10;
  param_1[0x1ff] = puVar2;
  puVar7 = PTR_DAT_04bbd828;
  param_1[0x20b] = puVar3 + 0x10;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  param_1[0x20e] = 0;
  *(undefined **)((long)param_1 + 0x1034) = puVar7 + 0x10;
  if (*(long *)puVar1 != 0) {
    lVar8 = FUN_038cb610(*(long *)puVar1,param_1 + 0x20b);
    param_1[0x20c] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar5 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x20b));
      *plVar10 = (long)plVar5;
      *plVar5 = lVar9;
      plVar5[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar5;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  param_1[0x20b] = puVar2;
  param_1[0x20f] = puVar6 + 0x10;
  param_1[0x210] = &DAT_0407ebb1;
  param_1[0x211] = 0;
  *(undefined4 *)(param_1 + 0x212) = 1;
  *(undefined8 *)((long)param_1 + 0x109c) = 0;
  *(undefined8 *)((long)param_1 + 0x10a4) = 0;
  *(undefined8 *)((long)param_1 + 0x10ac) = 0;
  *(undefined **)((long)param_1 + 0x1094) = puVar7 + 0x10;
  lVar8 = *(long *)puVar1;
  puVar3 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x217] = puVar3;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,param_1 + 0x217);
    param_1[0x218] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar5 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x217));
      *plVar10 = (long)plVar5;
      *plVar5 = lVar9;
      plVar5[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar5;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  puVar4 = puVar4 + 0x10;
  param_1[0x217] = puVar4;
  param_1[0x21d] = 0;
  *(undefined4 *)(param_1 + 0x21e) = 1;
  param_1[0x21c] = &DAT_0407ebb1;
  param_1[0x21b] = puVar2 + 0x10;
  *(undefined8 *)((long)param_1 + 0x10fc) = 0;
  *(undefined8 *)((long)param_1 + 0x1104) = 0;
  *(undefined8 *)((long)param_1 + 0x110c) = 0;
  puVar6 = PTR_DAT_04bbd828;
  param_1[0x223] = puVar3;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  *(undefined **)((long)param_1 + 0x10f4) = puVar6 + 0x10;
  if (*(long *)puVar1 != 0) {
    lVar8 = FUN_038cb610(*(long *)puVar1,param_1 + 0x223);
    param_1[0x224] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar5 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x223));
      *plVar10 = (long)plVar5;
      *plVar5 = lVar9;
      plVar5[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar5;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  param_1[0x227] = puVar2 + 0x10;
  param_1[0x228] = &DAT_0407ebb1;
  param_1[0x223] = puVar4;
  param_1[0x229] = 0;
  *(undefined4 *)(param_1 + 0x22a) = 1;
  *(undefined8 *)((long)param_1 + 0x115c) = 0;
  *(undefined8 *)((long)param_1 + 0x1164) = 0;
  *(undefined8 *)((long)param_1 + 0x116c) = 0;
  *(undefined **)((long)param_1 + 0x1154) = puVar6 + 0x10;
  lVar8 = *(long *)puVar1;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  param_1[0x22f] = puVar1;
  puVar1 = PTR_DAT_04bbd830;
  if (lVar8 != 0) {
    lVar8 = FUN_038cb610(lVar8,param_1 + 0x22f);
    param_1[0x230] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar10 = (long *)(lVar8 + 0x70);
      lVar9 = *plVar10;
      plVar5 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)(param_1 + 0x22f));
      *plVar10 = (long)plVar5;
      *plVar5 = lVar9;
      plVar5[1] = (long)plVar10;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar5;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar11 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
      }
    }
  }
  puVar3 = PTR_DAT_04bb2020;
  param_1[0x234] = &DAT_0407ebb1;
  param_1[0x22f] = puVar1 + 0x10;
  param_1[0x235] = 0;
  *(undefined4 *)(param_1 + 0x236) = 1;
  param_1[0x233] = puVar3 + 0x10;
  *(undefined8 *)((long)param_1 + 0x11bc) = 0;
  *(undefined8 *)((long)param_1 + 0x11c4) = 0;
  *(undefined8 *)((long)param_1 + 0x11cc) = 0;
  puVar1 = PTR_DAT_04bbd828;
  param_1[0x23b] = 0;
  *(undefined **)((long)param_1 + 0x11b4) = puVar1 + 0x10;
  param_1[0x197] = 0xffffffffffffffff;
  param_1[0x198] = 0xffffffffffffffff;
  param_1[0x199] = 0xffffffffffffffff;
  param_1[0x19a] = 0xffffffffffffffff;
  param_1[0x19b] = 0xffffffffffffffff;
  return;
}

