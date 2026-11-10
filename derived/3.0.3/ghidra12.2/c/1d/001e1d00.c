
/* WARNING: Removing unreachable block (ram,0x001e1f28) */
/* WARNING: Removing unreachable block (ram,0x001e2244) */

void FUN_001e1d00(long *param_1,uint param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  
  *param_1 = (long)(PTR_DAT_04bcbf28 + 0x10);
  FUN_001e1500(param_1 + 1);
  *(uint *)((long)param_1 + 0x9c) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  puVar4 = PTR_DAT_04bcbf30;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x15] = (long)(puVar4 + 0x10);
  param_1[0x16] = 0;
  *(undefined2 *)((long)param_1 + 0xc4) = 0x100;
  puVar4 = PTR_DAT_04bcbf10;
  plVar7 = *(long **)(PTR_DAT_04bcbf10 + (ulong)param_2 * 8);
  param_1[0x19] = (long)(PTR_DAT_04bcbf38 + 0x10);
  param_1[0x1a] = 0;
  lVar8 = *plVar7;
  param_1[0x17] = (long)plVar7;
  lVar8 = (**(code **)(lVar8 + 0x10))();
  lVar13 = param_1[0x17];
  plVar7 = (long *)FUN_00185a6c(0x20);
  puVar5 = PTR_DAT_04bcbf40;
  if (plVar7 != (long *)0x0) {
    *plVar7 = (long)(PTR_DAT_04bcbf40 + 0x10);
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((long)plVar7 + 0xc) = 1;
    puVar6 = PTR_DAT_04bcbf48;
    plVar7[2] = lVar8;
    plVar7[3] = lVar13;
    *plVar7 = (long)(puVar6 + 0x10);
  }
  plVar12 = (long *)param_1[0x16];
  if (plVar12 == plVar7) {
LAB_001e1f64:
    if (plVar7 != (long *)0x0) {
LAB_001e1f68:
      plVar12 = plVar7 + 1;
      iVar11 = (int)*plVar12;
      iVar9 = (int)*plVar12 + -1;
      if (iVar11 != (int)*plVar12) {
        ClearExclusiveLocal();
LAB_001e1ff0:
        do {
          lVar8 = *plVar12;
          iVar9 = iVar11 + -1;
          if ((int)lVar8 == iVar11) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar10) {
              *(int *)plVar12 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e1fa0;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar8;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar10) {
        *(int *)plVar12 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e1ff0;
LAB_001e1fa0:
      if (iVar9 != 0) goto joined_r0x001e2028;
      piVar14 = (int *)((long)plVar7 + 0xc);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      iVar9 = *piVar14 + -1;
      iVar11 = *piVar14;
      if (iVar11 == *piVar14) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar10) {
          *piVar14 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e201c;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e201c:
        bVar10 = false;
      }
      if (!bVar10) {
        do {
          iVar2 = *piVar14;
          iVar9 = iVar11 + -1;
          if (iVar2 == iVar11) {
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
          iVar11 = iVar2;
        } while( true );
      }
      if (iVar9 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  else {
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 1;
      iVar11 = (int)*plVar1;
      iVar9 = (int)*plVar1 + -1;
      if (iVar11 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001e1e60:
        do {
          lVar8 = *plVar1;
          iVar9 = iVar11 + -1;
          if ((int)lVar8 == iVar11) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e1e14;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar8;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e1e60;
LAB_001e1e14:
      if (iVar9 != 0) goto LAB_001e1ea8;
      piVar14 = (int *)((long)plVar12 + 0xc);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      iVar9 = *piVar14 + -1;
      iVar11 = *piVar14;
      if (iVar11 == *piVar14) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar10) {
          *piVar14 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e1e8c;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e1e8c:
        bVar10 = false;
      }
      if (!bVar10) {
        do {
          iVar2 = *piVar14;
          iVar9 = iVar11 + -1;
          if (iVar2 == iVar11) {
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
          iVar11 = iVar2;
        } while( true );
      }
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
LAB_001e1ea8:
    param_1[0x16] = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      plVar12 = plVar7 + 1;
      if ((int)*plVar12 != 0) {
        iVar11 = (int)*plVar12;
        if (iVar11 != (int)*plVar12) {
          ClearExclusiveLocal();
LAB_001e1f40:
          do {
            lVar8 = *plVar12;
            if ((int)lVar8 == iVar11) {
              cVar3 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar10) {
                *(int *)plVar12 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_001e1f64;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = (int)lVar8;
          } while( true );
        }
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar10) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e1f40;
      }
      goto LAB_001e1f68;
    }
  }
joined_r0x001e2028:
  if (param_2 == 0) {
    return;
  }
  lVar8 = FUN_00185a6c(0x118);
  if (lVar8 != 0) {
    FUN_001e74c4(lVar8,param_2 == 1,*(undefined8 *)(puVar4 + (ulong)param_2 * 8));
  }
  plVar7 = (long *)FUN_00185a6c(0x20);
  if (plVar7 != (long *)0x0) {
    *plVar7 = (long)(puVar5 + 0x10);
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((long)plVar7 + 0xc) = 1;
    puVar4 = PTR_DAT_04bcbf50;
    plVar7[2] = lVar8;
    *plVar7 = (long)(puVar4 + 0x10);
  }
  plVar12 = (long *)param_1[0x1a];
  if (plVar12 == plVar7) {
LAB_001e2284:
    if (plVar7 == (long *)0x0) {
      return;
    }
  }
  else {
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 1;
      iVar11 = (int)*plVar1;
      iVar9 = (int)*plVar1 + -1;
      if (iVar11 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001e2160:
        do {
          lVar8 = *plVar1;
          iVar9 = iVar11 + -1;
          if ((int)lVar8 == iVar11) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e2114;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar8;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e2160;
LAB_001e2114:
      if (iVar9 != 0) goto LAB_001e21c0;
      piVar14 = (int *)((long)plVar12 + 0xc);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      iVar9 = *piVar14 + -1;
      iVar11 = *piVar14;
      if (iVar11 == *piVar14) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar10) {
          *piVar14 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e21a4;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e21a4:
        bVar10 = false;
      }
      if (!bVar10) {
        do {
          iVar2 = *piVar14;
          iVar9 = iVar11 + -1;
          if (iVar2 == iVar11) {
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
          iVar11 = iVar2;
        } while( true );
      }
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
LAB_001e21c0:
    param_1[0x1a] = (long)plVar7;
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar12 = plVar7 + 1;
    if ((int)*plVar12 != 0) {
      iVar11 = (int)*plVar12;
      if (iVar11 != (int)*plVar12) {
        ClearExclusiveLocal();
LAB_001e2260:
        do {
          lVar8 = *plVar12;
          if ((int)lVar8 == iVar11) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar10) {
              *(int *)plVar12 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001e2284;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar8;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar10) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e2260;
    }
  }
  plVar12 = plVar7 + 1;
  iVar11 = (int)*plVar12;
  iVar9 = (int)*plVar12 + -1;
  if (iVar11 != (int)*plVar12) {
    ClearExclusiveLocal();
LAB_001e2310:
    do {
      lVar8 = *plVar12;
      iVar9 = iVar11 + -1;
      if ((int)lVar8 == iVar11) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar10) {
          *(int *)plVar12 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_001e22c0;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = (int)lVar8;
    } while( true );
  }
  cVar3 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar10) {
    *(int *)plVar12 = iVar9;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 != '\0') goto LAB_001e2310;
LAB_001e22c0:
  if (iVar9 != 0) {
    return;
  }
  piVar14 = (int *)((long)plVar7 + 0xc);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  iVar9 = *piVar14 + -1;
  iVar11 = *piVar14;
  if (iVar11 == *piVar14) {
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
    if (bVar10) {
      *piVar14 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      bVar10 = true;
      goto LAB_001e2340;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar10 = false;
LAB_001e2340:
  if (bVar10) {
LAB_001e2344:
    if (iVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001e23b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 8))(plVar7);
      return;
    }
    return;
  }
  do {
    iVar2 = *piVar14;
    iVar9 = iVar11 + -1;
    if (iVar2 == iVar11) {
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar10) {
        *piVar14 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001e2344;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar2;
  } while( true );
}

