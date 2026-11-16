
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02918ad0(undefined4 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  long *plVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined *local_a8;
  undefined1 *local_a0;
  int local_98;
  undefined1 auStack_94 [31];
  undefined1 local_75;
  byte local_64 [4];
  
  puVar5 = PTR_DAT_04bb2720;
  puVar6 = PTR_DAT_04bb2640;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if ((lVar16 == 0) || (*(long *)(lVar16 + 0x330) == 0)) {
LAB_02918b94:
    plVar18 = &DAT_055c04a0;
  }
  else {
    puVar14 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
    iVar12 = FUN_006bd550(*puVar14,0);
    if ((iVar12 != 0x758f7eaf) || (lVar16 = *(long *)puVar5, lVar16 == 0)) goto LAB_02918b94;
    plVar18 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)puVar6 + 0x18))
                          (*(long **)puVar6,*(undefined4 *)(lVar16 + 0x338));
      iVar12 = FUN_006bd550(*puVar14,0);
      plVar18 = (long *)PTR_DAT_04bc3a78;
      if (iVar12 != 0x758f7eaf) {
        plVar18 = &DAT_055c04a0;
      }
    }
  }
  puVar6 = PTR_DAT_04bb2a08;
  local_98 = 0x20;
  local_75 = 0;
  local_a8 = PTR_DAT_04bb2a08 + 0x10;
  local_a0 = auStack_94;
  (**(code **)(*plVar18 + 0x18))(plVar18);
  puVar19 = (undefined1 *)plVar18[1];
  if (auStack_94 != puVar19) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
    lVar16 = 0;
    do {
      if (*(char *)(plVar18[1] + lVar16) == '\0') goto LAB_02918c3c;
      lVar2 = plVar18[1] + lVar16;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_02918c3c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_02918c3c;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_02918c3c:
    iVar12 = (int)lVar16;
    if (local_98 <= (int)lVar16) {
      iVar12 = local_98 + -1;
    }
    memcpy(auStack_94,puVar19,(long)iVar12);
    auStack_94[iVar12] = 0;
  }
  puVar5 = PTR_DAT_04bb2028;
  local_a8 = PTR_DAT_04bb2028 + 0x10;
  local_a0[(long)local_98 + -1] = 0;
  iVar13 = FUN_006bd550(local_a0,0);
  uVar11 = DAT_055c1138;
  uVar10 = DAT_055c1134;
  uVar9 = DAT_055c112c._4_4_;
  uVar8 = (undefined4)DAT_055c112c;
  iVar12 = DAT_055c1128;
  puVar7 = PTR_DAT_04bc3a80;
  puVar14 = DAT_055c1b60;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    return 0;
  }
  while (*(int *)(puVar14 + -1) != iVar13) {
    puVar1 = puVar14 + 1;
    puVar14 = (undefined8 *)*puVar1;
    if ((undefined8 *)*puVar1 == &DAT_055c1b58) {
      return 0;
    }
  }
  pbVar17 = &DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
LAB_02918d24:
    if (*pbVar17 < 8) goto LAB_02918d9c;
LAB_02918d30:
    if (DAT_0537d558 == (long *)0x0) {
LAB_02918d94:
      pbVar17 = &DAT_0548e168;
      goto LAB_02918d9c;
    }
    lVar16 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar16 + 0x473);
    pbVar17 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar3 = (uint *)(lVar16 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar17 = (byte *)(lVar16 + 0x471);
      }
    }
    local_64[0] = *pbVar17;
    if (7 < local_64[0]) goto LAB_02918d94;
  }
  else {
    pbVar17 = &DAT_0548e140;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar17 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar17) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar17 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02918d24;
      }
      goto LAB_02918d30;
    }
LAB_02918d9c:
    local_64[0] = *pbVar17;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  if (DAT_055c1128 == 0) {
    if (*(char *)plVar18[1] == '\0') {
      return 0;
    }
    local_75 = 0;
    local_98 = 0x20;
    local_a8 = puVar6 + 0x10;
    local_a0 = auStack_94;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puVar19 = (undefined1 *)plVar18[1];
    if (auStack_94 != puVar19) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
      lVar16 = 0;
      do {
        if (*(char *)(plVar18[1] + lVar16) == '\0') goto LAB_02919108;
        lVar2 = plVar18[1] + lVar16;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar16 = lVar16 + 1;
          goto LAB_02919108;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar16 = lVar16 + 2;
          goto LAB_02919108;
        }
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      lVar16 = 0;
LAB_02919108:
      iVar12 = (int)lVar16;
      if (local_98 <= (int)lVar16) {
        iVar12 = local_98 + -1;
      }
      memcpy(auStack_94,puVar19,(long)iVar12);
      auStack_94[iVar12] = 0;
    }
    local_a8 = puVar5 + 0x10;
    uVar20 = FUN_02930ce0(&DAT_055c10d0,&local_a8,local_64);
    if ((uVar20 & 1) == 0) {
      return 0;
    }
    goto joined_r0x0291915c;
  }
  uVar20 = (ulong)DAT_055c113c;
  iVar13 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar13 == -0x8b34a75) {
    if (DAT_055cdaf0 != -0x7a57de51) {
      if (((DAT_04c9acf0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar13 != 0)
         ) {
        FUN_00773950(&DAT_04c9ace0);
        __cxa_guard_release(&DAT_04c9acf0);
      }
      if (0 < (int)DAT_04c9ace0) {
        uVar20 = 0;
        do {
          if (*(int *)(DAT_04c9ace8 + uVar20 * 4) == -0x1926d75d) goto LAB_02918e5c;
          uVar20 = uVar20 + 1;
        } while (DAT_04c9ace0 != uVar20);
      }
      uVar20 = 0;
LAB_02918e5c:
      iVar13 = *(int *)(puVar7 + 0x38);
      goto LAB_02918e60;
    }
  }
  else {
LAB_02918e60:
    if (iVar13 == -0x3f5c743d && *(int *)(PTR_DAT_04bc3a78 + 0x38) != -0x7a57de51) {
      if (((DAT_04c9acf0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar13 != 0)
         ) {
        FUN_00773950(&DAT_04c9ace0);
        __cxa_guard_release(&DAT_04c9acf0);
      }
      if (0 < (int)DAT_04c9ace0) {
        uVar20 = 0;
        do {
          if (*(int *)(DAT_04c9ace8 + uVar20 * 4) == -0x1926d75d) goto LAB_02918f70;
          uVar20 = uVar20 + 1;
        } while (DAT_04c9ace0 != uVar20);
      }
      uVar20 = 0;
    }
  }
LAB_02918f70:
  puVar14 = DAT_055c1b60;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    plVar18 = &DAT_055c1098;
  }
  else {
    do {
      plVar18 = puVar14 + -8;
      if (*(int *)(puVar14 + -1) == iVar12) goto LAB_02918fbc;
      puVar1 = puVar14 + 1;
      puVar14 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != &DAT_055c1b58);
    plVar18 = &DAT_055c1098;
  }
LAB_02918fbc:
  local_75 = 0;
  local_98 = 0x20;
  local_a8 = puVar6 + 0x10;
  local_a0 = auStack_94;
  (**(code **)(*plVar18 + 0x18))(plVar18);
  puVar19 = (undefined1 *)plVar18[1];
  if (auStack_94 != puVar19) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
    lVar16 = 0;
    do {
      if (*(char *)(plVar18[1] + lVar16) == '\0') goto LAB_02919050;
      lVar2 = plVar18[1] + lVar16;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_02919050;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_02919050;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_02919050:
    iVar12 = (int)lVar16;
    if (local_98 <= (int)lVar16) {
      iVar12 = local_98 + -1;
    }
    memcpy(auStack_94,puVar19,(long)iVar12);
    auStack_94[iVar12] = 0;
  }
  local_a8 = puVar5 + 0x10;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return 0;
  }
  uVar15 = FUN_02930ce0(&DAT_055c10d0,&local_a8,local_64);
  if ((uVar15 & 1) == 0) {
    return 0;
  }
  DAT_055c1184 = (undefined4)uVar20;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  _DAT_055c1198 = 0x101;
  DAT_055c119a = 0;
  DAT_055c116c = 0;
  DAT_055c1174._0_4_ = uVar8;
  DAT_055c1174._4_4_ = uVar9;
  DAT_055c117c = uVar10;
  DAT_055c1180 = uVar11;
  DAT_055c1188 = local_64[0];
joined_r0x0291915c:
  if (((DAT_05694df8 != 0) && (lVar16 = *(long *)(DAT_05694df8 + 8), lVar16 != 0)) &&
     (*(int *)(DAT_05694df8 + 0x10) == 0)) {
    *(undefined4 *)(lVar16 + 0x338) = *param_1;
    *(undefined4 *)(lVar16 + 0x33c) = param_1[1];
    *(undefined4 *)(lVar16 + 0x340) = param_1[2];
    *(undefined4 *)(lVar16 + 0x344) = param_1[3];
    *(undefined4 *)(lVar16 + 0x348) = param_1[4];
    *(undefined1 *)(lVar16 + 0x34c) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)(lVar16 + 0x34d) = *(undefined1 *)((long)param_1 + 0x15);
  }
  return 1;
}

