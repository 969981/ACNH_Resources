
void FUN_0220a410(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  char *pcVar18;
  int *piVar19;
  char *pcVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulong uVar25;
  undefined *local_a8;
  char *local_a0;
  undefined *local_98;
  char *local_90;
  int local_88;
  char local_84 [31];
  undefined1 local_65;
  
  lVar14 = *(long *)PTR_DAT_04bb3968;
  uVar22 = *(uint *)(lVar14 + 0x173a8);
  if ((int)uVar22 < 1) {
    lVar15 = *(long *)(lVar14 + 0x17298);
    if ((lVar15 == 0) || (puVar16 = *(uint **)(lVar15 + 8), puVar16 == (uint *)0x0)) {
      uVar22 = 0;
    }
    else {
      uVar22 = *puVar16;
    }
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar9 = PTR_PTR_04bbaae8;
  puVar7 = PTR_DAT_04bb2020;
  lVar15 = 0;
  do {
    if (*(char *)(param_2[1] + lVar15) == '\0') {
LAB_0220a4d0:
      uVar24 = (uint)lVar15;
      goto joined_r0x0220aae4;
    }
    lVar17 = param_2[1] + lVar15;
    if (*(char *)(lVar17 + 1) == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_0220a4d0;
    }
    if (*(char *)(lVar17 + 2) == '\0') {
      uVar24 = (int)lVar15 + 2;
      goto joined_r0x0220aae4;
    }
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  uVar24 = 0;
joined_r0x0220aae4:
  if ((int)uVar22 < 1) {
    return;
  }
  uVar11 = uVar24;
  if (0x7ffff < (int)uVar24) {
    uVar11 = 0x80000;
  }
  puVar1 = PTR_DAT_04bb2a08 + 0x10;
  uVar25 = 0;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puVar23 = (undefined8 *)PTR_DAT_04bbaae0;
LAB_0220a56c:
  if (0 < (int)*(uint *)(lVar14 + 0x173a8)) {
    if (*(uint *)(lVar14 + 0x173a8) <= uVar25) goto LAB_0220a560;
    uVar21 = uVar25;
    if (*(uint *)(lVar14 + 0x17398) <= uVar25) {
      uVar21 = 0;
    }
    puVar16 = *(uint **)(*(long *)(lVar14 + 0x173a0) + uVar21 * 8);
    if (puVar16 == (uint *)0x0) goto LAB_0220a560;
LAB_0220a598:
    uVar4 = *puVar16;
    if (uVar4 != 0) {
      cVar10 = *PTR_DAT_04bbaad8;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *PTR_DAT_04bbaad8 = 1;
          *puVar23 = 0xffffffffffffffff;
          puVar23[1] = 0xffffffffffffffff;
          uVar4 = *puVar16;
        }
        else {
          uVar5 = *(uint *)(puVar23 + 1);
          if (-1 < (int)uVar5) {
            pcVar20 = (char *)((ulong)uVar5 + (long)puVar16);
            goto LAB_0220a66c;
          }
          if (uVar5 != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)uVar4;
        pcVar20 = (char *)0x0;
        if ((puVar6 == (uint *)0x0) || (pcVar20 = (char *)0x0, puVar16 == puVar6))
        goto LAB_0220a66c;
        lVar15 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar6)) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar16 + (lVar15 - (long)puVar6);
        pcVar20 = (char *)0x0;
        if (lVar15 == 0) goto LAB_0220a66c;
        uVar21 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar6));
        *(undefined4 *)(puVar23 + 1) = 0xfffffffe;
        if (uVar21 == 0) break;
        piVar19 = (int *)(lVar15 + 4);
        while (piVar19[-1] != 0x2f1b930d) {
          piVar19 = piVar19 + 2;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) goto LAB_0220a668;
        }
        iVar13 = 0;
        if (*piVar19 != -1) {
          iVar13 = *piVar19;
        }
        *(int *)(puVar23 + 1) = iVar13;
        uVar4 = *puVar16;
        if (uVar4 == 0) break;
      } while( true );
    }
LAB_0220a668:
    pcVar20 = (char *)0x0;
LAB_0220a66c:
    local_88 = 0x20;
    local_65 = 0;
    pcVar18 = *(char **)puVar9;
    if (pcVar20 != (char *)0x0) {
      pcVar18 = pcVar20;
    }
    local_90 = local_84;
    if (local_84 != pcVar18) {
      lVar15 = 0;
      do {
        if (pcVar18[lVar15] == '\0') {
LAB_0220a74c:
          iVar13 = (int)lVar15;
joined_r0x0220a750:
          if (0x1f < iVar13) {
            iVar13 = 0x1f;
          }
          goto LAB_0220a758;
        }
        if (pcVar18[lVar15 + 1] == '\0') {
          lVar15 = lVar15 + 1;
          goto LAB_0220a74c;
        }
        if (pcVar18[lVar15 + 2] == '\0') {
          iVar13 = (int)lVar15 + 2;
          goto joined_r0x0220a750;
        }
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
      iVar13 = 0;
LAB_0220a758:
      local_98 = puVar1;
      memcpy(local_84,pcVar18,(long)iVar13);
      local_84[iVar13] = '\0';
    }
    lVar15 = 0;
    local_a0 = "_";
    local_90[(long)local_88 + -1] = '\0';
    do {
      if (local_90[lVar15] == '\0') goto LAB_0220a7dc;
      if (local_90[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_0220a7dc;
      }
      if (local_90[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_0220a7dc;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_0220a7dc:
    local_a8 = puVar3;
    local_98 = puVar2;
    (**(code **)(puVar7 + 0x28))(&local_a8);
    lVar17 = 0;
    do {
      iVar13 = (int)lVar15;
      if (local_a0[lVar17] == '\0') {
LAB_0220a834:
        iVar12 = (int)lVar17;
        if (iVar13 < iVar12) goto LAB_0220a908;
LAB_0220a84c:
        if ((int)lVar17 < 1) goto LAB_0220a8e8;
        uVar21 = 0;
        goto LAB_0220a864;
      }
      if (local_a0[lVar17 + 1] == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_0220a834;
      }
      if (local_a0[lVar17 + 2] == '\0') {
        lVar17 = lVar17 + 2;
        iVar12 = (int)lVar17;
        if (iVar12 <= iVar13) goto LAB_0220a84c;
        goto LAB_0220a908;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    if (-1 < iVar13) {
LAB_0220a8e8:
      (**(code **)(local_a8 + 0x18))(&local_a8);
      goto LAB_0220a560;
    }
    goto LAB_0220a908;
  }
  lVar15 = *(long *)(lVar14 + 0x17298);
  if ((((lVar15 != 0) && (puVar16 = *(uint **)(lVar15 + 8), puVar16 != (uint *)0x0)) &&
      ((*(uint *)(lVar14 + 0x172b0) <= uVar25 ||
       (*(char *)(*(long *)(lVar14 + 0x172b8) + uVar25) != '\0')))) &&
     (((uVar25 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
    iVar13 = 0xc;
    if (*(char *)((long)puVar16 + 10) != '\0') {
      iVar13 = 0x1c;
    }
    puVar16 = (uint *)((ulong)(puVar16[1] * (int)uVar25 + (uint)(ushort)puVar16[2] * 8 + iVar13) +
                      (long)puVar16);
    if (puVar16 != (uint *)0x0) goto LAB_0220a598;
  }
  goto LAB_0220a560;
  while( true ) {
    pcVar18 = local_a0;
    lVar15 = lVar17;
    while( true ) {
      lVar15 = lVar15 + -1;
      if (pcVar20[uVar21] != *pcVar18) break;
      if (pcVar20[uVar21] == '\0') goto LAB_0220a8fc;
      pcVar20 = pcVar20 + 1;
      pcVar18 = pcVar18 + 1;
      if (lVar15 == 0) goto LAB_0220a8fc;
    }
    uVar21 = uVar21 + 1;
    if (uVar21 == (iVar13 - iVar12) + 1) break;
LAB_0220a864:
    pcVar20 = local_90;
    pcVar18 = local_90 + uVar21;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    if (pcVar18 == local_a0) {
LAB_0220a8fc:
      puVar23 = (undefined8 *)PTR_DAT_04bbaae0;
      if ((int)uVar21 != -1) goto LAB_0220a560;
      break;
    }
  }
LAB_0220a908:
  (**(code **)(local_98 + 0x18))(&local_98);
  (**(code **)(local_98 + 0x18))(&local_98);
  pcVar20 = local_90;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar8 = PTR_DAT_04bbaae0;
  if (((int)uVar24 < 1) || (pcVar20 == (char *)param_2[1])) {
LAB_0220a9a8:
    uVar22 = *puVar16;
    if (uVar22 == 0) goto LAB_0220aa88;
    cVar10 = *PTR_DAT_04bbaad8;
    goto LAB_0220a9d4;
  }
  pcVar20 = (char *)param_2[1];
  pcVar18 = local_90;
  uVar21 = (ulong)uVar11;
  while( true ) {
    uVar21 = uVar21 - 1;
    if (*pcVar18 != *pcVar20) break;
    if (*pcVar18 == '\0') goto LAB_0220a9a8;
    pcVar20 = pcVar20 + 1;
    pcVar18 = pcVar18 + 1;
    if (uVar21 == 0) goto LAB_0220a9a8;
  }
  puVar23 = (undefined8 *)PTR_DAT_04bbaae0;
LAB_0220a560:
  uVar25 = uVar25 + 1;
  if (uVar25 == uVar22) {
    return;
  }
  goto LAB_0220a56c;
LAB_0220a9d4:
  if (cVar10 == '\0') {
    cVar10 = '\x01';
    *PTR_DAT_04bbaad8 = 1;
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    uVar22 = *puVar16;
  }
  else {
    uVar24 = *(uint *)(puVar8 + 8);
    if (-1 < (int)uVar24) {
      lVar14 = (ulong)uVar24 + (long)puVar16;
      goto LAB_0220aa8c;
    }
    if (uVar24 != 0xffffffff) {
LAB_0220aa88:
      lVar14 = 0;
LAB_0220aa8c:
      local_a0 = (char *)*(long *)puVar9;
      if (lVar14 != 0) {
        local_a0 = (char *)lVar14;
      }
      local_a8 = PTR_DAT_04bb2020 + 0x10;
      (**(code **)(*param_1 + 0x10))(param_1,&local_a8);
      return;
    }
  }
  puVar6 = (uint *)(ulong)uVar22;
  lVar14 = 0;
  if ((puVar6 == (uint *)0x0) || (lVar14 = 0, puVar16 == puVar6)) goto LAB_0220aa8c;
  lVar14 = 0xc;
  if (*(char *)((long)puVar16 + (10 - (long)puVar6)) != '\0') {
    lVar14 = 0x1c;
  }
  lVar15 = (long)puVar16 + (lVar14 - (long)puVar6);
  lVar14 = 0;
  if (lVar15 == 0) goto LAB_0220aa8c;
  uVar25 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar6));
  *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
  if (uVar25 == 0) goto LAB_0220aa88;
  piVar19 = (int *)(lVar15 + 4);
  while (piVar19[-1] != 0x2f1b930d) {
    piVar19 = piVar19 + 2;
    uVar25 = uVar25 - 1;
    if (uVar25 == 0) goto LAB_0220aa88;
  }
  iVar13 = 0;
  if (*piVar19 != -1) {
    iVar13 = *piVar19;
  }
  *(int *)(puVar8 + 8) = iVar13;
  uVar22 = *puVar16;
  if (uVar22 == 0) goto LAB_0220aa88;
  goto LAB_0220a9d4;
}

