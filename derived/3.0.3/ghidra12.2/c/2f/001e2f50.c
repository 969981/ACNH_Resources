
/* WARNING: Removing unreachable block (ram,0x001e3154) */
/* WARNING: Removing unreachable block (ram,0x001e3458) */
/* WARNING: Removing unreachable block (ram,0x001e3898) */

void FUN_001e2f50(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  bool bVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  int *piVar20;
  
  lVar7 = FUN_00185a6c(0x40);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    plVar8 = (long *)FUN_00187df4(0x10);
    *(long **)(lVar7 + 8) = plVar8;
    *(long **)(lVar7 + 0x10) = plVar8 + 2;
    puVar6 = PTR_DAT_04bcbf30;
    *(long **)(lVar7 + 0x18) = plVar8 + 2;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *plVar8 = (long)(puVar6 + 0x10);
    plVar8[1] = 0;
    *(undefined8 *)(lVar7 + 0x38) = 1;
  }
  plVar8 = (long *)FUN_00185a6c(0x20);
  puVar6 = PTR_DAT_04bcbf40;
  if (plVar8 != (long *)0x0) {
    *plVar8 = (long)(PTR_DAT_04bcbf40 + 0x10);
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((long)plVar8 + 0xc) = 1;
    plVar8[2] = lVar7;
    *plVar8 = (long)&PTR_LAB_0483d068;
  }
  plVar19 = *(long **)(param_1 + 0x88);
  if (plVar19 == plVar8) {
LAB_001e3194:
    if (plVar8 != (long *)0x0) {
LAB_001e3198:
      plVar19 = plVar8 + 1;
      iVar16 = (int)*plVar19;
      iVar13 = (int)*plVar19 + -1;
      if (iVar16 != (int)*plVar19) {
        ClearExclusiveLocal();
LAB_001e3220:
        do {
          lVar7 = *plVar19;
          iVar13 = iVar16 + -1;
          if ((int)lVar7 == iVar16) {
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar15) {
              *(int *)plVar19 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_001e31d0;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = (int)lVar7;
        } while( true );
      }
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar15) {
        *(int *)plVar19 = iVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_001e3220;
LAB_001e31d0:
      if (iVar13 != 0) goto LAB_001e3268;
      piVar20 = (int *)((long)plVar8 + 0xc);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar13 = *piVar20 + -1;
      iVar16 = *piVar20;
      if (iVar16 == *piVar20) {
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar15) {
          *piVar20 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_001e324c;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e324c:
        bVar15 = false;
      }
      if (!bVar15) {
        do {
          iVar2 = *piVar20;
          iVar13 = iVar16 + -1;
          if (iVar2 == iVar16) {
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar15) {
              *piVar20 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = iVar2;
        } while( true );
      }
      if (iVar13 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  else {
    if (plVar19 != (long *)0x0) {
      plVar1 = plVar19 + 1;
      iVar16 = (int)*plVar1;
      iVar13 = (int)*plVar1 + -1;
      if (iVar16 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001e3084:
        do {
          lVar7 = *plVar1;
          iVar13 = iVar16 + -1;
          if ((int)lVar7 == iVar16) {
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar15) {
              *(int *)plVar1 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_001e3038;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = (int)lVar7;
        } while( true );
      }
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar15) {
        *(int *)plVar1 = iVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_001e3084;
LAB_001e3038:
      if (iVar13 != 0) goto LAB_001e30cc;
      piVar20 = (int *)((long)plVar19 + 0xc);
      (**(code **)(*plVar19 + 0x10))(plVar19);
      iVar13 = *piVar20 + -1;
      iVar16 = *piVar20;
      if (iVar16 == *piVar20) {
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar15) {
          *piVar20 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_001e30b0;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e30b0:
        bVar15 = false;
      }
      if (!bVar15) {
        do {
          iVar2 = *piVar20;
          iVar13 = iVar16 + -1;
          if (iVar2 == iVar16) {
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar15) {
              *piVar20 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = iVar2;
        } while( true );
      }
      if (iVar13 == 0) {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
    }
LAB_001e30cc:
    *(long **)(param_1 + 0x88) = plVar8;
    if (plVar8 != (long *)0x0) {
      plVar19 = plVar8 + 1;
      if ((int)*plVar19 != 0) {
        iVar16 = (int)*plVar19;
        if (iVar16 != (int)*plVar19) {
          ClearExclusiveLocal();
LAB_001e3170:
          do {
            lVar7 = *plVar19;
            if ((int)lVar7 == iVar16) {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar15) {
                *(int *)plVar19 = iVar16 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_001e3194;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar16 = (int)lVar7;
          } while( true );
        }
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar15) {
          *(int *)plVar19 = (int)*plVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_001e3170;
      }
      goto LAB_001e3198;
    }
  }
LAB_001e3268:
  puVar9 = (undefined8 *)FUN_00185a6c(0x18);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
  }
  plVar8 = (long *)FUN_00185a6c(0x20);
  if (plVar8 != (long *)0x0) {
    *plVar8 = (long)(puVar6 + 0x10);
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((long)plVar8 + 0xc) = 1;
    plVar8[2] = (long)puVar9;
    *plVar8 = (long)&PTR_LAB_0483d0c0;
  }
  plVar19 = *(long **)(param_1 + 0x98);
  if (plVar19 == plVar8) {
LAB_001e3494:
    if (plVar8 == (long *)0x0) goto LAB_001e3558;
LAB_001e3498:
    plVar19 = plVar8 + 1;
    iVar16 = (int)*plVar19;
    iVar13 = (int)*plVar19 + -1;
    if (iVar16 != (int)*plVar19) {
      ClearExclusiveLocal();
LAB_001e3520:
      do {
        lVar7 = *plVar19;
        iVar13 = iVar16 + -1;
        if ((int)lVar7 == iVar16) {
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar15) {
            *(int *)plVar19 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_001e34d0;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = (int)lVar7;
      } while( true );
    }
    cVar5 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar15) {
      *(int *)plVar19 = iVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_001e3520;
LAB_001e34d0:
    if (iVar13 != 0) goto LAB_001e3558;
    piVar20 = (int *)((long)plVar8 + 0xc);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    iVar13 = *piVar20 + -1;
    iVar16 = *piVar20;
    if (iVar16 == *piVar20) {
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar15) {
        *piVar20 = iVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_001e354c;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e354c:
      bVar15 = false;
    }
    if (!bVar15) {
      do {
        iVar2 = *piVar20;
        iVar13 = iVar16 + -1;
        if (iVar2 == iVar16) {
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar15) {
            *piVar20 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar2;
      } while( true );
    }
    if (iVar13 != 0) goto LAB_001e3558;
    (**(code **)(*plVar8 + 8))(plVar8);
    plVar8 = *(long **)(*(long *)(param_1 + 0x98) + 0x10);
    lVar7 = plVar8[2];
    if (lVar7 == *plVar8) goto LAB_001e3570;
  }
  else {
    if (plVar19 != (long *)0x0) {
      plVar1 = plVar19 + 1;
      iVar16 = (int)*plVar1;
      iVar13 = (int)*plVar1 + -1;
      if (iVar16 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001e3390:
        do {
          lVar7 = *plVar1;
          iVar13 = iVar16 + -1;
          if ((int)lVar7 == iVar16) {
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar15) {
              *(int *)plVar1 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_001e3344;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = (int)lVar7;
        } while( true );
      }
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar15) {
        *(int *)plVar1 = iVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_001e3390;
LAB_001e3344:
      if (iVar13 != 0) goto LAB_001e33d8;
      piVar20 = (int *)((long)plVar19 + 0xc);
      (**(code **)(*plVar19 + 0x10))(plVar19);
      iVar13 = *piVar20 + -1;
      iVar16 = *piVar20;
      if (iVar16 == *piVar20) {
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar15) {
          *piVar20 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_001e33bc;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e33bc:
        bVar15 = false;
      }
      if (!bVar15) {
        do {
          iVar2 = *piVar20;
          iVar13 = iVar16 + -1;
          if (iVar2 == iVar16) {
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar15) {
              *piVar20 = iVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = iVar2;
        } while( true );
      }
      if (iVar13 == 0) {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
    }
LAB_001e33d8:
    *(long **)(param_1 + 0x98) = plVar8;
    if (plVar8 != (long *)0x0) {
      plVar19 = plVar8 + 1;
      if ((int)*plVar19 != 0) {
        iVar16 = (int)*plVar19;
        if (iVar16 != (int)*plVar19) {
          ClearExclusiveLocal();
LAB_001e3470:
          do {
            lVar7 = *plVar19;
            if ((int)lVar7 == iVar16) {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar15) {
                *(int *)plVar19 = iVar16 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_001e3494;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar16 = (int)lVar7;
          } while( true );
        }
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar15) {
          *(int *)plVar19 = (int)*plVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_001e3470;
      }
      goto LAB_001e3498;
    }
LAB_001e3558:
    plVar8 = *(long **)(*(long *)(param_1 + 0x98) + 0x10);
    lVar7 = plVar8[2];
    if (lVar7 == *plVar8) {
LAB_001e3570:
      lVar14 = plVar8[1];
      lVar10 = FUN_00187df4(0x10);
      puVar9 = (undefined8 *)(lVar10 + (lVar14 - lVar7));
      puVar3 = (undefined8 *)*plVar8;
      puVar12 = (undefined8 *)plVar8[1];
      puVar17 = puVar9;
      puVar18 = puVar9;
      if (puVar12 != puVar3) {
        do {
          puVar11 = puVar12 + -2;
          uVar4 = puVar12[-1];
          puVar18 = puVar17 + -2;
          *puVar18 = *puVar11;
          puVar17[-1] = uVar4;
          puVar12 = puVar11;
          puVar17 = puVar18;
        } while (puVar11 != puVar3);
        puVar12 = (undefined8 *)*plVar8;
      }
      *plVar8 = (long)puVar18;
      plVar8[1] = (long)puVar9;
      plVar8[2] = lVar10 + 0x10;
      if (puVar12 != (undefined8 *)0x0) {
        FUN_00187e4c();
      }
    }
  }
  if (*(char *)(param_1 + 0x110) != '\0') {
    puVar9 = (undefined8 *)FUN_00185a6c(0x18);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
    }
    plVar8 = (long *)FUN_00185a6c(0x20);
    if (plVar8 != (long *)0x0) {
      *plVar8 = (long)(puVar6 + 0x10);
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((long)plVar8 + 0xc) = 1;
      plVar8[2] = (long)puVar9;
      *plVar8 = (long)&PTR_LAB_0483d118;
    }
    plVar19 = *(long **)(param_1 + 0xa8);
    if (plVar19 == plVar8) {
LAB_001e38d4:
      if (plVar8 != (long *)0x0) {
LAB_001e38d8:
        plVar19 = plVar8 + 1;
        iVar16 = (int)*plVar19;
        iVar13 = (int)*plVar19 + -1;
        if (iVar16 != (int)*plVar19) {
          ClearExclusiveLocal();
LAB_001e3960:
          do {
            lVar7 = *plVar19;
            iVar13 = iVar16 + -1;
            if ((int)lVar7 == iVar16) {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar15) {
                *(int *)plVar19 = iVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_001e3910;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar16 = (int)lVar7;
          } while( true );
        }
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar15) {
          *(int *)plVar19 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_001e3960;
LAB_001e3910:
        if (iVar13 != 0) goto LAB_001e39a8;
        piVar20 = (int *)((long)plVar8 + 0xc);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        iVar13 = *piVar20 + -1;
        iVar16 = *piVar20;
        if (iVar16 == *piVar20) {
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar15) {
            *piVar20 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_001e398c;
          bVar15 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e398c:
          bVar15 = false;
        }
        if (!bVar15) {
          do {
            iVar2 = *piVar20;
            iVar13 = iVar16 + -1;
            if (iVar2 == iVar16) {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar15) {
                *piVar20 = iVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar16 = iVar2;
          } while( true );
        }
        if (iVar13 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    else {
      if (plVar19 != (long *)0x0) {
        plVar1 = plVar19 + 1;
        iVar16 = (int)*plVar1;
        iVar13 = (int)*plVar1 + -1;
        if (iVar16 != (int)*plVar1) {
          ClearExclusiveLocal();
LAB_001e3724:
          do {
            lVar7 = *plVar1;
            iVar13 = iVar16 + -1;
            if ((int)lVar7 == iVar16) {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar15) {
                *(int *)plVar1 = iVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_001e36d8;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar16 = (int)lVar7;
          } while( true );
        }
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar15) {
          *(int *)plVar1 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_001e3724;
LAB_001e36d8:
        if (iVar13 != 0) goto LAB_001e3818;
        piVar20 = (int *)((long)plVar19 + 0xc);
        (**(code **)(*plVar19 + 0x10))(plVar19);
        iVar13 = *piVar20 + -1;
        iVar16 = *piVar20;
        if (iVar16 == *piVar20) {
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar15) {
            *piVar20 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_001e37fc;
          bVar15 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e37fc:
          bVar15 = false;
        }
        if (!bVar15) {
          do {
            iVar2 = *piVar20;
            iVar13 = iVar16 + -1;
            if (iVar2 == iVar16) {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar15) {
                *piVar20 = iVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar16 = iVar2;
          } while( true );
        }
        if (iVar13 == 0) {
          (**(code **)(*plVar19 + 8))(plVar19);
        }
      }
LAB_001e3818:
      *(long **)(param_1 + 0xa8) = plVar8;
      if (plVar8 != (long *)0x0) {
        plVar19 = plVar8 + 1;
        if ((int)*plVar19 != 0) {
          iVar16 = (int)*plVar19;
          if (iVar16 != (int)*plVar19) {
            ClearExclusiveLocal();
LAB_001e38b0:
            do {
              lVar7 = *plVar19;
              if ((int)lVar7 == iVar16) {
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar15) {
                  *(int *)plVar19 = iVar16 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_001e38d4;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar16 = (int)lVar7;
            } while( true );
          }
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar15) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_001e38b0;
        }
        goto LAB_001e38d8;
      }
    }
LAB_001e39a8:
    FUN_001e75c0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x10),1);
    goto LAB_001e3a1c;
  }
  plVar8 = *(long **)(param_1 + 0xa8);
  if (plVar8 == (long *)0x0) goto LAB_001e3a1c;
  plVar19 = plVar8 + 1;
  iVar16 = (int)*plVar19;
  iVar13 = (int)*plVar19 + -1;
  if (iVar16 != (int)*plVar19) {
    ClearExclusiveLocal();
LAB_001e37a4:
    do {
      lVar7 = *plVar19;
      iVar13 = iVar16 + -1;
      if ((int)lVar7 == iVar16) {
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar15) {
          *(int *)plVar19 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_001e3758;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar16 = (int)lVar7;
    } while( true );
  }
  cVar5 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar15) {
    *(int *)plVar19 = iVar13;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 != '\0') goto LAB_001e37a4;
LAB_001e3758:
  if (iVar13 == 0) {
    piVar20 = (int *)((long)plVar8 + 0xc);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    iVar13 = *piVar20 + -1;
    iVar16 = *piVar20;
    if (iVar16 == *piVar20) {
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar15) {
        *piVar20 = iVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_001e39fc;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e39fc:
      bVar15 = false;
    }
    if (!bVar15) {
      do {
        iVar2 = *piVar20;
        iVar13 = iVar16 + -1;
        if (iVar2 == iVar16) {
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar15) {
            *piVar20 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar2;
      } while( true );
    }
    if (iVar13 == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
LAB_001e3a1c:
  plVar8 = (long *)(param_1 + 0xb8);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  *(undefined1 *)(param_1 + 0xb1) = 1;
  (**(code **)(*plVar8 + 0x20))(plVar8);
  FUN_001e75c0(param_1 + 0x50,1);
  return;
}

