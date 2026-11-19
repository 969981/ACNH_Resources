
/* WARNING: Removing unreachable block (ram,0x03c38804) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_03c38700(long param_1,undefined8 param_2,uint param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  MutexType *pMVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined1 auVar20 [16];
  
  puVar10 = PTR_DAT_04bd0b08;
  puVar9 = PTR_DAT_04bd0b00;
  if ((int)param_3 < 0) goto LAB_03c38b70;
  lVar19 = *(long *)PTR_DAT_04bc95e0;
  if (*(long *)(lVar19 + 0x178) != lVar19 + 0x170) {
    lVar16 = (long)*(int *)(lVar19 + 0x184);
    puVar18 = (undefined8 *)(*(long *)(lVar19 + 0x178) - lVar16);
    puVar2 = PTR_DAT_04bc9638 + 0x10;
    do {
      if (((*puVar10 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar10), iVar11 != 0)) {
        *(undefined **)puVar9 = puVar2;
        __cxa_guard_release(puVar10);
      }
      if ((puVar18 != (undefined8 *)0x0) &&
         (uVar12 = (**(code **)*puVar18)(puVar18,puVar9), (uVar12 & 1) != 0)) goto LAB_03c387e4;
      puVar18 = (undefined8 *)(*(long *)((long)puVar18 + lVar16 + 8) - lVar16);
    } while (puVar18 != (undefined8 *)((lVar19 + 0x170) - (long)*(int *)(lVar19 + 0x184)));
  }
  puVar18 = (undefined8 *)0x0;
LAB_03c387e4:
  puVar9 = PTR_DAT_04bb4f38;
  uVar5 = param_3;
  if (*(uint *)(*(long *)PTR_DAT_04bb2648 + 0x330) <= param_3) {
    uVar5 = 0;
  }
  lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2648 + 0x338) + (long)(int)uVar5 * 8);
  if (lVar19 == 0) goto LAB_03c38b70;
  plVar17 = *(long **)(lVar19 + 0xc20);
  if (((*PTR_DAT_04bb4f38 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4f38);
  }
  if (plVar17 == (long *)0x0) {
    plVar17 = (long *)0x0;
    bVar6 = *puVar9;
  }
  else {
    uVar12 = (**(code **)*plVar17)(plVar17,PTR_DAT_04bb4f30);
    if ((uVar12 & 1) == 0) {
      plVar17 = (long *)0x0;
    }
    bVar6 = *puVar9;
  }
  if (((bVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4f38);
  }
  if (((plVar17 == (long *)0x0) ||
      (uVar12 = (**(code **)*plVar17)(plVar17,PTR_DAT_04bb4f30), (uVar12 & 1) == 0)) ||
     (uVar12 = (**(code **)(*plVar17 + 0x30))(plVar17), (uVar12 & 1) == 0)) goto LAB_03c38b70;
  uVar5 = *(uint *)(plVar17 + 0x2f);
  piVar3 = (int *)(param_1 + 0x59e8);
  if (*(char *)((long)plVar17 + 0x17d) == '\x03') {
    puVar14 = puVar18 + 0xb + (ulong)uVar5 * 0x1d3;
    if (8 < uVar5) {
      puVar14 = puVar18 + 0xb;
    }
    if (*(int *)((long)puVar14 + 0x284) < 1) goto LAB_03c389b4;
    puVar14 = puVar14 + 0x1d2;
    uVar13 = 0;
LAB_03c389b0:
    FUN_03c38c0c(param_1,param_3,uVar13,puVar14);
  }
  else {
    if (*(char *)((long)plVar17 + 0x17d) == '\x04') {
      puVar14 = puVar18 + 0xb + (ulong)uVar5 * 0x1d3;
      if (8 < uVar5) {
        puVar14 = puVar18 + 0xb;
      }
      if (*(int *)((long)puVar14 + 0x284) < 1) goto LAB_03c389b4;
      puVar14 = puVar14 + 0x1d2;
LAB_03c389a4:
      uVar13 = 1;
      goto LAB_03c389b0;
    }
    if ((param_4 == 0) || (param_4 == 2)) {
      puVar14 = puVar18 + 0xb + (ulong)uVar5 * 0x1d3;
      if (8 < uVar5) {
        puVar14 = puVar18 + 0xb;
      }
      if (0 < *(int *)((long)puVar14 + 0x284)) {
        FUN_03c38c0c(param_1,param_3,0,puVar14 + 0x1d2);
      }
      if (param_4 - 1U < 2) goto LAB_03c38980;
    }
    else if (param_4 == 1) {
LAB_03c38980:
      puVar14 = puVar18 + 0xb + (ulong)uVar5 * 0x1d3;
      if (8 < uVar5) {
        puVar14 = puVar18 + 0xb;
      }
      if (1 < *(int *)((long)puVar14 + 0x284)) {
        puVar14 = (undefined8 *)((long)puVar14 + 0xe94);
        goto LAB_03c389a4;
      }
    }
  }
LAB_03c389b4:
  pMVar4 = (MutexType *)(param_1 + 0x6958);
  nn::os::LockMutex(pMVar4);
  uVar7 = *(uint *)(param_1 + 0x59ec);
  uVar8 = *(uint *)(param_1 + 0x59f0);
  if ((int)uVar7 < (int)uVar8) {
    lVar19 = (long)(int)uVar7 << 0x20;
    plVar17 = (long *)(*(long *)(param_1 + 0x59f8) + (long)(int)uVar7 * 8);
    uVar12 = (ulong)uVar7;
    do {
      if ((uint)uVar12 < uVar8) {
        if (*(int *)(*plVar17 + 0x10) == 0) {
          iVar11 = uVar7 + 1;
          plVar17 = (long *)(*(long *)(param_1 + 0x59f8) + (lVar19 >> 0x1d));
          goto LAB_03c38a78;
        }
      }
      else if (_DAT_00000010 == 0) {
        *(uint *)(param_1 + 0x59ec) = uVar7 + 1;
        goto LAB_03c38b68;
      }
      uVar1 = (uint)uVar12 + 1;
      uVar12 = (ulong)uVar1;
      lVar19 = lVar19 + 0x100000000;
      plVar17 = plVar17 + 1;
    } while (uVar8 != uVar1);
  }
  if (0 < (int)uVar7) {
    plVar17 = *(long **)(param_1 + 0x59f8);
    uVar12 = 0;
LAB_03c38a5c:
    if (uVar12 < uVar8) {
      if (*(int *)(*plVar17 + 0x10) != 0) goto LAB_03c38a4c;
      iVar11 = 0;
      if ((int)uVar7 < (int)uVar8) {
        iVar11 = uVar7 + 1;
      }
LAB_03c38a78:
      *(int *)(param_1 + 0x59ec) = iVar11;
      lVar19 = *plVar17;
      if (lVar19 != 0) {
        *(int *)(lVar19 + 0x10) = *piVar3;
        plVar17 = (long *)(*(int *)(param_1 + 0x5a14) + lVar19);
        iVar11 = 1;
        if (1 < *piVar3 + 1U) {
          iVar11 = *piVar3 + 1;
        }
        lVar16 = *(long *)(param_1 + 0x5a00);
        *(long **)(param_1 + 0x5a00) = plVar17;
        *piVar3 = iVar11;
        *plVar17 = lVar16;
        plVar17[1] = param_1 + 0x5a00;
        if (lVar16 != 0) {
          *(long **)(lVar16 + 8) = plVar17;
        }
        *(int *)(param_1 + 0x5a10) = *(int *)(param_1 + 0x5a10) + 1;
        uVar12 = FUN_03c3a284(lVar19,param_2,uVar5,param_4,param_5);
        if ((uVar12 & 1) != 0) {
          nn::os::UnlockMutex(pMVar4);
          uVar12 = (ulong)*(uint *)(lVar19 + 0x10);
          goto LAB_03c38b78;
        }
        nn::os::LockMutex(pMVar4);
        *(undefined4 *)(lVar19 + 0x10) = 0;
        plVar17 = (long *)(*(int *)(param_1 + 0x5a14) + lVar19);
        lVar19 = *plVar17;
        plVar15 = (long *)plVar17[1];
        if (plVar15 != (long *)0x0 || lVar19 != 0) {
          if (lVar19 != 0) {
            *(long **)(lVar19 + 8) = plVar15;
            plVar15 = (long *)plVar17[1];
          }
          if (plVar15 != (long *)0x0) {
            *plVar15 = *plVar17;
          }
          *plVar17 = 0;
          plVar17[1] = 0;
          *(int *)(param_1 + 0x5a10) = *(int *)(param_1 + 0x5a10) + -1;
        }
        nn::os::UnlockMutex(pMVar4);
      }
    }
    else {
      if (_DAT_00000010 != 0) goto LAB_03c38a4c;
      iVar11 = 0;
      if ((int)uVar7 < (int)uVar8) {
        iVar11 = uVar7 + 1;
      }
      *(int *)(param_1 + 0x59ec) = iVar11;
    }
  }
LAB_03c38b68:
  nn::os::UnlockMutex(pMVar4);
LAB_03c38b70:
  uVar12 = 0;
  lVar19 = 0;
LAB_03c38b78:
  auVar20._8_8_ = uVar12;
  auVar20._0_8_ = lVar19;
  return auVar20;
LAB_03c38a4c:
  uVar12 = uVar12 + 1;
  plVar17 = plVar17 + 1;
  if (uVar7 == uVar12) goto LAB_03c38b68;
  goto LAB_03c38a5c;
}

