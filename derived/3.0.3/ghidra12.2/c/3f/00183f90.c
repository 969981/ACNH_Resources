
void FUN_00183f90(long *param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ushort *puVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (*(int *)((long)param_1 + 0xc4) < 1) {
    iVar7 = 0;
    uVar12 = param_3 + 5;
LAB_001843ec:
    uVar18 = uVar12;
  }
  else {
    if (*(int *)(*param_1 + 0x58) == 2) {
      if (((((((((*(short *)((long)param_1 + 0xd4) == 0) && ((short)param_1[0x1b] == 0)) &&
               (*(short *)((long)param_1 + 0xdc) == 0)) &&
              (((short)param_1[0x1c] == 0 && (*(short *)((long)param_1 + 0xe4) == 0)))) &&
             ((short)param_1[0x1d] == 0)) &&
            (((*(short *)((long)param_1 + 0xec) == 0 && (*(short *)((long)param_1 + 0x10c) == 0)) &&
             (((short)param_1[0x22] == 0 &&
              (((*(short *)((long)param_1 + 0x114) == 0 && ((short)param_1[0x23] == 0)) &&
               (*(short *)((long)param_1 + 0x11c) == 0)))))))) &&
           (((short)param_1[0x24] == 0 && (*(short *)((long)param_1 + 0x124) == 0)))) &&
          (((short)param_1[0x25] == 0 &&
           (((*(short *)((long)param_1 + 300) == 0 && ((short)param_1[0x26] == 0)) &&
            ((*(short *)((long)param_1 + 0x134) == 0 &&
             ((((short)param_1[0x27] == 0 && (*(short *)((long)param_1 + 0x144) == 0)) &&
              ((short)param_1[0x29] == 0)))))))))) &&
         ((*(short *)((long)param_1 + 0x14c) == 0 && ((short)param_1[0x2a] == 0)))) {
        if (((short)param_1[0x1f] == 0) &&
           ((*(short *)((long)param_1 + 0xfc) == 0 && ((short)param_1[0x21] == 0)))) {
          lVar11 = 0;
          do {
            if ((*(short *)((long)param_1 + lVar11 + 0x154) != 0) ||
               (*(short *)((long)param_1 + lVar11 + 0x158) != 0)) goto LAB_00184868;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0x380);
          uVar9 = 0;
        }
        else {
LAB_00184868:
          uVar9 = 1;
        }
      }
      else {
        uVar9 = 0;
      }
      *(undefined4 *)(*param_1 + 0x58) = uVar9;
    }
    FUN_001848a0(param_1,param_1 + 0x16b);
    FUN_001848a0(param_1,param_1 + 0x16e);
    lVar11 = param_1[0x16c];
    uVar16 = (int)lVar11 + 1;
    uVar12 = (ulong)uVar16;
    uVar2 = *(ushort *)((long)param_1 + 0xd6);
    *(undefined2 *)((long)param_1 + (long)(int)uVar16 * 4 + 0xd6) = 0xffff;
    if (-1 < (int)lVar11) {
      iVar7 = 3;
      if (uVar2 != 0) {
        iVar7 = 4;
      }
      iVar6 = 0x8a;
      if (uVar2 != 0) {
        iVar6 = 7;
      }
      uVar18 = 0xffffffff;
      puVar14 = (ushort *)((long)param_1 + 0xda);
      iVar10 = 0;
      do {
        uVar17 = (ulong)uVar2;
        uVar3 = *puVar14;
        iVar4 = iVar10 + 1;
        uVar16 = (uint)uVar2;
        uVar8 = (uint)uVar3;
        if ((iVar6 <= iVar4) || (uVar16 != uVar8)) {
          if (iVar4 < iVar7) {
            *(short *)((long)param_1 + uVar17 * 4 + 0xabc) =
                 *(short *)((long)param_1 + uVar17 * 4 + 0xabc) + (short)iVar4;
          }
          else if (uVar16 == 0) {
            if (iVar10 < 10) {
              *(short *)(param_1 + 0x160) = (short)param_1[0x160] + 1;
            }
            else {
              *(short *)((long)param_1 + 0xb04) = *(short *)((long)param_1 + 0xb04) + 1;
            }
          }
          else {
            if (uVar16 != (uint)uVar18) {
              *(short *)((long)param_1 + uVar17 * 4 + 0xabc) =
                   *(short *)((long)param_1 + uVar17 * 4 + 0xabc) + 1;
            }
            *(short *)((long)param_1 + 0xafc) = *(short *)((long)param_1 + 0xafc) + 1;
          }
          iVar7 = 6;
          if (uVar16 != uVar8) {
            iVar7 = 7;
          }
          iVar10 = 3;
          if (uVar16 != uVar8) {
            iVar10 = 4;
          }
          iVar4 = 0;
          iVar6 = 0x8a;
          if (uVar8 != 0) {
            iVar6 = iVar7;
          }
          iVar7 = 3;
          if (uVar8 != 0) {
            iVar7 = iVar10;
          }
          uVar18 = uVar17;
        }
        uVar12 = uVar12 - 1;
        puVar14 = puVar14 + 2;
        iVar10 = iVar4;
        uVar2 = uVar3;
      } while (uVar12 != 0);
    }
    lVar11 = param_1[0x16f];
    uVar16 = (int)lVar11 + 1;
    uVar12 = (ulong)uVar16;
    uVar2 = *(ushort *)((long)param_1 + 0x9ca);
    *(undefined2 *)((long)param_1 + (long)(int)uVar16 * 4 + 0x9ca) = 0xffff;
    if (-1 < (int)lVar11) {
      iVar7 = 3;
      if (uVar2 != 0) {
        iVar7 = 4;
      }
      iVar6 = 0x8a;
      if (uVar2 != 0) {
        iVar6 = 7;
      }
      uVar18 = 0xffffffff;
      puVar14 = (ushort *)((long)param_1 + 0x9ce);
      iVar10 = 0;
      do {
        uVar17 = (ulong)uVar2;
        uVar3 = *puVar14;
        iVar4 = iVar10 + 1;
        uVar16 = (uint)uVar2;
        uVar8 = (uint)uVar3;
        if ((iVar6 <= iVar4) || (uVar16 != uVar8)) {
          if (iVar4 < iVar7) {
            *(short *)((long)param_1 + uVar17 * 4 + 0xabc) =
                 *(short *)((long)param_1 + uVar17 * 4 + 0xabc) + (short)iVar4;
          }
          else if (uVar16 == 0) {
            if (iVar10 < 10) {
              *(short *)(param_1 + 0x160) = (short)param_1[0x160] + 1;
            }
            else {
              *(short *)((long)param_1 + 0xb04) = *(short *)((long)param_1 + 0xb04) + 1;
            }
          }
          else {
            if (uVar16 != (uint)uVar18) {
              *(short *)((long)param_1 + uVar17 * 4 + 0xabc) =
                   *(short *)((long)param_1 + uVar17 * 4 + 0xabc) + 1;
            }
            *(short *)((long)param_1 + 0xafc) = *(short *)((long)param_1 + 0xafc) + 1;
          }
          iVar7 = 6;
          if (uVar16 != uVar8) {
            iVar7 = 7;
          }
          iVar10 = 3;
          if (uVar16 != uVar8) {
            iVar10 = 4;
          }
          iVar4 = 0;
          iVar6 = 0x8a;
          if (uVar8 != 0) {
            iVar6 = iVar7;
          }
          iVar7 = 3;
          if (uVar8 != 0) {
            iVar7 = iVar10;
          }
          uVar18 = uVar17;
        }
        uVar12 = uVar12 - 1;
        puVar14 = puVar14 + 2;
        iVar10 = iVar4;
        uVar2 = uVar3;
      } while (uVar12 != 0);
    }
    FUN_001848a0(param_1,param_1 + 0x171);
    if (*(short *)((long)param_1 + 0xafa) == 0) {
      if (*(short *)((long)param_1 + 0xac2) == 0) {
        if (*(short *)((long)param_1 + 0xaf6) == 0) {
          if (*(short *)((long)param_1 + 0xac6) == 0) {
            if (*(short *)((long)param_1 + 0xaf2) == 0) {
              if (*(short *)((long)param_1 + 0xaca) == 0) {
                if (*(short *)((long)param_1 + 0xaee) == 0) {
                  if (*(short *)((long)param_1 + 0xace) == 0) {
                    if (*(short *)((long)param_1 + 0xaea) == 0) {
                      if (*(short *)((long)param_1 + 0xad2) == 0) {
                        if (*(short *)((long)param_1 + 0xae6) == 0) {
                          if (*(short *)((long)param_1 + 0xad6) == 0) {
                            if (*(short *)((long)param_1 + 0xae2) == 0) {
                              if (*(short *)((long)param_1 + 0xada) == 0) {
                                if (*(short *)((long)param_1 + 0xade) == 0) {
                                  iVar7 = 2;
                                  if (*(short *)((long)param_1 + 0xabe) != 0) {
                                    iVar7 = 3;
                                  }
                                }
                                else {
                                  iVar7 = 4;
                                }
                              }
                              else {
                                iVar7 = 5;
                              }
                            }
                            else {
                              iVar7 = 6;
                            }
                          }
                          else {
                            iVar7 = 7;
                          }
                        }
                        else {
                          iVar7 = 8;
                        }
                      }
                      else {
                        iVar7 = 9;
                      }
                    }
                    else {
                      iVar7 = 10;
                    }
                  }
                  else {
                    iVar7 = 0xb;
                  }
                }
                else {
                  iVar7 = 0xc;
                }
              }
              else {
                iVar7 = 0xd;
              }
            }
            else {
              iVar7 = 0xe;
            }
          }
          else {
            iVar7 = 0xf;
          }
        }
        else {
          iVar7 = 0x10;
        }
      }
      else {
        iVar7 = 0x11;
      }
    }
    else {
      iVar7 = 0x12;
    }
    lVar11 = param_1[0x2e3] + (ulong)(iVar7 * 3 + 0x11);
    param_1[0x2e3] = lVar11;
    uVar18 = lVar11 + 10U >> 3;
    uVar12 = param_1[0x2e4] + 10U >> 3;
    if ((uVar12 <= uVar18) || ((int)param_1[0x19] == 4)) goto LAB_001843ec;
  }
  if ((param_2 == 0) || (uVar18 < param_3 + 4U)) {
    uVar16 = *(uint *)((long)param_1 + 0x1734);
    if (uVar12 == uVar18) {
      uVar8 = param_4 + 2;
      if ((int)uVar16 < 0xe) {
        *(ushort *)(param_1 + 0x2e6) =
             *(ushort *)(param_1 + 0x2e6) | (ushort)(uVar8 << (ulong)(uVar16 & 0x1f));
        iVar7 = uVar16 + 3;
      }
      else {
        lVar11 = param_1[5];
        uVar16 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar8 << (ulong)(uVar16 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar16;
        param_1[5] = lVar11 + 1;
        *(char *)(param_1[2] + lVar11) = (char)uVar16;
        lVar11 = param_1[5];
        param_1[5] = lVar11 + 1;
        *(undefined1 *)(param_1[2] + lVar11) = *(undefined1 *)((long)param_1 + 0x1731);
        iVar7 = *(int *)((long)param_1 + 0x1734) + -0xd;
        *(short *)(param_1 + 0x2e6) =
             (short)((uVar8 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f));
      }
      *(int *)((long)param_1 + 0x1734) = iVar7;
      FUN_00185140(param_1,&DAT_0410864a,&DAT_04108aca);
      FUN_00183b10(param_1);
    }
    else {
      uVar8 = param_4 + 4;
      if ((int)uVar16 < 0xe) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar8 << (ulong)(uVar16 & 0x1f);
        uVar16 = uVar16 + 3;
      }
      else {
        lVar11 = param_1[5];
        uVar16 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar8 << (ulong)(uVar16 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar16;
        param_1[5] = lVar11 + 1;
        *(char *)(param_1[2] + lVar11) = (char)uVar16;
        lVar11 = param_1[5];
        param_1[5] = lVar11 + 1;
        *(undefined1 *)(param_1[2] + lVar11) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar16 = *(int *)((long)param_1 + 0x1734) - 0xd;
        uVar8 = (uVar8 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
      }
      uVar1 = *(uint *)(param_1 + 0x16f);
      *(uint *)((long)param_1 + 0x1734) = uVar16;
      uVar13 = (int)param_1[0x16c] + 0xff00;
      if ((int)uVar16 < 0xc) {
        uVar8 = uVar8 | uVar13 << (ulong)(uVar16 & 0x1f);
        uVar16 = uVar16 + 5;
        *(uint *)((long)param_1 + 0x1734) = uVar16;
        if ((int)uVar16 < 0xc) goto LAB_00184650;
LAB_0018469c:
        lVar11 = param_1[5];
        uVar8 = uVar8 | uVar1 << (ulong)(uVar16 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar8;
        param_1[5] = lVar11 + 1;
        *(char *)(param_1[2] + lVar11) = (char)uVar8;
        lVar11 = param_1[5];
        param_1[5] = lVar11 + 1;
        *(undefined1 *)(param_1[2] + lVar11) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar13 = *(int *)((long)param_1 + 0x1734) - 0xb;
        uVar8 = (uVar1 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar12 = (ulong)(iVar7 + 1);
        *(uint *)((long)param_1 + 0x1734) = uVar13;
        if ((int)uVar13 < 0xd) goto LAB_00184674;
LAB_0018470c:
        lVar11 = param_1[5];
        uVar8 = uVar8 | iVar7 + 0xfffdU << (ulong)(uVar13 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar8;
        param_1[5] = lVar11 + 1;
        *(char *)(param_1[2] + lVar11) = (char)uVar8;
        lVar11 = param_1[5];
        param_1[5] = lVar11 + 1;
        *(undefined1 *)(param_1[2] + lVar11) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar13 = *(int *)((long)param_1 + 0x1734) - 0xc;
        uVar8 = (iVar7 + 0xfffdU & 0xffff) >>
                (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
      }
      else {
        lVar11 = param_1[5];
        uVar8 = uVar8 | uVar13 << (ulong)(uVar16 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar8;
        param_1[5] = lVar11 + 1;
        *(char *)(param_1[2] + lVar11) = (char)uVar8;
        lVar11 = param_1[5];
        param_1[5] = lVar11 + 1;
        *(undefined1 *)(param_1[2] + lVar11) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar8 = (uVar13 & 0xffff) >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar16 = *(int *)((long)param_1 + 0x1734) - 0xb;
        *(uint *)((long)param_1 + 0x1734) = uVar16;
        if (0xb < (int)uVar16) goto LAB_0018469c;
LAB_00184650:
        uVar13 = uVar16 + 5;
        uVar8 = uVar8 | uVar1 << (ulong)(uVar16 & 0x1f);
        uVar12 = (ulong)(iVar7 + 1);
        *(uint *)((long)param_1 + 0x1734) = uVar13;
        if (0xc < (int)uVar13) goto LAB_0018470c;
LAB_00184674:
        uVar8 = uVar8 | iVar7 + 0xfffd << (ulong)(uVar13 & 0x1f);
        uVar13 = uVar13 + 4;
      }
      *(uint *)((long)param_1 + 0x1734) = uVar13;
      pbVar15 = &DAT_04108c7c;
      do {
        while( true ) {
          uVar2 = *(ushort *)((long)param_1 + (ulong)*pbVar15 * 4 + 0xabe);
          uVar8 = uVar8 | (uint)uVar2 << (ulong)(uVar13 & 0x1f);
          *(short *)(param_1 + 0x2e6) = (short)uVar8;
          if ((int)uVar13 < 0xe) break;
          lVar11 = param_1[5];
          param_1[5] = lVar11 + 1;
          *(char *)(param_1[2] + lVar11) = (char)uVar8;
          lVar11 = param_1[5];
          param_1[5] = lVar11 + 1;
          *(undefined1 *)(param_1[2] + lVar11) = *(undefined1 *)((long)param_1 + 0x1731);
          uVar13 = *(int *)((long)param_1 + 0x1734) - 0xd;
          uVar2 = uVar2 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
          uVar8 = (uint)uVar2;
          *(ushort *)(param_1 + 0x2e6) = uVar2;
          uVar12 = uVar12 - 1;
          *(uint *)((long)param_1 + 0x1734) = uVar13;
          pbVar15 = pbVar15 + 1;
          if (uVar12 == 0) goto LAB_001847fc;
        }
        uVar13 = uVar13 + 3;
        uVar12 = uVar12 - 1;
        *(uint *)((long)param_1 + 0x1734) = uVar13;
        pbVar15 = pbVar15 + 1;
      } while (uVar12 != 0);
LAB_001847fc:
      FUN_00185540(param_1,(long)param_1 + 0xd4);
      FUN_00185540(param_1,param_1 + 0x139,uVar1);
      FUN_00185140(param_1,(long)param_1 + 0xd4,param_1 + 0x139);
      FUN_00183b10(param_1);
    }
  }
  else {
    FUN_00183c10(param_1,param_2,param_3,param_4);
    FUN_00183b10(param_1);
  }
  if (param_4 == 0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x1734) < 9) {
    if (*(int *)((long)param_1 + 0x1734) < 1) goto LAB_001844f8;
    lVar11 = param_1[5];
    uVar5 = (undefined1)param_1[0x2e6];
  }
  else {
    lVar11 = param_1[5];
    param_1[5] = lVar11 + 1;
    *(char *)(param_1[2] + lVar11) = (char)param_1[0x2e6];
    lVar11 = param_1[5];
    uVar5 = *(undefined1 *)((long)param_1 + 0x1731);
  }
  param_1[5] = lVar11 + 1;
  *(undefined1 *)(param_1[2] + lVar11) = uVar5;
LAB_001844f8:
  *(undefined2 *)(param_1 + 0x2e6) = 0;
  *(undefined4 *)((long)param_1 + 0x1734) = 0;
  return;
}

