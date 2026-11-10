
void FUN_001ea950(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  int *piVar10;
  
  plVar9 = *(long **)(param_1 + 0x30);
  puVar1 = PTR_DAT_04bcbf78 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar1;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 1;
    iVar8 = (int)*plVar2;
    iVar7 = (int)*plVar2 + -1;
    if (iVar8 != (int)*plVar2) {
      ClearExclusiveLocal();
LAB_001eaa00:
      do {
        lVar6 = *plVar2;
        iVar7 = iVar8 + -1;
        if ((int)lVar6 == iVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_001ea9b0;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar6;
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001eaa00;
LAB_001ea9b0:
    if (iVar7 == 0) {
      piVar10 = (int *)((long)plVar9 + 0xc);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      iVar7 = *piVar10 + -1;
      iVar8 = *piVar10;
      if (iVar8 != *piVar10) {
        ClearExclusiveLocal();
LAB_001eaa90:
        do {
          iVar3 = *piVar10;
          iVar7 = iVar8 + -1;
          if (iVar3 == iVar8) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar5) {
              *piVar10 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_001eaa34;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar3;
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_001eaa90;
LAB_001eaa34:
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  plVar9 = *(long **)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x18) = puVar1;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 1;
    iVar8 = (int)*plVar2;
    iVar7 = (int)*plVar2 + -1;
    if (iVar8 != (int)*plVar2) {
      ClearExclusiveLocal();
LAB_001eab14:
      do {
        lVar6 = *plVar2;
        iVar7 = iVar8 + -1;
        if ((int)lVar6 == iVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_001eaac4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar6;
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001eab14;
LAB_001eaac4:
    if (iVar7 == 0) {
      piVar10 = (int *)((long)plVar9 + 0xc);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      iVar7 = *piVar10 + -1;
      iVar8 = *piVar10;
      if (iVar8 != *piVar10) {
        ClearExclusiveLocal();
LAB_001eaba0:
        do {
          iVar3 = *piVar10;
          iVar7 = iVar8 + -1;
          if (iVar3 == iVar8) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar5) {
              *piVar10 = iVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_001eab48;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar3;
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_001eaba0;
LAB_001eab48:
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
        *(undefined ***)(param_1 + 8) = &PTR_LAB_0483cdf8;
        plVar9 = *(long **)(param_1 + 0x10);
        goto joined_r0x001eab60;
      }
    }
  }
  *(undefined ***)(param_1 + 8) = &PTR_LAB_0483cdf8;
  plVar9 = *(long **)(param_1 + 0x10);
joined_r0x001eab60:
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar2 = plVar9 + 1;
  iVar8 = (int)*plVar2;
  iVar7 = (int)*plVar2 + -1;
  if (iVar8 == (int)*plVar2) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_001eabd4:
      if (iVar7 != 0) {
        return;
      }
      piVar10 = (int *)((long)plVar9 + 0xc);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      iVar7 = *piVar10 + -1;
      iVar8 = *piVar10;
      if (iVar8 == *piVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
LAB_001eac58:
          if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001eacec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar9 + 8))(plVar9);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar3 = *piVar10;
        iVar7 = iVar8 + -1;
        if (iVar3 == iVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_001eac58;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar3;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar6 = *plVar2;
    iVar7 = iVar8 + -1;
    if ((int)lVar6 == iVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_001eabd4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar6;
  } while( true );
}

