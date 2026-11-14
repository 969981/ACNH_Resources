
undefined2 FUN_01b01f10(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *__s;
  ushort uVar6;
  uint *puVar7;
  ulong uVar8;
  int *piVar9;
  uint *puVar10;
  char cVar11;
  
  __s = PTR_DAT_04bbfe90;
  puVar5 = PTR_DAT_04bbfe88;
  puVar10 = *(uint **)(param_1 + 0x10);
  if (puVar10 == (uint *)0x0) {
    return 0xffff;
  }
  uVar4 = *puVar10;
  if (uVar4 != 0 && puVar10 != (uint *)(ulong)uVar4) {
    puVar7 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
    uVar6 = 0;
    if (*puVar7 == 0) goto LAB_01b01f50;
    uVar4 = puVar7[1];
    if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar2 != 0) {
        uVar3 = 0;
        if ((ulong)uVar4 != 0) {
          uVar3 = (uint)((ulong)((long)puVar10 - lVar2) / (ulong)uVar4);
        }
        if (*puVar7 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
           (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
           uVar6 < 0xbd)) goto LAB_01b01f50;
      }
    }
  }
  uVar6 = 0;
LAB_01b01f50:
  if (uVar6 != 4) {
    return 0xffff;
  }
  if (*puVar10 == 0) {
    return 0;
  }
  cVar11 = *PTR_DAT_04bbfe88;
  while( true ) {
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *puVar5 = 1;
      memset(__s,0xff,0x1ac);
    }
    else {
      uVar4 = *(uint *)(__s + 300);
      if (-1 < (int)uVar4) {
        if ((undefined2 *)((ulong)uVar4 + (long)puVar10) == (undefined2 *)0x0) {
          return 0;
        }
        return *(undefined2 *)((ulong)uVar4 + (long)puVar10);
      }
      if (uVar4 != 0xffffffff) {
        return 0;
      }
    }
    puVar7 = (uint *)(ulong)*puVar10;
    if (*puVar10 == 0) {
      return 0;
    }
    if (puVar10 == puVar7) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar7)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + (lVar2 - (long)puVar7);
    if (lVar2 == 0) {
      return 0;
    }
    uVar8 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar7));
    *(undefined4 *)(__s + 300) = 0xfffffffe;
    if (uVar8 == 0) {
      return 0;
    }
    piVar9 = (int *)(lVar2 + 4);
    while (piVar9[-1] != 0xf9f6747) {
      piVar9 = piVar9 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar9 != -1) {
      iVar1 = *piVar9;
    }
    *(int *)(__s + 300) = iVar1;
    if (*puVar10 == 0) {
      return 0;
    }
  }
  return 0;
}

