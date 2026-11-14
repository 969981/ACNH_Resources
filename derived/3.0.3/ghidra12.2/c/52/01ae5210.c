
short FUN_01ae5210(uint param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  char cVar13;
  
  lVar3 = DAT_0532a7a0;
  puVar5 = PTR_DAT_04bbff08;
  puVar4 = PTR_DAT_04bbff00;
  uVar9 = *(uint *)(DAT_0532a7a0 + 0x1c0);
  if ((int)uVar9 < 1) {
    if (*(long *)(DAT_0532a7a0 + 0xb0) == 0) {
      return 0;
    }
    puVar12 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8);
    if (puVar12 == (uint *)0x0) {
      return 0;
    }
    if ((param_1 < *(uint *)(DAT_0532a7a0 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)param_1) == '\0')) {
      return 0;
    }
    if (*puVar12 <= param_1) {
      return 0;
    }
    if (puVar12[1] == 0) {
      return 0;
    }
    if ((ushort)puVar12[2] == 0) {
      return 0;
    }
    iVar10 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar12 = (uint *)((ulong)(puVar12[1] * param_1 + (uint)(ushort)puVar12[2] * 8 + iVar10) +
                      (long)puVar12);
  }
  else {
    if (uVar9 <= param_1) {
      return 0;
    }
    uVar1 = param_1;
    if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= param_1) {
      uVar1 = 0;
    }
    puVar12 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar1 * 8);
  }
  if (puVar12 == (uint *)0x0) {
    return 0;
  }
  if (*puVar12 == 0) {
LAB_01ae53c0:
    sVar6 = 0;
  }
  else {
    cVar13 = *PTR_DAT_04bbff00;
    do {
      if (cVar13 == '\0') {
        cVar13 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar1 = *(uint *)(puVar5 + 0x24);
        if (-1 < (int)uVar1) {
          if ((short *)((ulong)uVar1 + (long)puVar12) == (short *)0x0) goto LAB_01ae53c0;
          sVar6 = *(short *)((ulong)uVar1 + (long)puVar12);
          goto LAB_01ae53c4;
        }
        if (uVar1 != 0xffffffff) goto LAB_01ae53c0;
      }
      puVar11 = (uint *)(ulong)*puVar12;
      sVar6 = 0;
      if ((*puVar12 == 0) || (puVar12 == puVar11)) goto LAB_01ae53c4;
      lVar2 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar12 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) goto LAB_01ae53c0;
      uVar7 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
      sVar6 = 0;
      if (uVar7 == 0) goto LAB_01ae53c4;
      piVar8 = (int *)(lVar2 + 4);
      while (piVar8[-1] != 0x68db76c2) {
        piVar8 = piVar8 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) {
          sVar6 = 0;
          goto LAB_01ae53c4;
        }
      }
      iVar10 = 0;
      if (*piVar8 != -1) {
        iVar10 = *piVar8;
      }
      *(int *)(puVar5 + 0x24) = iVar10;
    } while (*puVar12 != 0);
    sVar6 = 0;
  }
LAB_01ae53c4:
  if ((int)uVar9 < 1) {
    if ((((*(long *)(lVar3 + 0xb0) != 0) &&
         (puVar12 = *(uint **)(*(long *)(lVar3 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
        ((*(uint *)(lVar3 + 200) <= param_1 ||
         (*(char *)(*(long *)(lVar3 + 0xd0) + (long)(int)param_1) != '\0')))) &&
       (((param_1 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
      iVar10 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar12 = (uint *)((ulong)(puVar12[1] * param_1 + (uint)(ushort)puVar12[2] * 8 + iVar10) +
                        (long)puVar12);
      goto joined_r0x01ae54ec;
    }
  }
  else if (param_1 < uVar9) {
    if (*(uint *)(lVar3 + 0x1b0) <= param_1) {
      param_1 = 0;
    }
    puVar12 = *(uint **)(*(long *)(lVar3 + 0x1b8) + (ulong)param_1 * 8);
joined_r0x01ae54ec:
    uVar9 = 0;
    if (puVar12 == (uint *)0x0) goto LAB_01ae54f8;
    uVar9 = 0;
    uVar1 = *puVar12;
    if ((uVar1 == 0) || (puVar12 == (uint *)(ulong)uVar1)) goto LAB_01ae54f8;
    puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar1);
    uVar9 = 0;
    if (*puVar11 == 0) goto LAB_01ae54f8;
    uVar9 = puVar11[1];
    if ((uVar9 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
      lVar3 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar11 + lVar3 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar3 != 0) {
        uVar1 = 0;
        if ((ulong)uVar9 != 0) {
          uVar1 = (uint)((ulong)((long)puVar12 - lVar3) / (ulong)uVar9);
        }
        if (*puVar11 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < *(uint *)PTR_DAT_04bc02c8) &&
           (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc02c8 + 8) + (long)(int)uVar1 * 2),
           uVar9 < 0x75)) goto LAB_01ae54f8;
      }
    }
  }
  uVar9 = 0;
LAB_01ae54f8:
  if (((uVar9 < 0x15) && ((1 << (ulong)(uVar9 & 0x1f) & 0x104f00U) != 0)) && (sVar6 == 0)) {
    return 1;
  }
  return sVar6;
}

