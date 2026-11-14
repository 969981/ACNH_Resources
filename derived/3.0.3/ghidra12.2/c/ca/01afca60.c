
void FUN_01afca60(long param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  char cVar12;
  ulong uVar13;
  int *piVar14;
  
  puVar7 = PTR_DAT_04bbfeb8;
  puVar6 = PTR_DAT_04bbfeb0;
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
        lVar2 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar11 + lVar2 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar2 != 0) {
          uVar4 = 0;
          if ((ulong)uVar8 != 0) {
            uVar4 = (uint)((ulong)((long)puVar9 - lVar2) / (ulong)uVar8);
          }
          if (*puVar11 <= uVar4) {
            uVar4 = 0xffffffff;
          }
          if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
             uVar8 = (uint)uVar5, uVar5 < 0xbd)) goto LAB_01afcb10;
        }
      }
    }
    uVar8 = 0;
  }
LAB_01afcb10:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a778 + 0xb0) == 0) {
      return;
    }
    puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8);
    if (puVar9 == (uint *)0x0) {
      return;
    }
    if ((uVar8 < *(uint *)(DAT_0532a778 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar8) == '\0')) {
      return;
    }
    if (*puVar9 <= uVar8) {
      return;
    }
    if (puVar9[1] == 0) {
      return;
    }
    if ((ushort)puVar9[2] == 0) {
      return;
    }
    iVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * uVar8 + (uint)(ushort)puVar9[2] * 8 + iVar10) +
                     (long)puVar9);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar8) {
      return;
    }
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar8) {
      uVar8 = 0;
    }
    puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar8 * 8);
  }
  if ((puVar9 == (uint *)0x0) || (*puVar9 == 0)) {
    return;
  }
  cVar12 = *PTR_DAT_04bbfeb0;
  while( true ) {
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
      *(undefined4 *)(puVar7 + 0x78) = 0xffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
    }
    else {
      uVar8 = *(uint *)(puVar7 + 0x2c);
      if (-1 < (int)uVar8) {
        if ((char *)((ulong)uVar8 + (long)puVar9) == (char *)0x0) {
          return;
        }
        if (*(char *)((ulong)uVar8 + (long)puVar9) == '\0') {
          return;
        }
        uVar13 = FUN_01ae7a70(param_1);
        if ((uVar13 & 1) == 0) {
          return;
        }
        bVar1 = 8;
        if ((param_2 & 1) == 0) {
          bVar1 = 0;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | bVar1;
        return;
      }
      if (uVar8 != 0xffffffff) {
        return;
      }
    }
    lVar2 = (long)puVar9 - (ulong)*puVar9;
    if (*puVar9 == 0) {
      return;
    }
    if (lVar2 == 0) break;
    lVar3 = 0xc;
    if (*(char *)(lVar2 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar2 == 0) {
      return;
    }
    uVar13 = (ulong)*(ushort *)(lVar2 + 8);
    *(undefined4 *)(puVar7 + 0x2c) = 0xfffffffe;
    if (uVar13 == 0) {
      return;
    }
    piVar14 = (int *)(lVar3 + lVar2 + 4);
    while (piVar14[-1] != -0x6f43f7ab) {
      piVar14 = piVar14 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        return;
      }
    }
    iVar10 = 0;
    if (*piVar14 != -1) {
      iVar10 = *piVar14;
    }
    *(int *)(puVar7 + 0x2c) = iVar10;
    if (*puVar9 == 0) {
      return;
    }
  }
  return;
}

