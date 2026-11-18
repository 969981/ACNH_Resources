
void FUN_03642060(uint *param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  
  bVar10 = param_1[0x1a] != 0;
  bVar11 = (char)param_1[0xc] != '\0';
  bVar12 = bVar10 && bVar11;
  if ((bVar10 && bVar11) && param_1[4] == 0) {
    uVar17 = param_1[1];
    uVar18 = param_2 - uVar17;
    uVar23 = param_2;
    if (uVar17 <= param_2 && uVar18 != 0) {
      uVar17 = *param_1;
      uVar19 = param_1[5];
      if (param_1[3] == 0) {
        if (uVar19 != 0) {
          uVar19 = uVar19 - 1;
          param_1[5] = uVar19;
        }
        for (; uVar23 = uVar18, uVar17 < uVar18; uVar18 = uVar18 - uVar17) {
          if (uVar19 != 0) {
            uVar19 = uVar19 - 1;
            param_1[5] = uVar19;
          }
        }
      }
      else {
        if (uVar19 < 0x20) {
          uVar19 = uVar19 + 1;
          param_1[5] = uVar19;
        }
        for (; uVar23 = uVar18, uVar17 < uVar18; uVar18 = uVar18 - uVar17) {
          if (uVar19 < 0x20) {
            uVar19 = uVar19 + 1;
            param_1[5] = uVar19;
          }
        }
      }
    }
    param_1[1] = uVar17 - uVar23;
  }
  if (bVar10 && bVar11) {
    bVar12 = param_1[10] == 0;
  }
  cVar7 = (char)param_1[0x17];
  uVar17 = param_1[0x12];
  bVar10 = (char)param_1[0x11] != '\0';
  bVar11 = (char)param_1[0x1b] == '\0';
  if (param_2 != 0) {
    uVar23 = param_1[0xd];
    uVar20 = param_1[0xe];
    uVar18 = param_1[0xb];
    uVar5 = param_1[6];
    uVar21 = param_1[7];
    uVar13 = param_1[0x13];
    uVar19 = param_1[0xf];
    uVar6 = param_1[0x10];
    uVar15 = param_1[0x14];
    uVar14 = param_1[0x15];
    do {
      uVar16 = param_2;
      if (uVar23 != 0 && (bVar10 && bVar11)) {
        uVar8 = 0;
        if (uVar23 != 0) {
          uVar8 = ((uVar23 - uVar20) + 0xffff) / uVar23;
        }
        if (uVar8 <= param_2) {
          uVar16 = uVar8;
        }
      }
      if (cVar7 != '\0' && uVar17 != 0) {
        uVar8 = 0;
        if (uVar17 != 0) {
          uVar8 = ((uVar17 + 0xffff) - uVar13) / uVar17;
        }
        if (uVar8 <= uVar16) {
          uVar16 = uVar8;
        }
      }
      uVar8 = uVar16;
      if (uVar21 + 1 <= uVar16) {
        uVar8 = uVar21 + 1;
      }
      uVar3 = uVar8;
      if (!bVar12) {
        uVar3 = uVar16;
      }
      if (uVar23 != 0 && (bVar10 && bVar11)) {
        uVar20 = uVar20 + uVar3 * uVar23;
        if (0xffff < uVar20) {
          uVar16 = (uVar20 - 0x10000 >> 0x10) + 1;
          if (0x6ffff < uVar20 - 0x10000) {
            uVar24 = uVar16 & 0x1fff8;
            do {
              uVar24 = uVar24 - 8;
              uVar19 = uVar19 + 8 & 0x3f;
            } while (uVar24 != 0);
          }
          uVar16 = uVar16 & 7;
          if (uVar16 != 0) {
            iVar22 = -uVar16;
            do {
              bVar9 = iVar22 != -1;
              iVar22 = iVar22 + 1;
              uVar19 = uVar19 + 1 & 0x3f;
            } while (bVar9);
          }
          uVar20 = uVar20 & 0xffff;
          param_1[0xf] = uVar19;
        }
        param_1[0xe] = uVar20;
      }
      if (bVar12) {
        uVar16 = uVar8 - uVar21;
        if (uVar8 < uVar21 || uVar16 == 0) {
          uVar21 = uVar21 - uVar8;
          param_1[7] = uVar21;
        }
        else {
          if (param_1[9] == 0) {
            if (uVar18 != 0) {
              uVar18 = uVar18 - 1;
              param_1[0xb] = uVar18;
            }
            if (uVar5 < uVar16) {
              iVar22 = 1;
              uVar21 = uVar18;
              do {
                if (uVar21 != 0) {
                  uVar18 = uVar21 - 1;
                  param_1[0xb] = uVar18;
                  uVar21 = uVar18;
                }
                uVar16 = uVar16 - uVar5;
                iVar22 = iVar22 + 1;
              } while (uVar5 < uVar16);
              goto LAB_03642300;
            }
LAB_036422f4:
            uVar21 = uVar5 - uVar16;
            param_1[7] = uVar21;
          }
          else {
            if (uVar18 < 0x20) {
              uVar18 = uVar18 + 1;
              param_1[0xb] = uVar18;
            }
            if (uVar16 <= uVar5) goto LAB_036422f4;
            iVar22 = 1;
            do {
              if (uVar18 < 0x20) {
                uVar18 = uVar18 + 1;
                param_1[0xb] = uVar18;
              }
              uVar16 = uVar16 - uVar5;
              iVar22 = iVar22 + 1;
            } while (uVar5 < uVar16);
LAB_03642300:
            uVar21 = uVar5 - uVar16;
            param_1[7] = uVar21;
            if (iVar22 == 0) goto LAB_03642374;
          }
          uVar23 = uVar6;
          if (cVar7 != '\0') {
            uVar16 = uVar18 * uVar14;
            uVar23 = uVar16 + 0xf;
            if (-1 < (int)uVar16) {
              uVar23 = uVar16;
            }
            iVar22 = (int)uVar23 >> 4;
            iVar2 = iVar22 + 2;
            if ((uVar14 & 0x80000000) != 0) {
              iVar2 = iVar22 + -1;
            }
            if ((uVar16 & 0xf) != 0) {
              iVar22 = iVar2;
            }
            iVar2 = iVar22 + -0x102;
            if (iVar22 < 0xc2) {
              iVar2 = iVar22;
            }
            iVar22 = iVar2 + 0x100;
            if (-0x41 < iVar2) {
              iVar22 = iVar2;
            }
            iVar22 = iVar22 * uVar6;
            iVar2 = iVar22 + 0x3f;
            if (-1 < iVar22) {
              iVar2 = iVar22;
            }
            uVar23 = uVar6 + (iVar2 >> 6);
          }
          param_1[0xd] = uVar23;
        }
      }
LAB_03642374:
      if (cVar7 != '\0' && uVar17 != 0) {
        uVar13 = uVar13 + uVar3 * uVar17;
        if (0xffff < uVar13) {
          iVar22 = (uVar13 - 0x10000 >> 0x10) + 1;
          do {
            uVar1 = (ulong)uVar15;
            uVar15 = uVar15 + 1 & 0x3f;
            uVar23 = (uint)*(byte *)((long)param_1 + uVar1 + 0xbc);
            iVar2 = uVar14 + uVar23;
            uVar14 = 0;
            if (uVar23 != 7) {
              uVar14 = iVar2 * 0x2000000 >> 0x19;
            }
            uVar16 = uVar14 * uVar18;
            uVar23 = uVar16 + 0xf;
            if (-1 < (int)uVar16) {
              uVar23 = uVar16;
            }
            iVar2 = (int)uVar23 >> 4;
            iVar4 = iVar2 + 2;
            if ((uVar14 & 0x80000000) != 0) {
              iVar4 = iVar2 + -1;
            }
            if ((uVar16 & 0xf) != 0) {
              iVar2 = iVar4;
            }
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          param_1[0x14] = uVar15;
          param_1[0x15] = uVar14;
          iVar22 = iVar2 + -0x102;
          if (iVar2 < 0xc2) {
            iVar22 = iVar2;
          }
          uVar13 = uVar13 & 0xffff;
          iVar2 = iVar22 + 0x100;
          if (-0x41 < iVar22) {
            iVar2 = iVar22;
          }
          iVar2 = iVar2 * uVar6;
          iVar22 = iVar2 + 0x3f;
          if (-1 < iVar2) {
            iVar22 = iVar2;
          }
          uVar23 = uVar6 + (iVar22 >> 6);
          param_1[0xd] = uVar23;
        }
        param_1[0x13] = uVar13;
      }
      param_2 = param_2 - uVar3;
    } while (param_2 != 0);
  }
  return;
}

