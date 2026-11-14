
float FUN_01adadf0(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar6 = PTR_DAT_04bbff08;
  puVar5 = PTR_DAT_04bbff00;
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0x21;
  }
  else {
    uVar7 = *puVar8;
    if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar7 != 0) {
            uVar3 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
          }
          if (*puVar10 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc0148) &&
             (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar3 * 2),
             uVar7 = (uint)uVar4, uVar4 < 0xa2)) goto LAB_01adae88;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01adae88:
  if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a7a0 + 0xb0) == 0) {
      return 0.0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8);
    if (puVar8 == (uint *)0x0) {
      return 0.0;
    }
    if ((uVar7 < *(uint *)(DAT_0532a7a0 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar7) == '\0')) {
      return 0.0;
    }
    if (*puVar8 <= uVar7) {
      return 0.0;
    }
    if (puVar8[1] == 0) {
      return 0.0;
    }
    if ((ushort)puVar8[2] == 0) {
      return 0.0;
    }
    iVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(DAT_0532a7a0 + 0x1c0) <= uVar7) {
      return 0.0;
    }
    uVar3 = uVar7;
    if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar7) {
      uVar3 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar3 * 8);
  }
  if (puVar8 == (uint *)0x0) {
    return 0.0;
  }
  fVar17 = 0.0;
  if (*puVar8 == 0) {
    fVar15 = 0.0;
    fVar16 = 0.0;
  }
  else {
    fVar16 = 0.0;
    cVar11 = *PTR_DAT_04bbff00;
    do {
      if (cVar11 != '\0') {
        uVar3 = *(uint *)(puVar6 + 0x14);
        if ((int)uVar3 < 0) {
          if (uVar3 == 0xffffffff) goto LAB_01adaf38;
LAB_01adb050:
          fVar16 = 0.0;
        }
        else {
          if ((float *)((ulong)uVar3 + (long)puVar8) == (float *)0x0) goto LAB_01adb050;
          fVar16 = *(float *)((ulong)uVar3 + (long)puVar8);
        }
LAB_01adb054:
        uVar3 = *puVar8;
        if (uVar3 != 0) {
          uVar13 = *(uint *)(puVar6 + 0x18);
          goto LAB_01adb074;
        }
        fVar15 = 0.0;
        goto LAB_01adb1a8;
      }
      cVar11 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar6 + 0x40) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
LAB_01adaf38:
      lVar1 = (long)puVar8 - (ulong)*puVar8;
      if ((*puVar8 == 0) || (lVar1 == 0)) goto LAB_01adb054;
      lVar2 = 0xc;
      if (*(char *)(lVar1 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar1 == 0) goto LAB_01adb054;
      uVar12 = (ulong)*(ushort *)(lVar1 + 8);
      *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
      if (uVar12 == 0) goto LAB_01adb054;
      piVar14 = (int *)(lVar2 + lVar1 + 4);
      while (piVar14[-1] != -0x1280c302) {
        piVar14 = piVar14 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_01adb054;
      }
      iVar9 = 0;
      if (*piVar14 != -1) {
        iVar9 = *piVar14;
      }
      *(int *)(puVar6 + 0x14) = iVar9;
    } while (*puVar8 != 0);
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
  }
LAB_01adb1a8:
  if (uVar7 == 0x15) {
    fVar16 = fVar15 + fVar16 * -4.371139e-08 + fVar17 * 4.371139e-08 + 0.0;
  }
  return fVar16;
  while( true ) {
    fVar15 = 0.0;
    if ((uVar13 != 0xffffffff) || (lVar1 = (long)puVar8 - (ulong)uVar3, lVar1 == 0))
    goto LAB_01adb10c;
    lVar2 = 0xc;
    if (*(char *)(lVar1 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar1 == 0) goto LAB_01adb10c;
    uVar12 = (ulong)*(ushort *)(lVar1 + 8);
    *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_01adb10c;
    puVar10 = (uint *)(lVar2 + lVar1 + 4);
    while (puVar10[-1] != 0xd01f154e) {
      puVar10 = puVar10 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_01adb10c;
    }
    fVar15 = 0.0;
    uVar13 = 0;
    if (*puVar10 != 0xffffffff) {
      uVar13 = *puVar10;
    }
    *(uint *)(puVar6 + 0x18) = uVar13;
    uVar3 = *puVar8;
    if (uVar3 == 0) break;
LAB_01adb074:
    if (-1 < (int)uVar13) {
      if ((float *)((long)puVar8 + (ulong)uVar13) == (float *)0x0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = *(float *)((long)puVar8 + (ulong)uVar13);
      }
LAB_01adb10c:
      uVar3 = *puVar8;
      if (uVar3 == 0) goto LAB_01adb1a8;
      uVar13 = *(uint *)(puVar6 + 0x1c);
      goto LAB_01adb12c;
    }
  }
  fVar17 = 0.0;
  goto LAB_01adb1a8;
LAB_01adb12c:
  if (-1 < (int)uVar13) {
    if ((float *)((long)puVar8 + (ulong)uVar13) != (float *)0x0) {
      fVar17 = *(float *)((long)puVar8 + (ulong)uVar13);
    }
    goto LAB_01adb1a8;
  }
  if ((uVar13 != 0xffffffff) || (lVar1 = (long)puVar8 - (ulong)uVar3, lVar1 == 0))
  goto LAB_01adb1a8;
  lVar2 = 0xc;
  if (*(char *)(lVar1 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar1 == 0) goto LAB_01adb1a8;
  uVar12 = (ulong)*(ushort *)(lVar1 + 8);
  *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
  if (uVar12 == 0) goto LAB_01adb1a8;
  puVar10 = (uint *)(lVar2 + lVar1 + 4);
  while (puVar10[-1] != 0x97bf6f9e) {
    puVar10 = puVar10 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_01adb1a8;
  }
  uVar13 = 0;
  if (*puVar10 != 0xffffffff) {
    uVar13 = *puVar10;
  }
  *(uint *)(puVar6 + 0x1c) = uVar13;
  uVar3 = *puVar8;
  if (uVar3 == 0) goto LAB_01adb1a8;
  goto LAB_01adb12c;
}

