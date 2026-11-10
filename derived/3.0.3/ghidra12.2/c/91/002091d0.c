
undefined8 FUN_002091d0(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  
  puVar8 = PTR_DAT_04bcb910;
  puVar7 = PTR_DAT_04bcb908;
  puVar6 = PTR_DAT_04bcb900;
  plVar15 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar9;
    if (uVar3 != 0) {
      lVar11 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar15 = (long *)(*(long *)(lVar11 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar15 == 0) || (lVar11 = *(long *)(*plVar15 + 0x10), lVar11 == 0)) {
    plVar15 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    plVar10 = *(long **)(param_1 + 0x108);
  }
  else {
    plVar15 = (long *)(*(long *)(lVar11 + 0x10) + 0x78);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    plVar10 = *(long **)(param_1 + 0x108);
  }
  if (plVar10 != (long *)0x0) {
    if ((int)plVar10[8] != 5) {
      uVar14 = 0;
      goto LAB_002093ec;
    }
    plVar1 = plVar10 + 1;
    iVar13 = (int)*plVar1;
    iVar12 = (int)*plVar1 + -1;
    if (iVar13 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_00209364:
      do {
        lVar11 = *plVar1;
        iVar12 = iVar13 + -1;
        if ((int)lVar11 == iVar13) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_002092e4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = (int)lVar11;
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_00209364;
LAB_002092e4:
    if ((iVar12 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar10 + 0xc) = 1;
      (**(code **)(*plVar10 + 8))();
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  lVar11 = FUN_00185a6c(0x140);
  FUN_0020f590(lVar11,*(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x18),param_1);
  *(long *)(param_1 + 0x108) = lVar11;
  piVar2 = (int *)(lVar11 + 8);
  iVar13 = *piVar2;
  if (iVar13 == *piVar2) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = *piVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_00209398:
      plVar10 = (long *)(puVar6 + 0x28);
      if (*puVar7 != '\0') {
        puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar8);
        uVar3 = *puVar9;
        if (uVar3 != 0) {
          lVar11 = **(long **)(puVar6 + 0xa0);
          if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar10 = (long *)(*(long *)(lVar11 + (ulong)uVar3 * 8) + 0x20);
        }
      }
      FUN_00194148(*(undefined8 *)(*(long *)(*plVar10 + 0x10) + 0x10),
                   *(undefined8 *)(param_1 + 0x108),0);
      uVar14 = 1;
LAB_002093ec:
      (**(code **)(*plVar15 + 0x20))(plVar15);
      return uVar14;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar12 = *piVar2;
    if (iVar12 == iVar13) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_00209398;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar13 = iVar12;
  } while( true );
}

