
void FUN_03b42d30(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_04bc3ee8;
  if (*(long *)(param_1 + 0x1f0) != 0) {
    if ((*(long *)PTR_DAT_04bc3ee8 != 0) && (*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x40) != 0)) {
      FUN_03bc0c3c(0xbf800000);
    }
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  lVar11 = *(long *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  nn::os::LockMutex((MutexType *)(lVar11 + 0x48));
  if (*(long *)(lVar11 + 8) != 0) {
    FUN_03b60e78(0);
  }
  *(undefined4 *)(lVar11 + 0x10) = 0;
  *(undefined4 *)(lVar11 + 0x24) = 0;
  *(undefined1 *)(lVar11 + 0x18) = 0;
  nn::os::UnlockMutex((MutexType *)(lVar11 + 0x48));
  if (*(long *)(param_1 + 0x110) != 0) {
    if (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0) {
      FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 7;
  if (*(long *)(param_1 + 0x1f0) != 0) {
    if ((*(long *)puVar3 != 0) && (*(long *)(*(long *)puVar3 + 0x40) != 0)) {
      FUN_03bc0c3c(0xbf800000);
    }
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  puVar6 = *(uint **)(param_1 + 0x78);
  *(undefined2 *)(param_1 + 0x14) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 0x4c) = 0xbf800000bf800000;
  *(undefined4 *)(param_1 + 0x54) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x60) = 0xffffffff00000000;
  if ((puVar6 != (uint *)0x0) && (puVar6[4] = 0xbf800000, *(long *)(puVar6 + 2) != 0)) {
    uVar2 = *puVar6;
    if (0 < (int)uVar2) {
      uVar7 = (ulong)uVar2 & 3;
      if (uVar2 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          lVar11 = uVar9 * 4;
          uVar9 = uVar9 + 4;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar11) = 0xbf800000;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar11 + 4) = 0xbf800000;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar11 + 8) = 0xbf800000;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar11 + 0xc) = 0xbf800000;
        } while (((ulong)uVar2 & 0xfffffffc) != uVar9);
      }
      if ((uVar2 & 3) != 0) {
        lVar11 = uVar9 << 2;
        do {
          uVar7 = uVar7 - 1;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar11) = 0xbf800000;
          lVar11 = lVar11 + 4;
        } while (uVar7 != 0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 0x9c) = 0xbf800000bf800000;
  *(undefined4 *)(param_1 + 0xa4) = 0xbf800000;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xb0) = 0xffffffff00000000;
  puVar6 = *(uint **)(param_1 + 200);
  if ((puVar6 != (uint *)0x0) && (puVar6[4] = 0xbf800000, *(long *)(puVar6 + 2) != 0)) {
    uVar2 = *puVar6;
    if (0 < (int)uVar2) {
      uVar7 = (ulong)uVar2 & 3;
      if (uVar2 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          lVar11 = uVar9 * 4;
          uVar9 = uVar9 + 4;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar11) = 0xbf800000;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar11 + 4) = 0xbf800000;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar11 + 8) = 0xbf800000;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar11 + 0xc) = 0xbf800000;
        } while (((ulong)uVar2 & 0xfffffffc) != uVar9);
      }
      if ((uVar2 & 3) != 0) {
        lVar11 = uVar9 << 2;
        do {
          uVar7 = uVar7 - 1;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar11) = 0xbf800000;
          lVar11 = lVar11 + 4;
        } while (uVar7 != 0);
      }
    }
  }
  lVar11 = *(long *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(lVar11 + 0x28) = 0xffffffff00000000;
  *(undefined8 *)(lVar11 + 8) = 0xbf8000003f800000;
  *(undefined8 *)(lVar11 + 0x10) = 0xbf800000bf800000;
  *(undefined4 *)(lVar11 + 0x30) = 0;
  *(undefined8 *)(lVar11 + 0x34) = 0;
  *(undefined8 *)(lVar11 + 0x18) = 0xbf800000bf800000;
  *(undefined8 *)(lVar11 + 0x20) = 0x3f800000;
  puVar6 = *(uint **)(lVar11 + 0x40);
  if ((puVar6 != (uint *)0x0) && (puVar6[4] = 0xbf800000, *(long *)(puVar6 + 2) != 0)) {
    uVar2 = *puVar6;
    if (0 < (int)uVar2) {
      uVar7 = (ulong)uVar2 & 3;
      if (uVar2 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          lVar8 = uVar9 * 4;
          uVar9 = uVar9 + 4;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar8) = 0xbf800000;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar8 + 4) = 0xbf800000;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar8 + 8) = 0xbf800000;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar8 + 0xc) = 0xbf800000;
        } while (((ulong)uVar2 & 0xfffffffc) != uVar9);
      }
      if ((uVar2 & 3) != 0) {
        lVar8 = uVar9 << 2;
        do {
          uVar7 = uVar7 - 1;
          *(undefined4 *)(*(long *)(puVar6 + 2) + lVar8) = 0xbf800000;
          lVar8 = lVar8 + 4;
        } while (uVar7 != 0);
      }
    }
  }
  *(undefined4 *)(lVar11 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  lVar11 = *(long *)(param_1 + 0x120);
  *(undefined1 **)(param_1 + 0xf4) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0x100) = 0xffffffffffffffff;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 8) != 0) {
      FUN_03b60dec();
    }
    *(undefined1 *)(lVar11 + 0x18) = 0;
    *(undefined8 *)(lVar11 + 0x1c) = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0x100000000;
    *(undefined4 *)(lVar11 + 0x24) = 0;
  }
  lVar11 = *(long *)(param_1 + 0x128);
  if (lVar11 != 0) {
    *(undefined1 **)(lVar11 + 8) = &DAT_3f8000003f800000;
    *(undefined8 *)(lVar11 + 0x10) = 0x3f800000;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    FUN_03ba63a0(*(long *)(param_1 + 0x108),param_1);
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    if (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0) {
      FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  plVar10 = *(long **)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (plVar10 != (long *)0x0) {
    lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 8) + 0x58);
    if (*(long *)(lVar11 + 0x10) != 0) {
      iVar4 = *(int *)((long)plVar10 + 100);
      if (0 < iVar4) {
        *(int *)((long)plVar10 + 100) = iVar4 + -1;
        iVar4 = iVar4 + -1;
      }
      if (iVar4 == 0) {
        (**(code **)(*plVar10 + 0x30))(plVar10);
        uVar2 = *(uint *)(plVar10 + 0xd);
        if (*(uint *)(lVar11 + 8) <= uVar2) {
          uVar2 = 0;
        }
        *(undefined4 *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar2 * 0x10 + 8) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  lVar11 = *(long *)(param_1 + 0x1e8);
  if (lVar11 != 0) {
    lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 8) + 0x60);
    if (*(long *)(lVar8 + 0x10) != 0) {
      pMVar1 = (MutexType *)(lVar8 + 0x40);
      nn::os::LockMutex(pMVar1);
      *(undefined1 *)(lVar11 + 8) = 0;
      nn::os::UnlockMutex(pMVar1);
    }
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined2 *)(param_1 + 0x1a4) = 0x101;
  *(undefined4 *)(param_1 + 0x1d0) = 0xffff000d;
  puVar5 = *(undefined8 **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x1a6) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(long *)(param_1 + 0x1a8) = param_1 + 0x168;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(long *)(param_1 + 0x1b0) = param_1 + 0x198;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0xffffffff;
  }
  if (((DAT_05ad1da8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05ad1da8), iVar4 != 0)) {
    FUN_037d8910(&DAT_05ad1d98);
    __cxa_guard_release(&DAT_05ad1da8);
  }
  if (0 < (int)DAT_05ad1d98) {
    uVar7 = 0;
    do {
      if (*(int *)(DAT_05ad1da0 + uVar7 * 4) == 0) goto LAB_03b43258;
      uVar7 = uVar7 + 1;
    } while (DAT_05ad1d98 != uVar7);
  }
  uVar7 = 0;
LAB_03b43258:
  *(int *)(param_1 + 0x200) = (int)uVar7;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

