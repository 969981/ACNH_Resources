
float FUN_01adb220(long param_1)

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
  int *piVar13;
  float fVar14;
  
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
             uVar7 = (uint)uVar4, uVar4 < 0xa2)) goto LAB_01adb2b8;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01adb2b8:
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
  if (*puVar8 == 0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = 0.0;
    cVar11 = *PTR_DAT_04bbff00;
    do {
      if (cVar11 != '\0') {
        uVar3 = *(uint *)(puVar6 + 8);
        if ((int)uVar3 < 0) {
          if (uVar3 == 0xffffffff) goto LAB_01adb368;
LAB_01adb480:
          fVar14 = 0.0;
        }
        else {
          if ((float *)((ulong)uVar3 + (long)puVar8) == (float *)0x0) goto LAB_01adb480;
          fVar14 = *(float *)((ulong)uVar3 + (long)puVar8);
        }
LAB_01adb484:
        uVar3 = *puVar8;
        if (uVar3 == 0) goto LAB_01adb5d8;
        iVar9 = *(int *)(puVar6 + 0xc);
        goto LAB_01adb4a4;
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
LAB_01adb368:
      lVar1 = (long)puVar8 - (ulong)*puVar8;
      if ((*puVar8 == 0) || (lVar1 == 0)) goto LAB_01adb484;
      lVar2 = 0xc;
      if (*(char *)(lVar1 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar1 == 0) goto LAB_01adb484;
      uVar12 = (ulong)*(ushort *)(lVar1 + 8);
      *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
      if (uVar12 == 0) goto LAB_01adb484;
      piVar13 = (int *)(lVar2 + lVar1 + 4);
      while (piVar13[-1] != -0x4dbb27ec) {
        piVar13 = piVar13 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_01adb484;
      }
      iVar9 = 0;
      if (*piVar13 != -1) {
        iVar9 = *piVar13;
      }
      *(int *)(puVar6 + 8) = iVar9;
    } while (*puVar8 != 0);
    fVar14 = 0.0;
  }
LAB_01adb5d8:
  if (uVar7 == 0x15) {
    fVar14 = fVar14 + -90.0;
  }
  return fVar14;
  while( true ) {
    lVar2 = 0xc;
    if (*(char *)(lVar1 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar1 == 0) goto LAB_01adb53c;
    uVar12 = (ulong)*(ushort *)(lVar1 + 8);
    *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_01adb53c;
    piVar13 = (int *)(lVar2 + lVar1 + 4);
    while (piVar13[-1] != -0x70db0e5c) {
      piVar13 = piVar13 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_01adb53c;
    }
    iVar9 = 0;
    if (*piVar13 != -1) {
      iVar9 = *piVar13;
    }
    *(int *)(puVar6 + 0xc) = iVar9;
    uVar3 = *puVar8;
    if (uVar3 == 0) break;
LAB_01adb4a4:
    if (((-1 < iVar9) || (iVar9 != -1)) || (lVar1 = (long)puVar8 - (ulong)uVar3, lVar1 == 0)) {
LAB_01adb53c:
      uVar3 = *puVar8;
      if (uVar3 != 0) {
        iVar9 = *(int *)(puVar6 + 0x10);
        goto LAB_01adb55c;
      }
      break;
    }
  }
  goto LAB_01adb5d8;
LAB_01adb55c:
  if (((-1 < iVar9) || (iVar9 != -1)) || (lVar1 = (long)puVar8 - (ulong)uVar3, lVar1 == 0))
  goto LAB_01adb5d8;
  lVar2 = 0xc;
  if (*(char *)(lVar1 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar1 == 0) goto LAB_01adb5d8;
  uVar12 = (ulong)*(ushort *)(lVar1 + 8);
  *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
  if (uVar12 == 0) goto LAB_01adb5d8;
  piVar13 = (int *)(lVar2 + lVar1 + 4);
  while (piVar13[-1] != -0x377b748c) {
    piVar13 = piVar13 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_01adb5d8;
  }
  iVar9 = 0;
  if (*piVar13 != -1) {
    iVar9 = *piVar13;
  }
  *(int *)(puVar6 + 0x10) = iVar9;
  uVar3 = *puVar8;
  if (uVar3 == 0) goto LAB_01adb5d8;
  goto LAB_01adb55c;
}

