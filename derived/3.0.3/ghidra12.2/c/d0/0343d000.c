
uint FUN_0343d000(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *__s;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  char cVar12;
  
  __s = PTR_DAT_04bbfe90;
  puVar5 = PTR_DAT_04bbfe88;
  puVar11 = *(uint **)(param_1 + 0x10);
  if (puVar11 == (uint *)0x0) {
    return 0xbc;
  }
  puVar6 = (uint *)(ulong)*puVar11;
  if (*puVar11 == 0 || puVar11 == puVar6) {
    uVar8 = 0;
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
  }
  else {
    puVar10 = (uint *)((long)puVar11 - (long)puVar6);
    if (((*puVar10 != 0) && (uVar8 = puVar10[1], uVar8 != 0)) && ((ulong)(ushort)puVar10[2] != 0)) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar2 != 0) {
        uVar3 = 0;
        if ((ulong)uVar8 != 0) {
          uVar3 = (uint)((ulong)((long)puVar11 - lVar2) / (ulong)uVar8);
        }
        if (*puVar10 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
           (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
           uVar8 = (uint)uVar4, uVar4 < 0xbd)) goto LAB_0343d0dc;
      }
    }
    uVar8 = 0;
  }
LAB_0343d0dc:
  cVar12 = *PTR_DAT_04bbfe88;
  while( true ) {
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *puVar5 = 1;
      memset(__s,0xff,0x1ac);
      puVar6 = (uint *)(ulong)*puVar11;
    }
    else {
      uVar3 = *(uint *)(__s + 0x128);
      if (-1 < (int)uVar3) {
        if ((ushort *)((ulong)uVar3 + (long)puVar11) == (ushort *)0x0) {
          return uVar8;
        }
        uVar3 = *(ushort *)((ulong)uVar3 + (long)puVar11) - 0x2f3;
        if (5 < uVar3) {
          return uVar8;
        }
        if ((0x3dU >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
          return uVar8;
        }
        return *(uint *)(&DAT_0418eb78 + (long)(short)uVar3 * 4);
      }
      if (uVar3 != 0xffffffff) {
        return uVar8;
      }
    }
    if (puVar6 == (uint *)0x0) {
      return uVar8;
    }
    if (puVar11 == puVar6) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar11 + (lVar2 - (long)puVar6);
    if (lVar2 == 0) {
      return uVar8;
    }
    uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
    *(undefined4 *)(__s + 0x128) = 0xfffffffe;
    if (uVar7 == 0) {
      return uVar8;
    }
    piVar9 = (int *)(lVar2 + 4);
    while (piVar9[-1] != 0x54706054) {
      piVar9 = piVar9 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return uVar8;
      }
    }
    iVar1 = 0;
    if (*piVar9 != -1) {
      iVar1 = *piVar9;
    }
    *(int *)(__s + 0x128) = iVar1;
    puVar6 = (uint *)(ulong)*puVar11;
    if (*puVar11 == 0) {
      return uVar8;
    }
  }
  return uVar8;
}

