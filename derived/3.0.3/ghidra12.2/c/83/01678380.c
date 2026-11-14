
/* WARNING: Removing unreachable block (ram,0x01678590) */
/* WARNING: Removing unreachable block (ram,0x01678470) */
/* WARNING: Removing unreachable block (ram,0x0167857c) */
/* WARNING: Removing unreachable block (ram,0x01678468) */

void FUN_01678380(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  char cVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  
  iVar9 = DAT_05233984;
  iVar8 = DAT_05233980;
  iVar7 = DAT_05233974;
  puVar6 = PTR_DAT_04bb27a8;
  if (DAT_05233970 <= DAT_05233980) {
    lVar11 = *(long *)PTR_DAT_04bb27a8;
    iVar2 = DAT_05233984 + -2;
    uVar1 = DAT_05233984 << 7;
    fVar21 = (float)DAT_05233984 * 0.5;
    uVar10 = 0;
    if (fVar21 != (float)(int)fVar21) {
      uVar10 = (uint)(fVar21 < 0.0);
    }
    iVar15 = DAT_05233970;
    do {
      fVar22 = (float)iVar15 * 0.5;
      uVar12 = 0;
      if (fVar22 != (float)(int)fVar22) {
        uVar12 = (uint)(fVar22 < 0.0);
      }
      iVar4 = (int)fVar22 - uVar12;
      cVar13 = '\0';
      if (*(long *)(lVar11 + 0x38) != 0) {
        lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + 0xb0);
        cVar13 = '\0';
        if (lVar14 != 0) {
          uVar12 = iVar4 - *(int *)(lVar14 + 0x28);
          uVar19 = *(uint *)(lVar14 + 0x18);
          uVar20 = ((int)fVar21 - uVar10) - *(int *)(lVar14 + 0x2c);
          if ((uVar12 < uVar19 && uVar20 <= *(uint *)(lVar14 + 0x1c)) &&
              (uVar19 <= uVar12 || *(uint *)(lVar14 + 0x1c) != uVar20)) {
            uVar12 = uVar12 + uVar19 * uVar20;
LAB_016784e4:
            if (*(uint *)(lVar14 + 0x30) <= uVar12) {
              uVar12 = 0;
            }
            puVar17 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar12 * 0x68);
          }
          else if (*(char *)(lVar14 + 0x88) == '\0') {
            puVar17 = &DAT_051a50f0;
          }
          else {
            uVar12 = iVar4 - *(int *)(lVar14 + 0x98);
            uVar19 = ((int)fVar21 - uVar10) - *(int *)(lVar14 + 0x9c);
            puVar17 = &DAT_051a50f0;
            if (uVar12 < *(uint *)(lVar14 + 0xa0) && uVar19 < *(uint *)(lVar14 + 0xa4)) {
              uVar12 = uVar12 + *(uint *)(lVar14 + 0xa0) * uVar19 + *(int *)(lVar14 + 0x8c);
              goto LAB_016784e4;
            }
          }
          cVar13 = *(char *)(puVar17 + 2);
        }
      }
      if (iVar7 <= iVar2) {
        iVar16 = iVar9;
        uVar12 = uVar1;
        do {
          fVar22 = (float)(iVar16 + -2) * 0.5;
          uVar19 = 0;
          if (fVar22 != (float)(int)fVar22) {
            uVar19 = (uint)(fVar22 < 0.0);
          }
          if (*(long *)(lVar11 + 0x38) == 0) {
            cVar18 = '\0';
          }
          else {
            lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + 0xb0);
            cVar18 = '\0';
            if (lVar14 != 0) {
              uVar20 = iVar4 - *(int *)(lVar14 + 0x28);
              if ((uVar20 < *(uint *)(lVar14 + 0x18)) &&
                 (uVar5 = ((int)fVar22 - uVar19) - *(int *)(lVar14 + 0x2c),
                 uVar5 < *(uint *)(lVar14 + 0x1c))) {
                uVar20 = uVar20 + *(uint *)(lVar14 + 0x18) * uVar5;
LAB_0167861c:
                if (*(uint *)(lVar14 + 0x30) <= uVar20) {
                  uVar20 = 0;
                }
                puVar17 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar20 * 0x68);
              }
              else {
                if (*(char *)(lVar14 + 0x88) != '\0') {
                  uVar20 = iVar4 - *(int *)(lVar14 + 0x98);
                  if (uVar20 < *(uint *)(lVar14 + 0xa0)) {
                    uVar19 = ((int)fVar22 - uVar19) - *(int *)(lVar14 + 0x9c);
                    puVar17 = &DAT_051a50f0;
                    if (uVar19 < *(uint *)(lVar14 + 0xa4)) {
                      uVar20 = uVar20 + *(uint *)(lVar14 + 0xa0) * uVar19 + *(int *)(lVar14 + 0x8c);
                      goto LAB_0167861c;
                    }
                    goto LAB_01678638;
                  }
                }
                puVar17 = &DAT_051a50f0;
              }
LAB_01678638:
              cVar18 = *(char *)(puVar17 + 2);
            }
          }
          if (((((cVar18 != '\x04') && (cVar13 != '\x04')) && (cVar18 < cVar13)) &&
              ((DAT_05233970 <= iVar15 && (iVar15 <= DAT_05233980)))) &&
             ((DAT_05233974 <= iVar16 &&
              ((iVar16 <= DAT_05233984 &&
               (uVar19 = (uVar12 & 0xffffff00) + (iVar15 >> 1), uVar19 >> 0xf == 0)))))) {
            lVar11 = (ulong)(uVar19 >> 5) * 4;
            *(uint *)(param_1 + 0x3020 + lVar11) =
                 *(uint *)(param_1 + 0x3020 + lVar11) | 1 << (ulong)(iVar15 >> 1 & 0x1f);
            lVar11 = *(long *)puVar6;
          }
          iVar3 = iVar16 + -4;
          uVar12 = uVar12 - 0x100;
          iVar16 = iVar16 + -2;
          cVar13 = cVar18;
        } while (iVar7 <= iVar3);
      }
      iVar15 = iVar15 + 2;
    } while (iVar15 <= iVar8);
  }
  return;
}

