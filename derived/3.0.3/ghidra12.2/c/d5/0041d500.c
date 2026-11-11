
undefined8 FUN_0041d500(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  
  puVar8 = PTR_DAT_04bcb910;
  puVar7 = PTR_DAT_04bcb908;
  puVar6 = PTR_DAT_04bcb900;
  plVar12 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar9;
    if (uVar3 != 0) {
      lVar10 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar10 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar12 == 0) || (lVar10 = *(long *)(*plVar12 + 0x10), lVar10 == 0)) {
    plVar12 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    lVar10 = *(long *)(param_1 + 0x38);
  }
  else {
    plVar12 = (long *)(*(long *)(lVar10 + 0x10) + 0x78);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar10 = *(long *)(param_1 + 0x38);
  }
  if (lVar10 != 0) {
    FUN_0041e170(param_1);
  }
  lVar10 = FUN_00185a6c(400);
  FUN_0041cf48(lVar10,param_1,param_2);
  *(long *)(param_1 + 0x38) = lVar10;
  piVar1 = (int *)(lVar10 + 8);
  iVar11 = *piVar1;
  if (iVar11 == *piVar1) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_0041d62c:
      local_60 = PTR_DAT_04bcc0c0 + 0x10;
      local_50 = 0;
      puStack_48 = &DAT_0407ebb1;
      puStack_58 = PTR_LAB_04bd2c78;
      FUN_0019a704(*(undefined8 *)(param_1 + 0x38),&local_60);
      plVar13 = (long *)(puVar6 + 0x28);
      if (*puVar7 != '\0') {
        puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar8);
        uVar3 = *puVar9;
        if (uVar3 != 0) {
          lVar10 = **(long **)(puVar6 + 0xa0);
          if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar13 = (long *)(*(long *)(lVar10 + (ulong)uVar3 * 8) + 0x20);
        }
      }
      FUN_00194148(*(undefined8 *)(*(long *)(*plVar13 + 0x10) + 0x10),
                   *(undefined8 *)(param_1 + 0x38),0);
      (**(code **)(*plVar12 + 0x20))(plVar12);
      return 1;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar2 = *piVar1;
    if (iVar2 == iVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_0041d62c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar2;
  } while( true );
}

