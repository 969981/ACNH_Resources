
long FUN_001e7d90(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  int *piVar9;
  
  plVar8 = *(long **)(param_1 + 0x10);
  plVar4 = *(long **)(param_2 + 0x10);
  if (plVar8 != plVar4) {
    if (plVar8 != (long *)0x0) {
      plVar4 = plVar8 + 1;
      iVar7 = (int)*plVar4;
      iVar5 = (int)*plVar4 + -1;
      if (iVar7 != (int)*plVar4) {
        ClearExclusiveLocal();
LAB_001e7e40:
        do {
          lVar3 = *plVar4;
          iVar5 = iVar7 + -1;
          if ((int)lVar3 == iVar7) {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar6) {
              *(int *)plVar4 = iVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_001e7df0;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = (int)lVar3;
        } while( true );
      }
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_001e7e40;
LAB_001e7df0:
      if (iVar5 == 0) {
        piVar9 = (int *)((long)plVar8 + 0xc);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        iVar5 = *piVar9 + -1;
        iVar7 = *piVar9;
        if (iVar7 == *piVar9) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar6) {
            *piVar9 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_001e7e6c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e7e6c:
          bVar6 = false;
        }
        if (!bVar6) {
          do {
            iVar1 = *piVar9;
            iVar5 = iVar7 + -1;
            if (iVar1 == iVar7) {
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar6) {
                *piVar9 = iVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar7 = iVar1;
          } while( true );
        }
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
      plVar4 = *(long **)(param_2 + 0x10);
    }
    *(long **)(param_1 + 0x10) = plVar4;
    if ((plVar4 != (long *)0x0) && (plVar4 = plVar4 + 1, (int)*plVar4 != 0)) {
      iVar7 = (int)*plVar4;
      if (iVar7 != (int)*plVar4) {
        ClearExclusiveLocal();
LAB_001e7f64:
        do {
          lVar3 = *plVar4;
          if ((int)lVar3 == iVar7) {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar6) {
              *(int *)plVar4 = iVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_001e7f14;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = (int)lVar3;
        } while( true );
      }
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_001e7f64;
    }
  }
LAB_001e7f14:
  plVar8 = *(long **)(param_1 + 0x20);
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar8 == plVar4) goto LAB_001e80b4;
  if (plVar8 != (long *)0x0) {
    plVar4 = plVar8 + 1;
    iVar7 = (int)*plVar4;
    iVar5 = (int)*plVar4 + -1;
    if (iVar7 != (int)*plVar4) {
      ClearExclusiveLocal();
LAB_001e7fe4:
      do {
        lVar3 = *plVar4;
        iVar5 = iVar7 + -1;
        if ((int)lVar3 == iVar7) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *(int *)plVar4 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_001e7f98;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = (int)lVar3;
      } while( true );
    }
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar6) {
      *(int *)plVar4 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_001e7fe4;
LAB_001e7f98:
    if (iVar5 == 0) {
      piVar9 = (int *)((long)plVar8 + 0xc);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar5 = *piVar9 + -1;
      iVar7 = *piVar9;
      if (iVar7 == *piVar9) {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar6) {
          *piVar9 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_001e8010;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e8010:
        bVar6 = false;
      }
      if (!bVar6) {
        do {
          iVar1 = *piVar9;
          iVar5 = iVar7 + -1;
          if (iVar1 == iVar7) {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar6) {
              *piVar9 = iVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar1;
        } while( true );
      }
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
    plVar4 = *(long **)(param_2 + 0x20);
  }
  *(long **)(param_1 + 0x20) = plVar4;
  if ((plVar4 == (long *)0x0) || (plVar4 = plVar4 + 1, (int)*plVar4 == 0)) {
LAB_001e80b4:
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
    return param_1;
  }
  iVar7 = (int)*plVar4;
  if (iVar7 == (int)*plVar4) {
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar6) {
      *(int *)plVar4 = (int)*plVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_001e80b4;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar3 = *plVar4;
    if ((int)lVar3 == iVar7) {
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001e80b4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar3;
  } while( true );
}

