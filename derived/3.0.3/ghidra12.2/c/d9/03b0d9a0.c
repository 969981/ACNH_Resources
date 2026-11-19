
void FUN_03b0d9a0(long *param_1,long *param_2,byte *param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x20) != -1) {
    lVar7 = 0;
    do {
      pbVar16 = param_3 + lVar7;
      lVar7 = lVar7 + 1;
    } while (*pbVar16 != 0);
    lVar5 = *(long *)(lVar6 + 0x18);
    uVar15 = (uint)*param_3;
    puVar9 = *(uint **)(lVar5 + (long)*(int *)(lVar6 + 0x20) * 0x18);
    uVar13 = *puVar9;
    if (*param_3 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      pbVar16 = param_3;
      do {
        pbVar16 = pbVar16 + 1;
        uVar12 = uVar15 + uVar12 * 0x492;
        uVar15 = (uint)*pbVar16;
      } while (uVar15 != 0);
    }
    uVar15 = 0;
    if (uVar13 != 0) {
      uVar15 = uVar12 / uVar13;
    }
    iVar3 = uVar12 - uVar15 * uVar13;
    iVar10 = 0;
    if (puVar9[(int)(iVar3 * 2 | 1)] == 0) {
LAB_03b0db64:
      lVar14 = 0;
      goto LAB_03b0db68;
    }
    uVar13 = 0;
    iVar10 = (int)lVar7;
    uVar15 = puVar9[iVar3 * 2 + 2];
    do {
      bVar2 = *(byte *)((long)puVar9 + (ulong)uVar15);
      if (bVar2 + 1 == iVar10) {
        lVar7 = (ulong)uVar15 + 1;
        if (iVar10 + -1 < 1) {
LAB_03b0da98:
          iVar10 = 0;
          lVar14 = 0;
          uVar13 = *(uint *)((long)puVar9 + lVar7 + (ulong)(uint)bVar2);
          uVar8 = (ulong)uVar13;
          if (((int)uVar13 < 0) || (*(uint *)(param_2 + 1) <= uVar13)) goto LAB_03b0db68;
          iVar3 = *(int *)(lVar6 + 0x24);
          if (iVar3 == -1) {
            lVar14 = 0;
            iVar10 = -1;
            goto LAB_03b0db68;
          }
          piVar11 = *(int **)(lVar5 + (long)iVar3 * 0x18);
          if (((int)uVar13 < *piVar11) && ((ulong)(long)*(char *)(lVar6 + 0x10) < 3)) {
            piVar1 = piVar11 + uVar8 + 2;
            if (*piVar11 <= (int)(uVar8 + 1)) {
              piVar1 = (int *)(lVar5 + (long)iVar3 * 0x18 + 0xc);
            }
            iVar10 = (*piVar1 - piVar11[uVar8 + 1]) +
                     *(int *)(&DAT_041e0148 + (long)*(char *)(lVar6 + 0x10) * 4) >> 1;
          }
          else {
            iVar10 = -1;
          }
          piVar11 = *(int **)(lVar5 + (long)iVar3 * 0x18);
          if (*piVar11 <= (int)uVar13) goto LAB_03b0db64;
          lVar14 = (long)piVar11 + (ulong)(uint)piVar11[uVar8 + 1];
          goto LAB_03b0db68;
        }
        pbVar16 = (byte *)((long)puVar9 + lVar7);
        pbVar4 = param_3;
        uVar8 = (ulong)(iVar10 - 1);
        while( true ) {
          if (*pbVar4 != *pbVar16) break;
          uVar8 = uVar8 - 1;
          pbVar16 = pbVar16 + 1;
          pbVar4 = pbVar4 + 1;
          if (uVar8 == 0) goto LAB_03b0da98;
        }
      }
      uVar13 = uVar13 + 1;
      uVar15 = uVar15 + bVar2 + 5;
    } while (uVar13 != puVar9[(int)(iVar3 * 2 | 1)]);
  }
  lVar14 = 0;
  iVar10 = 0;
LAB_03b0db68:
  *param_1 = lVar14;
  *(int *)(param_1 + 1) = iVar10;
  return;
}

