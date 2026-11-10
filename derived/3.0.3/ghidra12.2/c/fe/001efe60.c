
void FUN_001efe60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  long *plVar12;
  int local_58 [6];
  
  uVar6 = FUN_00194070(param_3);
  if ((uVar6 & 1) != 0) {
    plVar7 = (long *)FUN_00185a6c(0x118);
    if (plVar7 != (long *)0x0) {
      FUN_001f0404(plVar7);
    }
    (**(code **)(*plVar7 + 0x68))
              (local_58,plVar7,*(undefined4 *)(param_3 + 0x18),param_4,param_5,param_6,param_7);
    puVar5 = PTR_DAT_04bcb900;
    puVar1 = PTR_LAB_04bc0ee0;
    if (local_58[0] < 0) {
      puVar1 = (undefined *)0x0;
    }
    if (puVar1 != (undefined *)0x0) {
      plVar12 = (long *)(PTR_DAT_04bcb900 + 0x28);
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
          plVar12 = (long *)(*(long *)(lVar2 + (ulong)uVar3 * 8) + 0x20);
        }
      }
      FUN_00194148(*(undefined8 *)(*(long *)(*plVar12 + 0x10) + 0x10),plVar7,0);
      local_58[0] = 0x10001;
      goto LAB_001effc0;
    }
    plVar12 = plVar7 + 1;
    lVar2 = *plVar12;
    iVar9 = (int)*plVar12 + -1;
    if ((int)lVar2 == (int)*plVar12) {
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar11) {
        *(int *)plVar12 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_001eff8c;
      bVar11 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001eff8c:
      bVar11 = false;
    }
    iVar10 = (int)lVar2;
    if (!bVar11) {
      do {
        lVar2 = *plVar12;
        iVar9 = iVar10 + -1;
        if ((int)lVar2 == iVar10) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar11) {
            *(int *)plVar12 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar2;
      } while( true );
    }
    if ((iVar9 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_58[0] = -0x7ffefff3;
LAB_001effc0:
  FUN_0018aa70(param_1,local_58);
  return;
}

