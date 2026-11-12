
bool FUN_0087b600(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *__s;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  char cVar19;
  ulong uVar20;
  bool bVar21;
  undefined8 local_70;
  long local_68;
  
  local_70 = *param_2;
  if ((char)(local_70 >> 0x20) < '\x05') {
    local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_68 = local_68 + -0x15180;
    local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
  }
  __s = PTR_DAT_04bb3250;
  uVar20 = local_70 >> 0x30;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70 = CONCAT26((short)uVar20,(undefined6)local_70) & 0xff00ffffffffffff;
  uVar12 = *(uint *)(param_1 + 1000);
  if (((int)uVar12 < 1) &&
     (((*(long *)(param_1 + 0x2d8) == 0 ||
       (puVar18 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar18 == (uint *)0x0)) ||
      (uVar12 = *puVar18, (int)uVar12 < 1)))) {
    return false;
  }
  uVar20 = 0;
  bVar21 = true;
LAB_0087b754:
  if ((int)*(uint *)(param_1 + 1000) < 1) {
    if (((((*(long *)(param_1 + 0x2d8) == 0) ||
          (puVar18 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar18 == (uint *)0x0)) ||
         ((uVar20 < *(uint *)(param_1 + 0x2f0) &&
          (*(char *)(*(long *)(param_1 + 0x2f8) + uVar20) == '\0')))) ||
        ((*puVar18 <= uVar20 || (puVar18[1] == 0)))) || ((ushort)puVar18[2] == 0))
    goto LAB_0087b804;
    iVar16 = 0xc;
    if (*(char *)((long)puVar18 + 10) != '\0') {
      iVar16 = 0x1c;
    }
    puVar18 = (uint *)((ulong)(puVar18[1] * (int)uVar20 + (uint)(ushort)puVar18[2] * 8 + iVar16) +
                      (long)puVar18);
    uVar4 = *puVar18;
  }
  else if (uVar20 < *(uint *)(param_1 + 1000)) {
    uVar17 = uVar20 & 0xffffffff;
    if (*(uint *)(param_1 + 0x3d8) <= uVar20) {
      uVar17 = 0;
    }
    puVar18 = *(uint **)(*(long *)(param_1 + 0x3e0) + uVar17 * 8);
    uVar4 = *puVar18;
  }
  else {
LAB_0087b804:
    puVar18 = (uint *)0x0;
    uVar4 = uRam0000000000000000;
  }
  if (uVar4 != 0) {
    cVar19 = DAT_04c8ec48;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *PTR_DAT_04bb3248 = 1;
        memset(__s,0xff,0x288);
      }
      else {
        uVar4 = *(uint *)(__s + 0x148);
        if (-1 < (int)uVar4) {
          lVar13 = (ulong)uVar4 + (long)puVar18;
          goto LAB_0087b8e4;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar10 = (uint *)(ulong)*puVar18;
      lVar13 = 0;
      if ((*puVar18 == 0) || (puVar18 == puVar10)) goto LAB_0087b8e4;
      lVar13 = 0xc;
      if (*(char *)((long)puVar18 + (10 - (long)puVar10)) != '\0') {
        lVar13 = 0x1c;
      }
      lVar1 = (long)puVar18 + (lVar13 - (long)puVar10);
      if (lVar1 == 0) break;
      uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar10));
      *(undefined4 *)(__s + 0x148) = 0xfffffffe;
      lVar13 = 0;
      if (uVar17 == 0) goto LAB_0087b8e4;
      piVar15 = (int *)(lVar1 + 4);
      while (piVar15[-1] != 0x443c0fb7) {
        piVar15 = piVar15 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          lVar13 = 0;
          goto LAB_0087b8e4;
        }
      }
      iVar16 = 0;
      if (*piVar15 != -1) {
        iVar16 = *piVar15;
      }
      *(int *)(__s + 0x148) = iVar16;
    } while (*puVar18 != 0);
  }
  lVar13 = 0;
LAB_0087b8e4:
  lVar1 = *(long *)PTR_PTR_04bb3260;
  if (lVar13 != 0) {
    lVar1 = lVar13;
  }
  uVar8 = FUN_006bd550(lVar1,0);
  local_68 = CONCAT44(local_68._4_4_,uVar8);
  puVar10 = (uint *)FUN_0088c0d0(param_1 + 8,&local_68);
  if (puVar10 == (uint *)0x0) {
    uVar11 = 4;
  }
  else {
    uVar4 = *puVar10;
    uVar11 = 0;
    if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
      puVar14 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
      uVar11 = 0;
      if (*puVar14 != 0) {
        uVar4 = puVar14[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar4 != 0) {
              uVar3 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar4);
            }
            if (*puVar14 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_04ce9768) &&
               (uVar11 = *(ushort *)(DAT_04ce9770 + (long)(int)uVar3 * 2), uVar11 < 6))
            goto LAB_0087b9a8;
          }
        }
        uVar11 = 0;
      }
    }
  }
LAB_0087b9a8:
  if ((uVar11 == 0) && (*puVar18 != 0)) {
    cVar19 = DAT_04c8ec48;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *PTR_DAT_04bb3248 = 1;
        memset(__s,0xff,0x288);
      }
      else {
        uVar4 = *(uint *)(__s + 0x27c);
        if (-1 < (int)uVar4) {
          if (((char *)((ulong)uVar4 + (long)puVar18) != (char *)0x0) &&
             (*(char *)((ulong)uVar4 + (long)puVar18) != '\0')) {
            uVar4 = *puVar18;
            if (uVar4 == 0) goto LAB_0087b6e0;
            uVar17 = (ulong)*(uint *)(__s + 0x148);
            goto LAB_0087baa0;
          }
          break;
        }
        if (uVar4 != 0xffffffff) break;
      }
      lVar13 = (long)puVar18 - (ulong)*puVar18;
      if ((*puVar18 == 0) || (lVar13 == 0)) break;
      lVar1 = 0xc;
      if (*(char *)(lVar13 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar13 == 0) break;
      uVar17 = (ulong)*(ushort *)(lVar13 + 8);
      *(undefined4 *)(__s + 0x27c) = 0xfffffffe;
      if (uVar17 == 0) break;
      piVar15 = (int *)(lVar1 + lVar13 + 4);
      while (piVar15[-1] != -0x5f6000a2) {
        piVar15 = piVar15 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto LAB_0087b740;
      }
      iVar16 = 0;
      if (*piVar15 != -1) {
        iVar16 = *piVar15;
      }
      *(int *)(__s + 0x27c) = iVar16;
      if (*puVar18 == 0) break;
    } while( true );
  }
  goto LAB_0087b740;
  while( true ) {
    lVar1 = (long)puVar18 - (ulong)uVar4;
    lVar13 = 0;
    if (lVar1 == 0) goto LAB_0087b6e4;
    lVar2 = 0xc;
    if (*(char *)(lVar1 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar1 == 0) break;
    uVar17 = (ulong)*(ushort *)(lVar1 + 8);
    *(undefined4 *)(__s + 0x148) = 0xfffffffe;
    lVar13 = 0;
    if (uVar17 == 0) goto LAB_0087b6e4;
    puVar10 = (uint *)(lVar2 + lVar1 + 4);
    while (puVar10[-1] != 0x443c0fb7) {
      puVar10 = puVar10 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) {
        lVar13 = 0;
        goto LAB_0087b6e4;
      }
    }
    uVar17 = 0;
    if (*puVar10 != 0xffffffff) {
      uVar17 = (ulong)*puVar10;
    }
    *(int *)(__s + 0x148) = (int)uVar17;
    uVar4 = *puVar18;
    if (uVar4 == 0) break;
LAB_0087baa0:
    if (-1 < (int)uVar17) {
      lVar13 = uVar17 + (long)puVar18;
      goto LAB_0087b6e4;
    }
    if (uVar17 != 0xffffffff) break;
  }
LAB_0087b6e0:
  lVar13 = 0;
LAB_0087b6e4:
  uVar7 = local_70._3_1_;
  uVar6 = local_70._2_1_;
  lVar1 = *(long *)PTR_PTR_04bb3260;
  if (lVar13 != 0) {
    lVar1 = lVar13;
  }
  uVar5 = (undefined2)local_70;
  uVar8 = FUN_006bd550(lVar1,0);
  local_68 = CONCAT44(local_68._4_4_,uVar8);
  uVar9 = FUN_0088c0d0(param_1 + 8,&local_68);
  uVar17 = FUN_00875c10(param_1,uVar9,uVar5,uVar6,uVar7);
  if ((uVar17 & 1) != 0) {
    return bVar21;
  }
LAB_0087b740:
  uVar20 = uVar20 + 1;
  bVar21 = (int)uVar20 < (int)uVar12;
  if (uVar20 == uVar12) {
    return bVar21;
  }
  goto LAB_0087b754;
}

