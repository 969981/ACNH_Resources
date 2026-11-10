
void FUN_001ec170(undefined8 param_1,long param_2)

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
  
  plVar8 = *(long **)(param_2 + 0xb0);
  *(undefined **)(param_2 + 0xa8) = PTR_DAT_04bcbf78 + 0x10;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    iVar7 = (int)*plVar1;
    iVar6 = (int)*plVar1 + -1;
    if (iVar7 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_001ec220:
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
          if (cVar3 == '\0') goto LAB_001ec1cc;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = (int)lVar5;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001ec220;
LAB_001ec1cc:
    if (iVar6 == 0) {
      piVar9 = (int *)((long)plVar8 + 0xc);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar6 = *piVar9 + -1;
      iVar7 = *piVar9;
      if (iVar7 != *piVar9) {
        ClearExclusiveLocal();
LAB_001ec2c0:
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
            if (cVar3 == '\0') goto LAB_001ec254;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar2;
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001ec2c0;
LAB_001ec254:
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  plVar8 = *(long **)(param_2 + 0xa0);
  *(undefined ***)(param_2 + 0x98) = &PTR_LAB_0483cdf8;
  if (plVar8 == (long *)0x0) goto LAB_001ec2f8;
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
LAB_001ec2f4:
      if (iVar6 != 0) {
LAB_001ec2f8:
        FUN_001e1868(param_2);
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
LAB_001ec390:
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 8))(plVar8);
            FUN_001e1868(param_2);
            return;
          }
          goto LAB_001ec2f8;
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
          if (cVar3 == '\0') goto LAB_001ec390;
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
      if (cVar3 == '\0') goto LAB_001ec2f4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar5;
  } while( true );
}

