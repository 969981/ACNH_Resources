
undefined8
FUN_004114d0(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
            long param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  
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
  plVar12 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  plVar13 = *(long **)(param_1 + 0x148);
  plVar7 = *(long **)(param_3 + 8);
  if (plVar13 != plVar7) {
    if (plVar13 != (long *)0x0) {
      plVar7 = plVar13 + 1;
      iVar11 = (int)*plVar7;
      iVar9 = (int)*plVar7 + -1;
      if (iVar11 != (int)*plVar7) {
        ClearExclusiveLocal();
LAB_00411634:
        do {
          lVar6 = *plVar7;
          iVar9 = iVar11 + -1;
          if ((int)lVar6 == iVar11) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar10) {
              *(int *)plVar7 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_004115e8;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar6;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar10) {
        *(int *)plVar7 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00411634;
LAB_004115e8:
      if (iVar9 == 0) {
        piVar14 = (int *)((long)plVar13 + 0xc);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        iVar9 = *piVar14 + -1;
        iVar11 = *piVar14;
        if (iVar11 == *piVar14) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar10) {
            *piVar14 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_00411660;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00411660:
          bVar10 = false;
        }
        if (!bVar10) {
          do {
            iVar1 = *piVar14;
            iVar9 = iVar11 + -1;
            if (iVar1 == iVar11) {
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
            iVar11 = iVar1;
          } while( true );
        }
        if (iVar9 == 0) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
      }
      plVar7 = *(long **)(param_3 + 8);
    }
    *(long **)(param_1 + 0x148) = plVar7;
    if ((plVar7 != (long *)0x0) && (plVar7 = plVar7 + 1, (int)*plVar7 != 0)) {
      iVar11 = (int)*plVar7;
      if (iVar11 != (int)*plVar7) {
        ClearExclusiveLocal();
LAB_00411760:
        do {
          lVar6 = *plVar7;
          if ((int)lVar6 == iVar11) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar10) {
              *(int *)plVar7 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00411704;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar6;
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar10) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00411760;
    }
  }
LAB_00411704:
  uVar8 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x238) = param_5;
  *(undefined8 *)(param_1 + 0x230) = uVar8;
  plVar13 = *(long **)(param_1 + 400);
  plVar7 = *(long **)(param_6 + 8);
  if (plVar13 == plVar7) goto LAB_004118b4;
  if (plVar13 != (long *)0x0) {
    plVar7 = plVar13 + 1;
    iVar11 = (int)*plVar7;
    iVar9 = (int)*plVar7 + -1;
    if (iVar11 != (int)*plVar7) {
      ClearExclusiveLocal();
LAB_004117e0:
      do {
        lVar6 = *plVar7;
        iVar9 = iVar11 + -1;
        if ((int)lVar6 == iVar11) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar10) {
            *(int *)plVar7 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00411794;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = (int)lVar6;
      } while( true );
    }
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar10) {
      *(int *)plVar7 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_004117e0;
LAB_00411794:
    if (iVar9 == 0) {
      piVar14 = (int *)((long)plVar13 + 0xc);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      iVar9 = *piVar14 + -1;
      iVar11 = *piVar14;
      if (iVar11 == *piVar14) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar10) {
          *piVar14 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0041180c;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0041180c:
        bVar10 = false;
      }
      if (!bVar10) {
        do {
          iVar1 = *piVar14;
          iVar9 = iVar11 + -1;
          if (iVar1 == iVar11) {
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
          iVar11 = iVar1;
        } while( true );
      }
      if (iVar9 == 0) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
    plVar7 = *(long **)(param_6 + 8);
  }
  *(long **)(param_1 + 400) = plVar7;
  if ((plVar7 == (long *)0x0) || (plVar7 = plVar7 + 1, (int)*plVar7 == 0)) {
LAB_004118b4:
    *(undefined4 *)(param_1 + 0xa4) = param_7;
    lVar6 = *(long *)(*(long *)(param_1 + 0x148) + 0x10);
    plVar7 = (long *)(lVar6 + 0x30);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar6 = FUN_0018b798(lVar6 + 8);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    if (lVar6 == 0) {
      puStack_68 = PTR_FUN_04bd2ad8;
    }
    else {
      puStack_68 = PTR_LAB_04bd2ad0;
    }
    local_70 = PTR_DAT_04bcc0c0 + 0x10;
    local_60 = 0;
    puStack_58 = &DAT_0407ebb1;
    FUN_0019a704(param_1,&local_70);
    (**(code **)(*plVar12 + 0x20))(plVar12);
    return 1;
  }
  iVar11 = (int)*plVar7;
  if (iVar11 == (int)*plVar7) {
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar10) {
      *(int *)plVar7 = (int)*plVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_004118b4;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar6 = *plVar7;
    if ((int)lVar6 == iVar11) {
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar10) {
        *(int *)plVar7 = iVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_004118b4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = (int)lVar6;
  } while( true );
}

