
void FUN_007b3ecc(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long lStack_38;
  
  if (param_2 != 0 || param_3 != 0) {
    lVar5 = *param_1;
    lVar6 = param_1[1];
    bVar7 = lVar5 == 0;
    bVar8 = lVar6 == 0;
    if (((lVar5 == 0 && lVar6 == 0) || (lVar5 != param_2)) || (lVar6 != param_3)) {
      lVar5 = param_1[5];
      lVar6 = param_1[6];
      bVar9 = lVar5 != 0;
      bVar10 = lVar6 != 0;
      if (((lVar5 == 0 && lVar6 == 0) || (lVar5 != param_2)) || (lVar6 != param_3)) {
        lVar5 = param_1[10];
        lVar6 = param_1[0xb];
        bVar11 = lVar5 != 0;
        bVar12 = lVar6 != 0;
        if (((lVar5 == 0 && lVar6 == 0) || (lVar5 != param_2)) || (lVar6 != param_3)) {
          lVar5 = param_1[0xf];
          lVar6 = param_1[0x10];
          bVar13 = lVar5 != 0;
          bVar14 = lVar6 != 0;
          if (((lVar5 == 0 && lVar6 == 0) || (lVar5 != param_2)) || (lVar6 != param_3)) {
            lVar5 = param_1[0x14];
            lVar6 = param_1[0x15];
            bVar15 = lVar5 != 0;
            bVar16 = lVar6 != 0;
            if (((lVar5 == 0 && lVar6 == 0) || (lVar5 != param_2)) || (lVar6 != param_3)) {
              lVar5 = param_1[0x19];
              lVar6 = param_1[0x1a];
              bVar17 = lVar5 != 0;
              bVar18 = lVar6 != 0;
              if (((lVar5 == 0 && lVar6 == 0) || (lVar5 != param_2)) || (lVar6 != param_3)) {
                lVar5 = param_1[0x1e];
                lVar6 = param_1[0x1f];
                bVar19 = lVar5 != 0;
                bVar20 = lVar6 != 0;
                if (((lVar5 == 0 && lVar6 == 0) || (lVar5 != param_2)) || (lVar6 != param_3)) {
                  lVar5 = param_1[0x23];
                  lVar6 = param_1[0x24];
                  if (((lVar5 == 0 && lVar6 == 0) || (lVar5 != param_2)) || (lVar6 != param_3)) {
                    plVar2 = param_1 + 5;
                    if (bVar9 || bVar10) {
                      plVar2 = param_1 + 10;
                    }
                    plVar4 = param_1;
                    if (!bVar7 || !bVar8) {
                      plVar4 = plVar2;
                    }
                    uVar1 = 2;
                    if (bVar11 || bVar12) {
                      uVar1 = 3;
                    }
                    uVar3 = (ulong)((bVar7 && bVar8) ^ 1);
                    if ((!bVar7 || !bVar8) && (bVar9 || bVar10)) {
                      uVar3 = uVar1;
                    }
                    plVar2 = param_1 + 0xf;
                    if (bVar13 || bVar14) {
                      plVar2 = param_1 + 0x14;
                    }
                    if (((!bVar7 || !bVar8) && (bVar9 || bVar10)) && (bVar11 || bVar12)) {
                      plVar4 = plVar2;
                    }
                    uVar1 = 4;
                    if (bVar15 || bVar16) {
                      uVar1 = 5;
                    }
                    if ((((!bVar7 || !bVar8) && (bVar9 || bVar10)) && (bVar11 || bVar12)) &&
                        (bVar13 || bVar14)) {
                      uVar3 = uVar1;
                    }
                    plVar2 = param_1 + 0x19;
                    if (bVar17 || bVar18) {
                      plVar2 = param_1 + 0x1e;
                    }
                    if (((((!bVar7 || !bVar8) && (bVar9 || bVar10)) && (bVar11 || bVar12)) &&
                        (bVar13 || bVar14)) && (bVar15 || bVar16)) {
                      plVar4 = plVar2;
                    }
                    uVar1 = 6;
                    if (bVar19 || bVar20) {
                      uVar1 = 7;
                    }
                    if ((((((!bVar7 || !bVar8) && (bVar9 || bVar10)) && (bVar11 || bVar12)) &&
                         (bVar13 || bVar14)) && (bVar15 || bVar16)) && (bVar17 || bVar18)) {
                      uVar3 = uVar1;
                    }
                    if (((((((!bVar7 || !bVar8) && (bVar9 || bVar10)) && (bVar11 || bVar12)) &&
                          (bVar13 || bVar14)) && (bVar15 || bVar16)) && (bVar17 || bVar18)) &&
                        (bVar19 || bVar20)) {
                      plVar4 = param_1 + 0x23;
                    }
                    if ((((((((bVar7 && bVar8 || !bVar9 && !bVar10) || !bVar11 && !bVar12) ||
                            !bVar13 && !bVar14) || !bVar15 && !bVar16) || !bVar17 && !bVar18) ||
                         !bVar19 && !bVar20) || lVar5 == 0 && lVar6 == 0) &&
                       (local_40 = param_2, lStack_38 = param_3,
                       iVar21 = nn::account::OpenUser((UserHandle *)&local_58,(Uid *)&local_40),
                       iVar21 == 0)) {
                      *plVar4 = local_40;
                      plVar4[1] = lStack_38;
                      param_1[uVar3 * 5 + 2] = local_58;
                      param_1[uVar3 * 5 + 3] = lStack_50;
                      param_1[uVar3 * 5 + 4] = local_48;
                    }
                  }
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

