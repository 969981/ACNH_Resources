
undefined8
FUN_00410330(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
            long param_6,undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  
  puVar6 = PTR_DAT_04bcb900;
  plVar9 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar7;
    if (uVar4 != 0) {
      lVar8 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar8 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if ((*plVar9 == 0) || (lVar8 = *(long *)(*plVar9 + 0x10), lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  plVar13 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  plVar14 = *(long **)(param_1 + 0x148);
  plVar9 = *(long **)(param_3 + 8);
  if (plVar14 != plVar9) {
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 1;
      iVar12 = (int)*plVar9;
      iVar10 = (int)*plVar9 + -1;
      if (iVar12 != (int)*plVar9) {
        ClearExclusiveLocal();
LAB_00410494:
        do {
          lVar8 = *plVar9;
          iVar10 = iVar12 + -1;
          if ((int)lVar8 == iVar12) {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar11) {
              *(int *)plVar9 = iVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00410448;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = (int)lVar8;
        } while( true );
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar11) {
        *(int *)plVar9 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00410494;
LAB_00410448:
      if (iVar10 == 0) {
        piVar15 = (int *)((long)plVar14 + 0xc);
        (**(code **)(*plVar14 + 0x10))(plVar14);
        iVar10 = *piVar15 + -1;
        iVar12 = *piVar15;
        if (iVar12 == *piVar15) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar11) {
            *piVar15 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_004104c0;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_004104c0:
          bVar11 = false;
        }
        if (!bVar11) {
          do {
            iVar1 = *piVar15;
            iVar10 = iVar12 + -1;
            if (iVar1 == iVar12) {
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar11) {
                *piVar15 = iVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar12 = iVar1;
          } while( true );
        }
        if (iVar10 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      plVar9 = *(long **)(param_3 + 8);
    }
    *(long **)(param_1 + 0x148) = plVar9;
    if ((plVar9 != (long *)0x0) && (plVar9 = plVar9 + 1, (int)*plVar9 != 0)) {
      iVar12 = (int)*plVar9;
      if (iVar12 != (int)*plVar9) {
        ClearExclusiveLocal();
LAB_004105c4:
        do {
          lVar8 = *plVar9;
          if ((int)lVar8 == iVar12) {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar11) {
              *(int *)plVar9 = iVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00410564;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = (int)lVar8;
        } while( true );
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar11) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_004105c4;
    }
  }
LAB_00410564:
  uVar2 = *(undefined8 *)(param_4 + 8);
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x240) = param_5;
  plVar14 = *(long **)(param_1 + 400);
  *(undefined8 *)(param_1 + 0x238) = uVar3;
  *(undefined8 *)(param_1 + 0x230) = uVar2;
  plVar9 = *(long **)(param_6 + 8);
  if (plVar14 == plVar9) goto LAB_00410714;
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    iVar12 = (int)*plVar9;
    iVar10 = (int)*plVar9 + -1;
    if (iVar12 != (int)*plVar9) {
      ClearExclusiveLocal();
LAB_00410644:
      do {
        lVar8 = *plVar9;
        iVar10 = iVar12 + -1;
        if ((int)lVar8 == iVar12) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar11) {
            *(int *)plVar9 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_004105f8;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = (int)lVar8;
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar11) {
      *(int *)plVar9 = iVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_00410644;
LAB_004105f8:
    if (iVar10 == 0) {
      piVar15 = (int *)((long)plVar14 + 0xc);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      iVar10 = *piVar15 + -1;
      iVar12 = *piVar15;
      if (iVar12 == *piVar15) {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar11) {
          *piVar15 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00410670;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00410670:
        bVar11 = false;
      }
      if (!bVar11) {
        do {
          iVar1 = *piVar15;
          iVar10 = iVar12 + -1;
          if (iVar1 == iVar12) {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar11) {
              *piVar15 = iVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar1;
        } while( true );
      }
      if (iVar10 == 0) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
    plVar9 = *(long **)(param_6 + 8);
  }
  *(long **)(param_1 + 400) = plVar9;
  if ((plVar9 == (long *)0x0) || (plVar9 = plVar9 + 1, (int)*plVar9 == 0)) {
LAB_00410714:
    *(undefined4 *)(param_1 + 0xa4) = param_7;
    lVar8 = *(long *)(*(long *)(param_1 + 0x148) + 0x10);
    plVar9 = (long *)(lVar8 + 0x30);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar8 = FUN_0018b798(lVar8 + 8);
    (**(code **)(*plVar9 + 0x20))(plVar9);
    if (lVar8 == 0) {
      puStack_68 = PTR_FUN_04bd2aa8;
    }
    else {
      puStack_68 = PTR_LAB_04bd2aa0;
    }
    local_70 = PTR_DAT_04bcc0c0 + 0x10;
    local_60 = 0;
    puStack_58 = &DAT_0407ebb1;
    FUN_0019a704(param_1,&local_70);
    (**(code **)(*plVar13 + 0x20))(plVar13);
    return 1;
  }
  iVar12 = (int)*plVar9;
  if (iVar12 == (int)*plVar9) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar11) {
      *(int *)plVar9 = (int)*plVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00410714;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar8 = *plVar9;
    if ((int)lVar8 == iVar12) {
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar11) {
        *(int *)plVar9 = iVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_00410714;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = (int)lVar8;
  } while( true );
}

