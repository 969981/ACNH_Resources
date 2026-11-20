
void FUN_03f2bd00(long param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  long *plVar1;
  MutexType *pMVar2;
  undefined *puVar3;
  undefined *puVar4;
  MutexType *pMVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined **ppuVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  char *pcVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  char *local_70;
  long local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  nn::os::LockMutex((MutexType *)(PTR_DAT_04bdf140 + 0x20));
  plVar1 = (long *)(param_1 + 0x40);
  if ((1 < *(int *)(param_1 + 0x50)) &&
     (plVar20 = *(long **)(*(long *)(param_1 + 0x48) + 8), plVar20 != plVar1)) {
    lVar21 = -(long)*(int *)(param_1 + 0x54);
    do {
      plVar22 = (long *)*plVar20;
      plVar6 = (long *)plVar20[1];
      iVar7 = (**(code **)(**(long **)((long)plVar22 + lVar21 + 0x3f8) + 0x60))();
      iVar8 = (**(code **)(**(long **)((long)plVar20 + lVar21 + 0x3f8) + 0x60))();
      if (-1 < iVar7 - iVar8) {
        do {
          plVar22 = (long *)*plVar22;
          if (plVar22 == plVar1) {
            lVar13 = *plVar20;
            plVar22 = plVar1;
            if (lVar13 == 0) goto LAB_03f2be0c;
            goto LAB_03f2be04;
          }
          iVar7 = (**(code **)(**(long **)((long)plVar22 + lVar21 + 0x3f8) + 0x60))();
          iVar8 = (**(code **)(**(long **)((long)plVar20 + lVar21 + 0x3f8) + 0x60))();
        } while (-1 < iVar7 - iVar8);
        lVar13 = *plVar20;
        if (lVar13 != 0) {
LAB_03f2be04:
          *(long *)(lVar13 + 8) = plVar20[1];
        }
LAB_03f2be0c:
        if ((long *)plVar20[1] != (long *)0x0) {
          *(long *)plVar20[1] = *plVar20;
        }
        *plVar20 = 0;
        plVar20[1] = 0;
        puVar14 = (undefined8 *)plVar22[1];
        plVar22[1] = (long)plVar20;
        *plVar20 = (long)plVar22;
        plVar20[1] = (long)puVar14;
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = plVar20;
        }
      }
      plVar20 = plVar6;
    } while (plVar6 != plVar1);
  }
  lVar21 = *(long *)(param_1 + 0x20);
  if ((*(uint *)(lVar21 + 0xd0) & 1) != 0) {
    nn::os::LockMutex((MutexType *)(lVar21 + 0xb0));
  }
  local_78 = PTR_LAB_04bd0d48;
  FUN_03f2ca90(*(undefined8 *)(lVar21 + 0xf8),*(undefined8 *)(lVar21 + 0xf0),
               *(undefined4 *)(lVar21 + 0x100),*(undefined4 *)(lVar21 + 0x104),&local_78);
  if ((*(uint *)(lVar21 + 0xd0) & 1) != 0) {
    nn::os::UnlockMutex((MutexType *)(lVar21 + 0xb0));
  }
  if (*(long **)(param_1 + 0x48) == plVar1) {
LAB_03f2c554:
    nn::os::UnlockMutex((MutexType *)(PTR_DAT_04bdf140 + 0x20));
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
    return;
  }
  iVar7 = 0;
  pMVar2 = (MutexType *)(PTR_DAT_04bdf140 + 0x20);
  puVar3 = PTR_DAT_04bb2830 + 0x10;
  iVar8 = *(int *)(param_1 + 0x50);
  lVar18 = (long)*(int *)(param_1 + 0x54);
  lVar13 = (long)*(long **)(param_1 + 0x48) - lVar18;
  lVar21 = lVar13 + lVar18;
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  puVar4 = PTR_DAT_04bb2020 + 0x10;
LAB_03f2bf04:
  lVar21 = *(long *)(lVar21 + 8);
  local_68 = lVar13;
  if ((*(char *)(lVar13 + 0xd) < '\0') &&
     (*(long *)(lVar13 + 0xc0) == 0 && *(long *)(lVar13 + 0xb8) == 0)) {
    puVar14 = *(undefined8 **)(lVar13 + 0x30);
    if (((*PTR_DAT_04bb2828 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb2820 = puVar3;
      __cxa_guard_release(PTR_DAT_04bb2828);
    }
    if (((puVar14 != (undefined8 *)0x0) &&
        (uVar10 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb2820), lVar13 = local_68,
        (uVar10 & 1) != 0)) && (*(uint *)(puVar14 + 2) <= param_3)) {
      local_70 = "hksc";
      local_78 = puVar4;
      (**(code **)(*(long *)(local_68 + 0x360) + 0x18))(local_68 + 0x360);
      lVar15 = *(long *)(lVar13 + 0x368);
      lVar23 = 0;
      do {
        if (*(char *)(lVar15 + lVar23) == '\0') goto LAB_03f2bfcc;
        lVar19 = lVar15 + lVar23;
        if (*(char *)(lVar19 + 1) == '\0') {
          lVar23 = lVar23 + 1;
          goto LAB_03f2bfcc;
        }
        if (*(char *)(lVar19 + 2) == '\0') {
          lVar23 = lVar23 + 2;
          goto LAB_03f2bfcc;
        }
        lVar23 = lVar23 + 3;
      } while (lVar23 != 0x80001);
      lVar23 = 0;
LAB_03f2bfcc:
      (**(code **)(local_78 + 0x18))(&local_78);
      lVar15 = 0;
      do {
        iVar9 = (int)lVar23;
        if (local_70[lVar15] == '\0') {
LAB_03f2c018:
          iVar12 = (int)lVar15;
          if (iVar9 < iVar12) goto LAB_03f2c0d4;
LAB_03f2c030:
          if ((int)lVar15 < 1) goto LAB_03f2c0b8;
          uVar10 = 0;
          goto LAB_03f2c04c;
        }
        if (local_70[lVar15 + 1] == '\0') {
          lVar15 = lVar15 + 1;
          goto LAB_03f2c018;
        }
        if (local_70[lVar15 + 2] == '\0') {
          lVar15 = lVar15 + 2;
          iVar12 = (int)lVar15;
          if (iVar12 <= iVar9) goto LAB_03f2c030;
          goto LAB_03f2c0d4;
        }
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
      if (iVar9 < 0) goto LAB_03f2c0d4;
LAB_03f2c0b8:
      ppuVar11 = &local_78;
      puVar17 = local_78;
      goto LAB_03f2c3c0;
    }
    goto LAB_03f2c3d0;
  }
  goto LAB_03f2c4d4;
  while( true ) {
    pcVar16 = local_70;
    lVar19 = lVar15;
    while( true ) {
      lVar19 = lVar19 + -1;
      if (*(char *)(lVar23 + uVar10) != *pcVar16) break;
      if ((*(char *)(lVar23 + uVar10) == '\0') ||
         (lVar23 = lVar23 + 1, pcVar16 = pcVar16 + 1, lVar19 == 0)) goto LAB_03f2c0c4;
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == (iVar9 - iVar12) + 1) break;
LAB_03f2c04c:
    lVar23 = *(long *)(lVar13 + 0x368);
    (**(code **)(local_78 + 0x18))(&local_78);
    if ((char *)(lVar23 + uVar10) == local_70) {
LAB_03f2c0c4:
      if ((int)uVar10 != -1) goto LAB_03f2c3d0;
      break;
    }
  }
LAB_03f2c0d4:
  lVar23 = local_68;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "hknm2";
  (**(code **)(*(long *)(local_68 + 0x360) + 0x18))(local_68 + 0x360);
  lVar15 = *(long *)(lVar23 + 0x368);
  lVar13 = 0;
  do {
    if (*(char *)(lVar15 + lVar13) == '\0') goto LAB_03f2c14c;
    lVar19 = lVar15 + lVar13;
    if (*(char *)(lVar19 + 1) == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03f2c14c;
    }
    if (*(char *)(lVar19 + 2) == '\0') {
      lVar13 = lVar13 + 2;
      goto LAB_03f2c14c;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  lVar13 = 0;
LAB_03f2c14c:
  (**(code **)(local_88 + 0x18))(&local_88);
  lVar15 = 0;
  do {
    iVar9 = (int)lVar13;
    if (local_80[lVar15] == '\0') {
LAB_03f2c198:
      iVar12 = (int)lVar15;
      if (iVar9 < iVar12) goto LAB_03f2c254;
LAB_03f2c1b0:
      if ((int)lVar15 < 1) goto LAB_03f2c238;
      uVar10 = 0;
      goto LAB_03f2c1cc;
    }
    if (local_80[lVar15 + 1] == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_03f2c198;
    }
    if (local_80[lVar15 + 2] == '\0') {
      lVar15 = lVar15 + 2;
      iVar12 = (int)lVar15;
      if (iVar12 <= iVar9) goto LAB_03f2c1b0;
      goto LAB_03f2c254;
    }
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  if (iVar9 < 0) goto LAB_03f2c254;
LAB_03f2c238:
  ppuVar11 = &local_88;
  puVar17 = local_88;
LAB_03f2c3c0:
  (**(code **)(puVar17 + 0x18))(ppuVar11);
LAB_03f2c3d0:
  nn::os::LockMutex(pMVar2);
  lVar13 = local_68;
  lVar23 = *(long *)(local_68 + 0x80);
  if (lVar23 != 0) {
    pMVar5 = (MutexType *)(PTR_DAT_04bdf140 + 0x20);
    nn::os::LockMutex(pMVar5);
    if ((*(byte *)(lVar13 + 8) & 1) != 0) {
      plVar20 = (long *)(lVar23 + 0x10);
      lVar23 = FUN_03f3be90(plVar20,*plVar20,lVar13 + 0x2b0);
      *plVar20 = lVar23;
      if (lVar23 != 0) {
        *(undefined8 *)(lVar23 + 0x18) = 1;
      }
      *(byte *)(lVar13 + 8) = *(byte *)(lVar13 + 8) & 0xfe;
    }
    nn::os::UnlockMutex(pMVar5);
  }
  nn::os::UnlockMutex((MutexType *)(PTR_DAT_04bdf140 + 0x20));
  lVar13 = local_68;
  lVar23 = *(long *)PTR_DAT_04bb49b8;
  nn::os::LockMutex((MutexType *)(lVar23 + 0x518));
  if (*(long *)(lVar13 + 0xc0) != 0 || *(long *)(lVar13 + 0xb8) != 0) {
    plVar20 = (long *)(*(int *)(lVar23 + 0x54c) + lVar13);
    if (*plVar20 != 0) {
      *(long *)(*plVar20 + 8) = plVar20[1];
    }
    if ((long *)plVar20[1] != (long *)0x0) {
      *(long *)plVar20[1] = *plVar20;
    }
    *plVar20 = 0;
    plVar20[1] = 0;
    *(int *)(lVar23 + 0x548) = *(int *)(lVar23 + 0x548) + -1;
  }
  nn::os::UnlockMutex((MutexType *)(lVar23 + 0x518));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_03f354cc(*(undefined8 *)PTR_DAT_04bb49b8,&local_68,1,0);
LAB_03f2c4d4:
  if (param_4 != (int *)0x0) {
LAB_03f2c4d8:
    *param_4 = *param_4 + 1;
  }
LAB_03f2c4e4:
  if (iVar7 == iVar8 + -1) goto LAB_03f2c554;
  lVar13 = lVar21 - lVar18;
  iVar7 = iVar7 + 1;
  if ((long)plVar1 - lVar18 == lVar13) goto LAB_03f2c554;
  goto LAB_03f2bf04;
  while( true ) {
    pcVar16 = local_80;
    lVar19 = lVar15;
    while( true ) {
      lVar19 = lVar19 + -1;
      if (*(char *)(lVar13 + uVar10) != *pcVar16) break;
      if ((*(char *)(lVar13 + uVar10) == '\0') ||
         (lVar13 = lVar13 + 1, pcVar16 = pcVar16 + 1, lVar19 == 0)) goto LAB_03f2c244;
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == (iVar9 - iVar12) + 1) break;
LAB_03f2c1cc:
    lVar13 = *(long *)(lVar23 + 0x368);
    (**(code **)(local_88 + 0x18))(&local_88);
    if ((char *)(lVar13 + uVar10) == local_80) {
LAB_03f2c244:
      if ((int)uVar10 != -1) goto LAB_03f2c3d0;
      break;
    }
  }
LAB_03f2c254:
  lVar23 = local_68;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_90 = "hktmrb";
  (**(code **)(*(long *)(local_68 + 0x360) + 0x18))(local_68 + 0x360);
  lVar15 = *(long *)(lVar23 + 0x368);
  lVar13 = 0;
  do {
    if (*(char *)(lVar15 + lVar13) == '\0') goto LAB_03f2c2cc;
    lVar19 = lVar15 + lVar13;
    if (*(char *)(lVar19 + 1) == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03f2c2cc;
    }
    if (*(char *)(lVar19 + 2) == '\0') {
      lVar13 = lVar13 + 2;
      goto LAB_03f2c2cc;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  lVar13 = 0;
LAB_03f2c2cc:
  (**(code **)(local_98 + 0x18))(&local_98);
  lVar15 = 0;
  do {
    iVar9 = (int)lVar13;
    if (local_90[lVar15] == '\0') {
LAB_03f2c318:
      iVar12 = (int)lVar15;
      if (iVar9 < iVar12) goto LAB_03f2c510;
LAB_03f2c330:
      if ((int)lVar15 < 1) goto LAB_03f2c3b8;
      uVar10 = 0;
      goto LAB_03f2c34c;
    }
    if (local_90[lVar15 + 1] == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_03f2c318;
    }
    if (local_90[lVar15 + 2] == '\0') {
      lVar15 = lVar15 + 2;
      iVar12 = (int)lVar15;
      if (iVar12 <= iVar9) goto LAB_03f2c330;
      goto LAB_03f2c510;
    }
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  if (iVar9 < 0) goto LAB_03f2c510;
LAB_03f2c3b8:
  ppuVar11 = &local_98;
  puVar17 = local_98;
  goto LAB_03f2c3c0;
  while( true ) {
    pcVar16 = local_90;
    lVar19 = lVar15;
    while( true ) {
      lVar19 = lVar19 + -1;
      if (*(char *)(lVar13 + uVar10) != *pcVar16) break;
      if ((*(char *)(lVar13 + uVar10) == '\0') ||
         (lVar13 = lVar13 + 1, pcVar16 = pcVar16 + 1, lVar19 == 0)) goto LAB_03f2c500;
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == (iVar9 - iVar12) + 1) break;
LAB_03f2c34c:
    lVar13 = *(long *)(lVar23 + 0x368);
    (**(code **)(local_98 + 0x18))(&local_98);
    if ((char *)(lVar13 + uVar10) == local_90) {
LAB_03f2c500:
      if ((int)uVar10 != -1) goto LAB_03f2c3d0;
      break;
    }
  }
LAB_03f2c510:
  FUN_03f3e1e8(local_68,param_2,param_3);
  if (param_4 == (int *)0x0) goto LAB_03f2c4e4;
  goto LAB_03f2c4d8;
}

