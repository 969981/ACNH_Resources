
void FUN_0020afe0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  long *plVar13;
  int local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar6 = FUN_00194070(param_3);
  if ((uVar6 & 1) == 0) {
    local_58 = -0x7ffefff3;
    piVar9 = &local_58;
LAB_0020b0f8:
    FUN_0018aa70(param_1,piVar9);
    return;
  }
  plVar7 = (long *)FUN_00185a6c(0x1d8);
  if (plVar7 != (long *)0x0) {
    FUN_0020f9ac(plVar7);
  }
  (**(code **)(*plVar7 + 0x68))
            (&local_58,plVar7,*(undefined4 *)(param_3 + 0x18),param_4,param_6,param_5,param_7);
  puVar5 = PTR_DAT_04bcb900;
  puVar1 = PTR_LAB_04bc0ee0;
  if (local_58 < 0) {
    puVar1 = (undefined *)0x0;
  }
  if (puVar1 != (undefined *)0x0) {
    plVar13 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar3 = *puVar8;
      if (uVar3 != 0) {
        lVar2 = **(long **)(puVar5 + 0xa0);
        if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar13 = (long *)(*(long *)(lVar2 + (ulong)uVar3 * 8) + 0x20);
      }
    }
    FUN_00194148(*(undefined8 *)(*(long *)(*plVar13 + 0x10) + 0x10),plVar7,0);
    piVar9 = &local_5c;
    local_5c = 0x10001;
    goto LAB_0020b0f8;
  }
  plVar13 = plVar7 + 1;
  lVar2 = *plVar13;
  iVar10 = (int)*plVar13 + -1;
  if ((int)lVar2 == (int)*plVar13) {
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar12) {
      *(int *)plVar13 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      bVar12 = true;
      goto LAB_0020b148;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar12 = false;
LAB_0020b148:
  iVar11 = (int)lVar2;
  if (bVar12) {
LAB_0020b14c:
    if ((iVar10 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    *param_1 = CONCAT44(uStack_54,local_58);
    param_1[1] = uStack_50;
    param_1[2] = local_48;
    return;
  }
  do {
    lVar2 = *plVar13;
    iVar10 = iVar11 + -1;
    if ((int)lVar2 == iVar11) {
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar12) {
        *(int *)plVar13 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_0020b14c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = (int)lVar2;
  } while( true );
}

