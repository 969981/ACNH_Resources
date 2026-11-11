
undefined8
FUN_004125c0(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
            long param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
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
  
  puVar5 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar7 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar7 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar8 == 0) || (lVar7 = *(long *)(*plVar8 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  plVar13 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  plVar14 = *(long **)(param_1 + 0x148);
  plVar8 = *(long **)(param_3 + 8);
  if (plVar14 != plVar8) {
    if (plVar14 != (long *)0x0) {
      plVar8 = plVar14 + 1;
      iVar12 = (int)*plVar8;
      iVar10 = (int)*plVar8 + -1;
      if (iVar12 != (int)*plVar8) {
        ClearExclusiveLocal();
LAB_00412724:
        do {
          lVar7 = *plVar8;
          iVar10 = iVar12 + -1;
          if ((int)lVar7 == iVar12) {
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar11) {
              *(int *)plVar8 = iVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_004126d8;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = (int)lVar7;
        } while( true );
      }
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar11) {
        *(int *)plVar8 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00412724;
LAB_004126d8:
      if (iVar10 == 0) {
        piVar15 = (int *)((long)plVar14 + 0xc);
        (**(code **)(*plVar14 + 0x10))(plVar14);
        iVar10 = *piVar15 + -1;
        iVar12 = *piVar15;
        if (iVar12 == *piVar15) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar11) {
            *piVar15 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00412750;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00412750:
          bVar11 = false;
        }
        if (!bVar11) {
          do {
            iVar1 = *piVar15;
            iVar10 = iVar12 + -1;
            if (iVar1 == iVar12) {
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar11) {
                *piVar15 = iVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') break;
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
      plVar8 = *(long **)(param_3 + 8);
    }
    *(long **)(param_1 + 0x148) = plVar8;
    if ((plVar8 != (long *)0x0) && (plVar8 = plVar8 + 1, (int)*plVar8 != 0)) {
      iVar12 = (int)*plVar8;
      if (iVar12 != (int)*plVar8) {
        ClearExclusiveLocal();
LAB_00412860:
        do {
          lVar7 = *plVar8;
          if ((int)lVar7 == iVar12) {
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar11) {
              *(int *)plVar8 = iVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_004127f4;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = (int)lVar7;
        } while( true );
      }
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar11) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00412860;
    }
  }
LAB_004127f4:
  uVar9 = *(undefined8 *)(param_4 + 8);
  uVar3 = *(undefined4 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x240) = param_5;
  *(undefined4 *)(param_1 + 0x238) = uVar3;
  *(undefined8 *)(param_1 + 0x230) = uVar9;
  plVar14 = *(long **)(param_1 + 400);
  plVar8 = *(long **)(param_6 + 8);
  if (plVar14 == plVar8) goto LAB_004129b4;
  if (plVar14 != (long *)0x0) {
    plVar8 = plVar14 + 1;
    iVar12 = (int)*plVar8;
    iVar10 = (int)*plVar8 + -1;
    if (iVar12 != (int)*plVar8) {
      ClearExclusiveLocal();
LAB_004128e0:
      do {
        lVar7 = *plVar8;
        iVar10 = iVar12 + -1;
        if ((int)lVar7 == iVar12) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar11) {
            *(int *)plVar8 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00412894;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = (int)lVar7;
      } while( true );
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar11) {
      *(int *)plVar8 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_004128e0;
LAB_00412894:
    if (iVar10 == 0) {
      piVar15 = (int *)((long)plVar14 + 0xc);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      iVar10 = *piVar15 + -1;
      iVar12 = *piVar15;
      if (iVar12 == *piVar15) {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar11) {
          *piVar15 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0041290c;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0041290c:
        bVar11 = false;
      }
      if (!bVar11) {
        do {
          iVar1 = *piVar15;
          iVar10 = iVar12 + -1;
          if (iVar1 == iVar12) {
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar11) {
              *piVar15 = iVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') break;
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
    plVar8 = *(long **)(param_6 + 8);
  }
  *(long **)(param_1 + 400) = plVar8;
  if ((plVar8 == (long *)0x0) || (plVar8 = plVar8 + 1, (int)*plVar8 == 0)) {
LAB_004129b4:
    *(undefined4 *)(param_1 + 0xa4) = param_7;
    lVar7 = *(long *)(*(long *)(param_1 + 0x148) + 0x10);
    plVar8 = (long *)(lVar7 + 0x30);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar7 = FUN_0018b798(lVar7 + 8);
    (**(code **)(*plVar8 + 0x20))(plVar8);
    if (lVar7 == 0) {
      puStack_68 = PTR_FUN_04bd2b08;
    }
    else {
      puStack_68 = PTR_LAB_04bd2b00;
    }
    local_70 = PTR_DAT_04bcc0c0 + 0x10;
    local_60 = 0;
    puStack_58 = &DAT_0407ebb1;
    FUN_0019a704(param_1,&local_70);
    (**(code **)(*plVar13 + 0x20))(plVar13);
    return 1;
  }
  iVar12 = (int)*plVar8;
  if (iVar12 == (int)*plVar8) {
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar11) {
      *(int *)plVar8 = (int)*plVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_004129b4;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar7 = *plVar8;
    if ((int)lVar7 == iVar12) {
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar11) {
        *(int *)plVar8 = iVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_004129b4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = (int)lVar7;
  } while( true );
}

