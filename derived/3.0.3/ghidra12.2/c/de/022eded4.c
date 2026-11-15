
bool FUN_022eded4(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    return false;
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 == 0) {
    return false;
  }
  if ((int)*(uint *)(DAT_0519d040 + 0x5d0) < 1) {
    if (*(long *)(DAT_0519d040 + 0x4c0) == 0) {
      return false;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0519d040 + 0x4c0) + 8);
    if (puVar5 == (uint *)0x0) {
      return false;
    }
    if ((uVar3 < *(uint *)(DAT_0519d040 + 0x4d8)) &&
       (*(char *)(*(long *)(DAT_0519d040 + 0x4e0) + (long)(int)uVar3) == '\0')) {
      return false;
    }
    if (*puVar5 <= uVar3) {
      return false;
    }
    if (puVar5[1] == 0) {
      return false;
    }
    if ((ushort)puVar5[2] == 0) {
      return false;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * uVar3 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(DAT_0519d040 + 0x5d0) <= uVar3) {
      return false;
    }
    if (*(uint *)(DAT_0519d040 + 0x5c0) <= uVar3) {
      uVar3 = 0;
    }
    puVar5 = *(uint **)(*(long *)(DAT_0519d040 + 0x5c8) + (ulong)uVar3 * 8);
  }
  if (puVar5 == (uint *)0x0) {
    return false;
  }
  uVar3 = *puVar5;
  if (uVar3 != 0 && puVar5 != (uint *)(ulong)uVar3) {
    puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
    if (((*puVar7 != 0) && (uVar3 = puVar7[1], uVar3 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05160b30) &&
           (uVar4 = *(ushort *)(DAT_05160b38 + (long)(int)uVar2 * 2), uVar4 < 3)) goto LAB_022edfc0;
      }
    }
  }
  uVar4 = 0;
LAB_022edfc0:
  return uVar4 != 0;
}

