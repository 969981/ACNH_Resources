
byte FUN_01af0020(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0xbc;
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
          uVar2 = 0;
          if ((ulong)uVar7 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
             uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01af00c8;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01af00c8:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) == 0) ||
         (puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar8 == (uint *)0x0)) ||
        ((uVar7 < *(uint *)(DAT_0532a778 + 200) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar7) == '\0')))) ||
       (((*puVar8 <= uVar7 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0)))) goto LAB_01af0268;
    iVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) goto LAB_01af0268;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
      uVar7 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
  }
  if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar7 = *(uint *)(puVar5 + 0x18);
        if (-1 < (int)uVar7) {
          if (((short *)((ulong)uVar7 + (long)puVar8) == (short *)0x0) ||
             (*(short *)((ulong)uVar7 + (long)puVar8) < 2)) break;
          uVar12 = FUN_01b032d0(param_1);
          if ((uVar12 & 1) == 0) {
            bVar6 = 1;
          }
          else {
            bVar6 = FUN_01b032d0(param_1);
            bVar6 = bVar6 ^ 1 | (*(byte *)(param_1 + 0xb) & 3) == 0;
          }
          goto LAB_01af026c;
        }
        if (uVar7 != 0xffffffff) break;
      }
      puVar10 = (uint *)(ulong)*puVar8;
      bVar6 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar10)) goto LAB_01af026c;
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) break;
      uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
      bVar6 = 0;
      if (uVar12 == 0) goto LAB_01af026c;
      piVar13 = (int *)(lVar1 + 4);
      while (piVar13[-1] != 0x4c9ba961) {
        piVar13 = piVar13 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          bVar6 = 0;
          goto LAB_01af026c;
        }
      }
      bVar6 = 0;
      iVar9 = 0;
      if (*piVar13 != -1) {
        iVar9 = *piVar13;
      }
      *(int *)(puVar5 + 0x18) = iVar9;
      if (*puVar8 == 0) goto LAB_01af026c;
    } while( true );
  }
LAB_01af0268:
  bVar6 = 0;
LAB_01af026c:
  return bVar6 & 1;
}

