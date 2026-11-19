
undefined8 FUN_039c7a34(long param_1,float *param_2,float *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar7 = *(long *)(param_1 + 0x248);
  if (*(float *)(lVar7 + 800) < *(float *)(lVar7 + 0x348)) {
    if (*(float *)(lVar7 + 0x324) < *(float *)(lVar7 + 0x34c)) {
      if (*(float *)(lVar7 + 0x328) < *(float *)(lVar7 + 0x350)) {
        if (*(int *)(lVar7 + 0x2c0) == 0) {
          return 0;
        }
        if (*(int *)(lVar7 + 0x2c8) < 1) {
          return 0;
        }
        if (((((*param_3 < *(float *)(lVar7 + 800)) || (*(float *)(lVar7 + 0x348) < *param_3)) ||
             (param_3[2] < *(float *)(lVar7 + 0x328))) ||
            ((*(float *)(lVar7 + 0x350) < param_3[2] || (param_3[1] < *(float *)(lVar7 + 0x324)))))
           || (*(float *)(lVar7 + 0x34c) < param_3[1])) {
          lVar7 = *(long *)(param_1 + 0x250);
          if ((lVar7 != 0) && (*(int *)(lVar7 + 0x28) == 3)) {
            fVar12 = *(float *)(lVar7 + 0x268);
            param_2[9] = 0.0;
            param_2[10] = 0.0;
            param_2[0x11] = 0.0;
            param_2[0x12] = 0.0;
            fVar13 = fVar12 * 0.0;
            param_2[0x19] = 0.0;
            param_2[0x1a] = 0.0;
            param_2[0x17] = 0.0;
            param_2[0x18] = 0.0;
            param_2[0x15] = 0.0;
            param_2[0x16] = 0.0;
            param_2[0x13] = 0.0;
            param_2[0x14] = 0.0;
            param_2[0xf] = 0.0;
            param_2[0x10] = 0.0;
            param_2[0xd] = 0.0;
            param_2[0xe] = 0.0;
            param_2[0xb] = 0.0;
            param_2[0xc] = 0.0;
            param_2[7] = 0.0;
            param_2[8] = 0.0;
            param_2[5] = 0.0;
            param_2[6] = 0.0;
            param_2[3] = 0.0;
            param_2[4] = 0.0;
            param_2[1] = 0.0;
            param_2[2] = 0.0;
            param_2[0x12] = fVar12;
            *param_2 = fVar13;
            param_2[9] = fVar13;
            return 1;
          }
        }
        else {
          FUN_038e2e80(lVar7 + 0x3b8);
          lVar7 = *(long *)(param_1 + 0x248);
          uVar2 = *(uint *)(lVar7 + 0x2c0);
          if (0 < (int)uVar2) {
            uVar9 = 0;
            do {
              lVar7 = *(long *)(*(long *)(param_1 + 0x248) + 0x2d0);
              uVar1 = uVar9;
              if (*(uint *)(*(long *)(param_1 + 0x248) + 0x2c8) <= uVar9) {
                uVar1 = 0;
              }
              lVar6 = lVar7 + (ulong)uVar1 * 0x338;
              if (*(int *)(lVar6 + 0x210) != 0 && *(int *)(lVar6 + 0x2e8) != 0) {
                lVar8 = lVar7 + (ulong)uVar1 * 0x338;
                fVar12 = *(float *)(lVar8 + 0x120);
                fVar13 = *(float *)(lVar8 + 0x148);
                if (fVar12 < fVar13) {
                  lVar8 = lVar7 + (ulong)uVar1 * 0x338;
                  fVar10 = *(float *)(lVar8 + 0x124);
                  fVar11 = *(float *)(lVar8 + 0x14c);
                  if (fVar10 < fVar11) {
                    lVar7 = lVar7 + (ulong)uVar1 * 0x338;
                    fVar14 = *(float *)(lVar7 + 0x128);
                    fVar15 = *(float *)(lVar7 + 0x150);
                    if (fVar14 < fVar15) {
                      fVar16 = *param_3;
                      bVar3 = false;
                      bVar4 = true;
                      if (fVar12 <= fVar16) {
                        bVar3 = false;
                        bVar4 = true;
                        if (!NAN(fVar16) && !NAN(fVar13)) {
                          bVar3 = fVar16 == fVar13;
                          bVar4 = fVar13 <= fVar16;
                        }
                      }
                      if (!bVar4 || bVar3) {
                        fVar12 = param_3[2];
                        bVar3 = false;
                        bVar4 = true;
                        if (fVar14 <= fVar12) {
                          bVar3 = false;
                          bVar4 = true;
                          if (!NAN(fVar12) && !NAN(fVar15)) {
                            bVar3 = fVar12 == fVar15;
                            bVar4 = fVar15 <= fVar12;
                          }
                        }
                        if (!bVar4 || bVar3) {
                          fVar12 = param_3[1];
                          bVar3 = false;
                          bVar4 = true;
                          if (fVar10 <= fVar12) {
                            bVar3 = false;
                            bVar4 = true;
                            if (!NAN(fVar12) && !NAN(fVar11)) {
                              bVar3 = fVar12 == fVar11;
                              bVar4 = fVar11 <= fVar12;
                            }
                          }
                          if (!bVar4 || bVar3) {
                            if (param_4 == 0) {
                              iVar5 = FUN_039c82c0(param_1,param_2,lVar6,uVar9,param_3);
                            }
                            else {
                              if (param_4 != 1) goto LAB_039c7b08;
                              iVar5 = FUN_039c7d60(param_1,param_2,lVar6,uVar9,param_3);
                            }
                            if (-1 < iVar5) {
                              lVar7 = *(long *)(param_1 + 0x250);
                              if ((lVar7 != 0) && (*(int *)(lVar7 + 0x28) == 3)) {
                                if (uVar2 == 1) {
                                  fVar12 = 1.0;
                                  fVar13 = 0.0;
                                }
                                else if (uVar2 == 2) {
                                  fVar13 = 0.0;
                                  if (uVar9 != 0) {
                                    fVar13 = 1.0;
                                  }
                                  fVar12 = 1.0;
                                  if (uVar9 != 0) {
                                    fVar12 = 0.0;
                                  }
                                }
                                else if (uVar2 - 1 == uVar9) {
                                  fVar12 = 0.0;
                                  fVar13 = 1.0;
                                }
                                else {
                                  fVar12 = 1.0;
                                  fVar13 = 1.0;
                                  if ((uVar9 & 1) != 0) {
                                    fVar13 = 0.0;
                                  }
                                }
                                fVar10 = *(float *)(lVar7 + 0x268);
                                param_2[9] = 0.0;
                                param_2[10] = 0.0;
                                param_2[0x11] = 0.0;
                                param_2[0x12] = 0.0;
                                param_2[0x19] = 0.0;
                                param_2[0x1a] = 0.0;
                                param_2[0x17] = 0.0;
                                param_2[0x18] = 0.0;
                                param_2[0x15] = 0.0;
                                param_2[0x16] = 0.0;
                                param_2[0x13] = 0.0;
                                param_2[0x14] = 0.0;
                                param_2[0xf] = 0.0;
                                param_2[0x10] = 0.0;
                                param_2[0xd] = 0.0;
                                param_2[0xe] = 0.0;
                                param_2[0xb] = 0.0;
                                param_2[0xc] = 0.0;
                                param_2[7] = 0.0;
                                param_2[8] = 0.0;
                                param_2[5] = 0.0;
                                param_2[6] = 0.0;
                                param_2[3] = 0.0;
                                param_2[4] = 0.0;
                                param_2[1] = 0.0;
                                param_2[2] = 0.0;
                                *param_2 = fVar13 * fVar10;
                                param_2[9] = fVar12 * fVar10;
                                param_2[0x12] = fVar10 * 0.0;
                              }
                              FUN_038e2f30(*(long *)(param_1 + 0x248) + 0x3b8);
                              return 1;
                            }
                            if ((iVar5 == -2) && (*(char *)(param_1 + 0x260) != '\0')) break;
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_039c7b08:
              uVar9 = uVar9 + 1;
            } while (uVar2 != uVar9);
            lVar7 = *(long *)(param_1 + 0x248);
          }
          FUN_038e2f30(lVar7 + 0x3b8);
        }
      }
    }
  }
  return 0;
}

