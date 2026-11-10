
void FUN_00211a70(long *param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  
  *param_1 = (long)(PTR_DAT_04bccd98 + 0x10);
  puVar6 = PTR_DAT_04bcb900;
  plVar13 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar7;
    if (uVar3 != 0) {
      lVar9 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar13 = (long *)(*(long *)(lVar9 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar13 == 0) || (lVar9 = *(long *)(*plVar13 + 0x10), lVar9 == 0)) {
    plVar13 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    plVar8 = (long *)param_1[0x7e];
  }
  else {
    plVar13 = (long *)(*(long *)(lVar9 + 0x10) + 0x78);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    plVar8 = (long *)param_1[0x7e];
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    iVar11 = (int)*plVar1;
    iVar10 = (int)*plVar1 + -1;
    if (iVar11 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_00211cb0:
      do {
        lVar9 = *plVar1;
        iVar10 = iVar11 + -1;
        if ((int)lVar9 == iVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00211b7c;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = (int)lVar9;
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_00211cb0;
LAB_00211b7c:
    if ((iVar10 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar8 + 0xc) = 1;
      (**(code **)(*plVar8 + 8))();
    }
    param_1[0x7e] = 0;
  }
  if ((long *)param_1[0x27] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27] + 8))();
    param_1[0x27] = 0;
  }
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 8))();
    param_1[0x28] = 0;
  }
  (**(code **)(*plVar13 + 0x20))(plVar13);
  FUN_001b8504(param_1 + 0x6a);
  FUN_001b8504(param_1 + 0x59);
  if (param_1[0x58] != 0) {
    plVar13 = (long *)param_1[0x57];
    param_1[0x58] = 0;
    lVar9 = param_1[0x56];
    lVar12 = *plVar13;
    *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(lVar9 + 8);
    **(long **)(lVar9 + 8) = lVar12;
    while (plVar13 != param_1 + 0x56) {
      plVar8 = (long *)plVar13[1];
      (**(code **)plVar13[2])();
      FUN_00187e4c(plVar13);
      plVar13 = plVar8;
    }
  }
  FUN_001976b0(param_1 + 0x42);
  FUN_001fbac0(param_1 + 0x2a);
  plVar13 = (long *)param_1[0x26];
  param_1[0x25] = (long)(PTR_DAT_04bccbc0 + 0x10);
  if (plVar13 == (long *)0x0) goto LAB_00211d7c;
  plVar8 = plVar13 + 1;
  iVar11 = (int)*plVar8;
  iVar10 = (int)*plVar8 + -1;
  if (iVar11 == (int)*plVar8) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *(int *)plVar8 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_00211ce4:
      if (iVar10 != 0) {
LAB_00211d7c:
        FUN_001fbac0(param_1 + 0xd);
        FUN_001a2eac(param_1);
        return;
      }
      piVar14 = (int *)((long)plVar13 + 0xc);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      iVar10 = *piVar14 + -1;
      iVar11 = *piVar14;
      if (iVar11 == *piVar14) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
LAB_00211d68:
          if (iVar10 == 0) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
          goto LAB_00211d7c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar2 = *piVar14;
        iVar10 = iVar11 + -1;
        if (iVar2 == iVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar5) {
            *piVar14 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00211d68;
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
    lVar9 = *plVar8;
    iVar10 = iVar11 + -1;
    if ((int)lVar9 == iVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_00211ce4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = (int)lVar9;
  } while( true );
}

