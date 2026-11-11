
bool FUN_0041fba0(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined4 local_5c;
  int local_58 [6];
  
  if ((*(int *)(param_2 + 0x14) != 1) && (*(long *)(param_1 + 0x10) != 0)) {
    puVar1 = (undefined *)0x0;
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
      puVar1 = PTR_LAB_04bd2c90;
    }
    if (puVar1 != (undefined *)0x0) {
      uVar3 = *(undefined4 *)(param_1 + 0x30);
      uVar7 = FUN_00194070(*(undefined8 *)(param_1 + 0x28),param_2);
      if ((uVar7 & 1) == 0) {
        local_5c = 0x8001000d;
        FUN_0018aa70(local_58,&local_5c);
        puVar1 = PTR_LAB_04bc0ee0;
        if (local_58[0] < 0) {
          puVar1 = (undefined *)0x0;
        }
        return puVar1 != (undefined *)0x0;
      }
      plVar8 = (long *)FUN_00185a6c(0x268);
      if (plVar8 != (long *)0x0) {
        FUN_004153e8(plVar8);
      }
      uVar7 = FUN_004158e0(plVar8,*(undefined4 *)(param_2 + 0x18),param_1 + 8,param_3,0,
                           param_1 + 0x18,uVar3);
      puVar1 = PTR_DAT_04bcb900;
      if ((uVar7 & 1) != 0) {
        plVar12 = (long *)(PTR_DAT_04bcb900 + 0x28);
        if (*PTR_DAT_04bcb908 != '\0') {
          puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
          uVar4 = *puVar9;
          if (uVar4 != 0) {
            lVar2 = **(long **)(puVar1 + 0xa0);
            if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                           ,0x47,0xe0000003,0);
            }
            plVar12 = (long *)(*(long *)(lVar2 + (ulong)uVar4 * 8) + 0x20);
          }
        }
        FUN_00194148(*(undefined8 *)(*(long *)(*plVar12 + 0x10) + 0x10),plVar8,0);
        return true;
      }
      plVar12 = plVar8 + 1;
      iVar11 = (int)*plVar12;
      iVar10 = (int)*plVar12 + -1;
      if (iVar11 == (int)*plVar12) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
LAB_0041fd8c:
          if ((iVar10 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
            *(undefined1 *)((long)plVar8 + 0xc) = 1;
            (**(code **)(*plVar8 + 8))(plVar8);
          }
          return false;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        lVar2 = *plVar12;
        iVar10 = iVar11 + -1;
        if ((int)lVar2 == iVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *(int *)plVar12 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0041fd8c;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = (int)lVar2;
      } while( true );
    }
  }
  return false;
}

