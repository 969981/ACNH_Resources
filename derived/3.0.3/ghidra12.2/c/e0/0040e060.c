
bool FUN_0040e060(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  int local_58 [6];
  undefined4 local_34;
  
  uVar6 = FUN_00194070(param_2);
  if ((uVar6 & 1) == 0) {
    local_34 = 0x8001000d;
    FUN_0018aa70(local_58,&local_34);
    puVar1 = PTR_LAB_04bc0ee0;
    if (local_58[0] < 0) {
      puVar1 = (undefined *)0x0;
    }
    return puVar1 != (undefined *)0x0;
  }
  plVar7 = (long *)FUN_00185a6c(0x1a8);
  if (plVar7 != (long *)0x0) {
    FUN_004191ec(plVar7);
  }
  uVar6 = FUN_0040e264(plVar7,*(undefined4 *)(param_2 + 0x18),param_3,param_4,param_5,param_6);
  puVar1 = PTR_DAT_04bcb900;
  if ((uVar6 & 1) != 0) {
    plVar11 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar3 = *puVar8;
      if (uVar3 != 0) {
        lVar2 = **(long **)(puVar1 + 0xa0);
        if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar11 = (long *)(*(long *)(lVar2 + (ulong)uVar3 * 8) + 0x20);
      }
    }
    FUN_00194148(*(undefined8 *)(*(long *)(*plVar11 + 0x10) + 0x10),plVar7,0);
    return true;
  }
  plVar11 = plVar7 + 1;
  iVar10 = (int)*plVar11;
  iVar9 = (int)*plVar11 + -1;
  if (iVar10 == (int)*plVar11) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *(int *)plVar11 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_0040e1d4:
      if ((iVar9 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar7 + 0xc) = 1;
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      return false;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar2 = *plVar11;
    iVar9 = iVar10 + -1;
    if ((int)lVar2 == iVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_0040e1d4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = (int)lVar2;
  } while( true );
}

