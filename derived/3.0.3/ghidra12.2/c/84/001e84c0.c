
/* WARNING: Removing unreachable block (ram,0x001e91c4) */

undefined8 FUN_001e84c0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  undefined8 *puVar28;
  int *piVar29;
  undefined8 uVar30;
  ulong local_2060 [1024];
  
  lVar24 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
  lVar25 = *(long *)(lVar24 + 0x30);
  if (lVar25 == 0) {
    *(undefined8 *)(lVar24 + 0x30) = 0;
    cVar5 = *(char *)(param_1 + 0x110);
  }
  else {
    lVar9 = *(long *)(lVar24 + 0x28);
    lVar26 = 0;
    do {
      uVar16 = lVar9 + 1;
      *(ulong *)(lVar24 + 0x28) = uVar16;
      puVar28 = (undefined8 *)(*(long *)(lVar24 + 8) + lVar9 * 0x10 + 8);
      plVar23 = (long *)*puVar28;
      if (plVar23 != (long *)0x0) {
        plVar22 = plVar23 + 1;
        iVar18 = (int)*plVar22;
        iVar15 = (int)*plVar22 + -1;
        if (iVar18 != (int)*plVar22) {
          ClearExclusiveLocal();
LAB_001e85d0:
          do {
            lVar9 = *plVar22;
            iVar15 = iVar18 + -1;
            if ((int)lVar9 == iVar18) {
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar8) {
                *(int *)plVar22 = iVar15;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_001e857c;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = (int)lVar9;
          } while( true );
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar8) {
          *(int *)plVar22 = iVar15;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_001e85d0;
LAB_001e857c:
        if (iVar15 == 0) {
          piVar29 = (int *)((long)plVar23 + 0xc);
          (**(code **)(*plVar23 + 0x10))(plVar23);
          iVar15 = *piVar29 + -1;
          iVar18 = *piVar29;
          if (iVar18 != *piVar29) {
            ClearExclusiveLocal();
LAB_001e8630:
            do {
              iVar4 = *piVar29;
              iVar15 = iVar18 + -1;
              if (iVar4 == iVar18) {
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                if (bVar8) {
                  *piVar29 = iVar15;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_001e8604;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar18 = iVar4;
            } while( true );
          }
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
          if (bVar8) {
            *piVar29 = iVar15;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_001e8630;
LAB_001e8604:
          if (iVar15 == 0) {
            (**(code **)(*plVar23 + 8))(plVar23);
          }
        }
        *puVar28 = 0;
        uVar16 = *(ulong *)(lVar24 + 0x28);
      }
      uVar10 = *(ulong *)(lVar24 + 0x38);
      lVar26 = lVar26 + 1;
      uVar19 = 0;
      if (uVar10 != 0) {
        uVar19 = uVar16 / uVar10;
      }
      lVar9 = uVar16 - uVar19 * uVar10;
      *(long *)(lVar24 + 0x28) = lVar9;
    } while (lVar26 != lVar25);
    *(long *)(lVar24 + 0x30) = *(long *)(lVar24 + 0x30) - lVar25;
    cVar5 = *(char *)(param_1 + 0x110);
  }
  if (cVar5 == '\0') {
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar24 = (**(code **)(**(long **)(param_1 + 0x108) + 0x30))
                           (*(long **)(param_1 + 0x108),local_2060,0x400,param_2), lVar24 != 0)) {
      plVar22 = (long *)(param_1 + 0x28);
      plVar23 = (long *)*plVar22;
      if (plVar23 != (long *)0x0) {
        lVar25 = 0;
        do {
          if (plVar23 != (long *)0x0) {
            plVar27 = plVar22;
            do {
              plVar17 = plVar23;
              if ((ulong)plVar23[4] < local_2060[lVar25]) {
                plVar17 = plVar27;
                plVar23 = plVar23 + 1;
              }
              plVar23 = (long *)*plVar23;
              plVar27 = plVar17;
            } while (plVar23 != (long *)0x0);
            if ((plVar17 != plVar22) && ((ulong)plVar17[4] <= local_2060[lVar25])) {
              lVar26 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
              plVar23 = (long *)plVar17[6];
              puVar28 = (undefined8 *)(*(long *)(lVar26 + 8) + *(long *)(lVar26 + 0x20) * 0x10 + 8);
              plVar27 = (long *)*puVar28;
              if (plVar27 != plVar23) {
                if (plVar27 != (long *)0x0) {
                  plVar23 = plVar27 + 1;
                  iVar18 = (int)*plVar23;
                  iVar15 = (int)*plVar23 + -1;
                  if (iVar18 != (int)*plVar23) {
                    ClearExclusiveLocal();
LAB_001e8bb0:
                    do {
                      lVar9 = *plVar23;
                      iVar15 = iVar18 + -1;
                      if ((int)lVar9 == iVar18) {
                        cVar5 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                        if (bVar8) {
                          *(int *)plVar23 = iVar15;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                        if (cVar5 == '\0') goto LAB_001e8b60;
                      }
                      else {
                        ClearExclusiveLocal();
                      }
                      iVar18 = (int)lVar9;
                    } while( true );
                  }
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar8) {
                    *(int *)plVar23 = iVar15;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 != '\0') goto LAB_001e8bb0;
LAB_001e8b60:
                  if (iVar15 == 0) {
                    piVar29 = (int *)((long)plVar27 + 0xc);
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                    iVar15 = *piVar29 + -1;
                    iVar18 = *piVar29;
                    if (iVar18 == *piVar29) {
                      cVar5 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                      if (bVar8) {
                        *piVar29 = iVar15;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 != '\0') goto LAB_001e8bdc;
                      bVar8 = true;
                    }
                    else {
                      ClearExclusiveLocal();
LAB_001e8bdc:
                      bVar8 = false;
                    }
                    if (!bVar8) {
                      do {
                        iVar4 = *piVar29;
                        iVar15 = iVar18 + -1;
                        if (iVar4 == iVar18) {
                          cVar5 = '\x01';
                          bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                          if (bVar8) {
                            *piVar29 = iVar15;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                          if (cVar5 == '\0') break;
                        }
                        else {
                          ClearExclusiveLocal();
                        }
                        iVar18 = iVar4;
                      } while( true );
                    }
                    if (iVar15 == 0) {
                      (**(code **)(*plVar27 + 8))(plVar27);
                    }
                  }
                  plVar23 = (long *)plVar17[6];
                }
                *puVar28 = plVar23;
                if ((plVar23 != (long *)0x0) && (plVar23 = plVar23 + 1, (int)*plVar23 != 0)) {
                  lVar9 = *plVar23;
                  if ((int)lVar9 == (int)*plVar23) {
                    cVar5 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                    if (bVar8) {
                      *(int *)plVar23 = (int)*plVar23 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 != '\0') goto LAB_001e8c70;
                    bVar8 = true;
                  }
                  else {
                    ClearExclusiveLocal();
LAB_001e8c70:
                    bVar8 = false;
                  }
                  iVar18 = (int)lVar9;
                  if (!bVar8) {
                    do {
                      lVar9 = *plVar23;
                      if ((int)lVar9 == iVar18) {
                        cVar5 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                        if (bVar8) {
                          *(int *)plVar23 = iVar18 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                        if (cVar5 == '\0') break;
                      }
                      else {
                        ClearExclusiveLocal();
                      }
                      iVar18 = (int)lVar9;
                    } while( true );
                  }
                }
              }
              uVar16 = *(long *)(lVar26 + 0x20) + 1;
              uVar19 = *(ulong *)(lVar26 + 0x38);
              uVar10 = 0;
              if (uVar19 != 0) {
                uVar10 = uVar16 / uVar19;
              }
              *(ulong *)(lVar26 + 0x20) = uVar16 - uVar10 * uVar19;
              *(long *)(lVar26 + 0x30) = *(long *)(lVar26 + 0x30) + 1;
            }
          }
          lVar25 = lVar25 + 1;
          if (lVar25 == lVar24) {
            return 1;
          }
          plVar23 = (long *)*plVar22;
        } while( true );
      }
    }
  }
  else {
    plVar23 = *(long **)(*(long *)(param_1 + 0xa8) + 0x10);
    puVar28 = (undefined8 *)*plVar23;
    puVar12 = (undefined8 *)plVar23[1];
    while (puVar12 != puVar28) {
      puVar12 = puVar12 + -2;
      (**(code **)*puVar12)(puVar12);
    }
    plVar23[1] = (long)puVar28;
    plVar23 = (long *)(param_1 + 0xb8);
    (**(code **)(*plVar23 + 0x10))(plVar23);
    puVar2 = PTR_LAB_04bcbfb0;
    if (*(long *)(param_1 + 0x18) == 0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    else {
      plVar27 = *(long **)(param_1 + 8);
      plVar22 = (long *)(param_1 + 0x10);
      if (*(char *)(param_1 + 0x100) == '\0') {
        if (plVar27 != plVar22) {
          puVar2 = PTR_DAT_04bcbf30 + 0x10;
          do {
            lVar24 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
            plVar17 = *(long **)(lVar24 + 8);
            if (plVar17 == *(long **)(lVar24 + 0x10)) {
              FUN_001ed160(lVar24,plVar27 + 4);
              plVar17 = (long *)plVar27[1];
              if ((long *)plVar27[1] != (long *)0x0) goto LAB_001e8db4;
LAB_001e8dc4:
              do {
                plVar11 = (long *)plVar27[2];
                bVar8 = (long *)*plVar11 != plVar27;
                plVar27 = plVar11;
              } while (bVar8);
            }
            else {
              *plVar17 = (long)puVar2;
              plVar17[1] = 0;
              lVar25 = plVar27[5];
              if (lVar25 != 0) {
                plVar17[1] = lVar25;
                piVar29 = (int *)(lVar25 + 8);
                if (*piVar29 != 0) {
                  iVar18 = *piVar29;
                  if (iVar18 != *piVar29) {
                    ClearExclusiveLocal();
LAB_001e8df0:
                    do {
                      iVar15 = *piVar29;
                      if (iVar15 == iVar18) {
                        cVar5 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                        if (bVar8) {
                          *piVar29 = iVar18 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                        if (cVar5 == '\0') goto LAB_001e8da4;
                      }
                      else {
                        ClearExclusiveLocal();
                      }
                      iVar18 = iVar15;
                    } while( true );
                  }
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                  if (bVar8) {
                    *piVar29 = *piVar29 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 != '\0') goto LAB_001e8df0;
                }
              }
LAB_001e8da4:
              *(long **)(lVar24 + 8) = plVar17 + 2;
              plVar17 = (long *)plVar27[1];
              if ((long *)plVar27[1] == (long *)0x0) goto LAB_001e8dc4;
LAB_001e8db4:
              do {
                plVar11 = plVar17;
                plVar17 = (long *)*plVar11;
              } while ((long *)*plVar11 != (long *)0x0);
            }
            plVar27 = plVar11;
          } while (plVar11 != plVar22);
        }
      }
      else if (plVar27 != plVar22) {
        puVar1 = PTR_DAT_04bcbf30 + 0x10;
        do {
          lVar24 = plVar27[0x1a];
          local_2060[0]._0_2_ = 0;
          if (lVar24 == 0) {
LAB_001e87a0:
            lVar24 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
            plVar17 = *(long **)(lVar24 + 8);
            if (plVar17 != *(long **)(lVar24 + 0x10)) {
              *plVar17 = (long)puVar1;
              plVar17[1] = 0;
              lVar25 = plVar27[5];
              if (lVar25 != 0) {
                plVar17[1] = lVar25;
                piVar29 = (int *)(lVar25 + 8);
                if (*piVar29 != 0) {
                  iVar18 = *piVar29;
                  if (iVar18 != *piVar29) {
                    ClearExclusiveLocal();
LAB_001e8850:
                    do {
                      iVar15 = *piVar29;
                      if (iVar15 == iVar18) {
                        cVar5 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                        if (bVar8) {
                          *piVar29 = iVar18 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                        if (cVar5 == '\0') goto LAB_001e8820;
                      }
                      else {
                        ClearExclusiveLocal();
                      }
                      iVar18 = iVar15;
                    } while( true );
                  }
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                  if (bVar8) {
                    *piVar29 = *piVar29 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 != '\0') goto LAB_001e8850;
                }
              }
LAB_001e8820:
              *(long **)(lVar24 + 8) = plVar17 + 2;
              plVar17 = (long *)plVar27[1];
              goto joined_r0x001e8a0c;
            }
            FUN_001ed160(lVar24,plVar27 + 4);
            plVar17 = (long *)plVar27[1];
            if ((long *)plVar27[1] == (long *)0x0) goto LAB_001e8a10;
LAB_001e8830:
            do {
              plVar11 = plVar17;
              plVar17 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
          else {
            puVar3 = (undefined *)0x0;
            if (*(long *)(lVar24 + 0x10) != 0) {
              puVar3 = puVar2;
            }
            if ((puVar3 == (undefined *)0x0) || (*(ulong *)(*(long *)(lVar24 + 0x10) + 0x30) < 3))
            goto LAB_001e87a0;
            FUN_0018a674(*(long *)(lVar24 + 0x10),local_2060,2);
            if ((ushort)local_2060[0] - 0x555 < 0xfffffaac) {
              FUN_0018a71c();
              goto LAB_001e87a0;
            }
            if (*(ulong *)(*(long *)(plVar27[0x1a] + 0x10) + 0x30) <
                (ulong)(ushort)local_2060[0] + 2) goto LAB_001e87a0;
            lVar24 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
            plVar17 = (long *)plVar27[5];
            puVar28 = (undefined8 *)(*(long *)(lVar24 + 8) + *(long *)(lVar24 + 0x20) * 0x10 + 8);
            plVar11 = (long *)*puVar28;
            if (plVar11 != plVar17) {
              if (plVar11 != (long *)0x0) {
                plVar17 = plVar11 + 1;
                lVar25 = *plVar17;
                iVar18 = (int)*plVar17 + -1;
                if ((int)lVar25 == (int)*plVar17) {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar8) {
                    *(int *)plVar17 = iVar18;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 != '\0') goto LAB_001e88cc;
                  bVar8 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_001e88cc:
                  bVar8 = false;
                }
                iVar15 = (int)lVar25;
                if (!bVar8) {
                  do {
                    lVar25 = *plVar17;
                    iVar18 = iVar15 + -1;
                    if ((int)lVar25 == iVar15) {
                      cVar5 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                      if (bVar8) {
                        *(int *)plVar17 = iVar18;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') break;
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                    iVar15 = (int)lVar25;
                  } while( true );
                }
                if (iVar18 == 0) {
                  piVar29 = (int *)((long)plVar11 + 0xc);
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                  iVar15 = *piVar29 + -1;
                  iVar18 = *piVar29;
                  if (iVar18 == *piVar29) {
                    cVar5 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                    if (bVar8) {
                      *piVar29 = iVar15;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 != '\0') goto LAB_001e894c;
                    bVar8 = true;
                  }
                  else {
                    ClearExclusiveLocal();
LAB_001e894c:
                    bVar8 = false;
                  }
                  if (!bVar8) {
                    do {
                      iVar4 = *piVar29;
                      iVar15 = iVar18 + -1;
                      if (iVar4 == iVar18) {
                        cVar5 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                        if (bVar8) {
                          *piVar29 = iVar15;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                        if (cVar5 == '\0') break;
                      }
                      else {
                        ClearExclusiveLocal();
                      }
                      iVar18 = iVar4;
                    } while( true );
                  }
                  if (iVar15 == 0) {
                    (**(code **)(*plVar11 + 8))(plVar11);
                  }
                }
                plVar17 = (long *)plVar27[5];
              }
              *puVar28 = plVar17;
              if ((plVar17 != (long *)0x0) && (plVar17 = plVar17 + 1, (int)*plVar17 != 0)) {
                lVar25 = *plVar17;
                if ((int)lVar25 == (int)*plVar17) {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar8) {
                    *(int *)plVar17 = (int)*plVar17 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 != '\0') goto LAB_001e89e0;
                  bVar8 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_001e89e0:
                  bVar8 = false;
                }
                iVar18 = (int)lVar25;
                if (!bVar8) {
                  do {
                    lVar25 = *plVar17;
                    if ((int)lVar25 == iVar18) {
                      cVar5 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                      if (bVar8) {
                        *(int *)plVar17 = iVar18 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') break;
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                    iVar18 = (int)lVar25;
                  } while( true );
                }
              }
            }
            uVar16 = *(long *)(lVar24 + 0x20) + 1;
            uVar19 = *(ulong *)(lVar24 + 0x38);
            uVar10 = 0;
            if (uVar19 != 0) {
              uVar10 = uVar16 / uVar19;
            }
            *(ulong *)(lVar24 + 0x20) = uVar16 - uVar10 * uVar19;
            *(long *)(lVar24 + 0x30) = *(long *)(lVar24 + 0x30) + 1;
            plVar17 = (long *)plVar27[1];
joined_r0x001e8a0c:
            if (plVar17 != (long *)0x0) goto LAB_001e8830;
LAB_001e8a10:
            do {
              plVar11 = (long *)plVar27[2];
              bVar8 = (long *)*plVar11 != plVar27;
              plVar27 = plVar11;
            } while (bVar8);
          }
          plVar27 = plVar11;
        } while (plVar11 != plVar22);
      }
      (**(code **)(*(long *)(param_1 + 0xb8) + 0x20))(plVar23);
      plVar23 = *(long **)(*(long *)(param_1 + 0xa8) + 0x10);
      lVar24 = *plVar23;
      lVar25 = plVar23[1];
      if (lVar24 != lVar25) {
        if (((param_2 == 0) && (lVar25 - lVar24 == 0x10)) &&
           (lVar25 = *(long *)(*(long *)(param_1 + 0x88) + 0x10), *(long *)(lVar25 + 0x30) == 0)) {
          FUN_001e9bd0(lVar25,lVar24);
          plVar23 = *(long **)(*(long *)(param_1 + 0xa8) + 0x10);
          puVar28 = (undefined8 *)*plVar23;
          puVar12 = (undefined8 *)plVar23[1];
          while (puVar12 != puVar28) {
            puVar12 = puVar12 + -2;
            (**(code **)*puVar12)(puVar12);
          }
          plVar23[1] = (long)puVar28;
        }
        else {
          puVar28 = *(undefined8 **)(*(long *)(param_1 + 0x98) + 0x10);
          puVar28[1] = *puVar28;
          do {
            if (*(long *)(lVar24 + 8) == 0) {
              uVar30 = 0;
              plVar23 = *(long **)(*(long *)(param_1 + 0x98) + 0x10);
              puVar28 = (undefined8 *)plVar23[1];
              puVar12 = (undefined8 *)plVar23[2];
              if (puVar12 <= puVar28) goto LAB_001e8ee8;
LAB_001e8e80:
              *puVar28 = uVar30;
              puVar28[1] = 1;
              plVar23[1] = (long)(puVar28 + 2);
            }
            else {
              uVar30 = *(undefined8 *)(*(long *)(lVar24 + 8) + 0x10);
              plVar23 = *(long **)(*(long *)(param_1 + 0x98) + 0x10);
              puVar28 = (undefined8 *)plVar23[1];
              puVar12 = (undefined8 *)plVar23[2];
              if (puVar28 < puVar12) goto LAB_001e8e80;
LAB_001e8ee8:
              lVar25 = (long)puVar28 - *plVar23 >> 4;
              uVar16 = lVar25 + 1;
              if (uVar16 >> 0x3c != 0) {
                FUN_001de854(plVar23);
                goto LAB_001e9280;
              }
              uVar10 = (long)puVar12 - *plVar23;
              uVar19 = (long)uVar10 >> 3;
              if (uVar19 <= uVar16) {
                uVar19 = uVar16;
              }
              if (0x7fffffffffffffef < uVar10) {
                uVar19 = 0xfffffffffffffff;
              }
              if (uVar19 == 0) {
                lVar26 = 0;
                puVar28 = (undefined8 *)(lVar25 * 0x10);
                *puVar28 = uVar30;
                puVar28[1] = 1;
                puVar12 = (undefined8 *)*plVar23;
                puVar14 = (undefined8 *)plVar23[1];
                puVar20 = puVar28;
                puVar21 = puVar28;
                if (puVar14 != puVar12) goto LAB_001e8f60;
              }
              else {
                lVar26 = FUN_00187df4(uVar19 << 4);
                puVar28 = (undefined8 *)(lVar26 + lVar25 * 0x10);
                *puVar28 = uVar30;
                puVar28[1] = 1;
                puVar12 = (undefined8 *)*plVar23;
                puVar14 = (undefined8 *)plVar23[1];
                puVar20 = puVar28;
                puVar21 = puVar28;
                if (puVar14 != puVar12) {
LAB_001e8f60:
                  do {
                    puVar13 = puVar14 + -2;
                    uVar30 = puVar14[-1];
                    puVar21 = puVar20 + -2;
                    *puVar21 = *puVar13;
                    puVar20[-1] = uVar30;
                    puVar14 = puVar13;
                    puVar20 = puVar21;
                  } while (puVar13 != puVar12);
                  puVar14 = (undefined8 *)*plVar23;
                }
              }
              plVar23[2] = lVar26 + uVar19 * 0x10;
              *plVar23 = (long)puVar21;
              plVar23[1] = (long)(puVar28 + 2);
              if (puVar14 != (undefined8 *)0x0) {
                FUN_00187e4c(puVar14);
              }
            }
            lVar24 = lVar24 + 0x10;
          } while (lVar24 != *(long *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x10) + 8));
          plVar23 = *(long **)(*(long *)(param_1 + 0x98) + 0x10);
          lVar24 = *plVar23;
          uVar16 = plVar23[1] - lVar24;
          if (uVar16 == 0) goto LAB_001e9284;
          uVar16 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))
                             (*(long **)(param_1 + 0x108),lVar24,uVar16 >> 4,param_2);
          if ((uVar16 & 1) != 0) {
            lVar25 = *(long *)(param_1 + 0x98);
            lVar24 = **(long **)(lVar25 + 0x10);
            if (lVar24 != (*(long **)(lVar25 + 0x10))[1]) {
              uVar16 = 0;
              do {
                if ((*(byte *)(lVar24 + 0xc) & 1) != 0) {
                  plVar23 = *(long **)(*(long *)(param_1 + 0xa8) + 0x10);
                  lVar25 = *plVar23;
                  if ((ulong)(plVar23[1] - lVar25 >> 4) <= uVar16) goto LAB_001e9280;
                  lVar26 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
                  plVar27 = (long *)(lVar25 + uVar16 * 0x10 + 8);
                  plVar23 = (long *)*plVar27;
                  puVar28 = (undefined8 *)
                            (*(long *)(lVar26 + 8) + *(long *)(lVar26 + 0x20) * 0x10 + 8);
                  plVar22 = (long *)*puVar28;
                  if (plVar22 != plVar23) {
                    if (plVar22 != (long *)0x0) {
                      plVar23 = plVar22 + 1;
                      iVar18 = (int)*plVar23;
                      iVar15 = (int)*plVar23 + -1;
                      if (iVar18 != (int)*plVar23) {
                        ClearExclusiveLocal();
LAB_001e90f0:
                        do {
                          lVar25 = *plVar23;
                          iVar15 = iVar18 + -1;
                          if ((int)lVar25 == iVar18) {
                            cVar5 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                            if (bVar8) {
                              *(int *)plVar23 = iVar15;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                            if (cVar5 == '\0') goto LAB_001e90a0;
                          }
                          else {
                            ClearExclusiveLocal();
                          }
                          iVar18 = (int)lVar25;
                        } while( true );
                      }
                      cVar5 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                      if (bVar8) {
                        *(int *)plVar23 = iVar15;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 != '\0') goto LAB_001e90f0;
LAB_001e90a0:
                      if (iVar15 == 0) {
                        piVar29 = (int *)((long)plVar22 + 0xc);
                        (**(code **)(*plVar22 + 0x10))(plVar22);
                        iVar15 = *piVar29 + -1;
                        iVar18 = *piVar29;
                        if (iVar18 == *piVar29) {
                          cVar5 = '\x01';
                          bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                          if (bVar8) {
                            *piVar29 = iVar15;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                          if (cVar5 != '\0') goto LAB_001e911c;
                          bVar8 = true;
                        }
                        else {
                          ClearExclusiveLocal();
LAB_001e911c:
                          bVar8 = false;
                        }
                        if (!bVar8) {
                          do {
                            iVar4 = *piVar29;
                            iVar15 = iVar18 + -1;
                            if (iVar4 == iVar18) {
                              cVar5 = '\x01';
                              bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                              if (bVar8) {
                                *piVar29 = iVar15;
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                              if (cVar5 == '\0') break;
                            }
                            else {
                              ClearExclusiveLocal();
                            }
                            iVar18 = iVar4;
                          } while( true );
                        }
                        if (iVar15 == 0) {
                          (**(code **)(*plVar22 + 8))(plVar22);
                        }
                      }
                      plVar23 = (long *)*plVar27;
                    }
                    *puVar28 = plVar23;
                    if ((plVar23 != (long *)0x0) && (plVar23 = plVar23 + 1, (int)*plVar23 != 0)) {
                      iVar18 = (int)*plVar23;
                      if (iVar18 != (int)*plVar23) {
                        ClearExclusiveLocal();
LAB_001e91e0:
                        do {
                          lVar25 = *plVar23;
                          if ((int)lVar25 == iVar18) {
                            cVar5 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                            if (bVar8) {
                              *(int *)plVar23 = iVar18 + 1;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                            if (cVar5 == '\0') goto LAB_001e8fe0;
                          }
                          else {
                            ClearExclusiveLocal();
                          }
                          iVar18 = (int)lVar25;
                        } while( true );
                      }
                      cVar5 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                      if (bVar8) {
                        *(int *)plVar23 = (int)*plVar23 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 != '\0') goto LAB_001e91e0;
                    }
                  }
LAB_001e8fe0:
                  uVar19 = *(long *)(lVar26 + 0x20) + 1;
                  uVar10 = *(ulong *)(lVar26 + 0x38);
                  uVar6 = 0;
                  if (uVar10 != 0) {
                    uVar6 = uVar19 / uVar10;
                  }
                  *(ulong *)(lVar26 + 0x20) = uVar19 - uVar6 * uVar10;
                  *(long *)(lVar26 + 0x30) = *(long *)(lVar26 + 0x30) + 1;
                  lVar25 = *(long *)(param_1 + 0x98);
                }
                lVar24 = lVar24 + 0x10;
                uVar16 = uVar16 + 1;
              } while (lVar24 != *(long *)(*(long *)(lVar25 + 0x10) + 8));
            }
          }
        }
      }
    }
  }
  return 1;
LAB_001e9280:
  FUN_001ed150();
LAB_001e9284:
  FUN_001ed39c();
                    /* WARNING: Does not return */
  pcVar7 = (code *)UndefinedInstructionException(0,0x1e9288);
  (*pcVar7)();
}

