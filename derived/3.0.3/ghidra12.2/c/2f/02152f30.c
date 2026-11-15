
bool FUN_02152f30(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar3 = PTR_DAT_04bc25f0;
  puVar2 = PTR_DAT_04bc25e8;
  if (*(long *)(param_1 + 0x1f0) == 0) {
    return false;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x1f0) + 4);
  lVar5 = *(long *)PTR_DAT_04bb3968;
  if ((int)*(uint *)(lVar5 + 0x168f0) < 1) {
    if (*(long *)(lVar5 + 0x167e0) == 0) {
      return false;
    }
    puVar4 = *(uint **)(*(long *)(lVar5 + 0x167e0) + 8);
    if (puVar4 == (uint *)0x0) {
      return false;
    }
    if ((uVar1 < *(uint *)(lVar5 + 0x167f8)) &&
       (*(char *)(*(long *)(lVar5 + 0x16800) + (long)(int)uVar1) == '\0')) {
      return false;
    }
    if (*puVar4 <= uVar1) {
      return false;
    }
    if (puVar4[1] == 0) {
      return false;
    }
    if ((ushort)puVar4[2] == 0) {
      return false;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar4 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar4 = (uint *)((ulong)(puVar4[1] * uVar1 + (uint)(ushort)puVar4[2] * 8 + iVar6) +
                     (long)puVar4);
  }
  else {
    if (*(uint *)(lVar5 + 0x168f0) <= uVar1) {
      return false;
    }
    if (*(uint *)(lVar5 + 0x168e0) <= uVar1) {
      uVar1 = 0;
    }
    puVar4 = *(uint **)(*(long *)(lVar5 + 0x168e8) + (ulong)uVar1 * 8);
  }
  if (puVar4 == (uint *)0x0) {
    return false;
  }
  if (*puVar4 == 0) {
LAB_021530f0:
    bVar8 = 0;
  }
  else {
    cVar7 = *PTR_DAT_04bc25e8;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
      }
      else {
        uVar1 = *(uint *)(puVar3 + 8);
        if (-1 < (int)uVar1) {
          if (((byte *)((ulong)uVar1 + (long)puVar4) == (byte *)0x0) ||
             (bVar8 = *(byte *)((ulong)uVar1 + (long)puVar4), 4 < bVar8)) goto LAB_021530f0;
          goto LAB_021530f4;
        }
        if (uVar1 != 0xffffffff) goto LAB_021530f0;
      }
      puVar10 = (uint *)(ulong)*puVar4;
      bVar8 = 0;
      if ((*puVar4 == 0) || (puVar4 == puVar10)) goto LAB_021530f4;
      lVar5 = 0xc;
      if (*(char *)((long)puVar4 + (10 - (long)puVar10)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar4 + (lVar5 - (long)puVar10);
      if (lVar5 == 0) goto LAB_021530f0;
      uVar9 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar10));
      *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
      bVar8 = 0;
      if (uVar9 == 0) goto LAB_021530f4;
      piVar11 = (int *)(lVar5 + 4);
      while (piVar11[-1] != 0x378b2f14) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          bVar8 = 0;
          goto LAB_021530f4;
        }
      }
      iVar6 = 0;
      if (*piVar11 != -1) {
        iVar6 = *piVar11;
      }
      *(int *)(puVar3 + 8) = iVar6;
    } while (*puVar4 != 0);
    bVar8 = 0;
  }
LAB_021530f4:
  return bVar8 == 4;
}

