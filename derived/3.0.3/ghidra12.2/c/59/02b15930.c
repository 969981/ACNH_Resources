
bool FUN_02b15930(long param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  long lVar14;
  int *piVar15;
  char *pcVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  char *pcVar20;
  bool bVar21;
  bool bVar22;
  ulong uVar23;
  ulong uVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  char *pcVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  long lVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  ulong uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  uint local_a0;
  int local_9c;
  
  if (param_3 == 0) {
    bVar22 = false;
  }
  else {
    iVar35 = *(int *)(param_1 + 0x10);
    iVar33 = *(int *)(param_1 + 0x14);
    uVar24 = (ulong)param_2;
    if (5 < param_2) {
      uVar24 = 0;
    }
    bVar13 = (&DAT_0417f214)[uVar24];
    uVar24 = (ulong)param_2;
    if (5 < param_2) {
      uVar24 = 0;
    }
    uVar24 = (ulong)(byte)(&DAT_0417f21a)[uVar24];
    iVar38 = iVar33;
    iVar40 = iVar35;
    if ((uVar24 == 0) || (bVar13 == 0)) {
      bVar22 = true;
    }
    else {
      uVar30 = 0;
      bVar22 = false;
      puVar1 = PTR_DAT_04bb2018 + 0x10;
      local_a0 = param_2;
      do {
        piVar2 = (int *)(&DAT_05625f30 + uVar30 * 3);
        piVar15 = &DAT_0417f694 + uVar30 * 0xc;
        pcVar16 = &DAT_0417f284 + uVar30 * 6;
        piVar17 = (int *)(&DAT_05625fc0 + uVar30 * 3);
        if (5 < uVar30) {
          piVar2 = (int *)&DAT_05625f30;
          piVar15 = &DAT_0417f694;
          pcVar16 = "";
          piVar17 = (int *)&DAT_05625fc0;
        }
        lVar32 = 0;
        pcVar3 = &DAT_0417f260 + uVar30 * 6;
        if (5 < uVar30) {
          pcVar3 = "";
        }
        bVar21 = 8 < uVar30;
        piVar4 = &DAT_0417f574 + uVar30 * 8;
        if (bVar21) {
          piVar4 = &DAT_0417f574;
        }
        lVar36 = 0;
        uVar41 = 0;
        piVar5 = (int *)(&DAT_05625ea0 + uVar30 * 2);
        if (bVar21) {
          piVar5 = (int *)&DAT_05625ea0;
        }
        lVar31 = uVar30 * 4;
        pcVar6 = &DAT_0417f23c + lVar31;
        if (bVar21) {
          pcVar6 = "";
        }
        pcVar7 = &DAT_04057e20 + lVar31;
        piVar18 = (int *)(&DAT_05625e20 + uVar30 * 2);
        piVar19 = (int *)(&DAT_0417f474 + uVar30 * 0x20);
        if (7 < uVar30) {
          pcVar7 = "";
          piVar18 = (int *)&DAT_05625e20;
          piVar19 = (int *)&DAT_0417f474;
        }
        piVar8 = &DAT_0417f7b4 + uVar30 * 0xe;
        if (6 < uVar30) {
          piVar8 = &DAT_0417f7b4;
        }
        piVar25 = &DAT_05626050 + uVar30 * 7;
        piVar10 = (int *)(&DAT_05625db0 + uVar30 * 2);
        piVar9 = (int *)(&DAT_0417f394 + uVar30 * 0x20);
        pcVar11 = &DAT_0417f220 + lVar31;
        pcVar20 = &DAT_0417f2a8 + uVar30 * 7;
        if (6 < uVar30) {
          piVar25 = &DAT_05626050;
          piVar9 = (int *)&DAT_0417f394;
          piVar10 = (int *)&DAT_05625db0;
          pcVar11 = "";
          pcVar20 = "";
        }
        iVar34 = iVar33;
        iVar39 = iVar38;
        do {
          switch(local_a0) {
          case 0:
            bVar21 = 3 < uVar41;
            piVar26 = (int *)((long)piVar9 + lVar32);
            piVar27 = (int *)((long)piVar10 + lVar36);
            if (bVar21) {
              piVar27 = piVar10;
            }
            piVar28 = piVar9;
            pcVar29 = pcVar11;
            break;
          case 1:
            bVar21 = 3 < uVar41;
            piVar26 = (int *)((long)piVar19 + lVar32);
            piVar27 = (int *)((long)piVar18 + lVar36);
            if (bVar21) {
              piVar27 = piVar18;
            }
            piVar28 = piVar19;
            pcVar29 = pcVar7;
            break;
          case 2:
            bVar21 = 3 < uVar41;
            piVar26 = (int *)((long)piVar4 + lVar32);
            piVar27 = (int *)((long)piVar5 + lVar36);
            if (bVar21) {
              piVar27 = piVar5;
            }
            piVar28 = piVar4;
            pcVar29 = pcVar6;
            break;
          case 3:
            bVar21 = 5 < uVar41;
            piVar26 = (int *)((long)piVar15 + lVar32);
            piVar27 = (int *)((long)piVar2 + lVar36);
            if (bVar21) {
              piVar27 = piVar2;
            }
            piVar28 = piVar15;
            pcVar29 = pcVar3;
            break;
          case 4:
            bVar21 = 5 < uVar41;
            piVar27 = (int *)((long)piVar17 + lVar36);
            piVar26 = (int *)((long)piVar15 + lVar32);
            if (bVar21) {
              piVar27 = piVar17;
              piVar26 = piVar15;
            }
            pcVar29 = pcVar16;
            goto LAB_02b15ce8;
          case 5:
            bVar21 = 6 < uVar41;
            piVar26 = (int *)((long)piVar8 + lVar32);
            piVar27 = (int *)((long)piVar25 + lVar36);
            if (bVar21) {
              piVar27 = piVar25;
            }
            piVar28 = piVar8;
            pcVar29 = pcVar20;
            break;
          default:
            iVar37 = 0;
            bVar21 = false;
            fVar46 = 0.0;
            fVar44 = 0.0;
            goto LAB_02b15d0c;
          }
          if (bVar21) {
            piVar26 = piVar28;
          }
LAB_02b15ce8:
          pcVar12 = pcVar29 + uVar41;
          if (bVar21) {
            pcVar12 = pcVar29;
          }
          iVar37 = *piVar27;
          bVar21 = *pcVar12 != '\0';
          fVar44 = (float)piVar26[1];
          fVar46 = (float)*piVar26;
LAB_02b15d0c:
          local_a8 = *(int *)(param_1 + 0x10);
          iStack_a4 = *(int *)(param_1 + 0x14);
          fVar42 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x1c));
          local_b0 = puVar1;
          fVar43 = sinf(fVar42 * 1.4629181e-09);
          fVar42 = cosf(fVar42 * 1.4629181e-09);
          fVar45 = -(fVar43 * fVar44) + fVar46 * fVar42;
          fVar44 = fVar44 * fVar42 + fVar46 * fVar43;
          fVar46 = 0.5;
          if (fVar45 < 0.0) {
            fVar46 = -0.5;
          }
          fVar42 = 0.5;
          if (fVar44 < 0.0) {
            fVar42 = -0.5;
          }
          local_a8 = local_a8 + (int)(fVar45 + fVar46);
          iStack_a4 = iStack_a4 + (int)(fVar44 + fVar42);
          iVar38 = iStack_a4;
          iVar33 = local_a8;
          if (iVar40 <= local_a8 && iVar39 <= iStack_a4) {
            iVar38 = iVar39;
            iVar33 = iVar40;
          }
          iVar40 = iVar33;
          iVar33 = iStack_a4;
          iVar39 = local_a8;
          if (local_a8 <= iVar35 && iStack_a4 <= iVar34) {
            iVar33 = iVar34;
            iVar39 = iVar35;
          }
          iVar35 = iVar39;
          if (bVar21) {
            lVar31 = (long)iVar37;
            lVar14 = lVar31 * 0xd8;
            if ((&DAT_05624610)[lVar14] == '\0') {
              return bVar22;
            }
            local_9c = iVar37;
            uVar23 = FUN_02b165e4(param_1,&local_b0,(&DAT_05624614)[lVar31 * 0x36],
                                  &DAT_05624618 + lVar31 * 0x36);
            if ((uVar23 & 1) == 0) {
              if ((&DAT_0562461c)[lVar14] == '\0') {
                return bVar22;
              }
              uVar23 = FUN_02b165e4(param_1,&local_b0,(&DAT_05624620)[lVar31 * 0x36],
                                    &DAT_05624624 + lVar31 * 0x36);
              if ((uVar23 & 1) == 0) {
                if ((&DAT_05624628)[lVar14] == '\0') {
                  return bVar22;
                }
                uVar23 = FUN_02b165e4(param_1,&local_b0,(&DAT_0562462c)[lVar31 * 0x36],
                                      &DAT_05624630 + lVar31 * 0x36);
                if ((uVar23 & 1) == 0) {
                  if ((&DAT_05624634)[lVar14] == '\0') {
                    return bVar22;
                  }
                  uVar23 = FUN_02b165e4(param_1,&local_b0,(&DAT_05624638)[lVar31 * 0x36],
                                        &DAT_0562463c + lVar31 * 0x36);
                  if ((uVar23 & 1) == 0) {
                    if ((&DAT_05624640)[lVar14] == '\0') {
                      return bVar22;
                    }
                    uVar23 = FUN_02b165e4(param_1,&local_b0,(&DAT_05624644)[lVar31 * 0x36],
                                          &DAT_05624648 + lVar31 * 0x36);
                    if ((uVar23 & 1) == 0) {
                      if ((&DAT_0562464c)[lVar14] == '\0') {
                        return bVar22;
                      }
                      uVar23 = FUN_02b165e4(param_1,&local_b0,(&DAT_05624650)[lVar31 * 0x36],
                                            &DAT_05624654 + lVar31 * 0x36);
                      if ((uVar23 & 1) == 0) {
                        if ((&DAT_05624658)[lVar14] == '\0') {
                          return bVar22;
                        }
                        uVar23 = FUN_02b165e4(param_1,&local_b0,
                                              *(undefined4 *)(&DAT_0562465c + lVar31 * 0x1b),
                                              lVar14 + 0x5624660);
                        if ((uVar23 & 1) == 0) {
                          if ((&DAT_05624664)[lVar14] == '\0') {
                            return bVar22;
                          }
                          uVar23 = FUN_02b165e4(param_1,&local_b0,
                                                *(undefined4 *)(&DAT_05624668 + lVar31 * 0x1b),
                                                lVar14 + 0x562466c);
                          if ((uVar23 & 1) == 0) {
                            if ((&DAT_05624670)[lVar14] == '\0') {
                              return bVar22;
                            }
                            uVar23 = FUN_02b165e4(param_1,&local_b0,
                                                  *(undefined4 *)(&DAT_05624674 + lVar31 * 0x1b),
                                                  lVar14 + 0x5624678);
                            if ((uVar23 & 1) == 0) {
                              if ((&DAT_0562467c)[lVar14] == '\0') {
                                return bVar22;
                              }
                              uVar23 = FUN_02b165e4(param_1,&local_b0,
                                                    *(undefined4 *)(&DAT_05624680 + lVar31 * 0x1b),
                                                    lVar14 + 0x5624684);
                              if ((uVar23 & 1) == 0) {
                                if ((&DAT_05624688)[lVar14] == '\0') {
                                  return bVar22;
                                }
                                uVar23 = FUN_02b165e4(param_1,&local_b0,
                                                      *(undefined4 *)(&DAT_0562468c + lVar31 * 0x1b)
                                                      ,lVar14 + 0x5624690);
                                if ((uVar23 & 1) == 0) {
                                  if ((&DAT_05624694)[lVar14] == '\0') {
                                    return bVar22;
                                  }
                                  uVar23 = FUN_02b165e4(param_1,&local_b0,
                                                        *(undefined4 *)
                                                         (&DAT_05624698 + lVar31 * 0x1b),
                                                        lVar14 + 0x562469c);
                                  if ((uVar23 & 1) == 0) {
                                    if ((&DAT_056246a0)[lVar14] == '\0') {
                                      return bVar22;
                                    }
                                    uVar23 = FUN_02b165e4(param_1,&local_b0,
                                                          *(undefined4 *)
                                                           (&DAT_056246a4 + lVar31 * 0x1b),
                                                          lVar14 + 0x56246a8);
                                    if ((uVar23 & 1) == 0) {
                                      if ((&DAT_056246ac)[lVar14] == '\0') {
                                        return bVar22;
                                      }
                                      uVar23 = FUN_02b165e4(param_1,&local_b0,
                                                            *(undefined4 *)
                                                             (&DAT_056246b0 + lVar31 * 0x1b),
                                                            lVar14 + 0x56246b4);
                                      if ((uVar23 & 1) == 0) {
                                        if ((&DAT_056246b8)[lVar14] == '\0') {
                                          return bVar22;
                                        }
                                        uVar23 = FUN_02b165e4(param_1,&local_b0,
                                                              (&DAT_056246bc)[lVar31 * 0x36],
                                                              &DAT_056246c0 + lVar31 * 0x36);
                                        if ((uVar23 & 1) == 0) {
                                          if ((&DAT_056246c4)[lVar14] == '\0') {
                                            return bVar22;
                                          }
                                          uVar23 = FUN_02b165e4(param_1,&local_b0,
                                                                *(undefined4 *)
                                                                 (&DAT_056246c8 + lVar31 * 0x1b),
                                                                lVar14 + 0x56246cc);
                                          if ((uVar23 & 1) == 0) {
                                            if ((&DAT_056246d0)[lVar14] == '\0') {
                                              return bVar22;
                                            }
                                            uVar23 = FUN_02b165e4(param_1,&local_b0,
                                                                  *(undefined4 *)
                                                                   (&DAT_056246d4 + lVar31 * 0x1b),
                                                                  lVar14 + 0x56246d8);
                                            if ((uVar23 & 1) == 0) {
                                              if ((&DAT_056246dc)[lVar14] == '\0') {
                                                return bVar22;
                                              }
                                              uVar23 = FUN_02b165e4(param_1,&local_b0,
                                                                    *(undefined4 *)
                                                                     (&DAT_056246e0 + lVar31 * 0x1b)
                                                                    ,lVar14 + 0x56246e4);
                                              if ((uVar23 & 1) == 0) {
                                                return bVar22;
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
                    }
                  }
                }
              }
            }
          }
          uVar41 = uVar41 + 1;
          lVar36 = lVar36 + 4;
          lVar32 = lVar32 + 8;
          iVar34 = iVar33;
          iVar39 = iVar38;
        } while (bVar13 != uVar41);
        uVar30 = uVar30 + 1;
        bVar22 = uVar24 <= uVar30;
      } while (uVar30 != uVar24);
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      if ((*(uint *)(param_1 + 0x1c) & 0x7fffffff) == 0) {
        iVar38 = iVar38 + 1;
        iVar33 = iVar33 + -1;
      }
      else {
        iVar40 = iVar40 + 1;
        iVar35 = iVar35 + -1;
      }
    }
    iVar34 = iVar40;
    if (iVar35 <= iVar40) {
      iVar34 = iVar35;
    }
    if (iVar40 <= iVar35) {
      iVar40 = iVar35;
    }
    iVar35 = iVar38;
    if (iVar33 <= iVar38) {
      iVar35 = iVar33;
    }
    *(int *)(param_3 + 0x10) = iVar34;
    *(int *)(param_3 + 0x14) = iVar35;
    if (iVar38 <= iVar33) {
      iVar38 = iVar33;
    }
    *(int *)(param_3 + 0x20) = iVar40;
    *(int *)(param_3 + 0x24) = iVar38;
  }
  return bVar22;
}

