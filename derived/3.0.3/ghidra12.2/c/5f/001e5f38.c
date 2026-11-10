
void FUN_001e5f38(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  
  if ((*(int *)(param_1 + 0x9c) == 0) || (lVar6 = *(long *)(param_1 + 0xd0), lVar6 == 0)) {
    return;
  }
  lVar4 = 0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar4 = DAT_04bcbf58;
  }
  if (lVar4 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  plVar11 = (long *)(lVar6 + 0xb8);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  lVar4 = FUN_001ed690(lVar6 + 0x38,param_2);
  if (lVar6 + 0x40 == lVar4) {
    pcVar7 = *(code **)(*plVar11 + 0x20);
    plVar12 = plVar11;
  }
  else {
    plVar12 = *(long **)(lVar4 + 0xc0);
    if ((plVar12 != (long *)0x0) && (plVar13 = plVar12 + 1, (int)*plVar13 != 0)) {
      iVar8 = (int)*plVar13;
      if (iVar8 != (int)*plVar13) {
        ClearExclusiveLocal();
LAB_001e6084:
        do {
          lVar6 = *plVar13;
          if ((int)lVar6 == iVar8) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar10) {
              *(int *)plVar13 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e6038;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = (int)lVar6;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e6084;
    }
LAB_001e6038:
    plVar13 = *(long **)(lVar4 + 0xd0);
    if ((plVar13 != (long *)0x0) && (plVar1 = plVar13 + 1, (int)*plVar1 != 0)) {
      iVar8 = (int)*plVar1;
      if (iVar8 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001e6120:
        do {
          lVar6 = *plVar1;
          if ((int)lVar6 == iVar8) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e60b8;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = (int)lVar6;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e6120;
    }
LAB_001e60b8:
    cVar3 = *(char *)(lVar4 + 0xd8);
    (**(code **)(*plVar11 + 0x20))(plVar11);
    if ((cVar3 != '\0') && (uVar5 = (**(code **)(*(long *)plVar12[2] + 0x50))(), (uVar5 & 1) != 0))
    {
      piVar14 = (int *)(plVar12[2] + 8);
      iVar8 = *piVar14;
      if (iVar8 == *piVar14) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar10) {
          *piVar14 = *piVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e614c;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e614c:
        bVar10 = false;
      }
      if (!bVar10) {
        do {
          iVar9 = *piVar14;
          if (iVar9 == iVar8) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar10) {
              *piVar14 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar9;
        } while( true );
      }
    }
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      iVar8 = (int)*plVar1;
      iVar9 = (int)*plVar1 + -1;
      if (iVar8 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001e6214:
        do {
          lVar6 = *plVar1;
          iVar9 = iVar8 + -1;
          if ((int)lVar6 == iVar8) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e61c8;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = (int)lVar6;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e6214;
LAB_001e61c8:
      if (iVar9 != 0) goto LAB_001e625c;
      piVar14 = (int *)((long)plVar13 + 0xc);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      iVar9 = *piVar14 + -1;
      iVar8 = *piVar14;
      if (iVar8 == *piVar14) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar10) {
          *piVar14 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e6240;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e6240:
        bVar10 = false;
      }
      if (!bVar10) {
        do {
          iVar2 = *piVar14;
          iVar9 = iVar8 + -1;
          if (iVar2 == iVar8) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar10) {
              *piVar14 = iVar9;
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
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
LAB_001e625c:
    if (plVar12 == (long *)0x0) goto LAB_001e6358;
    plVar13 = plVar12 + 1;
    iVar8 = (int)*plVar13;
    iVar9 = (int)*plVar13 + -1;
    if (iVar8 != (int)*plVar13) {
      ClearExclusiveLocal();
LAB_001e6320:
      do {
        lVar6 = *plVar13;
        iVar9 = iVar8 + -1;
        if ((int)lVar6 == iVar8) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar10) {
            *(int *)plVar13 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001e62d4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar6;
      } while( true );
    }
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar10) {
      *(int *)plVar13 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001e6320;
LAB_001e62d4:
    if (iVar9 != 0) goto LAB_001e6358;
    piVar14 = (int *)((long)plVar12 + 0xc);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    iVar9 = *piVar14 + -1;
    iVar8 = *piVar14;
    if (iVar8 == *piVar14) {
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar10) {
        *piVar14 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e634c;
      bVar10 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e634c:
      bVar10 = false;
    }
    if (!bVar10) {
      do {
        iVar2 = *piVar14;
        iVar9 = iVar8 + -1;
        if (iVar2 == iVar8) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar10) {
            *piVar14 = iVar9;
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
    if (iVar9 != 0) goto LAB_001e6358;
    pcVar7 = *(code **)(*plVar12 + 8);
  }
  (*pcVar7)(plVar12);
LAB_001e6358:
                    /* WARNING: Could not recover jumptable at 0x001e6370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return;
}

