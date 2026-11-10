
void FUN_001e63bc(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  long *plVar14;
  int *piVar15;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [144];
  undefined *local_88;
  long *local_80;
  undefined1 auStack_70 [8];
  undefined *local_68;
  long *local_60;
  undefined *local_58;
  long *local_50;
  char local_48;
  
  if ((*(int *)(param_1 + 0x9c) == 0) || (lVar9 = *(long *)(param_1 + 0xd0), lVar9 == 0)) {
    return;
  }
  lVar7 = 0;
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar7 = DAT_04bcbf58;
  }
  if (lVar7 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  plVar14 = (long *)(lVar9 + 0xb8);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  lVar7 = FUN_001ed690(lVar9 + 0x38,param_2);
  puVar6 = PTR_DAT_04bcbf78;
  puVar5 = PTR_DAT_04bcbf30;
  local_68 = PTR_DAT_04bcbf30 + 0x10;
  local_60 = (long *)0x0;
  if (lVar9 + 0x40 == lVar7) {
    local_58 = PTR_DAT_04bcbf78 + 0x10;
    local_48 = '\0';
    local_50 = (long *)0x0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  else {
    plVar10 = *(long **)(lVar7 + 0xc0);
    if ((plVar10 != (long *)0x0) && (plVar1 = plVar10 + 1, local_60 = plVar10, (int)*plVar1 != 0)) {
      iVar11 = (int)*plVar1;
      if (iVar11 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001e6544:
        do {
          lVar4 = *plVar1;
          if ((int)lVar4 == iVar11) {
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar13) {
              *(int *)plVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e64ec;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar4;
        } while( true );
      }
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e6544;
    }
LAB_001e64ec:
    local_58 = puVar6 + 0x10;
    local_50 = (long *)0x0;
    plVar10 = *(long **)(lVar7 + 0xd0);
    if ((plVar10 != (long *)0x0) && (plVar1 = plVar10 + 1, local_50 = plVar10, (int)*plVar1 != 0)) {
      iVar11 = (int)*plVar1;
      if (iVar11 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001e65f0:
        do {
          lVar4 = *plVar1;
          if ((int)lVar4 == iVar11) {
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar13) {
              *(int *)plVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e6578;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar4;
        } while( true );
      }
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e65f0;
    }
LAB_001e6578:
    cVar3 = *(char *)(lVar7 + 0xd8);
    local_48 = cVar3;
    (**(code **)(*plVar14 + 0x20))(plVar14);
    plVar10 = local_60;
    if ((cVar3 != '\0') && (uVar8 = (**(code **)(*(long *)local_60[2] + 0x50))(), (uVar8 & 1) != 0))
    {
      piVar15 = (int *)(plVar10[2] + 8);
      iVar11 = *piVar15;
      iVar12 = *piVar15 + -1;
      if (iVar11 == *piVar15) {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar13) {
          *piVar15 = iVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e661c;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e661c:
        bVar13 = false;
      }
      if (!bVar13) {
        do {
          iVar2 = *piVar15;
          iVar12 = iVar11 + -1;
          if (iVar2 == iVar11) {
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar13) {
              *piVar15 = iVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar2;
        } while( true );
      }
      if (iVar12 < 1) {
        (**(code **)(*(long *)local_60[2] + 8))();
        FUN_001e9a30(auStack_120,lVar9,&local_68);
        FUN_001ea3e0(lVar9,auStack_70,auStack_120);
        local_88 = puVar6 + 0x10;
        if (local_80 != (long *)0x0) {
          plVar10 = local_80 + 1;
          lVar9 = *plVar10;
          iVar11 = (int)*plVar10 + -1;
          if ((int)lVar9 == (int)*plVar10) {
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar13) {
              *(int *)plVar10 = iVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_001e66e0;
            bVar13 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_001e66e0:
            bVar13 = false;
          }
          iVar12 = (int)lVar9;
          if (!bVar13) {
            do {
              lVar9 = *plVar10;
              iVar11 = iVar12 + -1;
              if ((int)lVar9 == iVar12) {
                cVar3 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar13) {
                  *(int *)plVar10 = iVar11;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar12 = (int)lVar9;
            } while( true );
          }
          if (iVar11 == 0) {
            piVar15 = (int *)((long)local_80 + 0xc);
            (**(code **)(*local_80 + 0x10))(local_80);
            iVar12 = *piVar15 + -1;
            iVar11 = *piVar15;
            if (iVar11 == *piVar15) {
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar13) {
                *piVar15 = iVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_001e6760;
              bVar13 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_001e6760:
              bVar13 = false;
            }
            if (!bVar13) {
              do {
                iVar2 = *piVar15;
                iVar12 = iVar11 + -1;
                if (iVar2 == iVar11) {
                  cVar3 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                  if (bVar13) {
                    *piVar15 = iVar12;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') break;
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar11 = iVar2;
              } while( true );
            }
            if (iVar12 == 0) {
              (**(code **)(*local_80 + 8))(local_80);
            }
          }
        }
        FUN_001e1868(auStack_118);
      }
    }
  }
  plVar10 = local_50;
  local_58 = puVar6 + 0x10;
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 1;
    iVar11 = (int)*plVar1;
    iVar12 = (int)*plVar1 + -1;
    if (iVar11 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_001e6820:
      do {
        lVar9 = *plVar1;
        iVar12 = iVar11 + -1;
        if ((int)lVar9 == iVar11) {
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *(int *)plVar1 = iVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001e67cc;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = (int)lVar9;
      } while( true );
    }
    cVar3 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001e6820;
LAB_001e67cc:
    if (iVar12 == 0) {
      piVar15 = (int *)((long)local_50 + 0xc);
      (**(code **)(*local_50 + 0x10))(local_50);
      iVar12 = *piVar15 + -1;
      iVar11 = *piVar15;
      if (iVar11 != *piVar15) {
        ClearExclusiveLocal();
LAB_001e68f0:
        do {
          iVar2 = *piVar15;
          iVar12 = iVar11 + -1;
          if (iVar2 == iVar11) {
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar13) {
              *piVar15 = iVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e688c;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar2;
        } while( true );
      }
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar13) {
        *piVar15 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e68f0;
LAB_001e688c:
      if (iVar12 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  plVar10 = local_60;
  local_68 = puVar5 + 0x10;
  if (local_60 == (long *)0x0) goto LAB_001e69bc;
  plVar1 = local_60 + 1;
  iVar11 = (int)*plVar1;
  iVar12 = (int)*plVar1 + -1;
  if (iVar11 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_001e6924:
      if (iVar12 != 0) {
LAB_001e69bc:
        (**(code **)(*plVar14 + 0x20))(plVar14);
        return;
      }
      piVar15 = (int *)((long)local_60 + 0xc);
      (**(code **)(*local_60 + 0x10))(local_60);
      iVar12 = *piVar15 + -1;
      iVar11 = *piVar15;
      if (iVar11 == *piVar15) {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar13) {
          *piVar15 = iVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
LAB_001e69a8:
          if (iVar12 == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          goto LAB_001e69bc;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar2 = *piVar15;
        iVar12 = iVar11 + -1;
        if (iVar2 == iVar11) {
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar13) {
            *piVar15 = iVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001e69a8;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar2;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar9 = *plVar1;
    iVar12 = iVar11 + -1;
    if ((int)lVar9 == iVar11) {
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001e6924;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = (int)lVar9;
  } while( true );
}

