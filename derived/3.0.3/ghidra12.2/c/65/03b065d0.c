
void FUN_03b065d0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  bVar4 = *(byte *)(param_2 + 0x3c9);
  if ((((bVar4 ^ 0xff) & 3) == 0) && (DAT_05aea958 != 0)) {
    lVar6 = *(long *)(DAT_05aea958 + 0x18);
    uVar1 = *(uint *)(*(long *)(param_2 + 0x3e0) + 0x108);
    uVar2 = *(uint *)(lVar6 + 0x1b0);
    uVar5 = (ulong)uVar2;
    if (0 < (int)uVar1) {
      if ((int)uVar2 < 1) goto LAB_03b066b4;
      uVar8 = 0;
      do {
        lVar10 = (long)*(int *)(*(long *)(param_2 + 0x3e0) + 0x88 + uVar8 * 4);
        if ((*(uint *)(*(long *)(lVar6 + 0x1b8) + lVar10 * 4) & 1) != 0) goto LAB_03b066d8;
        uVar9 = 0;
        pbVar7 = (byte *)(*(long *)(lVar6 + 0x1b8) + 0x300 + lVar10 * 4);
        do {
          if (uVar5 - 1 == uVar9) goto LAB_03b06630;
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 0x300;
          uVar9 = uVar9 + 1;
        } while ((bVar3 & 1) == 0);
        if (uVar9 < uVar5) goto LAB_03b066d8;
LAB_03b06630:
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar1);
    }
    if ((int)uVar2 < 1) goto LAB_03b066b4;
    if ((*(byte *)(*(long *)(lVar6 + 0x1b8) + 0xfc) & 1) == 0) {
      uVar8 = 0;
      pbVar7 = (byte *)(*(long *)(lVar6 + 0x1b8) + 0x3fc);
      do {
        if (uVar5 - 1 == uVar8) goto LAB_03b066b4;
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 0x300;
        uVar8 = uVar8 + 1;
      } while ((bVar3 & 1) == 0);
      if (uVar5 <= uVar8) goto LAB_03b066b4;
    }
  }
  else {
LAB_03b066b4:
    lVar6 = *(long *)(*(long *)(param_1 + 0x48) + (ulong)*(byte *)(param_2 + 8) * 0x58);
    *(undefined4 *)(lVar6 + 8) = 0;
    *(undefined4 *)(lVar6 + 0x20) = 0;
    *(undefined4 *)(lVar6 + 0x38) = 0;
    bVar4 = *(byte *)(param_2 + 0x3c9);
  }
LAB_03b066d8:
  if ((((bVar4 ^ 0xff) & 3) == 0) && (DAT_05aea958 != 0)) {
    lVar6 = *(long *)(DAT_05aea958 + 0x18);
    uVar1 = *(uint *)(*(long *)(param_2 + 0x3e0) + 0x108);
    uVar2 = *(uint *)(lVar6 + 0x1b0);
    uVar5 = (ulong)uVar2;
    if (0 < (int)uVar1) {
      if ((int)uVar2 < 1) goto LAB_03b067b4;
      uVar8 = 0;
      do {
        lVar10 = (long)*(int *)(*(long *)(param_2 + 0x3e0) + 0x88 + uVar8 * 4);
        if ((*(uint *)(*(long *)(lVar6 + 0x1b8) + lVar10 * 4) >> 0x13 & 1) != 0) {
          return;
        }
        uVar9 = 0;
        lVar10 = *(long *)(lVar6 + 0x1b8) + 0x300 + lVar10 * 4;
        do {
          if (uVar5 - 1 == uVar9) goto LAB_03b06730;
          pbVar7 = (byte *)(lVar10 + 2);
          lVar10 = lVar10 + 0x300;
          uVar9 = uVar9 + 1;
        } while ((*pbVar7 >> 3 & 1) == 0);
        if (uVar9 < uVar5) {
          return;
        }
LAB_03b06730:
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar1);
    }
    if (0 < (int)uVar2) {
      if ((*(byte *)(*(long *)(lVar6 + 0x1b8) + 0xfe) >> 3 & 1) == 0) {
        uVar8 = 0;
        lVar6 = *(long *)(lVar6 + 0x1b8) + 0x3fc;
        do {
          if (uVar5 - 1 == uVar8) goto LAB_03b067b4;
          pbVar7 = (byte *)(lVar6 + 2);
          lVar6 = lVar6 + 0x300;
          uVar8 = uVar8 + 1;
        } while ((*pbVar7 >> 3 & 1) == 0);
        if (uVar5 <= uVar8) goto LAB_03b067b4;
      }
      return;
    }
  }
LAB_03b067b4:
  lVar6 = *(long *)(*(long *)(param_1 + 0x48) + (ulong)*(byte *)(param_2 + 8) * 0x58);
  *(undefined4 *)(lVar6 + 0x1b8) = 0;
  *(undefined4 *)(lVar6 + 0x1d0) = 0;
  *(undefined4 *)(lVar6 + 0x1e8) = 0;
  return;
}

