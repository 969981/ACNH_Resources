
bool FUN_01b032d0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  ushort uVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  int *piVar13;
  
  iVar5 = FUN_01afcfa0();
  if (((iVar5 != 0) && (puVar6 = (ushort *)FUN_01afd600(param_1), puVar6 != (ushort *)0x0)) &&
     ((*puVar6 & 0x18) == 0x10)) {
    return false;
  }
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
LAB_01b03394:
    uVar9 = 0;
  }
  else {
    uVar7 = *puVar8;
    uVar9 = 0;
    if ((uVar7 != 0) && (puVar8 != (uint *)(ulong)uVar7)) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar7 = puVar10[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
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
            if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2),
               uVar9 < 0x52)) goto LAB_01b03398;
          }
        }
        goto LAB_01b03394;
      }
    }
  }
LAB_01b03398:
  if (uVar9 == 0x49) {
    iVar5 = FUN_01aeb510(param_1);
    if (iVar5 != 0) {
      return false;
    }
    puVar8 = *(uint **)(param_1 + 0x10);
  }
  puVar4 = PTR_DAT_04bbfeb8;
  puVar3 = PTR_DAT_04bbfeb0;
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar2 = *puVar8;
    uVar7 = 0;
    if ((uVar2 != 0) && (puVar8 != (uint *)(ulong)uVar2)) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
      uVar7 = 0;
      if (*puVar10 != 0) {
        uVar7 = puVar10[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
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
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 < 0xbd)) goto LAB_01b03450;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_01b03450:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a778 + 0xb0) == 0) {
      return false;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8);
    if (puVar8 == (uint *)0x0) {
      return false;
    }
    if ((uVar7 < *(uint *)(DAT_0532a778 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar7) == '\0')) {
      return false;
    }
    if (*puVar8 <= uVar7) {
      return false;
    }
    if (puVar8[1] == 0) {
      return false;
    }
    if ((ushort)puVar8[2] == 0) {
      return false;
    }
    iVar5 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar5 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar5) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
      return false;
    }
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
      uVar7 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
  }
  if ((puVar8 == (uint *)0x0) || (*puVar8 == 0)) {
    return false;
  }
  cVar11 = *PTR_DAT_04bbfeb0;
  while( true ) {
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
      *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
    }
    else {
      uVar7 = *(uint *)(puVar4 + 0x30);
      if (-1 < (int)uVar7) {
        if ((char *)((ulong)uVar7 + (long)puVar8) == (char *)0x0) {
          return false;
        }
        return *(char *)((ulong)uVar7 + (long)puVar8) != '\0';
      }
      if (uVar7 != 0xffffffff) {
        return false;
      }
    }
    puVar10 = (uint *)(ulong)*puVar8;
    if (*puVar8 == 0) {
      return false;
    }
    if (puVar8 == puVar10) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
    if (lVar1 == 0) {
      return false;
    }
    uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
    *(undefined4 *)(puVar4 + 0x30) = 0xfffffffe;
    if (uVar12 == 0) {
      return false;
    }
    piVar13 = (int *)(lVar1 + 4);
    while (piVar13[-1] != 0x6012035) {
      piVar13 = piVar13 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        return false;
      }
    }
    iVar5 = 0;
    if (*piVar13 != -1) {
      iVar5 = *piVar13;
    }
    *(int *)(puVar4 + 0x30) = iVar5;
    if (*puVar8 == 0) {
      return false;
    }
  }
  return false;
}

