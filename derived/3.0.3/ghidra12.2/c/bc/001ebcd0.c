
void FUN_001ebcd0(long param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  FUN_0018ac30(param_1 + 0xb8);
  plVar10 = *(long **)(param_1 + 0xa8);
  *(undefined ***)(param_1 + 0xa0) = &PTR_LAB_0483d030;
  if (plVar10 != (long *)0x0) {
    plVar13 = plVar10 + 1;
    iVar8 = (int)*plVar13;
    iVar7 = (int)*plVar13 + -1;
    if (iVar8 != (int)*plVar13) {
      ClearExclusiveLocal();
LAB_001ebd90:
      do {
        lVar2 = *plVar13;
        iVar7 = iVar8 + -1;
        if ((int)lVar2 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *(int *)plVar13 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001ebd38;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar2;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *(int *)plVar13 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001ebd90;
LAB_001ebd38:
    if (iVar7 == 0) {
      piVar11 = (int *)((long)plVar10 + 0xc);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      iVar7 = *piVar11 + -1;
      iVar8 = *piVar11;
      if (iVar8 != *piVar11) {
        ClearExclusiveLocal();
LAB_001ebe30:
        do {
          iVar1 = *piVar11;
          iVar7 = iVar8 + -1;
          if (iVar1 == iVar8) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar4) {
              *piVar11 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001ebdc4;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar1;
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001ebe30;
LAB_001ebdc4:
      if (iVar7 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  plVar10 = *(long **)(param_1 + 0x98);
  *(undefined ***)(param_1 + 0x90) = &PTR_LAB_0483cff8;
  if (plVar10 != (long *)0x0) {
    plVar13 = plVar10 + 1;
    iVar8 = (int)*plVar13;
    iVar7 = (int)*plVar13 + -1;
    if (iVar8 != (int)*plVar13) {
      ClearExclusiveLocal();
LAB_001ebeb4:
      do {
        lVar2 = *plVar13;
        iVar7 = iVar8 + -1;
        if ((int)lVar2 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *(int *)plVar13 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001ebe64;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar2;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *(int *)plVar13 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001ebeb4;
LAB_001ebe64:
    if (iVar7 == 0) {
      piVar11 = (int *)((long)plVar10 + 0xc);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      iVar7 = *piVar11 + -1;
      iVar8 = *piVar11;
      if (iVar8 != *piVar11) {
        ClearExclusiveLocal();
LAB_001ebf50:
        do {
          iVar1 = *piVar11;
          iVar7 = iVar8 + -1;
          if (iVar1 == iVar8) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar4) {
              *piVar11 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001ebee8;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar1;
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001ebf50;
LAB_001ebee8:
      if (iVar7 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  plVar10 = *(long **)(param_1 + 0x88);
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_0483cfc0;
  if (plVar10 == (long *)0x0) goto LAB_001ec01c;
  plVar13 = plVar10 + 1;
  iVar8 = (int)*plVar13;
  iVar7 = (int)*plVar13 + -1;
  if (iVar8 == (int)*plVar13) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *(int *)plVar13 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_001ebf84:
      if (iVar7 != 0) {
LAB_001ec01c:
        if (*(long *)(param_1 + 0x78) != 0) {
          lVar2 = *(long *)(param_1 + 0x68);
          plVar10 = *(long **)(param_1 + 0x70);
          *(undefined8 *)(param_1 + 0x78) = 0;
          lVar9 = *plVar10;
          *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar2 + 8);
          **(long **)(lVar2 + 8) = lVar9;
          while (plVar10 != (long *)(param_1 + 0x68)) {
            plVar13 = (long *)plVar10[1];
            FUN_001ea950(plVar10 + 2);
            FUN_00187e4c(plVar10);
            plVar10 = plVar13;
          }
        }
        puVar12 = *(undefined8 **)(param_1 + 0x50);
        if (puVar12 != (undefined8 *)0x0) {
          puVar6 = *(undefined8 **)(param_1 + 0x58);
          puVar5 = puVar12;
          if (puVar6 != puVar12) {
            do {
              puVar6 = puVar6 + -2;
              (**(code **)*puVar6)(puVar6);
            } while (puVar6 != puVar12);
            puVar5 = *(undefined8 **)(param_1 + 0x50);
          }
          *(undefined8 **)(param_1 + 0x58) = puVar12;
          FUN_00187e4c(puVar5);
        }
        FUN_001ec128(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
        FUN_001ec3f0(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
        FUN_001ec558(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
        return;
      }
      piVar11 = (int *)((long)plVar10 + 0xc);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      iVar7 = *piVar11 + -1;
      iVar8 = *piVar11;
      if (iVar8 == *piVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
LAB_001ec008:
          if (iVar7 == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          goto LAB_001ec01c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar1 = *piVar11;
        iVar7 = iVar8 + -1;
        if (iVar1 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001ec008;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar1;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar2 = *plVar13;
    iVar7 = iVar8 + -1;
    if ((int)lVar2 == iVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001ebf84;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar2;
  } while( true );
}

