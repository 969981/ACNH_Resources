
void FUN_00197e40(long *param_1,int param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_5c;
  code *local_58;
  long alStack_50 [2];
  
  puVar5 = PTR_DAT_04bcb908;
  puVar4 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar6;
    if (uVar1 != 0) {
      lVar7 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar10 == 0) || (lVar7 = *(long *)(*plVar10 + 0x10), lVar7 == 0)) {
    plVar10 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
  }
  else {
    plVar10 = (long *)(*(long *)(lVar7 + 0x10) + 0x78);
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (param_2 == 0) {
    local_5c = 0x80010001;
    FUN_0018aa70(&local_58,&local_5c);
    FUN_0018ab44(param_1 + 0xb,&local_58);
    iVar9 = *(int *)((long)param_1 + 0x14);
  }
  else {
    iVar9 = *(int *)((long)param_1 + 0x14);
  }
  if ((iVar9 == 1) && ((int)param_1[3] != 0)) {
    plVar11 = (long *)(puVar4 + 0x28);
    if (*puVar5 != '\0') {
      puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar6;
      if (uVar1 != 0) {
        lVar7 = **(long **)(puVar4 + 0xa0);
        if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar11 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    FUN_001982c0(*(undefined8 *)(*(long *)(*plVar11 + 0x10) + 0x18),(int)param_1[3]);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  local_78 = *param_3;
  uStack_70 = param_3[1];
  local_68 = param_3[2];
  (**(code **)(*param_1 + 0x18))(param_1,param_2,&local_78,param_4 & 1);
  *(int *)((long)param_1 + 0x14) = param_2;
  if ((param_4 & 1) != 0) {
    FUN_0018ab44(param_1 + 0xb,param_3);
  }
  (**(code **)(*plVar10 + 0x20))(plVar10);
  if (param_2 - 2U < 3) {
    plVar10 = (long *)param_1[5];
    if (plVar10 != param_1 + 4) {
      do {
        local_58 = (code *)plVar10[2];
        alStack_50[0] = plVar10[3];
        (*local_58)(param_1,alStack_50);
        plVar10 = (long *)plVar10[1];
      } while (plVar10 != param_1 + 4);
    }
    (**(code **)(*param_1 + 0x20))(param_1);
    if ((*(byte *)(param_1 + 2) >> 1 & 1) != 0) {
      plVar10 = param_1 + 1;
      iVar9 = (int)*plVar10;
      iVar8 = (int)*plVar10 + -1;
      if (iVar9 == (int)*plVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *(int *)plVar10 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
LAB_001980b4:
          if (iVar8 != 0) {
            return;
          }
          if (*(char *)((long)param_1 + 0xc) == '\0') {
            *(undefined1 *)((long)param_1 + 0xc) = 1;
            (**(code **)(*param_1 + 8))(param_1);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        lVar7 = *plVar10;
        iVar8 = iVar9 + -1;
        if ((int)lVar7 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = iVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_001980b4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = (int)lVar7;
      } while( true );
    }
  }
  return;
}

