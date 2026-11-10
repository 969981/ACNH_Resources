
undefined8 FUN_00208f40(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_48 [24];
  undefined4 local_24;
  
  plVar7 = *(long **)(param_1 + 0x100);
  if (plVar7 == (long *)0x0) {
LAB_00208fcc:
    uVar8 = FUN_00194070(param_2);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0xc0) == 0) {
      local_24 = 0x10001;
      FUN_0018aa70(auStack_48,&local_24);
      FUN_00197e40(param_2,2,auStack_48,1);
      return 1;
    }
    lVar9 = FUN_00185a6c(0x158);
    FUN_0020ebc8(lVar9,*(undefined4 *)(param_2 + 0x18),param_1,param_3);
    *(long *)(param_1 + 0x100) = lVar9;
    piVar2 = (int *)(lVar9 + 8);
    iVar12 = *piVar2;
    if (iVar12 == *piVar2) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
LAB_002090d4:
        puVar6 = PTR_DAT_04bcb900;
        plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
        if (*PTR_DAT_04bcb908 != '\0') {
          puVar10 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
          uVar3 = *puVar10;
          if (uVar3 != 0) {
            lVar9 = **(long **)(puVar6 + 0xa0);
            if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                           ,0x47,0xe0000003,0);
            }
            plVar7 = (long *)(*(long *)(lVar9 + (ulong)uVar3 * 8) + 0x20);
          }
        }
        FUN_00194148(*(undefined8 *)(*(long *)(*plVar7 + 0x10) + 0x10),
                     *(undefined8 *)(param_1 + 0x100),0);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      iVar11 = *piVar2;
      if (iVar11 == iVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_002090d4;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar11;
    } while( true );
  }
  if ((int)plVar7[8] != 5) {
    return 0;
  }
  plVar1 = plVar7 + 1;
  iVar12 = (int)*plVar1;
  iVar11 = (int)*plVar1 + -1;
  if (iVar12 == (int)*plVar1) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_00208fa8:
      if ((iVar11 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar7 + 0xc) = 1;
        (**(code **)(*plVar7 + 8))();
      }
      *(undefined8 *)(param_1 + 0x100) = 0;
      goto LAB_00208fcc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar9 = *plVar1;
    iVar11 = iVar12 + -1;
    if ((int)lVar9 == iVar12) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_00208fa8;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = (int)lVar9;
  } while( true );
}

