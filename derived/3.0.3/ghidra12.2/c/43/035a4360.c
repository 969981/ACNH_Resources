
void FUN_035a4360(ushort *param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  
  param_2 = param_2 - (uint)*param_1;
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 6))) &&
      (param_3 = param_3 - (uint)param_1[1], -1 < param_3)) &&
     ((param_3 < *(int *)(param_1 + 8) && (lVar21 = *(long *)(param_1 + 0x10), lVar21 != 0)))) {
    param_2 = param_2 + *(int *)(param_1 + 6) * param_3;
    pcVar10 = (char *)(lVar21 + (long)param_2 * 0x28 + 6);
    if (*pcVar10 != '\x03') {
      uVar20 = 0;
      puVar18 = (ushort *)(lVar21 + (long)param_2 * 0x28);
      *pcVar10 = '\x03';
      *(undefined1 *)(lVar21 + (long)param_2 * 0x28 + 4) = 0;
      do {
        puVar6 = (ushort *)FUN_035a4ae8(param_1,puVar18,uVar20 & 0xffffffff);
        if (puVar6 != (ushort *)0x0) {
          iVar19 = (int)uVar20;
          *(byte *)(puVar6 + 2) =
               (byte)puVar6[2] &
               ((&DAT_0418f474)[uVar20 + (long)*(int *)(&DAT_0418f474 + (long)(int)param_4 * 4)] ^
               0xff);
          if (iVar19 == 5) {
            uVar14 = *puVar6 + 1;
            uVar15 = *param_1;
            if (uVar15 <= uVar14) {
              iVar19 = *(int *)(param_1 + 6);
              if ((uint)uVar14 <= (((uint)uVar15 + iVar19) - 1 & 0xffff)) {
                uVar2 = param_1[1];
                uVar17 = puVar6[1] + 1 & 0xffff;
                if (uVar2 <= uVar17) {
                  if (((uVar17 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                      (iVar4 = (uint)uVar14 - (uint)uVar15, -1 < iVar4)) &&
                     ((iVar4 < iVar19 &&
                      (((iVar5 = uVar17 - uVar2, -1 < iVar5 && (iVar5 < *(int *)(param_1 + 8))) &&
                       (*(long *)(param_1 + 0x10) != 0)))))) {
                    lVar8 = *(long *)(param_1 + 0x10) + (long)(iVar4 + iVar5 * iVar19) * 0x28;
                    *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0xef;
                  }
                }
              }
            }
          }
          else if (iVar19 == 3) {
            uVar14 = *puVar6;
            uVar15 = *param_1;
            if (uVar15 <= uVar14) {
              iVar19 = *(int *)(param_1 + 6);
              if ((uint)uVar14 <= (((uint)uVar15 + iVar19) - 1 & 0xffff)) {
                uVar2 = param_1[1];
                uVar17 = puVar6[1] + 1 & 0xffff;
                if (uVar2 <= uVar17) {
                  if (((uVar17 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                      (iVar4 = (uint)uVar14 - (uint)uVar15, -1 < iVar4)) &&
                     (((iVar4 < iVar19 &&
                       ((iVar5 = uVar17 - uVar2, -1 < iVar5 && (iVar5 < *(int *)(param_1 + 8))))) &&
                      (*(long *)(param_1 + 0x10) != 0)))) {
                    pbVar7 = (byte *)(*(long *)(param_1 + 0x10) +
                                      (long)(iVar4 + iVar5 * iVar19) * 0x28 + 4);
                    bVar1 = *pbVar7;
                    *pbVar7 = bVar1 & 0xbb;
                    if (param_4 != 2) {
                      *pbVar7 = bVar1 & 0xab;
                    }
                  }
                }
              }
            }
            uVar14 = puVar6[1] + 1;
            uVar15 = *puVar6;
            uVar2 = *param_1;
            uVar12 = (uint)uVar2;
            iVar19 = *(int *)(param_1 + 6);
            uVar17 = uVar15 - 1 & 0xffff;
            uVar11 = (uint)uVar14;
            uVar9 = ((uint)uVar2 + iVar19) - 1;
            if (((uVar2 <= uVar17) && ((uVar15 - 1 & 0xffff) <= (uVar9 & 0xffff))) &&
               (uVar3 = param_1[1], uVar3 <= uVar14)) {
              if (((((uint)uVar14 <= (((uint)uVar3 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                   (iVar4 = uVar17 - uVar2, -1 < iVar4)) &&
                  ((iVar4 < iVar19 &&
                   ((iVar5 = (uint)uVar14 - (uint)uVar3, -1 < iVar5 &&
                    (iVar5 < *(int *)(param_1 + 8))))))) && (*(long *)(param_1 + 0x10) != 0)) {
                lVar8 = *(long *)(param_1 + 0x10) + (long)(iVar4 + iVar5 * iVar19) * 0x28;
                *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0xbf;
                uVar12 = (uint)*param_1;
                iVar19 = *(int *)(param_1 + 6);
                uVar15 = *puVar6;
                uVar14 = puVar6[1] + 1;
                uVar11 = (uint)uVar14;
                uVar9 = ((uint)*param_1 + iVar19) - 1;
              }
            }
            uVar15 = uVar15 + 1;
            if (((uVar12 <= uVar15) && ((uint)uVar15 <= (uVar9 & 0xffff))) &&
               (uVar2 = param_1[1], uVar2 <= uVar14)) {
              if (((((uint)uVar14 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                   (iVar4 = uVar15 - uVar12, -1 < iVar4)) &&
                  ((iVar4 < iVar19 &&
                   ((iVar5 = uVar11 - uVar2, -1 < iVar5 && (iVar5 < *(int *)(param_1 + 8))))))) &&
                 (*(long *)(param_1 + 0x10) != 0)) {
                pbVar7 = (byte *)(*(long *)(param_1 + 0x10) + (long)(iVar4 + iVar5 * iVar19) * 0x28
                                 + 4);
                bVar1 = *pbVar7;
                *pbVar7 = bVar1 & 0xeb;
                if (param_4 != 4) {
                  *pbVar7 = bVar1 & 0xab;
                }
              }
            }
          }
          else if (iVar19 == 1) {
            uVar14 = *puVar6 + 1;
            uVar15 = *param_1;
            if (uVar15 <= uVar14) {
              iVar19 = *(int *)(param_1 + 6);
              if ((uint)uVar14 <= (((uint)uVar15 + iVar19) - 1 & 0xffff)) {
                uVar2 = puVar6[1];
                uVar3 = param_1[1];
                if (uVar3 <= uVar2) {
                  if ((((((uint)uVar2 <= (((uint)uVar3 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                        (iVar4 = (uint)uVar14 - (uint)uVar15, -1 < iVar4)) && (iVar4 < iVar19)) &&
                      ((iVar5 = (uint)uVar2 - (uint)uVar3, -1 < iVar5 &&
                       (iVar5 < *(int *)(param_1 + 8))))) && (*(long *)(param_1 + 0x10) != 0)) {
                    pbVar7 = (byte *)(*(long *)(param_1 + 0x10) +
                                      (long)(iVar4 + iVar5 * iVar19) * 0x28 + 4);
                    bVar1 = *pbVar7;
                    *pbVar7 = bVar1 & 0x7e;
                    if (param_4 != 3) {
                      *pbVar7 = bVar1 & 0x6e;
                    }
                  }
                }
              }
            }
            uVar14 = *puVar6 + 1;
            uVar15 = *param_1;
            uVar9 = (uint)uVar15;
            iVar19 = *(int *)(param_1 + 6);
            uVar12 = (uint)puVar6[1];
            uVar11 = (uint)uVar14;
            uVar17 = ((uint)uVar15 + iVar19) - 1;
            if ((uVar15 <= uVar14) && ((uint)uVar14 <= (uVar17 & 0xffff))) {
              uVar2 = param_1[1];
              uVar13 = puVar6[1] - 1 & 0xffff;
              if (uVar2 <= uVar13) {
                if ((((uVar13 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                     (iVar4 = (uint)uVar14 - (uint)uVar15, -1 < iVar4)) && (iVar4 < iVar19)) &&
                   (((iVar5 = uVar13 - uVar2, -1 < iVar5 && (iVar5 < *(int *)(param_1 + 8))) &&
                    (*(long *)(param_1 + 0x10) != 0)))) {
                  lVar8 = *(long *)(param_1 + 0x10) + (long)(iVar4 + iVar5 * iVar19) * 0x28;
                  *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0x7f;
                  uVar9 = (uint)*param_1;
                  iVar19 = *(int *)(param_1 + 6);
                  uVar12 = (uint)puVar6[1];
                  uVar14 = *puVar6 + 1;
                  uVar11 = (uint)uVar14;
                  uVar17 = ((uint)*param_1 + iVar19) - 1;
                }
              }
            }
            if (((uint)uVar14 <= (uVar17 & 0xffff)) && (uVar9 <= uVar14)) {
              uVar14 = param_1[1];
              uVar17 = uVar12 + 1 & 0xffff;
              if (uVar14 <= uVar17) {
                if ((((uVar17 <= (((uint)uVar14 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                     (iVar4 = uVar11 - uVar9, -1 < iVar4)) && (iVar4 < iVar19)) &&
                   (((iVar5 = uVar17 - uVar14, -1 < iVar5 && (iVar5 < *(int *)(param_1 + 8))) &&
                    (*(long *)(param_1 + 0x10) != 0)))) {
                  pbVar7 = (byte *)(*(long *)(param_1 + 0x10) +
                                    (long)(iVar4 + iVar5 * iVar19) * 0x28 + 4);
                  bVar1 = *pbVar7;
                  *pbVar7 = bVar1 & 0xee;
                  if (param_4 != 4) {
                    *pbVar7 = bVar1 & 0x6e;
                  }
                }
              }
            }
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != 8);
      if (param_4 < 5) {
        uVar14 = *puVar18;
        uVar13 = (uint)uVar14;
        uVar15 = puVar18[1];
        uVar16 = (uint)uVar15;
        *(undefined1 *)(lVar21 + (long)param_2 * 0x28 + 5) = 0xff;
        uVar17 = uVar14 + 1;
        uVar14 = *param_1;
        uVar12 = (uint)uVar14;
        iVar19 = *(int *)(param_1 + 6);
        uVar9 = uVar17 & 0xffff;
        uVar11 = ((uint)uVar14 + iVar19) - 1;
        if (((uVar14 < uVar9 || uVar14 == uVar9) && ((uVar17 & 0xffff) <= (uVar11 & 0xffff))) &&
           (uVar2 = param_1[1], uVar2 <= uVar15)) {
          if ((((((uint)uVar15 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                (iVar4 = uVar9 - uVar14, -1 < iVar4)) && (iVar4 < iVar19)) &&
              ((iVar5 = (uint)uVar15 - (uint)uVar2, -1 < iVar5 && (iVar5 < *(int *)(param_1 + 8)))))
             && (*(long *)(param_1 + 0x10) != 0)) {
            lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar4 + iVar5 * iVar19) * 0x28;
            *(byte *)(lVar21 + 5) = *(byte *)(lVar21 + 5) | 0x89;
            uVar12 = (uint)*param_1;
            iVar19 = *(int *)(param_1 + 6);
            uVar13 = (uint)*puVar18;
            uVar16 = (uint)puVar18[1];
            uVar11 = ((uint)*param_1 + iVar19) - 1;
          }
        }
        if ((uVar12 <= uVar13) && (uVar13 <= (uVar11 & 0xffff))) {
          uVar14 = param_1[1];
          uVar17 = uVar16 + 1;
          if ((uint)uVar14 <= (uVar17 & 0xffff)) {
            if ((((((uVar17 & 0xffff) <= (((uint)uVar14 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                  (iVar4 = uVar13 - uVar12, -1 < iVar4)) && (iVar4 < iVar19)) &&
                ((iVar5 = (uVar17 & 0xffff) - (uint)uVar14, -1 < iVar5 &&
                 (iVar5 < *(int *)(param_1 + 8))))) && (*(long *)(param_1 + 0x10) != 0)) {
              lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar4 + iVar5 * iVar19) * 0x28;
              *(byte *)(lVar21 + 5) = *(byte *)(lVar21 + 5) | 0x46;
              uVar12 = (uint)*param_1;
              iVar19 = *(int *)(param_1 + 6);
              uVar13 = (uint)*puVar18;
              uVar16 = (uint)puVar18[1];
              uVar11 = (uVar12 + iVar19) - 1;
            }
          }
        }
        uVar17 = uVar13 + 1 & 0xffff;
        if ((uVar12 <= uVar17) && ((uVar13 + 1 & 0xffff) <= (uVar11 & 0xffff))) {
          uVar14 = param_1[1];
          uVar9 = uVar16 + 1 & 0xffff;
          if (uVar14 <= uVar9) {
            if ((((uVar9 <= (((uint)uVar14 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                 (iVar4 = uVar17 - uVar12, -1 < iVar4)) && (iVar4 < iVar19)) &&
               (((iVar5 = uVar9 - uVar14, -1 < iVar5 && (iVar5 < *(int *)(param_1 + 8))) &&
                (*(long *)(param_1 + 0x10) != 0)))) {
              lVar21 = *(long *)(param_1 + 0x10) + (long)(iVar4 + iVar5 * iVar19) * 0x28;
              *(byte *)(lVar21 + 5) = *(byte *)(lVar21 + 5) | 0x15;
            }
          }
        }
      }
    }
  }
  return;
}

