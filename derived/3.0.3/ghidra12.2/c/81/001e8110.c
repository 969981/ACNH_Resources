
/* WARNING: Removing unreachable block (ram,0x001e8344) */

void FUN_001e8110(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  long *plVar11;
  int *piVar12;
  
  FUN_001e1564(param_1 + 8);
  *(undefined ***)(param_1 + 0x98) = &PTR_LAB_0483cd28;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  if ((param_3 & 1) == 0) {
    return;
  }
  lVar4 = FUN_00185a6c(0x40);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    lVar5 = FUN_00187df4(0xaac);
    lVar7 = 0;
    *(long *)(lVar4 + 8) = lVar5;
    *(long *)(lVar4 + 0x18) = lVar5 + 0xaac;
    do {
      *(undefined4 *)(lVar5 + lVar7) = 0;
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0xaac);
    *(long *)(lVar4 + 0x10) = lVar5 + 0xaac;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0xaac;
  }
  plVar6 = (long *)FUN_00185a6c(0x20);
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)(PTR_DAT_04bcbf40 + 0x10);
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((long)plVar6 + 0xc) = 1;
    plVar6[2] = lVar4;
    *plVar6 = (long)&PTR_LAB_0483cd60;
  }
  plVar11 = *(long **)(param_1 + 0xa0);
  if (plVar11 == plVar6) {
LAB_001e8384:
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      lVar4 = *plVar1;
      iVar8 = (int)*plVar1 + -1;
      if ((int)lVar4 == (int)*plVar1) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *(int *)plVar1 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e8220;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e8220:
        bVar10 = false;
      }
      iVar9 = (int)lVar4;
      if (!bVar10) {
        do {
          lVar4 = *plVar1;
          iVar8 = iVar9 + -1;
          if ((int)lVar4 == iVar9) {
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
          iVar9 = (int)lVar4;
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
          if (cVar3 != '\0') goto LAB_001e82a0;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e82a0:
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
    *(long **)(param_1 + 0xa0) = plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
    plVar11 = plVar6 + 1;
    if ((int)*plVar11 != 0) {
      iVar8 = (int)*plVar11;
      if (iVar8 != (int)*plVar11) {
        ClearExclusiveLocal();
LAB_001e8360:
        do {
          lVar4 = *plVar11;
          if ((int)lVar4 == iVar8) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar10) {
              *(int *)plVar11 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e8384;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = (int)lVar4;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e8360;
    }
  }
  plVar11 = plVar6 + 1;
  iVar8 = (int)*plVar11;
  iVar9 = (int)*plVar11 + -1;
  if (iVar8 != (int)*plVar11) {
    ClearExclusiveLocal();
LAB_001e8410:
    do {
      lVar4 = *plVar11;
      iVar9 = iVar8 + -1;
      if ((int)lVar4 == iVar8) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar10) {
          *(int *)plVar11 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_001e83c0;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = (int)lVar4;
    } while( true );
  }
  cVar3 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar10) {
    *(int *)plVar11 = iVar9;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 != '\0') goto LAB_001e8410;
LAB_001e83c0:
  if (iVar9 != 0) {
    return;
  }
  piVar12 = (int *)((long)plVar6 + 0xc);
  (**(code **)(*plVar6 + 0x10))(plVar6);
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
      goto LAB_001e8440;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar10 = false;
LAB_001e8440:
  if (bVar10) {
LAB_001e8444:
    if (iVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001e84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6);
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
      if (cVar3 == '\0') goto LAB_001e8444;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar2;
  } while( true );
}

