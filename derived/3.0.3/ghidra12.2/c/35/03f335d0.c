
void FUN_03f335d0(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  MutexType *pMVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  undefined **__src;
  int iVar12;
  char *pcVar13;
  long lVar14;
  undefined *puVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  undefined **ppuVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  uint local_2ac;
  undefined *local_2a0;
  char *local_298;
  undefined **local_290;
  undefined8 local_288;
  undefined *local_280;
  undefined *local_278;
  undefined *local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  if (param_4 == (undefined8 *)0x0) {
    pcVar13 = *(char **)(param_2 + 0x70);
LAB_03f33678:
    if (*pcVar13 != '\0') {
      param_3 = param_2 + 0x68;
    }
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 8);
    if (*(long *)(param_2 + 0x38) == 0) {
      local_6d = 0;
      local_16c[0] = 0;
      local_170 = 0x100;
      local_178 = local_16c;
      local_290 = &local_280;
      local_280 = (undefined *)((ulong)local_280 & 0xffffffffffffff00);
      local_180 = PTR_DAT_04bb21f8 + 0x10;
      local_288 = 0x10000000000;
      (**(code **)(*(long *)(param_2 + 0x68) + 0x18))(param_2 + 0x68);
      ppuVar19 = local_290;
      __src = *(undefined ***)(param_2 + 0x70);
      if (local_290 != __src) {
        lVar14 = 0;
        do {
          pcVar13 = (char *)((long)__src + lVar14);
          lVar14 = lVar14 + 1;
        } while (*pcVar13 != '\0');
        uVar21 = (int)lVar14 - 1;
        if (local_288._4_4_ <= (int)uVar21) {
          uVar21 = local_288._4_4_ - 1;
        }
        if ((int)uVar21 < 1) {
          uVar21 = 0;
        }
        else {
          memcpy(local_290,__src,(ulong)uVar21);
          ppuVar19 = (undefined **)((long)ppuVar19 + (ulong)uVar21);
        }
        *(undefined1 *)ppuVar19 = 0;
        local_288 = CONCAT44(local_288._4_4_,uVar21);
      }
      uVar11 = FUN_03f33290(&local_180,&local_290);
      puVar7 = PTR_DAT_04bb2020;
      local_2a0 = PTR_DAT_04bb2020 + 0x10;
      local_298 = " ";
      (**(code **)(local_180 + 0x18))(&local_180);
      lVar14 = 0;
      do {
        if (local_178[lVar14] == '\0') {
LAB_03f338a0:
          iVar10 = (int)lVar14;
joined_r0x03f338a4:
          if (0 < iVar10) {
            lVar20 = 0;
            goto LAB_03f338c0;
          }
          break;
        }
        if (local_178[lVar14 + 1] == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_03f338a0;
        }
        if (local_178[lVar14 + 2] == '\0') {
          lVar14 = lVar14 + 2;
          iVar10 = (int)lVar14;
          goto joined_r0x03f338a4;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      goto LAB_03f338fc;
    }
    goto LAB_03f33c9c;
  }
  if (((*PTR_DAT_04bb4ef0 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb4ef0), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bb4ee8 = PTR_DAT_04bb4ef8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4ef0);
  }
  uVar11 = (**(code **)*param_4)(param_4,PTR_DAT_04bb4ee8);
  if ((uVar11 & 1) != 0) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)(param_2 + 0x18) = param_4[3];
    *(undefined8 *)(param_2 + 0x20) = param_4[4];
    uVar3 = param_4[5];
    uVar4 = param_4[6];
    uVar5 = param_4[8];
    *(undefined8 *)(param_2 + 0x38) = param_4[7];
    *(undefined8 *)(param_2 + 0x40) = uVar5;
    *(undefined8 *)(param_2 + 0x28) = uVar3;
    *(undefined8 *)(param_2 + 0x30) = uVar4;
    uVar3 = param_4[9];
    uVar4 = param_4[10];
    uVar5 = param_4[0xc];
    *(undefined8 *)(param_2 + 0x58) = param_4[0xb];
    *(undefined8 *)(param_2 + 0x60) = uVar5;
    *(undefined8 *)(param_2 + 0x48) = uVar3;
    *(undefined8 *)(param_2 + 0x50) = uVar4;
    pcVar13 = (char *)param_4[0xe];
    *(char **)(param_2 + 0x70) = pcVar13;
    goto LAB_03f33678;
  }
  if (((*PTR_DAT_04bb4f18 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb4f18), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bb4f10 = PTR_DAT_04bb4ef8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4f18);
  }
  uVar11 = (**(code **)*param_4)(param_4,PTR_DAT_04bb4f10);
  if ((uVar11 & 1) == 0) {
    if (((*PTR_DAT_04bdf0d8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bdf0d8), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bdf0d0 = PTR_DAT_04bb4ef8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bdf0d8);
    }
    uVar11 = (**(code **)*param_4)(param_4,PTR_DAT_04bdf0d0);
    if ((uVar11 & 1) != 0) {
      *(undefined8 *)(param_2 + 0x60) = param_4[5];
      *(undefined8 *)(param_2 + 0x18) = param_4[3];
      *(undefined4 *)(param_2 + 8) = 2;
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x1d8);
      if ((param_4[4] != 0) && (lVar14 = *(long *)(param_4[4] + 0x10), lVar14 != 0)) {
        *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(lVar14 + 0x368);
      }
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x60) = param_4[6];
    *(undefined8 *)(param_2 + 0x18) = param_4[3];
    *(undefined8 *)(param_2 + 0x70) = param_4[5];
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_4 + 1);
  }
  lVar14 = *(long *)(param_2 + 0x50);
  if (**(char **)(param_2 + 0x70) != '\0') {
    param_3 = param_2 + 0x68;
  }
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 8);
LAB_03f33cac:
  if (lVar14 != 0) {
LAB_03f33d6c:
    if ((*(long *)(param_2 + 0x58) != 0) &&
       (uVar11 = FUN_03f390e0(*(long *)(param_2 + 0x58),param_2 + 0x68), (uVar11 & 1) != 0)) {
      *(undefined8 *)(param_2 + 0x50) = 0;
    }
  }
  goto LAB_03f33d84;
  while (bVar8 = lVar14 + -1 != lVar20, lVar20 = lVar20 + 1, *pcVar13 != *local_298 && bVar8) {
LAB_03f338c0:
    pcVar13 = local_178 + lVar20;
    (**(code **)(local_2a0 + 0x18))(&local_2a0);
    if (pcVar13 == local_298) break;
  }
LAB_03f338fc:
  if ((uVar11 & 1) == 0) {
    lVar14 = *(long *)(param_1 + 0x1d8);
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x2e0));
    local_290 = &local_180;
    local_288 = local_288 & 0xffffffff00000000;
    local_280 = puVar7 + 0x10;
    local_278 = &DAT_0407ec0b;
    (**(code **)(local_180 + 0x18))(&local_180);
    lVar14 = 0;
    do {
      if (local_178[lVar14] == '\0') {
LAB_03f33998:
        local_2ac = (int)lVar14 + 1;
        if ((int)lVar14 != -1) goto LAB_03f339ac;
        lVar20 = 0;
        goto LAB_03f33c84;
      }
      if (local_178[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_03f33998;
      }
      if (local_178[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_03f33998;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    local_2ac = 1;
LAB_03f339ac:
    uVar21 = 0;
    ppuVar19 = &local_180;
    do {
      lVar20 = *(long *)PTR_DAT_04bb28c8;
      (**(code **)(*ppuVar19 + 0x18))(ppuVar19);
      puVar15 = ppuVar19[1];
      lVar14 = 0;
      do {
        if (puVar15[lVar14] == '\0') goto LAB_03f33a24;
        if (puVar15[lVar14 + 1] == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_03f33a24;
        }
        if (puVar15[lVar14 + 2] == '\0') {
          lVar14 = lVar14 + 2;
          goto LAB_03f33a24;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_03f33a24:
      local_298 = PTR_DAT_04bb2120;
      if ((int)uVar21 <= (int)lVar14 && -1 < (int)uVar21) {
        local_298 = puVar15 + uVar21;
      }
      local_2a0 = puVar7 + 0x10;
      for (lVar14 = *(long *)(lVar20 + 8); lVar14 != lVar20; lVar14 = *(long *)(lVar14 + 8)) {
        lVar22 = *(long *)(lVar14 + 0x10);
        plVar23 = (long *)(lVar22 + 0x40);
        (**(code **)(*plVar23 + 0x18))(plVar23);
        (**(code **)(*plVar23 + 0x18))(plVar23);
        pcVar13 = *(char **)(lVar22 + 0x48);
        (**(code **)(local_2a0 + 0x18))(&local_2a0);
        if (pcVar13 == local_298) {
LAB_03f33b1c:
          plVar23 = (long *)(lVar14 + 0x10);
          goto LAB_03f33b28;
        }
        cVar6 = **(char **)(lVar22 + 0x48);
        if (cVar6 == *local_298) {
          if (cVar6 == '\0') goto LAB_03f33b1c;
          lVar18 = 0x7fffe;
          pcVar13 = local_298;
          pcVar16 = *(char **)(lVar22 + 0x48);
          while( true ) {
            if (pcVar16[1] != pcVar13[1]) break;
            if (pcVar16[1] == '\0') goto LAB_03f33b1c;
            if (pcVar16[2] != pcVar13[2]) break;
            if (pcVar16[2] == '\0') goto LAB_03f33b1c;
            if ((lVar18 == 0) || (cVar6 = pcVar16[3], cVar6 != pcVar13[3])) break;
            lVar18 = lVar18 + -3;
            pcVar13 = pcVar13 + 3;
            pcVar16 = pcVar16 + 3;
            if (cVar6 == '\0') goto LAB_03f33b1c;
          }
        }
      }
      plVar23 = (long *)(lVar20 + 0x38);
LAB_03f33b28:
      ppuVar19 = local_290;
      lVar20 = *plVar23;
      if (lVar20 != *(long *)(param_1 + 0x1e0)) break;
      iVar10 = (uint)local_288;
      uVar11 = local_288 & 0xffffffff;
      (**(code **)(*local_290 + 0x18))(local_290);
      puVar15 = ppuVar19[1];
      lVar14 = 0;
      do {
        if (puVar15[lVar14] == '\0') {
LAB_03f33ba4:
          iVar12 = (int)lVar14;
          goto joined_r0x03f33ba8;
        }
        if (puVar15[lVar14 + 1] == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_03f33ba4;
        }
        if (puVar15[lVar14 + 2] == '\0') {
          iVar12 = (int)lVar14 + 2;
          goto joined_r0x03f33ba8;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      iVar12 = 0;
joined_r0x03f33ba8:
      if ((iVar10 < 0) || (iVar12 < iVar10)) {
        uVar21 = (uint)local_288;
      }
      else {
        for (; puVar15 = local_290[1], puVar15[uVar11] != '\0'; uVar11 = uVar11 + 1) {
          (**(code **)(local_280 + 0x18))(&local_280);
          uVar17 = 0;
          bVar8 = true;
          cVar6 = puVar15[uVar11];
          do {
            if (local_278[uVar17] == '\0') break;
            if (local_278[uVar17] == cVar6) {
              if (bVar8) goto LAB_03f33c64;
              break;
            }
            if (local_278[uVar17 + 1] == '\0') break;
            if (local_278[uVar17 + 1] == cVar6) goto LAB_03f33c64;
            if (local_278[uVar17 + 2] == '\0') break;
            if (local_278[uVar17 + 2] == cVar6) goto LAB_03f33c64;
            bVar8 = uVar17 < 0x7fffe;
            uVar17 = uVar17 + 3;
          } while (uVar17 != 0x80001);
        }
LAB_03f33c64:
        uVar21 = (int)uVar11 + 1;
        local_288 = CONCAT44(local_288._4_4_,uVar21);
      }
      ppuVar19 = local_290;
    } while ((local_290 != &local_180) || (uVar21 != local_2ac));
LAB_03f33c84:
    lVar14 = *(long *)(param_1 + 0x1d8);
    if (lVar20 != *(long *)(param_1 + 0x1e0)) {
      lVar14 = lVar20;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x2e0));
  }
  *(long *)(param_2 + 0x38) = lVar14;
LAB_03f33c9c:
  lVar14 = *(long *)(param_2 + 0x50);
  if (*(long *)(param_2 + 0x40) != 0) goto LAB_03f33cac;
  if (lVar14 != 0) goto LAB_03f33d6c;
  if ((*(long *)PTR_DAT_04bb3350 == 0) ||
     (lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)), lVar14 == 0))
  {
    uVar21 = 0;
  }
  else {
    uVar21 = *(uint *)(lVar14 + 200);
  }
  pMVar1 = (MutexType *)(param_1 + 0x5c0);
  nn::os::LockMutex(pMVar1);
  for (lVar14 = *(long *)(param_1 + 0x580); lVar14 != 0; lVar14 = *(long *)(lVar14 + 8)) {
    while (*(uint *)(lVar14 + 0x20) <= uVar21) {
      if (uVar21 <= *(uint *)(lVar14 + 0x20)) {
        lVar14 = *(long *)(lVar14 + 0x28);
        nn::os::UnlockMutex(pMVar1);
        if ((lVar14 == 0) || ((*(byte *)(param_1 + 8) >> 2 & 1) != 0)) goto LAB_03f33d34;
        goto LAB_03f33d68;
      }
      lVar14 = *(long *)(lVar14 + 0x10);
      if (lVar14 == 0) goto LAB_03f33d2c;
    }
  }
LAB_03f33d2c:
  nn::os::UnlockMutex(pMVar1);
LAB_03f33d34:
  if (*(long *)(param_2 + 0x50) != 0) goto LAB_03f33d6c;
  lVar14 = *(long *)(param_1 + 0x5e8);
  if ((lVar14 != 0) && ((*(byte *)(param_1 + 8) >> 2 & 1) == 0)) {
LAB_03f33d68:
    *(long *)(param_2 + 0x50) = lVar14;
    goto LAB_03f33d6c;
  }
LAB_03f33d84:
  if (*(int *)(param_2 + 0x2c) == 0) {
    plVar23 = *(long **)(param_2 + 0x38);
    if (((*PTR_DAT_04bb4488 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb4488), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bb4480 = PTR_DAT_04bb4490 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4488);
    }
    if ((plVar23 == (long *)0x0) ||
       (uVar11 = (**(code **)(*plVar23 + 0x10))(plVar23,PTR_DAT_04bb4480), (uVar11 & 1) == 0)) {
      uVar9 = 8;
    }
    else {
      uVar9 = (**(code **)(*plVar23 + 0x48))(plVar23);
    }
    *(undefined4 *)(param_2 + 0x2c) = uVar9;
    cVar6 = *(char *)(param_1 + 0x198);
  }
  else {
    cVar6 = *(char *)(param_1 + 0x198);
  }
  if (cVar6 == '\0') {
    bVar8 = false;
    goto LAB_03f33e5c;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x178));
  if (*(long *)(param_1 + 0x150) == 0) {
LAB_03f33df0:
    bVar8 = false;
  }
  else {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    iVar10 = **(int **)(param_1 + 0x150);
    if (iVar10 == 0) goto LAB_03f33df0;
    lVar20 = (long)iVar10 * 8;
    plVar23 = *(long **)(*(int **)(param_1 + 0x150) + 2);
    do {
      lVar20 = lVar20 + -8;
      bVar8 = *plVar23 == lVar14;
      plVar23 = plVar23 + 1;
    } while (!bVar8 && lVar20 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x178));
LAB_03f33e5c:
  bVar2 = false;
  if (*(char *)(param_2 + 0x28) != '\0') {
    bVar2 = bVar8;
  }
  *(bool *)(param_2 + 0x28) = bVar2;
  return;
}

