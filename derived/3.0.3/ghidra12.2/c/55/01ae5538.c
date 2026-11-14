
int FUN_01ae5538(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    return 1;
  }
  uVar7 = *puVar8;
  if (uVar7 == 0 || puVar8 == (uint *)(ulong)uVar7) {
LAB_01ae55ec:
    uVar5 = FUN_01ae5024(0);
  }
  else {
    puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
    if (((*puVar9 == 0) || (uVar7 = puVar9[1], uVar7 == 0)) || ((ulong)(ushort)puVar9[2] == 0))
    goto LAB_01ae55ec;
    lVar6 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      lVar6 = 0x1c;
    }
    lVar6 = (long)puVar9 + lVar6 + (ulong)(ushort)puVar9[2] * 8;
    if (lVar6 == 0) goto LAB_01ae55ec;
    uVar2 = 0;
    if ((ulong)uVar7 != 0) {
      uVar2 = (uint)((ulong)((long)puVar8 - lVar6) / (ulong)uVar7);
    }
    if (*puVar9 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((DAT_05326af0 <= uVar2) ||
       (uVar3 = *(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), 0xa1 < uVar3)) goto LAB_01ae55ec;
    uVar5 = FUN_01ae5024(uVar3);
  }
  if ((uVar5 & 1) == 0) {
    return 1;
  }
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar7 = *puVar8;
    uVar3 = 0;
    if ((uVar7 != 0) && (puVar8 != (uint *)(ulong)uVar7)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      if ((*puVar9 != 0) && ((uVar7 = puVar9[1], uVar7 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
        lVar6 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar9 + lVar6 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar6 != 0) {
          uVar2 = 0;
          if ((ulong)uVar7 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar6) / (ulong)uVar7);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326af0) &&
             (uVar3 = *(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), uVar3 < 0xa2))
          goto LAB_01ae56a4;
        }
      }
      uVar3 = 0;
    }
LAB_01ae56a4:
    iVar4 = FUN_01ae5210(uVar3);
  }
  lVar6 = FUN_01ae4d10(param_1);
  if (lVar6 != 0) {
    puVar8 = *(uint **)(param_1 + 0x10);
    uVar7 = 0;
    if (puVar8 == (uint *)0x0) goto LAB_01ae5770;
    uVar7 = *puVar8;
    uVar3 = 0;
    if ((uVar7 != 0) && (puVar8 != (uint *)(ulong)uVar7)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      if ((*puVar9 != 0) && ((uVar7 = puVar9[1], uVar7 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar7 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326af0) &&
             (uVar3 = *(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), uVar3 < 0xa2))
          goto LAB_01ae5758;
        }
      }
      uVar3 = 0;
    }
LAB_01ae5758:
    uVar5 = FUN_01ae5024(uVar3);
    if ((uVar5 & 1) != 0) {
      uVar7 = *(ushort *)(lVar6 + 2) & 0x3ff;
      goto LAB_01ae5770;
    }
  }
  uVar7 = 0;
LAB_01ae5770:
  return iVar4 - uVar7;
}

