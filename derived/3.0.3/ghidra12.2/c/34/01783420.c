
/* WARNING: Restarted to delay deadcode elimination for space: stack */

char FUN_01783420(undefined4 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  char *pcVar18;
  long lVar19;
  char cVar20;
  char local_dc [127];
  undefined1 local_5d;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar19 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_1);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
         (lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8), lVar19 != 0)) {
        local_48 = lVar19;
      }
    }
  }
  uVar7 = FUN_01b01f10(&local_58);
  puVar5 = PTR_DAT_04bbe400;
  puVar4 = PTR_DAT_04bbe3f8;
  puVar3 = PTR_DAT_04bb46d0;
  if (uVar7 == 0xffff) {
    return '\0';
  }
  lVar19 = *(long *)PTR_DAT_04bb46d0;
  lVar15 = (ulong)uVar7 - (ulong)*(ushort *)(lVar19 + 0x400);
  if (*(uint *)(lVar19 + 0x3e0) <= (uint)lVar15) {
    return '\0';
  }
  lVar16 = *(long *)(lVar19 + 1000);
  puVar17 = *(uint **)(lVar16 + lVar15 * 8);
  if (puVar17 == (uint *)0x0) {
    return '\0';
  }
  if (*puVar17 != 0) {
    cVar20 = *PTR_DAT_04bbe3f8;
    do {
      if (cVar20 == '\0') {
        cVar20 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0x38) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar5 + 0x30);
        if (-1 < (int)uVar8) {
          lVar11 = (ulong)uVar8 + (long)puVar17;
          goto LAB_01783608;
        }
        if (uVar8 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)*puVar17;
      lVar11 = 0;
      if ((*puVar17 == 0) || (puVar17 == puVar12)) goto LAB_01783608;
      lVar11 = 0xc;
      if (*(char *)((long)puVar17 + (10 - (long)puVar12)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar1 = (long)puVar17 + (lVar11 - (long)puVar12);
      if (lVar1 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar12));
      *(undefined4 *)(puVar5 + 0x30) = 0xfffffffe;
      lVar11 = 0;
      if (uVar10 == 0) goto LAB_01783608;
      piVar13 = (int *)(lVar1 + 4);
      while (piVar13[-1] != 0x4b9c4229) {
        piVar13 = piVar13 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          lVar11 = 0;
          goto LAB_01783608;
        }
      }
      iVar14 = 0;
      if (*piVar13 != -1) {
        iVar14 = *piVar13;
      }
      *(int *)(puVar5 + 0x30) = iVar14;
    } while (*puVar17 != 0);
  }
  lVar11 = 0;
LAB_01783608:
  if (lVar11 == 0 && *(long *)PTR_PTR_04bbe3f0 == 0) {
    return '\0';
  }
  lVar15 = *(long *)(lVar16 + lVar15 * 8);
  if (((((lVar15 == 0) || (*(long *)(lVar19 + 0x2b8) == 0)) ||
       (puVar17 = *(uint **)(*(long *)(lVar19 + 0x2b8) + 8), puVar17 == (uint *)0x0)) ||
      ((*puVar17 == 0 || (uVar8 = puVar17[1], uVar8 == 0)))) || ((ulong)(ushort)puVar17[2] == 0)) {
LAB_017836bc:
    uVar10 = 0xffffffff;
  }
  else {
    lVar16 = 0xc;
    if (*(char *)((long)puVar17 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
    if (lVar16 == 0) goto LAB_017836bc;
    uVar2 = 0;
    if ((ulong)uVar8 != 0) {
      uVar2 = (uint)((ulong)(lVar15 - lVar16) / (ulong)uVar8);
    }
    if (*puVar17 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    uVar10 = (ulong)uVar2;
    if ((0 < *(int *)(lVar19 + 0x3c8)) && (uVar2 < *(uint *)(lVar19 + 0x3d0))) {
      uVar10 = (ulong)*(short *)(*(long *)(lVar19 + 0x3d8) + (long)(int)uVar2 * 2);
    }
  }
  pcVar9 = (char *)FUN_017c0eb0(lVar19,uVar10,1);
  local_5d = 0;
  pcVar18 = local_dc;
  local_dc[0] = '\0';
  if (pcVar9 == (char *)0x0) {
LAB_01783778:
    *pcVar18 = '\0';
    cVar20 = '\x03';
    if (local_dc[0] != '\0') {
      cVar20 = '\x04';
    }
  }
  else {
    if (pcVar18 != pcVar9) {
      lVar19 = 0;
      do {
        if (pcVar9[lVar19] == '\0') {
LAB_01783758:
          iVar14 = (int)lVar19;
          if (0x7f < iVar14) {
            iVar14 = 0x7f;
          }
          goto LAB_01783764;
        }
        if (pcVar9[lVar19 + 1] == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_01783758;
        }
        if (pcVar9[lVar19 + 2] == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_01783758;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      iVar14 = 0;
LAB_01783764:
      memcpy(pcVar18,pcVar9,(long)iVar14);
      pcVar18 = pcVar18 + iVar14;
      goto LAB_01783778;
    }
    cVar20 = '\x03';
  }
  lVar19 = *(long *)puVar3;
  uVar8 = (uint)uVar7 - (uint)*(ushort *)(lVar19 + 0x400);
  if ((((uVar8 < *(uint *)(lVar19 + 0x3e0)) &&
       (lVar15 = *(long *)(*(long *)(lVar19 + 1000) + (long)(int)uVar8 * 8), lVar15 != 0)) &&
      (*(long *)(lVar19 + 0x2b8) != 0)) &&
     (((puVar17 = *(uint **)(*(long *)(lVar19 + 0x2b8) + 8), puVar17 != (uint *)0x0 &&
       (*puVar17 != 0)) && ((uVar8 = puVar17[1], uVar8 != 0 && ((ulong)(ushort)puVar17[2] != 0))))))
  {
    lVar16 = 0xc;
    if (*(char *)((long)puVar17 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
    if (lVar16 == 0) goto LAB_01783830;
    uVar2 = 0;
    if ((ulong)uVar8 != 0) {
      uVar2 = (uint)((ulong)(lVar15 - lVar16) / (ulong)uVar8);
    }
    if (*puVar17 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    uVar10 = (ulong)uVar2;
    if ((0 < *(int *)(lVar19 + 0x3c8)) && (uVar2 < *(uint *)(lVar19 + 0x3d0))) {
      uVar10 = (ulong)*(short *)(*(long *)(lVar19 + 0x3d8) + (long)(int)uVar2 * 2);
    }
  }
  else {
LAB_01783830:
    uVar10 = 0xffffffff;
  }
  pcVar9 = (char *)FUN_017c1150(lVar19,uVar10);
  local_5d = 0;
  local_dc[0] = '\0';
  pcVar18 = local_dc;
  if (pcVar9 != (char *)0x0) {
    if (pcVar18 == pcVar9) {
      bVar6 = false;
      goto LAB_017838ec;
    }
    lVar19 = 0;
    do {
      if (pcVar9[lVar19] == '\0') {
LAB_017838b8:
        iVar14 = (int)lVar19;
        if (0x7f < iVar14) {
          iVar14 = 0x7f;
        }
        goto LAB_017838c4;
      }
      if (pcVar9[lVar19 + 1] == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_017838b8;
      }
      if (pcVar9[lVar19 + 2] == '\0') {
        lVar19 = lVar19 + 2;
        goto LAB_017838b8;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    iVar14 = 0;
LAB_017838c4:
    memcpy(pcVar18,pcVar9,(long)iVar14);
    pcVar18 = pcVar18 + iVar14;
  }
  *pcVar18 = '\0';
  bVar6 = local_dc[0] != '\0';
LAB_017838ec:
  return cVar20 + bVar6;
}

