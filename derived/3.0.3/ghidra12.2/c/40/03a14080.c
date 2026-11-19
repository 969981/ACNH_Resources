
void FUN_03a14080(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  char cVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  char *pcVar22;
  char *pcVar23;
  long *plVar24;
  undefined2 local_74;
  undefined2 local_72;
  undefined *local_70;
  char *local_68;
  
  plVar1 = param_1 + 0x33;
  (**(code **)(param_1[0x33] + 0x18))(plVar1);
  lVar21 = 0;
  do {
    if (*(char *)(param_1[0x34] + lVar21) == '\0') goto LAB_03a1410c;
    lVar19 = param_1[0x34] + lVar21;
    if (*(char *)(lVar19 + 1) == '\0') {
      lVar21 = lVar21 + 1;
      goto LAB_03a1410c;
    }
    if (*(char *)(lVar19 + 2) == '\0') {
      lVar21 = lVar21 + 2;
      goto LAB_03a1410c;
    }
    lVar21 = lVar21 + 3;
  } while (lVar21 != 0x80001);
  lVar21 = 0;
LAB_03a1410c:
  plVar2 = param_1 + 0x41;
  (**(code **)(param_1[0x41] + 0x18))(plVar2);
  lVar19 = 0;
  do {
    if (*(char *)(param_1[0x42] + lVar19) == '\0') goto LAB_03a1416c;
    lVar6 = param_1[0x42] + lVar19;
    if (*(char *)(lVar6 + 1) == '\0') {
      lVar19 = lVar19 + 1;
      goto LAB_03a1416c;
    }
    if (*(char *)(lVar6 + 2) == '\0') {
      lVar19 = lVar19 + 2;
      goto LAB_03a1416c;
    }
    lVar19 = lVar19 + 3;
  } while (lVar19 != 0x80001);
  lVar19 = 0;
LAB_03a1416c:
  if (*(int *)(param_2 + 0x30) < 1) {
    return;
  }
  plVar3 = param_1 + 0x25;
  uVar20 = (uint)lVar21;
  uVar17 = 0;
  uVar12 = uVar20;
  if (0x7ffff < (int)uVar20) {
    uVar12 = 0x80000;
  }
  uVar18 = (uint)lVar19;
  uVar13 = uVar18;
  if (0x7ffff < (int)uVar18) {
    uVar13 = 0x80000;
  }
  puVar4 = PTR_DAT_04bb3498 + 0x10;
  puVar5 = PTR_DAT_04bb2020 + 0x10;
LAB_03a141e0:
  plVar24 = (long *)**(undefined8 **)(*(long *)(param_2 + 0x38) + uVar17 * 8);
  if (((*PTR_DAT_04bb3490 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bb3488 = puVar4;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  if (((plVar24 != (long *)0x0) &&
      (uVar16 = (**(code **)*plVar24)(plVar24,PTR_DAT_04bb3488), (uVar16 & 1) != 0)) &&
     (plVar24[2] == 0)) {
    (**(code **)(*param_1 + 0xd0))(param_1,param_2,uVar17 & 0xffffffff);
    (**(code **)(param_1[0x25] + 0x18))(plVar3);
    (**(code **)(param_1[0x25] + 0x18))(plVar3);
    puVar8 = PTR_PTR_04bb2238;
    lVar19 = param_1[0x26];
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    lVar21 = *(long *)(puVar8 + 8);
    pcVar23 = (char *)param_1[0x26];
    if (lVar19 == lVar21) {
LAB_03a143ec:
      uVar15 = 1;
      cVar7 = *pcVar23;
    }
    else {
      uVar16 = 0;
      bVar9 = true;
      do {
        if (pcVar23[uVar16] != *(char *)(lVar21 + uVar16)) break;
        if (pcVar23[uVar16] == '\0') {
          if (bVar9) goto LAB_03a143ec;
          break;
        }
        if (pcVar23[uVar16 + 1] != *(char *)(lVar21 + uVar16 + 1)) break;
        if (pcVar23[uVar16 + 1] == '\0') goto LAB_03a143ec;
        if (pcVar23[uVar16 + 2] != *(char *)(lVar21 + uVar16 + 2)) break;
        if (pcVar23[uVar16 + 2] == '\0') goto LAB_03a143ec;
        bVar9 = uVar16 < 0x7fffe;
        uVar16 = uVar16 + 3;
      } while (uVar16 != 0x80001);
      local_68 = (char *)(*(long *)(plVar24[0x1b] + 8) + 2);
      local_70 = PTR_DAT_04bb2020 + 0x10;
      (**(code **)(param_1[0x25] + 0x18))(plVar3);
      (**(code **)(param_1[0x25] + 0x18))(plVar3);
      pcVar22 = (char *)param_1[0x26];
      (**(code **)(local_70 + 0x18))(&local_70);
      pcVar23 = (char *)param_1[0x26];
      if (pcVar22 == local_68) goto LAB_03a143ec;
      if (*pcVar23 == *local_68) {
        if (*pcVar23 == '\0') goto LAB_03a143ec;
        uVar16 = 0;
        pcVar22 = local_68 + 1;
        do {
          if (pcVar23[uVar16 + 1] != pcVar22[uVar16]) {
            pcVar22 = (char *)0x0;
            goto LAB_03a1487c;
          }
          if (pcVar23[uVar16 + 1] == '\0') {
            pcVar22 = (char *)0x1;
            goto LAB_03a1487c;
          }
          if (pcVar23[uVar16 + 2] != pcVar22[uVar16 + 1]) {
            pcVar22 = (char *)0x0;
            uVar16 = uVar16 + 1;
            goto LAB_03a1487c;
          }
          if (pcVar23[uVar16 + 2] == '\0') {
            uVar16 = uVar16 + 1;
            pcVar22 = (char *)0x1;
            goto LAB_03a1487c;
          }
          if (uVar16 == 0x7fffe) {
            uVar16 = 0x80000;
            goto LAB_03a1487c;
          }
          lVar21 = uVar16 + 3;
          uVar14 = uVar16 + 2;
          if (pcVar23[lVar21] != pcVar22[uVar16 + 2]) {
            pcVar22 = (char *)0x0;
            goto LAB_03a14878;
          }
          uVar16 = uVar16 + 3;
        } while (pcVar23[lVar21] != '\0');
        pcVar22 = (char *)0x1;
LAB_03a14878:
        uVar16 = uVar14;
LAB_03a1487c:
        uVar15 = (uint)(uVar16 < 0x80000) & (uint)pcVar22;
        cVar7 = *pcVar23;
      }
      else {
        uVar15 = 0;
        cVar7 = *pcVar23;
      }
    }
    if (cVar7 != '\0') {
      (**(code **)(param_1[0x25] + 0x18))(plVar3);
      lVar21 = 0;
      do {
        if (*(char *)(param_1[0x26] + lVar21) == '\0') {
LAB_03a14450:
          iVar10 = (int)lVar21;
joined_r0x03a14454:
          if ((0 < iVar10) && (pcVar23[iVar10 - 1] == '*')) {
            local_68 = (char *)(*(long *)(plVar24[0x1b] + 8) + 2);
            local_70 = puVar5;
            (**(code **)(param_1[0x25] + 0x18))(plVar3);
            lVar21 = 0;
            goto LAB_03a144b0;
          }
          break;
        }
        lVar19 = param_1[0x26] + lVar21;
        if (*(char *)(lVar19 + 1) == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_03a14450;
        }
        if (*(char *)(lVar19 + 2) == '\0') {
          iVar10 = (int)lVar21 + 2;
          goto joined_r0x03a14454;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
    }
    if (uVar15 == 0) goto LAB_03a141d0;
    goto LAB_03a14658;
  }
  goto LAB_03a141d0;
  while( true ) {
    lVar19 = param_1[0x26] + lVar21;
    if (*(char *)(lVar19 + 1) == '\0') {
      lVar21 = lVar21 + 1;
      goto LAB_03a14500;
    }
    if (*(char *)(lVar19 + 2) == '\0') {
      iVar10 = (int)lVar21 + 2;
      goto joined_r0x03a14504;
    }
    lVar21 = lVar21 + 3;
    if (lVar21 == 0x80001) break;
LAB_03a144b0:
    if (*(char *)(param_1[0x26] + lVar21) == '\0') {
LAB_03a14500:
      iVar10 = (int)lVar21;
joined_r0x03a14504:
      if (1 < iVar10) {
        uVar16 = 0;
        bVar9 = false;
        goto LAB_03a14530;
      }
      break;
    }
  }
  goto LAB_03a14658;
  while( true ) {
    uVar16 = uVar16 + 1;
    bVar9 = iVar10 - 1 <= uVar16;
    if (uVar16 == iVar10 - 1) break;
LAB_03a14530:
    (**(code **)(local_70 + 0x18))(&local_70);
    uVar14 = 0;
    do {
      if (local_68[uVar14] == '\0') goto LAB_03a14594;
      if (local_68[uVar14 + 1] == '\0') {
        uVar14 = uVar14 + 1;
        goto LAB_03a14594;
      }
      if (local_68[uVar14 + 2] == '\0') {
        uVar14 = uVar14 + 2;
        goto LAB_03a14594;
      }
      uVar14 = uVar14 + 3;
    } while (uVar14 != 0x80001);
    uVar14 = 0;
LAB_03a14594:
    pcVar23 = PTR_DAT_04bb2120;
    if (uVar16 <= (uVar14 & 0xffffffff)) {
      pcVar23 = local_68 + uVar16;
    }
    cVar7 = *pcVar23;
    (**(code **)(param_1[0x25] + 0x18))(plVar3);
    lVar21 = param_1[0x26];
    uVar14 = 0;
    do {
      if (*(char *)(lVar21 + uVar14) == '\0') goto LAB_03a14614;
      if (*(char *)(lVar21 + uVar14 + 1) == '\0') {
        uVar14 = uVar14 + 1;
        goto LAB_03a14614;
      }
      if (*(char *)(lVar21 + uVar14 + 2) == '\0') {
        uVar14 = uVar14 + 2;
        goto LAB_03a14614;
      }
      uVar14 = uVar14 + 3;
    } while (uVar14 != 0x80001);
    uVar14 = 0;
LAB_03a14614:
    pcVar23 = PTR_DAT_04bb2120;
    if (uVar16 <= (uVar14 & 0xffffffff)) {
      pcVar23 = (char *)(lVar21 + uVar16);
    }
    if (cVar7 != *pcVar23) break;
  }
  if (uVar15 == 0 && !bVar9) goto LAB_03a141d0;
LAB_03a14658:
  iVar10 = (**(code **)(*plVar24 + 0x30))(plVar24);
  if (0 < iVar10) {
    iVar10 = 0;
    do {
      (**(code **)(*plVar24 + 0x40))(&local_70,plVar24,iVar10);
      (**(code **)(param_1[0x33] + 0x18))(plVar1);
      (**(code **)(param_1[0x33] + 0x18))(plVar1);
      pcVar23 = (char *)param_1[0x34];
      (**(code **)(local_70 + 0x18))(&local_70);
      if ((0 < (int)uVar20) && (pcVar23 != local_68)) {
        pcVar23 = local_68;
        pcVar22 = (char *)param_1[0x34];
        uVar16 = (ulong)uVar12;
        do {
          uVar16 = uVar16 - 1;
          if (*pcVar22 != *pcVar23) goto LAB_03a146a4;
        } while ((*pcVar22 != '\0') && (pcVar23 = pcVar23 + 1, pcVar22 = pcVar22 + 1, uVar16 != 0));
      }
      local_72 = (undefined2)iVar10;
      local_74 = (short)uVar17;
      (**(code **)(*param_1 + 0xc0))(param_1,param_2,&local_74,&local_70);
LAB_03a146a4:
      iVar10 = iVar10 + 1;
      iVar11 = (**(code **)(*plVar24 + 0x30))(plVar24);
    } while (iVar10 < iVar11);
  }
  iVar10 = (**(code **)(*plVar24 + 0xb8))(plVar24);
  if (0 < iVar10) {
    iVar10 = 0;
    do {
      (**(code **)(*plVar24 + 200))(&local_70,plVar24,iVar10);
      (**(code **)(param_1[0x41] + 0x18))(plVar2);
      (**(code **)(param_1[0x41] + 0x18))(plVar2);
      pcVar23 = (char *)param_1[0x42];
      (**(code **)(local_70 + 0x18))(&local_70);
      if ((0 < (int)uVar18) && (pcVar23 != local_68)) {
        pcVar23 = local_68;
        pcVar22 = (char *)param_1[0x42];
        uVar16 = (ulong)uVar13;
        do {
          uVar16 = uVar16 - 1;
          if (*pcVar22 != *pcVar23) goto LAB_03a14798;
        } while ((*pcVar22 != '\0') && (pcVar23 = pcVar23 + 1, pcVar22 = pcVar22 + 1, uVar16 != 0));
      }
      local_72 = (undefined2)iVar10;
      local_74 = (short)uVar17;
      (**(code **)(*param_1 + 200))(param_1,param_2,&local_74,&local_70);
LAB_03a14798:
      iVar10 = iVar10 + 1;
      iVar11 = (**(code **)(*plVar24 + 0xb8))(plVar24);
    } while (iVar10 < iVar11);
  }
LAB_03a141d0:
  uVar17 = uVar17 + 1;
  if ((long)*(int *)(param_2 + 0x30) <= (long)uVar17) {
    return;
  }
  goto LAB_03a141e0;
}

