
/* WARNING: Removing unreachable block (ram,0x0041e5d8) */

void FUN_0041e320(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  int *piVar10;
  
  if (param_2 != 0) {
    lVar4 = FUN_00185a6c(0x80);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x10) = 0;
      *(undefined **)(lVar4 + 8) = PTR_DAT_04bc0ec8 + 0x10;
      *(undefined1 **)(lVar4 + 0x20) = (undefined1 *)(lVar4 + 0x10);
      *(undefined8 *)(lVar4 + 0x28) = 0x10;
      FUN_00186460(lVar4 + 0x30,1,1);
      *(long *)(lVar4 + 0x78) = param_2;
    }
    plVar5 = (long *)FUN_00185a6c(0x20);
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)(PTR_DAT_04bcbf40 + 0x10);
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((long)plVar5 + 0xc) = 1;
      plVar5[2] = lVar4;
      *plVar5 = (long)&PTR_LAB_048533e0;
    }
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 == plVar5) {
LAB_0041e614:
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    else {
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        iVar8 = (int)*plVar1;
        iVar6 = (int)*plVar1 + -1;
        if (iVar8 != (int)*plVar1) {
          ClearExclusiveLocal();
LAB_0041e490:
          do {
            lVar4 = *plVar1;
            iVar6 = iVar8 + -1;
            if ((int)lVar4 == iVar8) {
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *(int *)plVar1 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0041e440;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = (int)lVar4;
          } while( true );
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0041e490;
LAB_0041e440:
        if (iVar6 != 0) goto LAB_0041e558;
        piVar10 = (int *)((long)plVar9 + 0xc);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        iVar6 = *piVar10 + -1;
        iVar8 = *piVar10;
        if (iVar8 == *piVar10) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar7) {
            *piVar10 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0041e53c;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0041e53c:
          bVar7 = false;
        }
        if (!bVar7) {
          do {
            iVar2 = *piVar10;
            iVar6 = iVar8 + -1;
            if (iVar2 == iVar8) {
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar7) {
                *piVar10 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar2;
          } while( true );
        }
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
LAB_0041e558:
      *(long **)(param_1 + 0x10) = plVar5;
      if (plVar5 == (long *)0x0) {
        return;
      }
      plVar9 = plVar5 + 1;
      if ((int)*plVar9 != 0) {
        iVar8 = (int)*plVar9;
        if (iVar8 != (int)*plVar9) {
          ClearExclusiveLocal();
LAB_0041e5f0:
          do {
            lVar4 = *plVar9;
            if ((int)lVar4 == iVar8) {
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *(int *)plVar9 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0041e614;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = (int)lVar4;
          } while( true );
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0041e5f0;
      }
    }
    plVar9 = plVar5 + 1;
    iVar8 = (int)*plVar9;
    iVar6 = (int)*plVar9 + -1;
    if (iVar8 != (int)*plVar9) {
      ClearExclusiveLocal();
LAB_0041e674:
      do {
        lVar4 = *plVar9;
        iVar6 = iVar8 + -1;
        if ((int)lVar4 == iVar8) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *(int *)plVar9 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0041e650;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar4;
      } while( true );
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *(int *)plVar9 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_0041e674;
LAB_0041e650:
    if (iVar6 != 0) {
      return;
    }
    piVar10 = (int *)((long)plVar5 + 0xc);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    iVar6 = *piVar10 + -1;
    iVar8 = *piVar10;
    if (iVar8 == *piVar10) {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar7) {
        *piVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        bVar7 = true;
        goto LAB_0041e6dc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    bVar7 = false;
LAB_0041e6dc:
    if (bVar7) {
LAB_0041e6e0:
      if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0041e6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 8))(plVar5);
        return;
      }
      return;
    }
    do {
      iVar2 = *piVar10;
      iVar6 = iVar8 + -1;
      if (iVar2 == iVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0041e6e0;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar2;
    } while( true );
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) goto LAB_0041e748;
  plVar9 = plVar5 + 1;
  iVar8 = (int)*plVar9;
  iVar6 = (int)*plVar9 + -1;
  if (iVar8 != (int)*plVar9) {
    ClearExclusiveLocal();
LAB_0041e510:
    do {
      lVar4 = *plVar9;
      iVar6 = iVar8 + -1;
      if ((int)lVar4 == iVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *(int *)plVar9 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0041e4c4;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = (int)lVar4;
    } while( true );
  }
  cVar3 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar7) {
    *(int *)plVar9 = iVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 != '\0') goto LAB_0041e510;
LAB_0041e4c4:
  if (iVar6 != 0) goto LAB_0041e748;
  piVar10 = (int *)((long)plVar5 + 0xc);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  iVar6 = *piVar10 + -1;
  iVar8 = *piVar10;
  if (iVar8 == *piVar10) {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar7) {
      *piVar10 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_0041e73c;
    bVar7 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0041e73c:
    bVar7 = false;
  }
  if (!bVar7) {
    do {
      iVar2 = *piVar10;
      iVar6 = iVar8 + -1;
      if (iVar2 == iVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar2;
    } while( true );
  }
  if (iVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
LAB_0041e748:
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

