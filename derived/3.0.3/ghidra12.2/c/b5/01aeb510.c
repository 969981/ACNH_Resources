
/* WARNING: Removing unreachable block (ram,0x01aeb5f0) */

byte FUN_01aeb510(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  uint *puVar11;
  char cVar12;
  ulong uVar13;
  int *piVar14;
  
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  uVar6 = *puVar7;
  if (uVar6 == 0 || puVar7 == (uint *)(ulong)uVar6) {
LAB_01aeb534:
    uVar9 = 0;
  }
  else {
    puVar11 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
    uVar9 = 0;
    if (*puVar11 != 0) {
      uVar6 = puVar11[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar6 != 0) {
            uVar3 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar11 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
             uVar9 < 0x52)) goto LAB_01aeb538;
        }
      }
      goto LAB_01aeb534;
    }
  }
LAB_01aeb538:
  if (uVar9 != 0x49) {
    return 0;
  }
  uVar3 = *puVar7;
  uVar6 = 0;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar11 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    uVar6 = 0;
    if (*puVar11 != 0) {
      uVar6 = puVar11[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar6 != 0) {
            uVar3 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar11 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
             uVar6 < 0xbd)) goto LAB_01aeb5f4;
        }
      }
      uVar6 = 0;
    }
  }
LAB_01aeb5f4:
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
    iVar10 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar10) +
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
  if ((puVar7 == (uint *)0x0) || (*puVar7 == 0)) {
    return 0;
  }
  cVar12 = *PTR_DAT_04bbfeb0;
  while( true ) {
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
      uVar6 = *(uint *)(puVar5 + 0x2c);
      if (-1 < (int)uVar6) {
        if ((char *)((ulong)uVar6 + (long)puVar7) == (char *)0x0) {
          return 0;
        }
        if (*(char *)((ulong)uVar6 + (long)puVar7) == '\0') {
          return 0;
        }
        bVar8 = *(byte *)(param_1 + 0xe);
        if (0x62 < bVar8) {
          bVar8 = 99;
        }
        return bVar8;
      }
      if (uVar6 != 0xffffffff) {
        return 0;
      }
    }
    lVar1 = (long)puVar7 - (ulong)*puVar7;
    if (*puVar7 == 0) {
      return 0;
    }
    if (lVar1 == 0) break;
    lVar2 = 0xc;
    if (*(char *)(lVar1 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar1 == 0) {
      return 0;
    }
    uVar13 = (ulong)*(ushort *)(lVar1 + 8);
    *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
    if (uVar13 == 0) {
      return 0;
    }
    piVar14 = (int *)(lVar2 + lVar1 + 4);
    while (piVar14[-1] != -0x6f43f7ab) {
      piVar14 = piVar14 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        return 0;
      }
    }
    iVar10 = 0;
    if (*piVar14 != -1) {
      iVar10 = *piVar14;
    }
    *(int *)(puVar5 + 0x2c) = iVar10;
    if (*puVar7 == 0) {
      return 0;
    }
  }
  return 0;
}

