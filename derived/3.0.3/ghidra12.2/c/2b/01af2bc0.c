
undefined8 FUN_01af2bc0(long param_1,byte param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  char cVar12;
  short sVar13;
  int *piVar14;
  
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  puVar9 = *(uint **)(param_1 + 0x10);
  if (puVar9 == (uint *)0x0) {
    uVar8 = 0xbc;
  }
  else {
    uVar8 = *puVar9;
    if (uVar8 != 0 && puVar9 != (uint *)(ulong)uVar8) {
      puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar8);
      if (((*puVar11 != 0) && (uVar8 = puVar11[1], uVar8 != 0)) && ((ulong)(ushort)puVar11[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar8 != 0) {
            uVar2 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar8);
          }
          if (*puVar11 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
             uVar8 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01af2c70;
        }
      }
    }
    uVar8 = 0;
  }
LAB_01af2c70:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) == 0) ||
         (puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
        ((uVar8 < *(uint *)(DAT_0532a778 + 200) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar8) == '\0')))) ||
       (((*puVar9 <= uVar8 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0)))) goto LAB_01af2e08;
    iVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * uVar8 + (uint)(ushort)puVar9[2] * 8 + iVar10) +
                     (long)puVar9);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar8) goto LAB_01af2e08;
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
          sVar13 = *(short *)((ulong)uVar8 + (long)puVar9);
          goto LAB_01af2e0c;
        }
        if (uVar8 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*puVar9;
      sVar13 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar11)) goto LAB_01af2e0c;
      lVar1 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar9 + (lVar1 - (long)puVar11);
      if (lVar1 == 0) break;
      uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
      sVar13 = 0;
      if (uVar7 == 0) goto LAB_01af2e0c;
      piVar14 = (int *)(lVar1 + 4);
      while (piVar14[-1] != 0x4c9ba961) {
        piVar14 = piVar14 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) {
          sVar13 = 0;
          goto LAB_01af2e0c;
        }
      }
      sVar13 = 0;
      iVar10 = 0;
      if (*piVar14 != -1) {
        iVar10 = *piVar14;
      }
      *(int *)(puVar5 + 0x18) = iVar10;
      if (*puVar9 == 0) goto LAB_01af2e0c;
    } while( true );
  }
LAB_01af2e08:
  sVar13 = 0;
LAB_01af2e0c:
  uVar6 = 0;
  if ((param_2 != 0) && ((short)(ushort)param_2 <= sVar13)) {
    uVar7 = FUN_01af0020(param_1);
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
      *(byte *)(param_1 + 0xc) = param_2 - 1;
    }
  }
  return uVar6;
}

