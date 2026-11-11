
undefined8
FUN_0040d140(long param_1,undefined4 param_2,long param_3,long param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  
  puVar4 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      lVar6 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  plVar11 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  plVar12 = *(long **)(param_1 + 0x140);
  plVar7 = *(long **)(param_3 + 8);
  if (plVar12 != plVar7) {
    if (plVar12 != (long *)0x0) {
      plVar7 = plVar12 + 1;
      iVar10 = (int)*plVar7;
      iVar8 = (int)*plVar7 + -1;
      if (iVar10 != (int)*plVar7) {
        ClearExclusiveLocal();
LAB_0040d2a0:
        do {
          lVar6 = *plVar7;
          iVar8 = iVar10 + -1;
          if ((int)lVar6 == iVar10) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar9) {
              *(int *)plVar7 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0040d24c;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = (int)lVar6;
        } while( true );
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *(int *)plVar7 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0040d2a0;
LAB_0040d24c:
      if (iVar8 == 0) {
        piVar13 = (int *)((long)plVar12 + 0xc);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        iVar8 = *piVar13 + -1;
        iVar10 = *piVar13;
        if (iVar10 == *piVar13) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar9) {
            *piVar13 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0040d2cc;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0040d2cc:
          bVar9 = false;
        }
        if (!bVar9) {
          do {
            iVar1 = *piVar13;
            iVar8 = iVar10 + -1;
            if (iVar1 == iVar10) {
              cVar3 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar9) {
                *piVar13 = iVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar1;
          } while( true );
        }
        if (iVar8 == 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
      plVar7 = *(long **)(param_3 + 8);
    }
    *(long **)(param_1 + 0x140) = plVar7;
    if ((plVar7 != (long *)0x0) && (plVar7 = plVar7 + 1, (int)*plVar7 != 0)) {
      iVar10 = (int)*plVar7;
      if (iVar10 != (int)*plVar7) {
        ClearExclusiveLocal();
LAB_0040d3c4:
        do {
          lVar6 = *plVar7;
          if ((int)lVar6 == iVar10) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar9) {
              *(int *)plVar7 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0040d374;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = (int)lVar6;
        } while( true );
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0040d3c4;
    }
  }
LAB_0040d374:
  plVar12 = *(long **)(param_1 + 0x198);
  plVar7 = *(long **)(param_4 + 8);
  if (plVar12 == plVar7) goto LAB_0040d514;
  if (plVar12 != (long *)0x0) {
    plVar7 = plVar12 + 1;
    iVar10 = (int)*plVar7;
    iVar8 = (int)*plVar7 + -1;
    if (iVar10 != (int)*plVar7) {
      ClearExclusiveLocal();
LAB_0040d444:
      do {
        lVar6 = *plVar7;
        iVar8 = iVar10 + -1;
        if ((int)lVar6 == iVar10) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar9) {
            *(int *)plVar7 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0040d3f8;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar6;
      } while( true );
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar9) {
      *(int *)plVar7 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_0040d444;
LAB_0040d3f8:
    if (iVar8 == 0) {
      piVar13 = (int *)((long)plVar12 + 0xc);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      iVar8 = *piVar13 + -1;
      iVar10 = *piVar13;
      if (iVar10 == *piVar13) {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar9) {
          *piVar13 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0040d470;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0040d470:
        bVar9 = false;
      }
      if (!bVar9) {
        do {
          iVar1 = *piVar13;
          iVar8 = iVar10 + -1;
          if (iVar1 == iVar10) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar9) {
              *piVar13 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar1;
        } while( true );
      }
      if (iVar8 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
    plVar7 = *(long **)(param_4 + 8);
  }
  *(long **)(param_1 + 0x198) = plVar7;
  if ((plVar7 == (long *)0x0) || (plVar7 = plVar7 + 1, (int)*plVar7 == 0)) {
LAB_0040d514:
    puStack_58 = PTR_LAB_04bd29c8;
    local_60 = PTR_DAT_04bcc0c0;
    *(undefined4 *)(param_1 + 0xa4) = param_5;
    local_50 = 0;
    puStack_48 = &DAT_0407ebb1;
    local_60 = local_60 + 0x10;
    FUN_0019a704(param_1,&local_60);
    (**(code **)(*plVar11 + 0x20))(plVar11);
    return 1;
  }
  iVar10 = (int)*plVar7;
  if (iVar10 == (int)*plVar7) {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar9) {
      *(int *)plVar7 = (int)*plVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0040d514;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar6 = *plVar7;
    if ((int)lVar6 == iVar10) {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *(int *)plVar7 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0040d514;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = (int)lVar6;
  } while( true );
}

