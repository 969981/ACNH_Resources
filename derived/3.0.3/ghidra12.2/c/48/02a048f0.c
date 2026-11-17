
void FUN_02a048f0(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  undefined8 *puVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  int iVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((char)param_1[1] == '\0') {
    return;
  }
  if (*(char *)(param_2 + 8) != '\0') {
    plVar13 = (long *)param_1[0xb];
    if ((int)param_1[0xd] < 1) {
      iVar18 = (int)param_1[0xc];
    }
    else {
      iVar18 = (int)param_1[0xc];
      iVar23 = 0;
      if (iVar18 <= *(int *)((long)param_1 + 100)) {
        iVar23 = iVar18;
      }
      plVar13 = plVar13 + (*(int *)((long)param_1 + 100) - iVar23);
    }
    iVar23 = *(int *)(*plVar13 + 0x28);
    if (0 < iVar23) {
      iVar23 = iVar23 + -1;
    }
    iVar12 = iVar18;
    if (0 < iVar18) {
      iVar12 = iVar18 + -1;
    }
    *(int *)((long)param_1 + 0xc) = *(int *)(param_2 + 0xc) - (iVar23 >> 1);
    *(int *)(param_1 + 2) = *(int *)(param_2 + 0x10) - (iVar12 >> 1);
    if (0 < iVar18) {
      iVar18 = 0;
      do {
        FUN_02a05300(param_1);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)param_1[0xc]);
      if (0 < (int)param_1[0xc]) {
        uVar22 = 0;
        do {
          iVar18 = 0;
          while( true ) {
            plVar13 = (long *)param_1[0xb];
            if (uVar22 < *(uint *)(param_1 + 0xd)) {
              iVar23 = *(int *)((long)param_1 + 100) + uVar22;
              iVar12 = 0;
              if ((int)param_1[0xc] <= iVar23) {
                iVar12 = (int)param_1[0xc];
              }
              plVar13 = plVar13 + (iVar23 - iVar12);
            }
            if (*(int *)(*plVar13 + 0x28) <= iVar18) break;
            FUN_02a055b0(param_1,iVar18,uVar22,1);
            iVar18 = iVar18 + 1;
          }
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 < (int)param_1[0xc]);
      }
    }
    goto LAB_02a04f8c;
  }
  iVar18 = *(int *)(param_2 + 0x18);
  if (iVar18 < 1) {
    if (iVar18 < 0) {
      iVar23 = 0;
      plVar13 = param_1 + 0xe;
      plVar1 = param_1 + 5;
      iVar12 = 1;
      if (1 < -iVar18) {
        iVar12 = -iVar18;
      }
      do {
        puVar11 = (undefined8 *)param_1[0xb];
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        if ((int)param_1[0xd] < 1) {
          iVar18 = (int)param_1[0xc];
        }
        else {
          iVar18 = (int)param_1[0xc];
          iVar8 = (int)param_1[0xd] + *(int *)((long)param_1 + 100) + -1;
          iVar27 = 0;
          if (iVar18 <= iVar8) {
            iVar27 = iVar18;
          }
          puVar11 = puVar11 + (iVar8 - iVar27);
        }
        plVar21 = (long *)*puVar11;
        if ((int)plVar21[2] != 0) {
          plVar24 = (long *)plVar21[1];
          plVar15 = plVar24 + -1;
          plVar14 = plVar15;
          if ((int)plVar21[2] < 1) {
            plVar14 = (long *)&DAT_fffffffffffffff8;
          }
          uVar22 = *(uint *)((long)param_1 + 0x84);
          if (-1 < (int)uVar22) {
            sVar6 = *(short *)(*plVar14 + 8);
            sVar7 = *(short *)(*plVar14 + 10);
            if (0 < (int)uVar22) {
              uVar22 = uVar22 - 1;
            }
            iVar27 = -((int)uVar22 >> 1);
            uVar22 = uVar22 | 1;
            do {
              uVar16 = iVar18 + -1 + iVar27;
              if (((int)uVar16 < 0) || ((int)*(uint *)(param_1 + 0xd) <= (int)uVar16)) {
                local_70 = 0;
              }
              else {
                puVar11 = (undefined8 *)param_1[0xb];
                if (uVar16 < *(uint *)(param_1 + 0xd)) {
                  iVar8 = iVar18 + -1 + iVar27;
                  iVar5 = 0;
                  if ((int)param_1[0xc] <= iVar8 + *(int *)((long)param_1 + 100)) {
                    iVar5 = (int)param_1[0xc];
                  }
                  puVar11 = puVar11 + (iVar8 + (*(int *)((long)param_1 + 100) - iVar5));
                }
                local_70 = *puVar11;
              }
              local_80 = (long *)CONCAT44((int)sVar6,iVar27);
              local_78 = CONCAT44(local_78._4_4_,(int)sVar7);
              FUN_02a03660(plVar13,&local_80);
              iVar27 = iVar27 + 1;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
            plVar24 = (long *)plVar21[1];
            plVar15 = plVar24 + -1;
          }
          if (plVar15 != plVar21 + -1) {
            do {
              FUN_02a039c0(plVar13,(long)*(short *)(*plVar15 + 8));
              plVar14 = (long *)param_1[4];
              if (plVar14 != (long *)0x0) {
                local_80 = plVar13;
                (**(code **)(*plVar14 + 0x38))(plVar14,&local_80);
              }
              local_80 = plVar13;
              (**(code **)(*param_1 + 0x40))(param_1,&local_80);
              FUN_02a03894(plVar13,0,0);
              if ((int)param_1[7] < (int)param_1[10]) {
                plVar14 = (long *)param_1[8];
                if (plVar14 != (long *)0x0) {
                  param_1[8] = *plVar14;
                }
                lVar25 = *plVar15;
                plVar14[2] = 0;
                plVar15 = plVar14 + 1;
                *plVar15 = 0;
                *plVar14 = lVar25;
                lVar25 = *plVar1;
                *plVar1 = (long)plVar15;
                plVar14[2] = (long)plVar1;
                *plVar15 = lVar25;
                if (lVar25 != 0) {
                  *(long **)(lVar25 + 8) = plVar15;
                }
                *(int *)(param_1 + 7) = (int)param_1[7] + 1;
              }
              plVar24 = (long *)plVar24[1];
              plVar15 = plVar24 + -1;
            } while (plVar15 != plVar21 + -1);
            plVar24 = (long *)plVar21[1];
          }
          while (plVar24 != plVar21) {
            plVar14 = (long *)plVar24[1];
            plVar15 = plVar14;
            if (*plVar24 != 0) {
              *(long **)(*plVar24 + 8) = plVar14;
              plVar15 = (long *)plVar24[1];
            }
            if (plVar15 != (long *)0x0) {
              *plVar15 = *plVar24;
            }
            *plVar24 = 0;
            plVar24[1] = 0;
            *(int *)(plVar21 + 2) = (int)plVar21[2] + -1;
            plVar24[-1] = plVar21[3];
            plVar21[3] = (long)(plVar24 + -1);
            plVar24 = plVar14;
          }
        }
        iVar18 = (int)param_1[0xd];
        if (0 < iVar18) {
          *(int *)(param_1 + 0xd) = iVar18 + -1;
          iVar18 = iVar18 + -1;
        }
        iVar27 = (int)param_1[0xc];
        plVar14 = (long *)param_1[0xb];
        if (iVar18 < iVar27) {
          iVar8 = iVar27;
          if (0 < *(int *)((long)param_1 + 100)) {
            iVar8 = *(int *)((long)param_1 + 100);
          }
          *(int *)((long)param_1 + 100) = iVar8 + -1;
          *(int *)(param_1 + 0xd) = iVar18 + 1;
          if (iVar8 <= iVar27) {
            iVar27 = 0;
          }
          plVar14[(iVar8 + -1) - iVar27] = (long)plVar21;
          iVar18 = (int)param_1[0xd];
          plVar14 = (long *)param_1[0xb];
        }
        if (0 < iVar18) {
          iVar27 = iVar18 + *(int *)((long)param_1 + 100) + -1;
          iVar18 = 0;
          if ((int)param_1[0xc] <= iVar27) {
            iVar18 = (int)param_1[0xc];
          }
          plVar14 = plVar14 + (iVar27 - iVar18);
        }
        lVar25 = *plVar14;
        if (0 < *(int *)(lVar25 + 0x28)) {
          iVar18 = 0;
          do {
            FUN_02a055b0(param_1,iVar18,0,1);
            iVar18 = iVar18 + 1;
          } while (iVar18 < *(int *)(lVar25 + 0x28));
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 != iVar12);
    }
  }
  else {
    iVar23 = 0;
    do {
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      FUN_02a05300(param_1);
      plVar13 = (long *)param_1[0xb];
      if (0 < (int)param_1[0xd]) {
        iVar12 = 0;
        if ((int)param_1[0xc] <= *(int *)((long)param_1 + 100)) {
          iVar12 = (int)param_1[0xc];
        }
        plVar13 = plVar13 + (*(int *)((long)param_1 + 100) - iVar12);
      }
      lVar25 = *plVar13;
      if (0 < *(int *)(lVar25 + 0x28)) {
        iVar12 = 0;
        do {
          FUN_02a055b0(param_1,iVar12,(int)param_1[0xc] + -1,1);
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(lVar25 + 0x28));
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 != iVar18);
  }
  iVar18 = *(int *)(param_2 + 0x14);
  if (iVar18 < 1) {
    if (iVar18 < 0) {
      iVar23 = (int)param_1[0xc];
      iVar18 = -iVar18;
      if (iVar23 < 1) {
        if (iVar18 < 2) {
          iVar18 = 1;
        }
        iVar18 = *(int *)((long)param_1 + 0xc) - iVar18;
        goto LAB_02a04c1c;
      }
      iVar12 = 0;
      if (iVar18 < 2) {
        iVar18 = 1;
      }
      do {
        *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
        if (0 < iVar23) {
          iVar27 = 0;
          do {
            FUN_02a058a0(param_1,iVar27);
            FUN_02a055b0(param_1,0,iVar27,1);
            iVar23 = (int)param_1[0xc];
            iVar27 = iVar27 + 1;
          } while (iVar27 < iVar23);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar18);
    }
  }
  else {
    iVar23 = (int)param_1[0xc];
    if (iVar23 < 1) {
      iVar18 = *(int *)((long)param_1 + 0xc) + iVar18;
LAB_02a04c1c:
      *(int *)((long)param_1 + 0xc) = iVar18;
    }
    else {
      iVar12 = 0;
      do {
        *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
        if (0 < iVar23) {
          iVar27 = 0;
          do {
            FUN_02a058a0(param_1,iVar27);
            plVar13 = (long *)param_1[0xb];
            if (0 < (int)param_1[0xd]) {
              iVar23 = 0;
              if ((int)param_1[0xc] <= *(int *)((long)param_1 + 100)) {
                iVar23 = (int)param_1[0xc];
              }
              plVar13 = plVar13 + (*(int *)((long)param_1 + 100) - iVar23);
            }
            FUN_02a055b0(param_1,*(int *)(*plVar13 + 0x28) + -1,iVar27,1);
            iVar23 = (int)param_1[0xc];
            iVar27 = iVar27 + 1;
          } while (iVar27 < iVar23);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar18);
    }
  }
  lVar25 = *(long *)(param_2 + 0x20);
  uVar22 = *(uint *)(lVar25 + 0x10);
  if (*(uint *)(lVar25 + 8) <= *(uint *)(lVar25 + 0x10)) {
    uVar22 = *(uint *)(lVar25 + 8);
  }
  if (uVar22 != 0) {
    lVar25 = *(long *)(lVar25 + 0x18);
    uVar16 = 0;
    plVar13 = param_1 + 0xe;
    plVar1 = param_1 + 5;
    do {
      psVar10 = (short *)(lVar25 + (long)(int)uVar16 * 0x18);
      uVar4 = *(uint *)(psVar10 + 4);
      if ((uint)(ushort)psVar10[1] <= *(uint *)(psVar10 + 4)) {
        uVar4 = (uint)(ushort)psVar10[1];
      }
      if (uVar4 != 0) {
        uVar28 = 0;
        uVar9 = (int)*psVar10 - (int)param_1[2];
        lVar20 = *(long *)(psVar10 + 8);
        do {
          iVar18 = *(int *)((long)param_1 + 0xc);
          iVar23 = *(short *)(lVar20 + (-(uVar28 >> 0x1f) & 0xfffffffe00000000 | uVar28 << 1)) -
                   iVar18;
          if (-1 < iVar23) {
            plVar14 = (long *)param_1[0xb];
            plVar21 = plVar14;
            if (0 < (int)*(uint *)(param_1 + 0xd)) {
              iVar12 = 0;
              if ((int)param_1[0xc] <= *(int *)((long)param_1 + 100)) {
                iVar12 = (int)param_1[0xc];
              }
              plVar21 = plVar14 + (*(int *)((long)param_1 + 100) - iVar12);
            }
            if (((-1 < (int)uVar9) && (iVar23 < *(int *)(*plVar21 + 0x28))) &&
               (iVar12 = (int)param_1[0xc], (int)uVar9 < iVar12)) {
              if (uVar9 < *(uint *)(param_1 + 0xd)) {
                iVar27 = *(int *)((long)param_1 + 100) + uVar9;
                iVar8 = 0;
                if (iVar12 <= iVar27) {
                  iVar8 = iVar12;
                }
                plVar14 = plVar14 + (iVar27 - iVar8);
              }
              lVar26 = *plVar14;
              if (*(int *)(lVar26 + 0x10) == 0) {
LAB_02a04cb8:
                FUN_02a055b0(param_1,iVar23,uVar9,1);
              }
              else {
                plVar14 = *(long **)(lVar26 + 8);
                plVar21 = plVar14 + -1;
                if (*(int *)(lVar26 + 0x10) < 1) {
                  plVar21 = (long *)&DAT_fffffffffffffff8;
                }
                uVar19 = *(uint *)((long)param_1 + 0x84);
                if (-1 < (int)uVar19) {
                  sVar6 = *(short *)(*plVar21 + 8);
                  sVar7 = *(short *)(*plVar21 + 10);
                  if (0 < (int)uVar19) {
                    uVar19 = uVar19 - 1;
                  }
                  iVar18 = -((int)uVar19 >> 1);
                  uVar19 = uVar19 | 1;
                  do {
                    uVar3 = uVar9 + iVar18;
                    if (((int)uVar3 < 0) || ((int)*(uint *)(param_1 + 0xd) <= (int)uVar3)) {
                      local_70 = 0;
                    }
                    else {
                      puVar11 = (undefined8 *)param_1[0xb];
                      if (uVar3 < *(uint *)(param_1 + 0xd)) {
                        iVar12 = 0;
                        if ((int)param_1[0xc] <=
                            (int)(uVar9 + iVar18 + *(int *)((long)param_1 + 100))) {
                          iVar12 = (int)param_1[0xc];
                        }
                        puVar11 = puVar11 + (int)(uVar9 + iVar18 +
                                                 (*(int *)((long)param_1 + 100) - iVar12));
                      }
                      local_70 = *puVar11;
                    }
                    local_80 = (long *)CONCAT44((int)sVar6,iVar18);
                    local_78 = CONCAT44(local_78._4_4_,(int)sVar7);
                    FUN_02a03660(plVar13,&local_80);
                    iVar18 = iVar18 + 1;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                  iVar18 = *(int *)((long)param_1 + 0xc);
                  plVar14 = *(long **)(lVar26 + 8);
                }
                do {
                  plVar21 = plVar14;
                  plVar24 = plVar21 + -1;
                  if ((plVar24 == (long *)(lVar26 + -8)) ||
                     (iVar12 = *(short *)(*plVar24 + 8) - iVar18, iVar23 < iVar12))
                  goto LAB_02a04cb8;
                  plVar14 = (long *)plVar21[1];
                } while (iVar12 != iVar23);
                FUN_02a039c0(plVar13);
                plVar14 = (long *)param_1[4];
                local_80 = (long *)((ulong)local_80 & 0xffffffffffffff00);
                local_78 = 0;
                if (plVar14 != (long *)0x0) {
                  local_68 = (long *)CONCAT44((int)param_1[2] + uVar9,
                                              *(int *)((long)param_1 + 0xc) + iVar23);
                  local_78 = *plVar24;
                  (**(code **)(*plVar14 + 0x28))(plVar14,&local_80,&local_68);
                  if ((char)local_80 != '\0') goto LAB_02a04cd0;
                  plVar14 = (long *)param_1[4];
                  if (plVar14 != (long *)0x0) {
                    local_68 = plVar13;
                    (**(code **)(*plVar14 + 0x38))(plVar14,&local_68);
                  }
                }
                local_68 = plVar13;
                (**(code **)(*param_1 + 0x40))(param_1,&local_68);
                FUN_02a03894(plVar13,0,0);
                if ((int)param_1[7] < (int)param_1[10]) {
                  plVar14 = (long *)param_1[8];
                  if (plVar14 != (long *)0x0) {
                    param_1[8] = *plVar14;
                  }
                  lVar17 = *plVar24;
                  plVar14[2] = 0;
                  *plVar14 = lVar17;
                  plVar15 = plVar14 + 1;
                  *plVar15 = 0;
                  lVar17 = *plVar1;
                  *plVar1 = (long)plVar15;
                  plVar14[2] = (long)plVar1;
                  *plVar15 = lVar17;
                  if (lVar17 != 0) {
                    *(long **)(lVar17 + 8) = plVar15;
                  }
                  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
                }
                if (*plVar21 != 0) {
                  *(long *)(*plVar21 + 8) = plVar21[1];
                }
                if ((long *)plVar21[1] != (long *)0x0) {
                  *(long *)plVar21[1] = *plVar21;
                }
                *plVar21 = 0;
                plVar21[1] = 0;
                *(int *)(lVar26 + 0x10) = *(int *)(lVar26 + 0x10) + -1;
                plVar21[-1] = *(long *)(lVar26 + 0x18);
                *(long **)(lVar26 + 0x18) = plVar24;
              }
            }
          }
LAB_02a04cd0:
          uVar2 = uVar28 + 1;
          uVar28 = uVar2 & 0xffffffff;
        } while (uVar4 != (uint)uVar2);
      }
      uVar16 = uVar16 + 1;
    } while (uVar22 != uVar16);
  }
LAB_02a04f8c:
                    /* WARNING: Could not recover jumptable at 0x02a04fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  return;
}

