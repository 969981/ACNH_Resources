
void FUN_035a72e0(ushort *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  
  *(undefined1 *)(param_2 + 4) = 0;
  uVar19 = 0;
  puVar2 = &UNK_04101650;
  if ((param_3 & 1) == 0) {
    puVar2 = &DAT_041015d0;
  }
  do {
    puVar9 = (ushort *)FUN_035a4ae8(param_1,param_2,uVar19 & 0xffffffff);
    if (puVar9 != (ushort *)0x0) {
      bVar3 = puVar2[uVar19];
      *(byte *)(puVar9 + 2) = (byte)puVar9[2] & (bVar3 ^ 0xff);
      if ((bVar3 >> 4 & 1) != 0) {
        uVar12 = (uint)*puVar9;
        uVar17 = *puVar9 - 1;
        uVar4 = *param_1;
        uVar16 = (uint)uVar4;
        iVar10 = *(int *)(param_1 + 6);
        uVar5 = puVar9[1];
        uVar14 = (uint)uVar5;
        uVar18 = uVar17 & 0xffff;
        uVar15 = ((uint)uVar4 + iVar10) - 1;
        if (((uVar4 < uVar18 || uVar4 == uVar18) && ((uVar17 & 0xffff) <= (uVar15 & 0xffff))) &&
           (uVar6 = param_1[1], uVar6 <= uVar5)) {
          if (((((uint)uVar5 <= (((uint)uVar6 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
               (iVar7 = uVar18 - uVar4, -1 < iVar7)) &&
              ((iVar7 < iVar10 &&
               ((iVar8 = (uint)uVar5 - (uint)uVar6, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 8)))))
              )) && (*(long *)(param_1 + 0x10) != 0)) {
            lVar11 = *(long *)(param_1 + 0x10) + (long)(iVar7 + iVar8 * iVar10) * 0x28;
            *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) & 0xfd;
            uVar16 = (uint)*param_1;
            iVar10 = *(int *)(param_1 + 6);
            uVar12 = (uint)*puVar9;
            uVar14 = (uint)puVar9[1];
            uVar15 = ((uint)*param_1 + iVar10) - 1;
          }
        }
        uVar18 = uVar12 + 1 & 0xffff;
        if (((uVar16 <= uVar18) && ((uVar12 + 1 & 0xffff) <= (uVar15 & 0xffff))) &&
           (uVar4 = param_1[1], uVar4 <= uVar14)) {
          if (((uVar14 <= (((uint)uVar4 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
              (iVar7 = uVar18 - uVar16, -1 < iVar7)) &&
             (((iVar7 < iVar10 &&
               ((iVar8 = uVar14 - uVar4, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 8))))) &&
              (*(long *)(param_1 + 0x10) != 0)))) {
            lVar11 = *(long *)(param_1 + 0x10) + (long)(iVar7 + iVar8 * iVar10) * 0x28;
            *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) & 0xfe;
            uVar16 = (uint)*param_1;
            iVar10 = *(int *)(param_1 + 6);
            uVar12 = (uint)*puVar9;
            uVar14 = (uint)puVar9[1];
            uVar15 = (uVar16 + iVar10) - 1;
          }
        }
        if ((uVar16 <= uVar12) && (uVar12 <= (uVar15 & 0xffff))) {
          uVar4 = param_1[1];
          uVar18 = uVar14 - 1 & 0xffff;
          if (uVar4 <= uVar18) {
            if (((((uVar18 <= (((uint)uVar4 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                  (iVar7 = uVar12 - uVar16, -1 < iVar7)) && (iVar7 < iVar10)) &&
                ((iVar8 = uVar18 - uVar4, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 8))))) &&
               (*(long *)(param_1 + 0x10) != 0)) {
              lVar11 = *(long *)(param_1 + 0x10) + (long)(iVar7 + iVar8 * iVar10) * 0x28;
              *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) & 0xf7;
              uVar16 = (uint)*param_1;
              iVar10 = *(int *)(param_1 + 6);
              uVar12 = (uint)*puVar9;
              uVar14 = (uint)puVar9[1];
              uVar15 = (uVar16 + iVar10) - 1;
            }
          }
        }
        if ((uVar16 <= uVar12) && (uVar12 <= (uVar15 & 0xffff))) {
          uVar4 = param_1[1];
          uVar18 = uVar14 + 1 & 0xffff;
          if (uVar4 <= uVar18) {
            if ((((uVar18 <= (((uint)uVar4 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                 (iVar7 = uVar12 - uVar16, -1 < iVar7)) && (iVar7 < iVar10)) &&
               (((iVar8 = uVar18 - uVar4, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 8))) &&
                (*(long *)(param_1 + 0x10) != 0)))) {
              lVar11 = *(long *)(param_1 + 0x10) + (long)(iVar7 + iVar8 * iVar10) * 0x28;
              *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) & 0xfb;
              uVar16 = (uint)*param_1;
              iVar10 = *(int *)(param_1 + 6);
              uVar12 = (uint)*puVar9;
              uVar14 = (uint)puVar9[1];
              uVar15 = (uVar16 + iVar10) - 1;
            }
          }
        }
        uVar18 = uVar12 - 1 & 0xffff;
        if ((uVar16 <= uVar18) && ((uVar12 - 1 & 0xffff) <= (uVar15 & 0xffff))) {
          uVar4 = param_1[1];
          uVar17 = uVar14 - 1 & 0xffff;
          if (uVar4 <= uVar17) {
            if ((((uVar17 <= (((uint)uVar4 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                 (iVar7 = uVar18 - uVar16, -1 < iVar7)) && (iVar7 < iVar10)) &&
               (((iVar8 = uVar17 - uVar4, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 8))) &&
                (*(long *)(param_1 + 0x10) != 0)))) {
              lVar11 = *(long *)(param_1 + 0x10) + (long)(iVar7 + iVar8 * iVar10) * 0x28;
              *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) & 0xdf;
              uVar16 = (uint)*param_1;
              iVar10 = *(int *)(param_1 + 6);
              uVar12 = (uint)*puVar9;
              uVar14 = (uint)puVar9[1];
              uVar15 = (uVar16 + iVar10) - 1;
            }
          }
        }
        uVar18 = uVar12 + 1;
        uVar17 = uVar18 & 0xffff;
        if ((uVar16 <= uVar17) && ((uVar18 & 0xffff) <= (uVar15 & 0xffff))) {
          uVar4 = param_1[1];
          uVar1 = uVar14 + 1 & 0xffff;
          if (uVar4 <= uVar1) {
            if (((((uVar1 <= (((uint)uVar4 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                  (iVar7 = uVar17 - uVar16, -1 < iVar7)) && (iVar7 < iVar10)) &&
                ((iVar8 = uVar1 - uVar4, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 8))))) &&
               (*(long *)(param_1 + 0x10) != 0)) {
              lVar11 = *(long *)(param_1 + 0x10) + (long)(iVar7 + iVar8 * iVar10) * 0x28;
              *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) & 0xef;
              uVar12 = (uint)*puVar9;
              uVar16 = (uint)*param_1;
              iVar10 = *(int *)(param_1 + 6);
              uVar14 = (uint)puVar9[1];
              uVar18 = uVar12 + 1;
              uVar17 = uVar18 & 0xffff;
              uVar15 = (uVar16 + iVar10) - 1;
            }
          }
        }
        if (((uVar18 & 0xffff) <= (uVar15 & 0xffff)) && (uVar16 <= (uVar18 & 0xffff))) {
          uVar4 = param_1[1];
          uVar18 = uVar14 - 1 & 0xffff;
          if (uVar4 <= uVar18) {
            if ((((uVar18 <= (((uint)uVar4 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                 (iVar7 = uVar17 - uVar16, -1 < iVar7)) && (iVar7 < iVar10)) &&
               (((iVar8 = uVar18 - uVar4, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 8))) &&
                (*(long *)(param_1 + 0x10) != 0)))) {
              lVar11 = *(long *)(param_1 + 0x10) + (long)(iVar7 + iVar8 * iVar10) * 0x28;
              *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) & 0x7f;
              uVar16 = (uint)*param_1;
              iVar10 = *(int *)(param_1 + 6);
              uVar12 = (uint)*puVar9;
              uVar14 = (uint)puVar9[1];
              uVar15 = (uVar16 + iVar10) - 1;
            }
          }
        }
        uVar18 = uVar12 - 1 & 0xffff;
        if ((uVar16 <= uVar18) && ((uVar12 - 1 & 0xffff) <= (uVar15 & 0xffff))) {
          uVar4 = param_1[1];
          uVar17 = uVar14 + 1 & 0xffff;
          if (uVar4 <= uVar17) {
            if ((((uVar17 <= (((uint)uVar4 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                 (iVar7 = uVar18 - uVar16, -1 < iVar7)) && (iVar7 < iVar10)) &&
               (((iVar8 = uVar17 - uVar4, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 8))) &&
                (*(long *)(param_1 + 0x10) != 0)))) {
              lVar11 = *(long *)(param_1 + 0x10) + (long)(iVar7 + iVar8 * iVar10) * 0x28;
              *(byte *)(lVar11 + 4) = *(byte *)(lVar11 + 4) & 0xbf;
            }
          }
        }
      }
      if ((param_3 & 1) == 0) {
        if ((int)uVar19 == 3) {
          pbVar13 = &DAT_0418f48a;
        }
        else {
          if ((int)uVar19 != 1) goto LAB_035a7350;
          pbVar13 = &DAT_0418f489;
        }
      }
      else {
        pbVar13 = &DAT_0418f488;
        if (uVar19 != 5) goto LAB_035a7350;
      }
      bVar3 = *pbVar13;
      uVar18 = 0;
      do {
        if (((bVar3 >> (ulong)(uVar18 & 0x1f) & 1) == 0) || (7 < uVar18)) goto LAB_035a7880;
        uVar17 = (uint)*puVar9;
        uVar15 = (uint)puVar9[1];
        switch(uVar18) {
        case 0:
          uVar17 = uVar17 - 1;
          break;
        case 1:
          uVar17 = uVar17 + 1;
          break;
        case 2:
          uVar15 = uVar15 - 1;
          break;
        case 3:
          goto switchD_035a78b4_caseD_3;
        case 4:
          uVar17 = uVar17 - 1;
          uVar15 = uVar15 - 1;
          break;
        case 5:
          uVar17 = uVar17 + 1;
          goto switchD_035a78b4_caseD_3;
        case 6:
          uVar17 = uVar17 + 1;
          uVar15 = uVar15 - 1;
          break;
        case 7:
          uVar17 = uVar17 - 1;
switchD_035a78b4_caseD_3:
          uVar15 = uVar15 + 1;
        }
        uVar4 = *param_1;
        if ((uint)uVar4 <= (uVar17 & 0xffff)) {
          iVar10 = *(int *)(param_1 + 6);
          if ((uVar17 & 0xffff) <= (((uint)uVar4 + iVar10) - 1 & 0xffff)) {
            uVar5 = param_1[1];
            uVar15 = uVar15 & 0xffff;
            if (uVar5 <= uVar15) {
              if (((((uVar15 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
                    (iVar7 = (uVar17 & 0xffff) - (uint)uVar4, -1 < iVar7)) && (iVar7 < iVar10)) &&
                  ((iVar8 = uVar15 - uVar5, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 8))))) &&
                 (*(long *)(param_1 + 0x10) != 0)) {
                uVar17 = uVar18 - 1;
                if ((uVar18 & 1) == 0) {
                  uVar17 = uVar18 + 1;
                }
                lVar11 = *(long *)(param_1 + 0x10) + (long)(iVar7 + iVar8 * iVar10) * 0x28;
                *(byte *)(lVar11 + 4) =
                     *(byte *)(lVar11 + 4) & ((byte)(1 << (ulong)(uVar17 & 0x1f)) ^ 0xff);
              }
            }
          }
        }
LAB_035a7880:
        uVar18 = uVar18 + 1;
      } while (uVar18 != 8);
    }
LAB_035a7350:
    uVar19 = uVar19 + 1;
    if (uVar19 == 8) {
      return;
    }
  } while( true );
}

