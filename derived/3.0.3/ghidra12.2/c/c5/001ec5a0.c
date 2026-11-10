
void FUN_001ec5a0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  int *piVar9;
  
  plVar8 = (long *)param_2[0x16];
  param_2[0x15] = PTR_DAT_04bcbf78 + 0x10;
  if (plVar8 == (long *)0x0) goto LAB_001ec698;
  plVar1 = plVar8 + 1;
  iVar7 = (int)*plVar1;
  iVar6 = (int)*plVar1 + -1;
  if (iVar7 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_001ec5fc:
      if (iVar6 != 0) {
LAB_001ec698:
        FUN_001e1868(param_2 + 3);
        *param_2 = &PTR_LAB_0483cdf8;
        plVar8 = (long *)param_2[1];
        if (plVar8 == (long *)0x0) {
          return;
        }
        plVar1 = plVar8 + 1;
        iVar7 = (int)*plVar1;
        iVar6 = (int)*plVar1 + -1;
        if (iVar7 == (int)*plVar1) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
LAB_001ec728:
            if (iVar6 != 0) {
              return;
            }
            piVar9 = (int *)((long)plVar8 + 0xc);
            (**(code **)(*plVar8 + 0x10))(plVar8);
            iVar6 = *piVar9 + -1;
            iVar7 = *piVar9;
            if (iVar7 == *piVar9) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar4) {
                *piVar9 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
LAB_001ec7b4:
                if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001ec810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar8 + 8))(plVar8);
                  return;
                }
                return;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            do {
              iVar2 = *piVar9;
              iVar6 = iVar7 + -1;
              if (iVar2 == iVar7) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                if (bVar4) {
                  *piVar9 = iVar6;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_001ec7b4;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar7 = iVar2;
            } while( true );
          }
        }
        else {
          ClearExclusiveLocal();
        }
        do {
          lVar5 = *plVar1;
          iVar6 = iVar7 + -1;
          if ((int)lVar5 == iVar7) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001ec728;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = (int)lVar5;
        } while( true );
      }
      piVar9 = (int *)((long)plVar8 + 0xc);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar6 = *piVar9 + -1;
      iVar7 = *piVar9;
      if (iVar7 == *piVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
LAB_001ec684:
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
          goto LAB_001ec698;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar2 = *piVar9;
        iVar6 = iVar7 + -1;
        if (iVar2 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001ec684;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar2;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar5 = *plVar1;
    iVar6 = iVar7 + -1;
    if ((int)lVar5 == iVar7) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001ec5fc;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar5;
  } while( true );
}

