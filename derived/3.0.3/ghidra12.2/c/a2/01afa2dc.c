
void FUN_01afa2dc(long param_1,byte param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  char cVar11;
  int *piVar12;
  long lVar13;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_1 + 8);
  if (*(long *)puVar4 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if (*(uint *)(lVar13 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  iVar7 = FUN_01af93e8(param_1);
  if (iVar7 == 0) {
    return;
  }
  uVar8 = FUN_01ae59b0(param_1);
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar8 = FUN_01ae59b0(param_1);
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  bVar1 = *(byte *)(param_1 + 10) >> 2 & 1;
  if ((uVar8 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 4;
  }
  if (bVar1 != 0) {
    return;
  }
  puVar9 = *(uint **)(param_1 + 0x10);
  if (puVar9 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar10 + lVar13 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar9 - lVar13) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
               uVar6 < 0xbd)) goto LAB_01afa42c;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_01afa42c:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) == 0) ||
         (puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
        ((uVar6 < *(uint *)(DAT_0532a778 + 200) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) == '\0')))) ||
       (((*puVar9 <= uVar6 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0)))) goto LAB_01afa5c8;
    iVar7 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * uVar6 + (uint)(ushort)puVar9[2] * 8 + iVar7) +
                     (long)puVar9);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar6) goto LAB_01afa5c8;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
  }
  if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
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
      else if ((-1 < *(int *)(puVar5 + 0x2c)) || (*(int *)(puVar5 + 0x2c) != -1)) break;
      lVar13 = (long)puVar9 - (ulong)*puVar9;
      if ((*puVar9 == 0) || (lVar13 == 0)) break;
      lVar2 = 0xc;
      if (*(char *)(lVar13 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar13 == 0) break;
      uVar8 = (ulong)*(ushort *)(lVar13 + 8);
      *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
      if (uVar8 == 0) break;
      piVar12 = (int *)(lVar2 + lVar13 + 4);
      while (piVar12[-1] != -0x6f43f7ab) {
        piVar12 = piVar12 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_01afa5c8;
      }
      iVar7 = 0;
      if (*piVar12 != -1) {
        iVar7 = *piVar12;
      }
      *(int *)(puVar5 + 0x2c) = iVar7;
      if (*puVar9 == 0) break;
    } while( true );
  }
LAB_01afa5c8:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc | param_2 & 3;
  return;
}

