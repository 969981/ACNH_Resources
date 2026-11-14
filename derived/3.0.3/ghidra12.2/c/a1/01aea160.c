
bool FUN_01aea160(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *__s;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  
  __s = PTR_DAT_04bbfe90;
  puVar4 = PTR_DAT_04bbfe88;
  puVar9 = *(uint **)(param_1 + 0x10);
  if ((puVar9 != (uint *)0x0) && (uVar5 = *puVar9, uVar5 != 0 && puVar9 != (uint *)(ulong)uVar5)) {
    puVar6 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
    uVar5 = 0;
    if (*puVar6 == 0) goto LAB_01aea198;
    uVar5 = puVar6[1];
    if ((uVar5 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar6 + lVar2 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar2 != 0) {
        uVar3 = 0;
        if ((ulong)uVar5 != 0) {
          uVar3 = (uint)((ulong)((long)puVar9 - lVar2) / (ulong)uVar5);
        }
        if (*puVar6 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
           (uVar5 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
           uVar5 < 0x52)) goto LAB_01aea198;
      }
    }
  }
  uVar5 = 0;
LAB_01aea198:
  if ((8 < uVar5 - 1) || (*puVar9 == 0)) {
    return false;
  }
  cVar10 = *PTR_DAT_04bbfe88;
  while( true ) {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *puVar4 = 1;
      memset(__s,0xff,0x1ac);
    }
    else {
      uVar5 = *(uint *)(__s + 0x1a0);
      if (-1 < (int)uVar5) {
        if ((char *)((ulong)uVar5 + (long)puVar9) == (char *)0x0) {
          return false;
        }
        return *(char *)((ulong)uVar5 + (long)puVar9) != '\0';
      }
      if (uVar5 != 0xffffffff) {
        return false;
      }
    }
    puVar6 = (uint *)(ulong)*puVar9;
    if (*puVar9 == 0) {
      return false;
    }
    if (puVar9 == puVar6) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar6)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar9 + (lVar2 - (long)puVar6);
    if (lVar2 == 0) {
      return false;
    }
    uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar6));
    *(undefined4 *)(__s + 0x1a0) = 0xfffffffe;
    if (uVar7 == 0) {
      return false;
    }
    piVar8 = (int *)(lVar2 + 4);
    while (piVar8[-1] != 0xeb7fa40) {
      piVar8 = piVar8 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return false;
      }
    }
    iVar1 = 0;
    if (*piVar8 != -1) {
      iVar1 = *piVar8;
    }
    *(int *)(__s + 0x1a0) = iVar1;
    if (*puVar9 == 0) {
      return false;
    }
  }
  return false;
}

