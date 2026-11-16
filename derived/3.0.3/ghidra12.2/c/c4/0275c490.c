
void FUN_0275c490(long param_1,int param_2,long param_3,uint param_4)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  short *psVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar6 = param_2 * 0x1e;
  uVar7 = (ulong)uVar6;
  if ((param_4 & 1) != 0) {
    psVar1 = (short *)(param_1 + 0x23c);
    psVar8 = psVar1 + uVar6;
    if (0xef < uVar6) {
      psVar8 = psVar1;
    }
    iVar3 = *(int *)(param_3 + 8);
    iVar4 = *(int *)(param_3 + 0xc);
    psVar2 = psVar1 + (uVar6 | 1);
    if (0xef < (uVar6 | 1)) {
      psVar2 = psVar1;
    }
    if (iVar3 == *psVar8 && iVar4 == *psVar2) {
      return;
    }
    uVar11 = uVar7 + 2 & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 2);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if (iVar3 == psVar1[uVar11] && iVar4 == psVar1[uVar10]) {
      return;
    }
    uVar11 = uVar7 + 4 & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 4);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 6 & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 6);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 8 & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 8);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 10 & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 10);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 0xc & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 0xc);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 0xe & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 0xe);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 0x10 & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 0x10);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 0x12 & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 0x12);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 0x14 & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 0x14);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 0x16 & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 0x16);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 0x18 & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 0x18);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 0x1a & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 0x1a);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
    uVar11 = uVar7 + 0x1c & 0xfffffffe;
    uVar9 = (uint)(uVar7 + 0x1c);
    uVar5 = uVar9 | 1;
    uVar10 = (ulong)uVar5;
    if (0xef < uVar9) {
      uVar11 = 0;
    }
    if (0xef < uVar5) {
      uVar10 = 0;
    }
    if ((iVar3 == psVar1[uVar11]) && (iVar4 == psVar1[uVar10])) {
      return;
    }
  }
  psVar1 = (short *)(param_1 + 0x23c);
  psVar8 = psVar1 + uVar7;
  if (0xef < uVar6) {
    psVar8 = psVar1;
  }
  if (*psVar8 != -1) {
    uVar5 = uVar6 + 2;
    uVar7 = (ulong)uVar5;
    if (0xef < uVar5) {
      uVar7 = 0;
    }
    psVar8 = psVar1 + uVar5;
    if (0xef < uVar5) {
      psVar8 = psVar1;
    }
    if (psVar1[uVar7] != -1) {
      uVar5 = uVar6 + 4;
      uVar7 = (ulong)uVar5;
      if (0xef < uVar5) {
        uVar7 = 0;
      }
      psVar8 = psVar1 + uVar5;
      if (0xef < uVar5) {
        psVar8 = psVar1;
      }
      if (psVar1[uVar7] != -1) {
        uVar5 = uVar6 + 6;
        uVar7 = (ulong)uVar5;
        if (0xef < uVar5) {
          uVar7 = 0;
        }
        psVar8 = psVar1 + uVar5;
        if (0xef < uVar5) {
          psVar8 = psVar1;
        }
        if (psVar1[uVar7] != -1) {
          uVar5 = uVar6 + 8;
          uVar7 = (ulong)uVar5;
          if (0xef < uVar5) {
            uVar7 = 0;
          }
          psVar8 = psVar1 + uVar5;
          if (0xef < uVar5) {
            psVar8 = psVar1;
          }
          if (psVar1[uVar7] != -1) {
            uVar5 = uVar6 + 10;
            uVar7 = (ulong)uVar5;
            if (0xef < uVar5) {
              uVar7 = 0;
            }
            psVar8 = psVar1 + uVar5;
            if (0xef < uVar5) {
              psVar8 = psVar1;
            }
            if (psVar1[uVar7] != -1) {
              uVar5 = uVar6 + 0xc;
              uVar7 = (ulong)uVar5;
              if (0xef < uVar5) {
                uVar7 = 0;
              }
              psVar8 = psVar1 + uVar5;
              if (0xef < uVar5) {
                psVar8 = psVar1;
              }
              if (psVar1[uVar7] != -1) {
                uVar5 = uVar6 + 0xe;
                uVar7 = (ulong)uVar5;
                if (0xef < uVar5) {
                  uVar7 = 0;
                }
                psVar8 = psVar1 + uVar5;
                if (0xef < uVar5) {
                  psVar8 = psVar1;
                }
                if (psVar1[uVar7] != -1) {
                  uVar5 = uVar6 + 0x10;
                  uVar7 = (ulong)uVar5;
                  if (0xef < uVar5) {
                    uVar7 = 0;
                  }
                  psVar8 = psVar1 + uVar5;
                  if (0xef < uVar5) {
                    psVar8 = psVar1;
                  }
                  if (psVar1[uVar7] != -1) {
                    uVar5 = uVar6 + 0x12;
                    uVar7 = (ulong)uVar5;
                    if (0xef < uVar5) {
                      uVar7 = 0;
                    }
                    psVar8 = psVar1 + uVar5;
                    if (0xef < uVar5) {
                      psVar8 = psVar1;
                    }
                    if (psVar1[uVar7] != -1) {
                      uVar5 = uVar6 + 0x14;
                      uVar7 = (ulong)uVar5;
                      if (0xef < uVar5) {
                        uVar7 = 0;
                      }
                      psVar8 = psVar1 + uVar5;
                      if (0xef < uVar5) {
                        psVar8 = psVar1;
                      }
                      if (psVar1[uVar7] != -1) {
                        uVar5 = uVar6 + 0x16;
                        uVar7 = (ulong)uVar5;
                        if (0xef < uVar5) {
                          uVar7 = 0;
                        }
                        psVar8 = psVar1 + uVar5;
                        if (0xef < uVar5) {
                          psVar8 = psVar1;
                        }
                        if (psVar1[uVar7] != -1) {
                          uVar5 = uVar6 + 0x18;
                          uVar7 = (ulong)uVar5;
                          if (0xef < uVar5) {
                            uVar7 = 0;
                          }
                          psVar8 = psVar1 + uVar5;
                          if (0xef < uVar5) {
                            psVar8 = psVar1;
                          }
                          if (psVar1[uVar7] != -1) {
                            uVar5 = uVar6 + 0x1a;
                            uVar7 = (ulong)uVar5;
                            if (0xef < uVar5) {
                              uVar7 = 0;
                            }
                            psVar8 = psVar1 + uVar5;
                            if (0xef < uVar5) {
                              psVar8 = psVar1;
                            }
                            if (psVar1[uVar7] != -1) {
                              uVar6 = uVar6 + 0x1c;
                              uVar7 = (ulong)uVar6;
                              if (0xef < uVar6) {
                                uVar7 = 0;
                              }
                              psVar8 = psVar1 + uVar6;
                              if (0xef < uVar6) {
                                psVar8 = psVar1;
                              }
                              if (psVar1[uVar7] != -1) {
                                return;
                              }
                              goto LAB_0275c990;
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
        }
      }
    }
    uVar6 = uVar5;
  }
LAB_0275c990:
  uVar7 = (ulong)(uVar6 | 1);
  if (0xef < (uVar6 | 1)) {
    uVar7 = 0;
  }
  *psVar8 = (short)*(undefined4 *)(param_3 + 8);
  psVar1[uVar7] = (short)*(undefined4 *)(param_3 + 0xc);
  return;
}

