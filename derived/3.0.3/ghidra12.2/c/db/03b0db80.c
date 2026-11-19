
uint FUN_03b0db80(long *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  iVar2 = *(int *)(*param_1 + 0x20);
  if (iVar2 != -1) {
    lVar5 = 0;
    do {
      pbVar10 = param_2 + lVar5;
      lVar5 = lVar5 + 1;
    } while (*pbVar10 != 0);
    uVar9 = (uint)*param_2;
    puVar6 = *(uint **)(*(long *)(*param_1 + 0x18) + (long)iVar2 * 0x18);
    uVar8 = *puVar6;
    if (*param_2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      pbVar10 = param_2;
      do {
        pbVar10 = pbVar10 + 1;
        uVar7 = uVar9 + uVar7 * 0x492;
        uVar9 = (uint)*pbVar10;
      } while (uVar9 != 0);
    }
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = uVar7 / uVar8;
    }
    iVar2 = uVar7 - uVar9 * uVar8;
    if (puVar6[(int)(iVar2 * 2 | 1)] != 0) {
      uVar8 = 0;
      iVar3 = (int)lVar5;
      uVar9 = puVar6[iVar2 * 2 + 2];
      do {
        bVar1 = *(byte *)((long)puVar6 + (ulong)uVar9);
        if (bVar1 + 1 == iVar3) {
          lVar5 = (ulong)uVar9 + 1;
          if (iVar3 + -1 < 1) {
LAB_03b0dc78:
            return ~*(uint *)((long)puVar6 + lVar5 + (ulong)(uint)bVar1) >> 0x1f;
          }
          uVar4 = (ulong)(iVar3 - 1);
          pbVar10 = (byte *)((long)puVar6 + lVar5);
          pbVar11 = param_2;
          while( true ) {
            if (*pbVar11 != *pbVar10) break;
            uVar4 = uVar4 - 1;
            pbVar10 = pbVar10 + 1;
            pbVar11 = pbVar11 + 1;
            if (uVar4 == 0) goto LAB_03b0dc78;
          }
        }
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 + bVar1 + 5;
      } while (uVar8 != puVar6[(int)(iVar2 * 2 | 1)]);
    }
  }
  return 0;
}

