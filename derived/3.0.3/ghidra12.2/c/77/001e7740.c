
/* WARNING: Removing unreachable block (ram,0x001e79f8) */

void FUN_001e7740(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  long *plVar11;
  int *piVar12;
  
  *(undefined **)(param_1 + 8) = PTR_DAT_04bcbf30 + 0x10;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar6 = *(long *)(param_2 + 8);
  if (lVar6 != 0) {
    *(long *)(param_1 + 0x10) = lVar6;
    piVar12 = (int *)(lVar6 + 8);
    if (*piVar12 != 0) {
      iVar8 = *piVar12;
      if (iVar8 != *piVar12) {
        ClearExclusiveLocal();
LAB_001e78b0:
        do {
          iVar9 = *piVar12;
          if (iVar9 == iVar8) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar10) {
              *piVar12 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e77ac;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar9;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar10) {
        *piVar12 = *piVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e78b0;
    }
  }
LAB_001e77ac:
  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_0483cd28;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  if ((param_3 & 1) == 0) {
    return;
  }
  lVar6 = FUN_00185a6c(0x40);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 8) = 0;
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    lVar4 = FUN_00187df4(0xaac);
    lVar7 = 0;
    *(long *)(lVar6 + 8) = lVar4;
    *(long *)(lVar6 + 0x18) = lVar4 + 0xaac;
    do {
      *(undefined4 *)(lVar4 + lVar7) = 0;
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0xaac);
    *(long *)(lVar6 + 0x10) = lVar4 + 0xaac;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0xaac;
  }
  plVar5 = (long *)FUN_00185a6c(0x20);
  if (plVar5 != (long *)0x0) {
    *plVar5 = (long)(PTR_DAT_04bcbf40 + 0x10);
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((long)plVar5 + 0xc) = 1;
    plVar5[2] = lVar6;
    *plVar5 = (long)&PTR_LAB_0483cd60;
  }
  plVar11 = *(long **)(param_1 + 0x20);
  if (plVar11 == plVar5) {
LAB_001e7a34:
    if (plVar5 == (long *)0x0) {
      return;
    }
  }
  else {
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      lVar6 = *plVar1;
      iVar8 = (int)*plVar1 + -1;
      if ((int)lVar6 == (int)*plVar1) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *(int *)plVar1 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e78dc;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e78dc:
        bVar10 = false;
      }
      iVar9 = (int)lVar6;
      if (!bVar10) {
        do {
          lVar6 = *plVar1;
          iVar8 = iVar9 + -1;
          if ((int)lVar6 == iVar9) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = (int)lVar6;
        } while( true );
      }
      if (iVar8 == 0) {
        piVar12 = (int *)((long)plVar11 + 0xc);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        iVar9 = *piVar12 + -1;
        iVar8 = *piVar12;
        if (iVar8 == *piVar12) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar10) {
            *piVar12 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_001e795c;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e795c:
          bVar10 = false;
        }
        if (!bVar10) {
          do {
            iVar2 = *piVar12;
            iVar9 = iVar8 + -1;
            if (iVar2 == iVar8) {
              cVar3 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar10) {
                *piVar12 = iVar9;
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
        if (iVar9 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
    *(long **)(param_1 + 0x20) = plVar5;
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar11 = plVar5 + 1;
    if ((int)*plVar11 != 0) {
      iVar8 = (int)*plVar11;
      if (iVar8 != (int)*plVar11) {
        ClearExclusiveLocal();
LAB_001e7a10:
        do {
          lVar6 = *plVar11;
          if ((int)lVar6 == iVar8) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar10) {
              *(int *)plVar11 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e7a34;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = (int)lVar6;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e7a10;
    }
  }
  plVar11 = plVar5 + 1;
  iVar8 = (int)*plVar11;
  iVar9 = (int)*plVar11 + -1;
  if (iVar8 != (int)*plVar11) {
    ClearExclusiveLocal();
LAB_001e7ac0:
    do {
      lVar6 = *plVar11;
      iVar9 = iVar8 + -1;
      if ((int)lVar6 == iVar8) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar10) {
          *(int *)plVar11 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_001e7a70;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = (int)lVar6;
    } while( true );
  }
  cVar3 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar10) {
    *(int *)plVar11 = iVar9;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 != '\0') goto LAB_001e7ac0;
LAB_001e7a70:
  if (iVar9 != 0) {
    return;
  }
  piVar12 = (int *)((long)plVar5 + 0xc);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  iVar9 = *piVar12 + -1;
  iVar8 = *piVar12;
  if (iVar8 == *piVar12) {
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar12,0x10);
    if (bVar10) {
      *piVar12 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      bVar10 = true;
      goto LAB_001e7af0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar10 = false;
LAB_001e7af0:
  if (bVar10) {
LAB_001e7af4:
    if (iVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001e7b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))(plVar5);
      return;
    }
    return;
  }
  do {
    iVar2 = *piVar12;
    iVar9 = iVar8 + -1;
    if (iVar2 == iVar8) {
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar10) {
        *piVar12 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001e7af4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar2;
  } while( true );
}

