
/* WARNING: Removing unreachable block (ram,0x001e5154) */
/* WARNING: Removing unreachable block (ram,0x001e5458) */
/* WARNING: Removing unreachable block (ram,0x001e5894) */

void FUN_001e4ef0(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  bool bVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  int *piVar22;
  
  lVar9 = FUN_00185a6c(0x40);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 8) = 0;
    *(undefined8 *)(lVar9 + 0x10) = 0;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    if (param_2 != 0) {
      if (param_2 >> 0x3c != 0) goto LAB_001e5aa0;
      puVar10 = (undefined8 *)FUN_00187df4(param_2 * 0x10);
      puVar4 = puVar10 + param_2 * 2;
      *(undefined8 **)(lVar9 + 8) = puVar10;
      *(undefined8 **)(lVar9 + 0x18) = puVar4;
      for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar10 = &PTR_LAB_0483cdf8;
        puVar10[1] = 0;
        puVar10 = puVar10 + 2;
      }
      if (2 < (param_2 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar10 = &PTR_LAB_0483cdf8;
          puVar10[1] = 0;
          puVar10[2] = &PTR_LAB_0483cdf8;
          puVar10[3] = 0;
          puVar10[4] = &PTR_LAB_0483cdf8;
          puVar10[5] = 0;
          puVar10[6] = &PTR_LAB_0483cdf8;
          puVar10[7] = 0;
          puVar10 = puVar10 + 8;
        } while (puVar10 != puVar4);
      }
      *(undefined8 **)(lVar9 + 0x10) = puVar4;
    }
    *(undefined8 *)(lVar9 + 0x20) = 0;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(ulong *)(lVar9 + 0x38) = param_2;
  }
  plVar11 = (long *)FUN_00185a6c(0x20);
  puVar8 = PTR_DAT_04bcbf40;
  if (plVar11 != (long *)0x0) {
    *plVar11 = (long)(PTR_DAT_04bcbf40 + 0x10);
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((long)plVar11 + 0xc) = 1;
    plVar11[2] = lVar9;
    *plVar11 = (long)&PTR_LAB_0483d068;
  }
  plVar21 = *(long **)(param_1 + 0x88);
  if (plVar21 == plVar11) {
LAB_001e5194:
    if (plVar11 != (long *)0x0) {
LAB_001e5198:
      plVar21 = plVar11 + 1;
      iVar18 = (int)*plVar21;
      iVar15 = (int)*plVar21 + -1;
      if (iVar18 != (int)*plVar21) {
        ClearExclusiveLocal();
LAB_001e5220:
        do {
          lVar9 = *plVar21;
          iVar15 = iVar18 + -1;
          if ((int)lVar9 == iVar18) {
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar17) {
              *(int *)plVar21 = iVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_001e51d0;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar18 = (int)lVar9;
        } while( true );
      }
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar17) {
        *(int *)plVar21 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_001e5220;
LAB_001e51d0:
      if (iVar15 == 0) {
        piVar22 = (int *)((long)plVar11 + 0xc);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        iVar15 = *piVar22 + -1;
        iVar18 = *piVar22;
        if (iVar18 != *piVar22) {
          ClearExclusiveLocal();
LAB_001e5310:
          do {
            iVar3 = *piVar22;
            iVar15 = iVar18 + -1;
            if (iVar3 == iVar18) {
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar17) {
                *piVar22 = iVar15;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_001e5254;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = iVar3;
          } while( true );
        }
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar17) {
          *piVar22 = iVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_001e5310;
LAB_001e5254:
        if (iVar15 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
  }
  else {
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 1;
      iVar18 = (int)*plVar1;
      iVar15 = (int)*plVar1 + -1;
      if (iVar18 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001e5084:
        do {
          lVar9 = *plVar1;
          iVar15 = iVar18 + -1;
          if ((int)lVar9 == iVar18) {
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar17) {
              *(int *)plVar1 = iVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_001e5038;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar18 = (int)lVar9;
        } while( true );
      }
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar17) {
        *(int *)plVar1 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_001e5084;
LAB_001e5038:
      if (iVar15 != 0) goto LAB_001e50cc;
      piVar22 = (int *)((long)plVar21 + 0xc);
      (**(code **)(*plVar21 + 0x10))(plVar21);
      iVar15 = *piVar22 + -1;
      iVar18 = *piVar22;
      if (iVar18 == *piVar22) {
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar17) {
          *piVar22 = iVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_001e50b0;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e50b0:
        bVar17 = false;
      }
      if (!bVar17) {
        do {
          iVar3 = *piVar22;
          iVar15 = iVar18 + -1;
          if (iVar3 == iVar18) {
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar17) {
              *piVar22 = iVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar18 = iVar3;
        } while( true );
      }
      if (iVar15 == 0) {
        (**(code **)(*plVar21 + 8))(plVar21);
      }
    }
LAB_001e50cc:
    *(long **)(param_1 + 0x88) = plVar11;
    if (plVar11 != (long *)0x0) {
      plVar21 = plVar11 + 1;
      if ((int)*plVar21 != 0) {
        iVar18 = (int)*plVar21;
        if (iVar18 != (int)*plVar21) {
          ClearExclusiveLocal();
LAB_001e5170:
          do {
            lVar9 = *plVar21;
            if ((int)lVar9 == iVar18) {
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar17) {
                *(int *)plVar21 = iVar18 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_001e5194;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = (int)lVar9;
          } while( true );
        }
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar17) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_001e5170;
      }
      goto LAB_001e5198;
    }
  }
  puVar10 = (undefined8 *)FUN_00185a6c(0x18);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
  }
  plVar11 = (long *)FUN_00185a6c(0x20);
  if (plVar11 != (long *)0x0) {
    *plVar11 = (long)(puVar8 + 0x10);
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((long)plVar11 + 0xc) = 1;
    plVar11[2] = (long)puVar10;
    *plVar11 = (long)&PTR_LAB_0483d0c0;
  }
  plVar21 = *(long **)(param_1 + 0x98);
  if (plVar21 == plVar11) {
LAB_001e5494:
    if (plVar11 != (long *)0x0) {
LAB_001e5498:
      plVar21 = plVar11 + 1;
      iVar18 = (int)*plVar21;
      iVar15 = (int)*plVar21 + -1;
      if (iVar18 != (int)*plVar21) {
        ClearExclusiveLocal();
LAB_001e5520:
        do {
          lVar9 = *plVar21;
          iVar15 = iVar18 + -1;
          if ((int)lVar9 == iVar18) {
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar17) {
              *(int *)plVar21 = iVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_001e54d0;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar18 = (int)lVar9;
        } while( true );
      }
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar17) {
        *(int *)plVar21 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_001e5520;
LAB_001e54d0:
      if (iVar15 == 0) {
        piVar22 = (int *)((long)plVar11 + 0xc);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        iVar15 = *piVar22 + -1;
        iVar18 = *piVar22;
        if (iVar18 != *piVar22) {
          ClearExclusiveLocal();
LAB_001e5690:
          do {
            iVar3 = *piVar22;
            iVar15 = iVar18 + -1;
            if (iVar3 == iVar18) {
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar17) {
                *piVar22 = iVar15;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_001e5554;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = iVar3;
          } while( true );
        }
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar17) {
          *piVar22 = iVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_001e5690;
LAB_001e5554:
        if (iVar15 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
  }
  else {
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 1;
      iVar18 = (int)*plVar1;
      iVar15 = (int)*plVar1 + -1;
      if (iVar18 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001e5390:
        do {
          lVar9 = *plVar1;
          iVar15 = iVar18 + -1;
          if ((int)lVar9 == iVar18) {
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar17) {
              *(int *)plVar1 = iVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_001e5344;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar18 = (int)lVar9;
        } while( true );
      }
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar17) {
        *(int *)plVar1 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_001e5390;
LAB_001e5344:
      if (iVar15 != 0) goto LAB_001e53d8;
      piVar22 = (int *)((long)plVar21 + 0xc);
      (**(code **)(*plVar21 + 0x10))(plVar21);
      iVar15 = *piVar22 + -1;
      iVar18 = *piVar22;
      if (iVar18 == *piVar22) {
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar17) {
          *piVar22 = iVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_001e53bc;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e53bc:
        bVar17 = false;
      }
      if (!bVar17) {
        do {
          iVar3 = *piVar22;
          iVar15 = iVar18 + -1;
          if (iVar3 == iVar18) {
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar17) {
              *piVar22 = iVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar18 = iVar3;
        } while( true );
      }
      if (iVar15 == 0) {
        (**(code **)(*plVar21 + 8))(plVar21);
      }
    }
LAB_001e53d8:
    *(long **)(param_1 + 0x98) = plVar11;
    if (plVar11 != (long *)0x0) {
      plVar21 = plVar11 + 1;
      if ((int)*plVar21 != 0) {
        iVar18 = (int)*plVar21;
        if (iVar18 != (int)*plVar21) {
          ClearExclusiveLocal();
LAB_001e5470:
          do {
            lVar9 = *plVar21;
            if ((int)lVar9 == iVar18) {
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar17) {
                *(int *)plVar21 = iVar18 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_001e5494;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = (int)lVar9;
          } while( true );
        }
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar17) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_001e5470;
      }
      goto LAB_001e5498;
    }
  }
  plVar11 = *(long **)(*(long *)(param_1 + 0x98) + 0x10);
  lVar9 = *plVar11;
  if ((ulong)(plVar11[2] - lVar9 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_001de854(plVar11);
LAB_001e5aa0:
      FUN_001ecc0c();
                    /* WARNING: Does not return */
      pcVar7 = (code *)UndefinedInstructionException(0,0x1e5aa4);
      (*pcVar7)();
    }
    lVar16 = plVar11[1];
    lVar12 = FUN_00187df4(param_2 * 0x10);
    puVar10 = (undefined8 *)(lVar12 + (lVar16 - lVar9));
    puVar4 = (undefined8 *)*plVar11;
    puVar14 = (undefined8 *)plVar11[1];
    puVar19 = puVar10;
    puVar20 = puVar10;
    if (puVar14 != puVar4) {
      do {
        puVar13 = puVar14 + -2;
        uVar5 = puVar14[-1];
        puVar20 = puVar19 + -2;
        *puVar20 = *puVar13;
        puVar19[-1] = uVar5;
        puVar14 = puVar13;
        puVar19 = puVar20;
      } while (puVar13 != puVar4);
      puVar14 = (undefined8 *)*plVar11;
    }
    *plVar11 = (long)puVar20;
    plVar11[1] = (long)puVar10;
    plVar11[2] = lVar12 + param_2 * 0x10;
    if (puVar14 != (undefined8 *)0x0) {
      FUN_00187e4c();
    }
  }
  if (*(char *)(param_1 + 0x110) != '\0') {
    puVar10 = (undefined8 *)FUN_00185a6c(0x18);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
    }
    plVar11 = (long *)FUN_00185a6c(0x20);
    if (plVar11 != (long *)0x0) {
      *plVar11 = (long)(puVar8 + 0x10);
      *(undefined4 *)(plVar11 + 1) = 1;
      *(undefined4 *)((long)plVar11 + 0xc) = 1;
      plVar11[2] = (long)puVar10;
      *plVar11 = (long)&PTR_LAB_0483d118;
    }
    plVar21 = *(long **)(param_1 + 0xa8);
    if (plVar21 == plVar11) {
LAB_001e58d4:
      if (plVar11 != (long *)0x0) {
LAB_001e58d8:
        plVar21 = plVar11 + 1;
        iVar18 = (int)*plVar21;
        iVar15 = (int)*plVar21 + -1;
        if (iVar18 != (int)*plVar21) {
          ClearExclusiveLocal();
LAB_001e5960:
          do {
            lVar9 = *plVar21;
            iVar15 = iVar18 + -1;
            if ((int)lVar9 == iVar18) {
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar17) {
                *(int *)plVar21 = iVar15;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_001e5910;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = (int)lVar9;
          } while( true );
        }
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar17) {
          *(int *)plVar21 = iVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_001e5960;
LAB_001e5910:
        if (iVar15 != 0) goto LAB_001e59a8;
        piVar22 = (int *)((long)plVar11 + 0xc);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        iVar15 = *piVar22 + -1;
        iVar18 = *piVar22;
        if (iVar18 == *piVar22) {
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar17) {
            *piVar22 = iVar15;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_001e598c;
          bVar17 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e598c:
          bVar17 = false;
        }
        if (!bVar17) {
          do {
            iVar3 = *piVar22;
            iVar15 = iVar18 + -1;
            if (iVar3 == iVar18) {
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar17) {
                *piVar22 = iVar15;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = iVar3;
          } while( true );
        }
        if (iVar15 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
    else {
      if (plVar21 != (long *)0x0) {
        plVar1 = plVar21 + 1;
        iVar18 = (int)*plVar1;
        iVar15 = (int)*plVar1 + -1;
        if (iVar18 != (int)*plVar1) {
          ClearExclusiveLocal();
LAB_001e5744:
          do {
            lVar9 = *plVar1;
            iVar15 = iVar18 + -1;
            if ((int)lVar9 == iVar18) {
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar17) {
                *(int *)plVar1 = iVar15;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_001e56f8;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = (int)lVar9;
          } while( true );
        }
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar17) {
          *(int *)plVar1 = iVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_001e5744;
LAB_001e56f8:
        if (iVar15 != 0) goto LAB_001e580c;
        piVar22 = (int *)((long)plVar21 + 0xc);
        (**(code **)(*plVar21 + 0x10))(plVar21);
        iVar15 = *piVar22 + -1;
        iVar18 = *piVar22;
        if (iVar18 == *piVar22) {
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar17) {
            *piVar22 = iVar15;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_001e57f0;
          bVar17 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e57f0:
          bVar17 = false;
        }
        if (!bVar17) {
          do {
            iVar3 = *piVar22;
            iVar15 = iVar18 + -1;
            if (iVar3 == iVar18) {
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar17) {
                *piVar22 = iVar15;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = iVar3;
          } while( true );
        }
        if (iVar15 == 0) {
          (**(code **)(*plVar21 + 8))(plVar21);
        }
      }
LAB_001e580c:
      *(long **)(param_1 + 0xa8) = plVar11;
      if (plVar11 != (long *)0x0) {
        plVar21 = plVar11 + 1;
        if ((int)*plVar21 != 0) {
          iVar18 = (int)*plVar21;
          if (iVar18 != (int)*plVar21) {
            ClearExclusiveLocal();
LAB_001e58b0:
            do {
              lVar9 = *plVar21;
              if ((int)lVar9 == iVar18) {
                cVar6 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar17) {
                  *(int *)plVar21 = iVar18 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_001e58d4;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar18 = (int)lVar9;
            } while( true );
          }
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar17) {
            *(int *)plVar21 = (int)*plVar21 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_001e58b0;
        }
        goto LAB_001e58d8;
      }
    }
LAB_001e59a8:
    FUN_001e75c0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x10),param_2);
    goto LAB_001e5a1c;
  }
  plVar11 = *(long **)(param_1 + 0xa8);
  if (plVar11 == (long *)0x0) goto LAB_001e5a1c;
  plVar21 = plVar11 + 1;
  iVar18 = (int)*plVar21;
  iVar15 = (int)*plVar21 + -1;
  if (iVar18 != (int)*plVar21) {
    ClearExclusiveLocal();
LAB_001e57c4:
    do {
      lVar9 = *plVar21;
      iVar15 = iVar18 + -1;
      if ((int)lVar9 == iVar18) {
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar17) {
          *(int *)plVar21 = iVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB_001e5778;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar18 = (int)lVar9;
    } while( true );
  }
  cVar6 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar17) {
    *(int *)plVar21 = iVar15;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 != '\0') goto LAB_001e57c4;
LAB_001e5778:
  if (iVar15 == 0) {
    piVar22 = (int *)((long)plVar11 + 0xc);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    iVar15 = *piVar22 + -1;
    iVar18 = *piVar22;
    if (iVar18 == *piVar22) {
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar17) {
        *piVar22 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_001e59fc;
      bVar17 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e59fc:
      bVar17 = false;
    }
    if (!bVar17) {
      do {
        iVar3 = *piVar22;
        iVar15 = iVar18 + -1;
        if (iVar3 == iVar18) {
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar17) {
            *piVar22 = iVar15;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar18 = iVar3;
      } while( true );
    }
    if (iVar15 == 0) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
LAB_001e5a1c:
  plVar11 = (long *)(param_1 + 0xb8);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  *(undefined1 *)(param_1 + 0xb1) = 1;
  (**(code **)(*plVar11 + 0x20))(plVar11);
  FUN_001e75c0(param_1 + 0x50,param_2);
  return;
}

