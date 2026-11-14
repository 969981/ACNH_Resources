
byte FUN_01ae98d0(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  int *piVar12;
  
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar6 = *puVar7;
    if (uVar6 != 0 && puVar7 != (uint *)(ulong)uVar6) {
      puVar10 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      if (((*puVar10 != 0) && (uVar6 = puVar10[1], uVar6 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
             uVar6 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01ae9968;
        }
      }
    }
    uVar6 = 0;
  }
LAB_01ae9968:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a778 + 0xb0) == 0) {
      return 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8);
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    if ((uVar6 < *(uint *)(DAT_0532a778 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) == '\0')) {
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
    iVar9 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar9) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar6) {
      return 0;
    }
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
  }
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  if (*puVar7 == 0) {
    return 0;
  }
  cVar11 = *PTR_DAT_04bbfeb0;
  while( true ) {
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
      uVar6 = *(uint *)(puVar5 + 0x2c);
      if (-1 < (int)uVar6) {
        if ((char *)((ulong)uVar6 + (long)puVar7) == (char *)0x0) {
          return 0;
        }
        if (*(char *)((ulong)uVar6 + (long)puVar7) == '\0') {
          return 0;
        }
        return *(byte *)(param_1 + 10) & 3;
      }
      if (uVar6 != 0xffffffff) {
        return 0;
      }
    }
    puVar10 = (uint *)(ulong)*puVar7;
    if (*puVar7 == 0) {
      return 0;
    }
    if (puVar7 == puVar10) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + (lVar1 - (long)puVar10);
    if (lVar1 == 0) {
      return 0;
    }
    uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
    *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
    if (uVar8 == 0) {
      return 0;
    }
    piVar12 = (int *)(lVar1 + 4);
    while (piVar12[-1] != -0x6f43f7ab) {
      piVar12 = piVar12 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
    iVar9 = 0;
    if (*piVar12 != -1) {
      iVar9 = *piVar12;
    }
    *(int *)(puVar5 + 0x2c) = iVar9;
    if (*puVar7 == 0) {
      return 0;
    }
  }
  return 0;
}

