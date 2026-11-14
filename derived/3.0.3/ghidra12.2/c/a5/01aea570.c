
/* WARNING: Removing unreachable block (ram,0x01aea64c) */

void FUN_01aea570(long param_1,ushort param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  ushort uVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    return;
  }
  uVar6 = *puVar7;
  if (uVar6 == 0 || puVar7 == (uint *)(ulong)uVar6) {
LAB_01aea590:
    uVar8 = 0;
  }
  else {
    puVar10 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
    uVar8 = 0;
    if (*puVar10 != 0) {
      uVar6 = puVar10[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar6 != 0) {
            uVar3 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar10 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
             uVar8 < 0x52)) goto LAB_01aea594;
        }
      }
      goto LAB_01aea590;
    }
  }
LAB_01aea594:
  if ((uVar8 & 0xfffe) != 0x12) {
    return;
  }
  uVar3 = *puVar7;
  uVar6 = 0;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar10 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    uVar6 = 0;
    if (*puVar10 != 0) {
      uVar6 = puVar10[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar6 != 0) {
            uVar3 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar10 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
             uVar6 < 0xbd)) goto LAB_01aea650;
        }
      }
      uVar6 = 0;
    }
  }
LAB_01aea650:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a778 + 0xb0) == 0) {
      return;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8);
    if (puVar7 == (uint *)0x0) {
      return;
    }
    if ((uVar6 < *(uint *)(DAT_0532a778 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) == '\0')) {
      return;
    }
    if (*puVar7 <= uVar6) {
      return;
    }
    if (puVar7[1] == 0) {
      return;
    }
    if ((ushort)puVar7[2] == 0) {
      return;
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
      return;
    }
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
  }
  if ((puVar7 == (uint *)0x0) || (*puVar7 == 0)) {
    return;
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
          return;
        }
        if (*(char *)((ulong)uVar6 + (long)puVar7) == '\0') {
          return;
        }
        *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xfffc | param_2 & 3;
        return;
      }
      if (uVar6 != 0xffffffff) {
        return;
      }
    }
    lVar1 = (long)puVar7 - (ulong)*puVar7;
    if (*puVar7 == 0) {
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
    *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
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
    *(int *)(puVar5 + 0x2c) = iVar9;
    if (*puVar7 == 0) {
      return;
    }
  }
  return;
}

