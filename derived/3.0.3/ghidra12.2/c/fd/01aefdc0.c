
bool FUN_01aefdc0(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
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
      puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      if (((*puVar9 != 0) && (uVar6 = puVar9[1], uVar6 != 0)) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
             uVar6 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01aefe58;
        }
      }
    }
    uVar6 = 0;
  }
LAB_01aefe58:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a778 + 0xb0) == 0) {
      return false;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8);
    if (puVar7 == (uint *)0x0) {
      return false;
    }
    if ((uVar6 < *(uint *)(DAT_0532a778 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) == '\0')) {
      return false;
    }
    if (*puVar7 <= uVar6) {
      return false;
    }
    if (puVar7[1] == 0) {
      return false;
    }
    if ((ushort)puVar7[2] == 0) {
      return false;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar6) {
      return false;
    }
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
  }
  if ((puVar7 == (uint *)0x0) || (*puVar7 == 0)) {
    return false;
  }
  cVar10 = *PTR_DAT_04bbfeb0;
  while( true ) {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
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
      uVar6 = *(uint *)(puVar5 + 0x4c);
      if (-1 < (int)uVar6) {
        if ((char *)((ulong)uVar6 + (long)puVar7) == (char *)0x0) {
          return false;
        }
        return *(char *)((ulong)uVar6 + (long)puVar7) != '\0';
      }
      if (uVar6 != 0xffffffff) {
        return false;
      }
    }
    puVar9 = (uint *)(ulong)*puVar7;
    if (*puVar7 == 0) {
      return false;
    }
    if (puVar7 == puVar9) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + (lVar1 - (long)puVar9);
    if (lVar1 == 0) {
      return false;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
    *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
    if (uVar11 == 0) {
      return false;
    }
    piVar12 = (int *)(lVar1 + 4);
    while (piVar12[-1] != -0x4ad01ad2) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return false;
      }
    }
    iVar8 = 0;
    if (*piVar12 != -1) {
      iVar8 = *piVar12;
    }
    *(int *)(puVar5 + 0x4c) = iVar8;
    if (*puVar7 == 0) {
      return false;
    }
  }
  return false;
}

