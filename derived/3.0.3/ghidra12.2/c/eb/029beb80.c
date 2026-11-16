
undefined1 * FUN_029beb80(long param_1,undefined1 *param_2)

{
  uint uVar1;
  MutexType *pMVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined1 *puVar16;
  void *__dest;
  void *__src;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  pMVar2 = (MutexType *)(param_1 + 0x68);
  nn::os::LockMutex(pMVar2);
  iVar8 = *(int *)(param_1 + 0x2b8);
  if (iVar8 == 0) {
    lVar11 = *(long *)(param_1 + 0xa0);
    if (*(int *)(param_1 + 0xa8) < 1) {
      lVar11 = 0;
    }
    puVar14 = (undefined8 *)0x0;
    if (lVar11 != 0) {
      puVar14 = (undefined8 *)(lVar11 + -8);
    }
    uVar9 = *puVar14;
    plVar17 = puVar14 + 1;
    if (*plVar17 != 0) {
      *(undefined8 *)(*plVar17 + 8) = puVar14[2];
    }
    if ((long *)puVar14[2] != (long *)0x0) {
      *(long *)puVar14[2] = *plVar17;
    }
    *plVar17 = 0;
    puVar14[2] = 0;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
    *puVar14 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 **)(param_1 + 0xb0) = puVar14;
    iVar8 = *(int *)(param_1 + 0x2b8);
    if (iVar8 < *(int *)(param_1 + 0x2d0)) {
      puVar14 = *(undefined8 **)(param_1 + 0x2c0);
      plVar17 = (long *)(param_1 + 0x2a8);
      if (puVar14 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x2c0) = *puVar14;
      }
      *puVar14 = uVar9;
      puVar14[2] = 0;
      plVar15 = puVar14 + 1;
      *plVar15 = 0;
      lVar11 = *plVar17;
      *plVar17 = (long)plVar15;
      puVar14[2] = plVar17;
      *plVar15 = lVar11;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar15;
      }
      iVar8 = *(int *)(param_1 + 0x2b8) + 1;
      *(int *)(param_1 + 0x2b8) = iVar8;
    }
  }
  lVar11 = *(long *)(param_1 + 0x2b0);
  if (iVar8 < 1) {
    lVar11 = 0;
  }
  puVar14 = (undefined8 *)0x0;
  if (lVar11 != 0) {
    puVar14 = (undefined8 *)(lVar11 + -8);
  }
  puVar16 = (undefined1 *)*puVar14;
  plVar17 = puVar14 + 1;
  if (*plVar17 != 0) {
    *(undefined8 *)(*plVar17 + 8) = puVar14[2];
  }
  if ((long *)puVar14[2] != (long *)0x0) {
    *(long *)puVar14[2] = *plVar17;
  }
  *plVar17 = 0;
  puVar14[2] = 0;
  *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + -1;
  *puVar14 = *(undefined8 *)(param_1 + 0x2c0);
  *(undefined8 **)(param_1 + 0x2c0) = puVar14;
  nn::os::UnlockMutex(pMVar2);
  uVar12 = *(ulong *)(param_2 + 0x10);
  iVar8 = (int)(uVar12 >> 1);
  if (0 < iVar8) {
    uVar10 = 0;
    uVar13 = 0;
    do {
      uVar5 = *(uint *)(param_2 + 0x18);
      fVar18 = 0.0;
      fVar19 = 0.0;
      lVar11 = *(long *)(param_2 + 0x20);
      uVar1 = uVar13 + 1;
      uVar4 = uVar13;
      if (uVar5 <= uVar13) {
        uVar4 = 0;
      }
      if ((int)uVar1 < iVar8) {
        if (uVar5 <= uVar1) {
          uVar1 = 0;
        }
        fVar19 = (float)(int)*(short *)(lVar11 + (ulong)uVar1 * 2);
      }
      uVar1 = uVar13 + 2;
      if ((int)uVar1 < iVar8) {
        if (uVar5 <= uVar1) {
          uVar1 = 0;
        }
        fVar18 = (float)(int)*(short *)(lVar11 + (ulong)uVar1 * 2);
      }
      fVar20 = 0.0;
      uVar1 = uVar13 + 3;
      if ((int)uVar1 < iVar8) {
        if (uVar5 <= uVar1) {
          uVar1 = 0;
        }
        fVar20 = (float)(int)*(short *)(lVar11 + (ulong)uVar1 * 2);
      }
      sVar7 = *(short *)(lVar11 + (ulong)uVar4 * 2);
      uVar13 = uVar13 + 4;
      uVar1 = uVar10;
      if (*(uint *)(puVar16 + 0x28) <= uVar10) {
        uVar1 = 0;
      }
      uVar10 = uVar10 + 1;
      puVar14 = (undefined8 *)(*(long *)(puVar16 + 0x30) + (ulong)uVar1 * 0x10);
      puVar14[1] = CONCAT44(fVar20,fVar18);
      *puVar14 = CONCAT44(fVar19,(float)(int)sVar7);
    } while ((int)uVar13 < iVar8);
    uVar12 = *(ulong *)(param_2 + 0x10);
  }
  *(ulong *)(puVar16 + 0x20) = uVar12;
  __dest = *(void **)(puVar16 + 0x40);
  puVar16[1] = 0;
  uVar6 = param_2[2];
  puVar16[4] = 0;
  puVar16[3] = uVar6;
  *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(param_2 + 4);
  *puVar16 = *param_2;
  puVar16[2] = param_2[1];
  *(undefined8 *)(puVar16 + 0x18) = *(undefined8 *)(param_2 + 8);
  plVar17 = (long *)(param_2 + 0x28);
  (**(code **)(*plVar17 + 0x18))(plVar17);
  __src = *(void **)(param_2 + 0x30);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(plVar17);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x30) + lVar11) == '\0') goto LAB_029bee5c;
      lVar3 = *(long *)(param_2 + 0x30) + lVar11;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_029bee5c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_029bee5c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_029bee5c:
    iVar8 = (int)lVar11;
    if (*(int *)(puVar16 + 0x48) <= (int)lVar11) {
      iVar8 = *(int *)(puVar16 + 0x48) + -1;
    }
    memcpy(__dest,__src,(long)iVar8);
    *(undefined1 *)((long)__dest + (long)iVar8) = 0;
  }
  nn::os::LockMutex(pMVar2);
  if (*(int *)(param_1 + 0xa8) < *(int *)(param_1 + 0xc0)) {
    puVar14 = *(undefined8 **)(param_1 + 0xb0);
    plVar17 = (long *)(param_1 + 0x98);
    if (puVar14 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xb0) = *puVar14;
    }
    *puVar14 = puVar16;
    puVar14[2] = 0;
    plVar15 = puVar14 + 1;
    *plVar15 = 0;
    lVar11 = *plVar17;
    *plVar17 = (long)plVar15;
    puVar14[2] = plVar17;
    *plVar15 = lVar11;
    if (lVar11 != 0) {
      *(long **)(lVar11 + 8) = plVar15;
    }
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  }
  nn::os::UnlockMutex(pMVar2);
  return puVar16;
}

