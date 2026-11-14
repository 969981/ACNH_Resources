
void FUN_01afade0(long param_1,byte param_2)

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
  
  puVar6 = PTR_DAT_04bbfeb8;
  puVar5 = PTR_DAT_04bbfeb0;
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
          uVar3 = 0;
          if ((ulong)uVar7 != 0) {
            uVar3 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
          }
          if (*puVar10 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
             uVar7 = (uint)uVar4, uVar4 < 0xbd)) goto LAB_01afae80;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01afae80:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a778 + 0xb0) == 0) {
      return;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8);
    if (puVar8 == (uint *)0x0) {
      return;
    }
    if ((uVar7 < *(uint *)(DAT_0532a778 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar7) == '\0')) {
      return;
    }
    if (*puVar8 <= uVar7) {
      return;
    }
    if (puVar8[1] == 0) {
      return;
    }
    if ((ushort)puVar8[2] == 0) {
      return;
    }
    iVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
      return;
    }
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
      uVar7 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
  }
  if ((puVar8 == (uint *)0x0) || (*puVar8 == 0)) {
    return;
  }
  cVar11 = *PTR_DAT_04bbfeb0;
  while( true ) {
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
      *(undefined4 *)(puVar6 + 0x78) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
    }
    else {
      uVar7 = *(uint *)(puVar6 + 0x2c);
      if (-1 < (int)uVar7) {
        if ((char *)((ulong)uVar7 + (long)puVar8) == (char *)0x0) {
          return;
        }
        if (*(char *)((ulong)uVar7 + (long)puVar8) == '\0') {
          return;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc | param_2 & 3;
        return;
      }
      if (uVar7 != 0xffffffff) {
        return;
      }
    }
    lVar1 = (long)puVar8 - (ulong)*puVar8;
    if (*puVar8 == 0) {
      return;
    }
    if (lVar1 == 0) break;
    lVar2 = 0xc;
    if (*(char *)(lVar1 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar1 == 0) {
      return;
    }
    uVar12 = (ulong)*(ushort *)(lVar1 + 8);
    *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
    if (uVar12 == 0) {
      return;
    }
    piVar13 = (int *)(lVar2 + lVar1 + 4);
    while (piVar13[-1] != -0x6f43f7ab) {
      piVar13 = piVar13 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        return;
      }
    }
    iVar9 = 0;
    if (*piVar13 != -1) {
      iVar9 = *piVar13;
    }
    *(int *)(puVar6 + 0x2c) = iVar9;
    if (*puVar8 == 0) {
      return;
    }
  }
  return;
}

