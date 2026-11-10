
void FUN_00215bf0(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  long *plVar14;
  
  puVar6 = PTR_DAT_04bcb908;
  puVar5 = PTR_DAT_04bcb900;
  plVar14 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar7;
    if (uVar3 != 0) {
      lVar10 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar14 = (long *)(*(long *)(lVar10 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar14 == 0) || (lVar10 = *(long *)(*plVar14 + 0x10), lVar10 == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  plVar14 = (long *)(lVar10 + 0x78);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  uVar8 = FUN_00194070(param_2);
  if ((uVar8 & 1) == 0) goto LAB_00215dfc;
  plVar9 = *(long **)(param_1 + 0x200);
  if (plVar9 != (long *)0x0) {
    if ((int)plVar9[8] != 5) goto LAB_00215dfc;
    plVar1 = plVar9 + 1;
    lVar10 = *plVar1;
    iVar11 = (int)*plVar1 + -1;
    if ((int)lVar10 == (int)*plVar1) {
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00215ce8;
      bVar13 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00215ce8:
      bVar13 = false;
    }
    iVar12 = (int)lVar10;
    if (!bVar13) {
      do {
        lVar10 = *plVar1;
        iVar11 = iVar12 + -1;
        if ((int)lVar10 == iVar12) {
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *(int *)plVar1 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = (int)lVar10;
      } while( true );
    }
    if ((iVar11 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar9 + 0xc) = 1;
      (**(code **)(*plVar9 + 8))();
    }
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  lVar10 = FUN_00185a6c(0x140);
  FUN_00216500(lVar10,*(undefined4 *)(param_2 + 0x18),param_1);
  *(long *)(param_1 + 0x200) = lVar10;
  piVar2 = (int *)(lVar10 + 8);
  iVar11 = *piVar2;
  if (iVar11 == *piVar2) {
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar13) {
      *piVar2 = *piVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_00215da4:
      plVar9 = (long *)(puVar5 + 0x28);
      if (*puVar6 != '\0') {
        puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar3 = *puVar7;
        if (uVar3 != 0) {
          lVar10 = **(long **)(puVar5 + 0xa0);
          if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar9 = (long *)(*(long *)(lVar10 + (ulong)uVar3 * 8) + 0x20);
        }
      }
      FUN_00194148(*(undefined8 *)(*(long *)(*plVar9 + 0x10) + 0x10),
                   *(undefined8 *)(param_1 + 0x200),0);
LAB_00215dfc:
                    /* WARNING: Could not recover jumptable at 0x00215e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x20))(plVar14);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar12 = *piVar2;
    if (iVar12 == iVar11) {
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar13) {
        *piVar2 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_00215da4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar12;
  } while( true );
}

