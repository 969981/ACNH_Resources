
int FUN_03258260(uint param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  undefined *local_20;
  long lStack_18;
  
  puVar4 = PTR_DAT_04bb6448;
  puVar3 = PTR_DAT_04bb6440;
  lVar7 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar7 + 0x1d40) < 1) {
    if (*(long *)(lVar7 + 0x1c30) == 0) {
      return -1;
    }
    puVar6 = *(uint **)(*(long *)(lVar7 + 0x1c30) + 8);
    if (puVar6 == (uint *)0x0) {
      return -1;
    }
    if ((param_1 < *(uint *)(lVar7 + 0x1c48)) &&
       (*(char *)(*(long *)(lVar7 + 0x1c50) + (long)(int)param_1) == '\0')) {
      return -1;
    }
    if (*puVar6 <= param_1) {
      return -1;
    }
    if (puVar6[1] == 0) {
      return -1;
    }
    if ((ushort)puVar6[2] == 0) {
      return -1;
    }
    iVar5 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar5 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * param_1 + (uint)(ushort)puVar6[2] * 8 + iVar5) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(lVar7 + 0x1d40) <= param_1) {
      return -1;
    }
    if (*(uint *)(lVar7 + 0x1d30) <= param_1) {
      param_1 = 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar7 + 0x1d38) + (ulong)param_1 * 8);
  }
  if (puVar6 == (uint *)0x0) {
    return -1;
  }
  if (*puVar6 != 0) {
    cVar8 = *PTR_DAT_04bb6440;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar4 + 0x48);
        if (-1 < (int)uVar2) {
          lVar7 = (ulong)uVar2 + (long)puVar6;
          goto LAB_03258388;
        }
        if (uVar2 != 0xffffffff) break;
      }
      puVar10 = (uint *)(ulong)*puVar6;
      lVar7 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_03258388;
      lVar7 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar1 = (long)puVar6 + (lVar7 - (long)puVar10);
      if (lVar1 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
      *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
      lVar7 = 0;
      if (uVar9 == 0) goto LAB_03258388;
      piVar11 = (int *)(lVar1 + 4);
      while (piVar11[-1] != 0x45f320f2) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          lVar7 = 0;
          goto LAB_03258388;
        }
      }
      iVar5 = 0;
      if (*piVar11 != -1) {
        iVar5 = *piVar11;
      }
      *(int *)(puVar4 + 0x48) = iVar5;
    } while (*puVar6 != 0);
  }
  lVar7 = 0;
LAB_03258388:
  lStack_18 = *(long *)PTR_PTR_04bb6438;
  if (lVar7 != 0) {
    lStack_18 = lVar7;
  }
  local_20 = PTR_DAT_04bb2020 + 0x10;
  iVar5 = FUN_027a51c0(&local_20);
  if (5 < iVar5) {
    iVar5 = 6;
  }
  return iVar5;
}

