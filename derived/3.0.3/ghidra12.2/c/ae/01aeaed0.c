
/* WARNING: Removing unreachable block (ram,0x01aeafb0) */

ushort FUN_01aeaed0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  ushort uVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  int *piVar12;
  
  puVar4 = PTR_DAT_04bbfeb8;
  puVar3 = PTR_DAT_04bbfeb0;
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  uVar5 = *puVar6;
  if (uVar5 == 0 || puVar6 == (uint *)(ulong)uVar5) {
LAB_01aeaef4:
    uVar8 = 0;
  }
  else {
    puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
    uVar8 = 0;
    if (*puVar10 != 0) {
      uVar5 = puVar10[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2),
             uVar8 < 0x52)) goto LAB_01aeaef8;
        }
      }
      goto LAB_01aeaef4;
    }
  }
LAB_01aeaef8:
  if (uVar8 != 0x3e) {
    return 0;
  }
  uVar2 = *puVar6;
  uVar5 = 0;
  if ((uVar2 != 0) && (puVar6 != (uint *)(ulong)uVar2)) {
    puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
    uVar5 = 0;
    if (*puVar10 != 0) {
      uVar5 = puVar10[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar5 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
             uVar5 < 0xbd)) goto LAB_01aeafb4;
        }
      }
      uVar5 = 0;
    }
  }
LAB_01aeafb4:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a778 + 0xb0) == 0) {
      return 0;
    }
    puVar6 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if ((uVar5 < *(uint *)(DAT_0532a778 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar5) == '\0')) {
      return 0;
    }
    if (*puVar6 <= uVar5) {
      return 0;
    }
    if (puVar6[1] == 0) {
      return 0;
    }
    if ((ushort)puVar6[2] == 0) {
      return 0;
    }
    iVar9 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * uVar5 + (uint)(ushort)puVar6[2] * 8 + iVar9) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar5) {
      return 0;
    }
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar5) {
      uVar5 = 0;
    }
    puVar6 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar5 * 8);
  }
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  if (*puVar6 == 0) {
    return 0;
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
      uVar5 = *(uint *)(puVar4 + 0x2c);
      if (-1 < (int)uVar5) {
        if ((char *)((ulong)uVar5 + (long)puVar6) == (char *)0x0) {
          return 0;
        }
        if (*(char *)((ulong)uVar5 + (long)puVar6) == '\0') {
          return 0;
        }
        return *(ushort *)(param_1 + 0xe) & 1;
      }
      if (uVar5 != 0xffffffff) {
        return 0;
      }
    }
    puVar10 = (uint *)(ulong)*puVar6;
    if (*puVar6 == 0) {
      return 0;
    }
    if (puVar6 == puVar10) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar6 + (lVar1 - (long)puVar10);
    if (lVar1 == 0) {
      return 0;
    }
    uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
    *(undefined4 *)(puVar4 + 0x2c) = 0xfffffffe;
    if (uVar7 == 0) {
      return 0;
    }
    piVar12 = (int *)(lVar1 + 4);
    while (piVar12[-1] != -0x6f43f7ab) {
      piVar12 = piVar12 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return 0;
      }
    }
    iVar9 = 0;
    if (*piVar12 != -1) {
      iVar9 = *piVar12;
    }
    *(int *)(puVar4 + 0x2c) = iVar9;
    if (*puVar6 == 0) {
      return 0;
    }
  }
  return 0;
}

