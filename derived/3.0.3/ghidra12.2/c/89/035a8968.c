
void FUN_035a8968(ushort *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  ushort *puVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  
  uVar4 = *param_1;
  param_2 = param_2 - (uint)uVar4;
  if ((-1 < param_2) && (iVar1 = *(int *)(param_1 + 6), param_2 < iVar1)) {
    uVar5 = param_1[1];
    param_3 = param_3 - (uint)uVar5;
    if ((-1 < param_3) &&
       ((iVar2 = *(int *)(param_1 + 8), param_3 < iVar2 &&
        (lVar14 = *(long *)(param_1 + 0x10), lVar14 != 0)))) {
      param_2 = param_2 + iVar1 * param_3;
      pbVar11 = (byte *)(lVar14 + (long)param_2 * 0x28 + 4);
      bVar3 = *pbVar11;
      uVar12 = (uint)bVar3;
      uVar8 = (uint)bVar3 - (bVar3 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      if ((uVar8 + (uVar8 >> 0x10) & 0x3f) == 0) {
        puVar13 = (ushort *)(lVar14 + (long)param_2 * 0x28);
        if ((bVar3 & 1) == 0) {
          uVar8 = *puVar13 - 1 & 0xffff;
          uVar16 = (uint)uVar4;
          if ((uVar4 < uVar8 || uVar16 == uVar8) &&
             ((*puVar13 - 1 & 0xffff) <= ((uVar16 + iVar1) - 1 & 0xffff))) {
            uVar4 = puVar13[1];
            uVar17 = (uint)uVar5;
            if (((((uint)uVar5 < (uint)uVar4 || uVar17 == uVar4) &&
                 (((((uint)uVar4 <= ((uVar17 + iVar2) - 1 & 0xffff) &&
                    (iVar9 = uVar8 - uVar16, -1 < iVar9)) && (iVar9 < iVar1)) &&
                  ((iVar10 = uVar4 - uVar17, -1 < iVar10 && (iVar10 < iVar2)))))) &&
                (iVar9 = iVar9 + iVar10 * iVar1,
                *(char *)(lVar14 + (long)iVar9 * 0x28 + 6) != '\x03')) &&
               ((pbVar15 = (byte *)(lVar14 + (long)iVar9 * 0x28 + 4), *pbVar15 != 0 &&
                ((*(byte *)(lVar14 + (long)iVar9 * 0x28 + 5) >> 1 & 1) == 0)))) {
              *pbVar11 = bVar3 | 1;
              *pbVar15 = *pbVar15 | 2;
              uVar12 = (uint)*pbVar11;
            }
          }
        }
        if ((uVar12 >> 1 & 1) == 0) {
          uVar4 = *puVar13 + 1;
          uVar5 = *param_1;
          if (uVar5 <= uVar4) {
            iVar1 = *(int *)(param_1 + 6);
            if ((uint)uVar4 <= (((uint)uVar5 + iVar1) - 1 & 0xffff)) {
              uVar6 = puVar13[1];
              uVar7 = param_1[1];
              if (uVar7 <= uVar6) {
                if ((((((uint)uVar6 <= (((uint)uVar7 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                      (iVar2 = (uint)uVar4 - (uint)uVar5, -1 < iVar2)) && (iVar2 < iVar1)) &&
                    (((iVar9 = (uint)uVar6 - (uint)uVar7, -1 < iVar9 &&
                      (iVar9 < *(int *)(param_1 + 8))) &&
                     ((lVar14 = *(long *)(param_1 + 0x10), lVar14 != 0 &&
                      ((iVar2 = iVar2 + iVar9 * iVar1,
                       *(char *)(lVar14 + (long)iVar2 * 0x28 + 6) != '\x03' &&
                       (pbVar15 = (byte *)(lVar14 + (long)iVar2 * 0x28 + 4), *pbVar15 != 0))))))))
                   && ((*(byte *)(lVar14 + (long)iVar2 * 0x28 + 5) & 1) == 0)) {
                  *pbVar11 = (byte)uVar12 | 2;
                  *pbVar15 = *pbVar15 | 1;
                  uVar12 = (uint)*pbVar11;
                }
              }
            }
          }
        }
        if ((uVar12 >> 2 & 1) == 0) {
          uVar4 = *puVar13;
          uVar5 = *param_1;
          if (uVar5 <= uVar4) {
            iVar1 = *(int *)(param_1 + 6);
            if ((uint)uVar4 <= (((uint)uVar5 + iVar1) - 1 & 0xffff)) {
              uVar6 = param_1[1];
              uVar8 = puVar13[1] - 1 & 0xffff;
              if (uVar6 <= uVar8) {
                if ((((((uVar8 <= (((uint)uVar6 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                       (iVar2 = (uint)uVar4 - (uint)uVar5, -1 < iVar2)) && (iVar2 < iVar1)) &&
                     ((iVar9 = uVar8 - uVar6, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))))) &&
                    ((lVar14 = *(long *)(param_1 + 0x10), lVar14 != 0 &&
                     ((iVar2 = iVar2 + iVar9 * iVar1,
                      *(char *)(lVar14 + (long)iVar2 * 0x28 + 6) != '\x03' &&
                      (pbVar15 = (byte *)(lVar14 + (long)iVar2 * 0x28 + 4), *pbVar15 != 0)))))) &&
                   ((*(byte *)(lVar14 + (long)iVar2 * 0x28 + 5) >> 3 & 1) == 0)) {
                  *pbVar11 = (byte)uVar12 | 4;
                  *pbVar15 = *pbVar15 | 8;
                  uVar12 = (uint)*pbVar11;
                }
              }
            }
          }
        }
        if ((uVar12 >> 3 & 1) == 0) {
          uVar4 = *puVar13;
          uVar5 = *param_1;
          if (uVar5 <= uVar4) {
            iVar1 = *(int *)(param_1 + 6);
            if ((uint)uVar4 <= (((uint)uVar5 + iVar1) - 1 & 0xffff)) {
              uVar6 = param_1[1];
              uVar8 = puVar13[1] + 1 & 0xffff;
              if (uVar6 <= uVar8) {
                if ((((((uVar8 <= (((uint)uVar6 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                       (iVar2 = (uint)uVar4 - (uint)uVar5, -1 < iVar2)) && (iVar2 < iVar1)) &&
                     ((iVar9 = uVar8 - uVar6, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))))) &&
                    (lVar14 = *(long *)(param_1 + 0x10), lVar14 != 0)) &&
                   (((iVar2 = iVar2 + iVar9 * iVar1,
                     *(char *)(lVar14 + (long)iVar2 * 0x28 + 6) != '\x03' &&
                     (pbVar15 = (byte *)(lVar14 + (long)iVar2 * 0x28 + 4), *pbVar15 != 0)) &&
                    ((*(byte *)(lVar14 + (long)iVar2 * 0x28 + 5) >> 2 & 1) == 0)))) {
                  *pbVar11 = (byte)uVar12 | 8;
                  *pbVar15 = *pbVar15 | 4;
                  uVar12 = (uint)*pbVar11;
                }
              }
            }
          }
        }
        if ((uVar12 >> 4 & 1) == 0) {
          uVar4 = *param_1;
          uVar8 = *puVar13 - 1 & 0xffff;
          if (uVar4 <= uVar8) {
            iVar1 = *(int *)(param_1 + 6);
            if ((*puVar13 - 1 & 0xffff) <= (((uint)uVar4 + iVar1) - 1 & 0xffff)) {
              uVar5 = param_1[1];
              uVar16 = puVar13[1] - 1 & 0xffff;
              if (uVar5 <= uVar16) {
                if (((((uVar16 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                      (iVar2 = uVar8 - uVar4, -1 < iVar2)) && (iVar2 < iVar1)) &&
                    (((iVar9 = uVar16 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))) &&
                     ((lVar14 = *(long *)(param_1 + 0x10), lVar14 != 0 &&
                      ((iVar2 = iVar2 + iVar9 * iVar1,
                       *(char *)(lVar14 + (long)iVar2 * 0x28 + 6) != '\x03' &&
                       (pbVar15 = (byte *)(lVar14 + (long)iVar2 * 0x28 + 4), *pbVar15 != 0))))))))
                   && ((*(byte *)(lVar14 + (long)iVar2 * 0x28 + 5) >> 5 & 1) == 0)) {
                  *pbVar11 = (byte)uVar12 | 0x10;
                  *pbVar15 = *pbVar15 | 0x20;
                  uVar12 = (uint)*pbVar11;
                }
              }
            }
          }
        }
        if ((uVar12 >> 5 & 1) == 0) {
          uVar4 = *puVar13 + 1;
          uVar5 = *param_1;
          if (uVar5 <= uVar4) {
            iVar1 = *(int *)(param_1 + 6);
            if ((uint)uVar4 <= (((uint)uVar5 + iVar1) - 1 & 0xffff)) {
              uVar6 = param_1[1];
              uVar8 = puVar13[1] + 1 & 0xffff;
              if (uVar6 <= uVar8) {
                if (((((uVar8 <= (((uint)uVar6 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                      (iVar2 = (uint)uVar4 - (uint)uVar5, -1 < iVar2)) && (iVar2 < iVar1)) &&
                    ((iVar9 = uVar8 - uVar6, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))))) &&
                   (((lVar14 = *(long *)(param_1 + 0x10), lVar14 != 0 &&
                     ((iVar2 = iVar2 + iVar9 * iVar1,
                      *(char *)(lVar14 + (long)iVar2 * 0x28 + 6) != '\x03' &&
                      (pbVar15 = (byte *)(lVar14 + (long)iVar2 * 0x28 + 4), *pbVar15 != 0)))) &&
                    ((*(byte *)(lVar14 + (long)iVar2 * 0x28 + 5) >> 4 & 1) == 0)))) {
                  *pbVar11 = (byte)uVar12 | 0x20;
                  *pbVar15 = *pbVar15 | 0x10;
                  uVar12 = (uint)*pbVar11;
                }
              }
            }
          }
        }
        if ((uVar12 >> 6 & 1) == 0) {
          uVar4 = *puVar13 + 1;
          uVar5 = *param_1;
          if (uVar5 <= uVar4) {
            iVar1 = *(int *)(param_1 + 6);
            if ((uint)uVar4 <= (((uint)uVar5 + iVar1) - 1 & 0xffff)) {
              uVar6 = param_1[1];
              uVar8 = puVar13[1] - 1 & 0xffff;
              if (uVar6 <= uVar8) {
                if (((((uVar8 <= (((uint)uVar6 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                      (iVar2 = (uint)uVar4 - (uint)uVar5, -1 < iVar2)) && (iVar2 < iVar1)) &&
                    ((iVar9 = uVar8 - uVar6, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))))) &&
                   (((lVar14 = *(long *)(param_1 + 0x10), lVar14 != 0 &&
                     ((iVar2 = iVar2 + iVar9 * iVar1,
                      *(char *)(lVar14 + (long)iVar2 * 0x28 + 6) != '\x03' &&
                      (pbVar15 = (byte *)(lVar14 + (long)iVar2 * 0x28 + 4), *pbVar15 != 0)))) &&
                    (-1 < *(char *)(lVar14 + (long)iVar2 * 0x28 + 5))))) {
                  *pbVar11 = (byte)uVar12 | 0x40;
                  *pbVar15 = *pbVar15 | 0x80;
                  uVar12 = (uint)*pbVar11;
                }
              }
            }
          }
        }
        if (uVar12 >> 7 == 0) {
          uVar4 = *param_1;
          uVar8 = *puVar13 - 1 & 0xffff;
          if (uVar4 <= uVar8) {
            iVar1 = *(int *)(param_1 + 6);
            if ((*puVar13 - 1 & 0xffff) <= (((uint)uVar4 + iVar1) - 1 & 0xffff)) {
              uVar5 = param_1[1];
              uVar16 = puVar13[1] + 1 & 0xffff;
              if (uVar5 <= uVar16) {
                if (((((uVar16 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                      (iVar2 = uVar8 - uVar4, -1 < iVar2)) && (iVar2 < iVar1)) &&
                    (((iVar9 = uVar16 - uVar5, -1 < iVar9 && (iVar9 < *(int *)(param_1 + 8))) &&
                     ((lVar14 = *(long *)(param_1 + 0x10), lVar14 != 0 &&
                      ((iVar2 = iVar2 + iVar9 * iVar1,
                       *(char *)(lVar14 + (long)iVar2 * 0x28 + 6) != '\x03' &&
                       (pbVar15 = (byte *)(lVar14 + (long)iVar2 * 0x28 + 4), *pbVar15 != 0))))))))
                   && ((*(byte *)(lVar14 + (long)iVar2 * 0x28 + 5) >> 6 & 1) == 0)) {
                  *pbVar11 = (byte)uVar12 | 0x80;
                  *pbVar15 = *pbVar15 | 0x40;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

