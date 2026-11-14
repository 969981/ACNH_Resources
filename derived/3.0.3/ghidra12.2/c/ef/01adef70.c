
undefined4 FUN_01adef70(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  
  puVar5 = PTR_DAT_04bbff30;
  puVar4 = PTR_DAT_04bbff28;
  puVar7 = *(uint **)(param_1 + 0x10);
  uVar6 = 0;
  if (puVar7 != (uint *)0x0) {
    uVar6 = *puVar7;
    if (uVar6 != 0 && puVar7 != (uint *)(ulong)uVar6) {
      puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      if (((*puVar9 != 0) && (uVar6 = puVar9[1], uVar6 != 0)) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar1 != 0) {
          uVar12 = 0;
          if ((ulong)uVar6 != 0) {
            uVar12 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar9 <= uVar12) {
            uVar12 = 0xffffffff;
          }
          if ((uVar12 < *(uint *)PTR_DAT_04bc0150) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0150 + 8) + (long)(int)uVar12 * 2),
             uVar6 = (uint)uVar3, uVar3 < 0x6b)) goto LAB_01adf000;
        }
      }
    }
    uVar6 = 0;
  }
LAB_01adf000:
  if ((int)*(uint *)(DAT_0532a7c0 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a7c0 + 0xb0) == 0) {
      return 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a7c0 + 0xb0) + 8);
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    if ((uVar6 < *(uint *)(DAT_0532a7c0 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a7c0 + 0xd0) + (long)(int)uVar6) == '\0')) {
      return 0;
    }
    if (*puVar7 <= uVar6) {
      return 0;
    }
    if (puVar7[1] == 0) {
      return 0;
    }
    if ((ushort)puVar7[2] == 0) {
      return 0;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(DAT_0532a7c0 + 0x1c0) <= uVar6) {
      return 0;
    }
    if (*(uint *)(DAT_0532a7c0 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a7c0 + 0x1b8) + (ulong)uVar6 * 8);
  }
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  if (*puVar7 == 0) {
    return 0;
  }
  cVar10 = *PTR_DAT_04bbff28;
  while (cVar10 == '\0') {
    cVar10 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
    *(undefined4 *)(puVar5 + 0x28) = 0xffffffff;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
LAB_01adf0b4:
    uVar14 = 0;
    lVar1 = (long)puVar7 - (ulong)*puVar7;
    if ((*puVar7 == 0) || (lVar1 == 0)) goto LAB_01adf1cc;
    lVar2 = 0xc;
    if (*(char *)(lVar1 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar1 == 0) goto LAB_01adf1cc;
    uVar11 = (ulong)*(ushort *)(lVar1 + 8);
    *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_01adf1cc;
    piVar13 = (int *)(lVar2 + lVar1 + 4);
    while (piVar13[-1] != 0x1e4ff55f) {
      piVar13 = piVar13 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_01adf1cc;
    }
    iVar8 = 0;
    if (*piVar13 != -1) {
      iVar8 = *piVar13;
    }
    *(int *)(puVar5 + 0xc) = iVar8;
    if (*puVar7 == 0) {
      return 0;
    }
  }
  uVar6 = *(uint *)(puVar5 + 0xc);
  if ((int)uVar6 < 0) {
    if (uVar6 == 0xffffffff) goto LAB_01adf0b4;
LAB_01adf1c8:
    uVar14 = 0;
  }
  else {
    if ((undefined4 *)((ulong)uVar6 + (long)puVar7) == (undefined4 *)0x0) goto LAB_01adf1c8;
    uVar14 = *(undefined4 *)((ulong)uVar6 + (long)puVar7);
  }
LAB_01adf1cc:
  uVar6 = *puVar7;
  if (uVar6 == 0) {
    return uVar14;
  }
  iVar8 = *(int *)(puVar5 + 8);
  while (((iVar8 < 0 && (iVar8 == -1)) && (lVar1 = (long)puVar7 - (ulong)uVar6, lVar1 != 0))) {
    lVar2 = 0xc;
    if (*(char *)(lVar1 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar1 == 0) break;
    uVar11 = (ulong)*(ushort *)(lVar1 + 8);
    *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
    if (uVar11 == 0) break;
    piVar13 = (int *)(lVar2 + lVar1 + 4);
    while (piVar13[-1] != -0x49b01253) {
      piVar13 = piVar13 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_01adf288;
    }
    iVar8 = 0;
    if (*piVar13 != -1) {
      iVar8 = *piVar13;
    }
    *(int *)(puVar5 + 8) = iVar8;
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      return uVar14;
    }
  }
LAB_01adf288:
  uVar6 = *puVar7;
  if (uVar6 == 0) {
    return uVar14;
  }
  iVar8 = *(int *)(puVar5 + 4);
  while (((iVar8 < 0 && (iVar8 == -1)) && (lVar1 = (long)puVar7 - (ulong)uVar6, lVar1 != 0))) {
    lVar2 = 0xc;
    if (*(char *)(lVar1 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar1 == 0) break;
    uVar11 = (ulong)*(ushort *)(lVar1 + 8);
    *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
    if (uVar11 == 0) break;
    piVar13 = (int *)(lVar2 + lVar1 + 4);
    while (piVar13[-1] != 0x7eaf62dd) {
      piVar13 = piVar13 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_01adf344;
    }
    iVar8 = 0;
    if (*piVar13 != -1) {
      iVar8 = *piVar13;
    }
    *(int *)(puVar5 + 4) = iVar8;
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      return uVar14;
    }
  }
LAB_01adf344:
  uVar6 = *puVar7;
  if (uVar6 == 0) {
    return uVar14;
  }
  uVar12 = *(uint *)puVar5;
  while( true ) {
    if (-1 < (int)uVar12) {
      if ((long)puVar7 + (ulong)uVar12 == 0) {
        return uVar14;
      }
      return uVar14;
    }
    if (uVar12 != 0xffffffff) {
      return uVar14;
    }
    lVar1 = (long)puVar7 - (ulong)uVar6;
    if (lVar1 == 0) {
      return uVar14;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar1 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar1 == 0) break;
    uVar11 = (ulong)*(ushort *)(lVar1 + 8);
    *(undefined4 *)puVar5 = 0xfffffffe;
    if (uVar11 == 0) {
      return uVar14;
    }
    puVar9 = (uint *)(lVar2 + lVar1 + 4);
    while (puVar9[-1] != 0x390f180d) {
      puVar9 = puVar9 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return uVar14;
      }
    }
    uVar12 = 0;
    if (*puVar9 != 0xffffffff) {
      uVar12 = *puVar9;
    }
    *(uint *)puVar5 = uVar12;
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      return uVar14;
    }
  }
  return uVar14;
}

