
undefined4 FUN_01b10940(long param_1)

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
  
  puVar5 = PTR_DAT_04bbfff0;
  puVar4 = PTR_DAT_04bbffe8;
  puVar7 = *(uint **)(param_1 + 0x10);
  uVar6 = 0;
  if (puVar7 != (uint *)0x0) {
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
          if ((uVar2 < *(uint *)PTR_DAT_04bc0138) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0138 + 8) + (long)(int)uVar2 * 2),
             uVar6 = (uint)uVar3, uVar3 < 0x54)) goto LAB_01b109d0;
        }
      }
    }
    uVar6 = 0;
  }
LAB_01b109d0:
  if ((int)*(uint *)(DAT_0532a820 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a820 + 0xb0) == 0) {
      return 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a820 + 0xb0) + 8);
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    if ((uVar6 < *(uint *)(DAT_0532a820 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a820 + 0xd0) + (long)(int)uVar6) == '\0')) {
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
    iVar8 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(DAT_0532a820 + 0x1c0) <= uVar6) {
      return 0;
    }
    if (*(uint *)(DAT_0532a820 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a820 + 0x1b8) + (ulong)uVar6 * 8);
  }
  if ((puVar7 == (uint *)0x0) || (uVar6 = *puVar7, uVar6 == 0)) {
    return 0;
  }
  cVar10 = *PTR_DAT_04bbffe8;
  while( true ) {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      uVar6 = *puVar7;
    }
    else {
      uVar2 = *(uint *)puVar5;
      if (-1 < (int)uVar2) {
        if ((undefined4 *)((ulong)uVar2 + (long)puVar7) == (undefined4 *)0x0) {
          return 0;
        }
        return *(undefined4 *)((ulong)uVar2 + (long)puVar7);
      }
      if (uVar2 != 0xffffffff) {
        return 0;
      }
    }
    puVar9 = (uint *)(ulong)uVar6;
    if (puVar9 == (uint *)0x0) {
      return 0;
    }
    if (puVar7 == puVar9) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + (lVar1 - (long)puVar9);
    if (lVar1 == 0) {
      return 0;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
    *(undefined4 *)puVar5 = 0xfffffffe;
    if (uVar11 == 0) {
      return 0;
    }
    piVar12 = (int *)(lVar1 + 4);
    while (piVar12[-1] != -0x519c3110) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return 0;
      }
    }
    iVar8 = 0;
    if (*piVar12 != -1) {
      iVar8 = *piVar12;
    }
    *(int *)puVar5 = iVar8;
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      return 0;
    }
  }
  return 0;
}

