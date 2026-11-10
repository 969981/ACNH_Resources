
bool FUN_00216d10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  int local_68 [6];
  undefined4 local_44;
  
  uVar5 = FUN_00194070(param_2);
  if ((uVar5 & 1) == 0) {
    local_44 = 0x8001000d;
    FUN_0018aa70(local_68,&local_44);
    puVar1 = PTR_LAB_04bc0ee0;
    if (local_68[0] < 0) {
      puVar1 = (undefined *)0x0;
    }
    bVar4 = puVar1 != (undefined *)0x0;
  }
  else {
    plVar6 = (long *)FUN_00185a6c(0x110);
    if (plVar6 != (long *)0x0) {
      FUN_0019a2a8(plVar6,2,local_68);
      puVar1 = PTR_DAT_04bcce98;
      *(undefined4 *)(plVar6 + 0x14) = 0;
      *(undefined1 *)((long)plVar6 + 0xa4) = 0;
      *(undefined4 *)(plVar6 + 0x15) = 0;
      *plVar6 = (long)(puVar1 + 0x10);
      FUN_0019ae34(plVar6 + 0x16);
      plVar6[0x1c] = 0;
      plVar6[0x1d] = 0;
      plVar6[0x20] = 0;
      plVar6[0x1e] = 0;
      plVar6[0x1f] = 0;
      lVar7 = FUN_00185a6c(0x58);
      if (lVar7 != 0) {
        FUN_00217244(lVar7);
      }
      plVar6[0x21] = lVar7;
    }
    uVar5 = FUN_0021710c(plVar6,*(undefined4 *)(param_2 + 0x18),param_3,param_4,param_5,param_6,
                         param_7);
    puVar1 = PTR_DAT_04bcb900;
    if ((uVar5 & 1) == 0) {
      plVar11 = plVar6 + 1;
      iVar10 = (int)*plVar11;
      iVar9 = (int)*plVar11 + -1;
      if (iVar10 == (int)*plVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
LAB_00216ebc:
          if ((iVar9 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
            *(undefined1 *)((long)plVar6 + 0xc) = 1;
            (**(code **)(*plVar6 + 8))(plVar6);
          }
          return false;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        lVar7 = *plVar11;
        iVar9 = iVar10 + -1;
        if ((int)lVar7 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00216ebc;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar7;
      } while( true );
    }
    plVar11 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar2 = *puVar8;
      if (uVar2 != 0) {
        lVar7 = **(long **)(puVar1 + 0xa0);
        if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar11 = (long *)(*(long *)(lVar7 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    FUN_00194148(*(undefined8 *)(*(long *)(*plVar11 + 0x10) + 0x10),plVar6,0);
    bVar4 = true;
  }
  return bVar4;
}

