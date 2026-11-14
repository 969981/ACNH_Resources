
uint FUN_01af02d0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  char cVar12;
  
  uVar6 = FUN_01af0020();
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  if ((uVar6 & 1) == 0) {
    return 1;
  }
  puVar9 = *(uint **)(param_1 + 0x10);
  if (puVar9 == (uint *)0x0) {
    uVar8 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    uVar8 = 0;
    if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
      puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      uVar8 = 0;
      if (*puVar11 != 0) {
        uVar8 = puVar11[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar11 + lVar2 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar2 != 0) {
            uVar3 = 0;
            if ((ulong)uVar8 != 0) {
              uVar3 = (uint)((ulong)((long)puVar9 - lVar2) / (ulong)uVar8);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
               uVar8 < 0xbd)) goto LAB_01af0394;
          }
        }
        uVar8 = 0;
      }
    }
  }
LAB_01af0394:
  uVar3 = *(ushort *)(param_1 + 0xc) + 1 & 0xff;
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) == 0) ||
         (puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
        ((uVar8 < *(uint *)(DAT_0532a778 + 200) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar8) == '\0')))) ||
       (((*puVar9 <= uVar8 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0)))) goto LAB_01af0538;
    iVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * uVar8 + (uint)(ushort)puVar9[2] * 8 + iVar10) +
                     (long)puVar9);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar8) goto LAB_01af0538;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar8) {
      uVar8 = 0;
    }
    puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar8 * 8);
  }
  if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
    cVar12 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar5 + 0x18);
        if (-1 < (int)uVar8) {
          if ((short *)((ulong)uVar8 + (long)puVar9) == (short *)0x0) break;
          iVar10 = (int)*(short *)((ulong)uVar8 + (long)puVar9);
          goto LAB_01af053c;
        }
        if (uVar8 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*puVar9;
      iVar10 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar11)) goto LAB_01af053c;
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) break;
      uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
      iVar10 = 0;
      if (uVar6 == 0) goto LAB_01af053c;
      piVar7 = (int *)(lVar2 + 4);
      while (piVar7[-1] != 0x4c9ba961) {
        piVar7 = piVar7 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          iVar10 = 0;
          goto LAB_01af053c;
        }
      }
      iVar10 = 0;
      iVar1 = 0;
      if (*piVar7 != -1) {
        iVar1 = *piVar7;
      }
      *(int *)(puVar5 + 0x18) = iVar1;
      if (*puVar9 == 0) goto LAB_01af053c;
    } while( true );
  }
LAB_01af0538:
  iVar10 = 0;
LAB_01af053c:
  if (iVar10 < (int)uVar3) {
    uVar3 = 1;
  }
  return uVar3;
}

