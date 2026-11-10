
void FUN_001bb480(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  long *plVar13;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  char local_48;
  undefined1 local_47;
  undefined2 local_34 [2];
  
  local_34[0] = *(undefined2 *)((long)param_2 + 0x44);
  uVar3 = *(undefined2 *)((long)param_2 + 0xac);
  plVar6 = (long *)FUN_001bb2c0(param_1,local_34);
  puVar5 = PTR_DAT_04bcb900;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar2 = *puVar8;
      if (uVar2 != 0) {
        lVar9 = **(long **)(puVar5 + 0xa0);
        if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar6 = (long *)(*(long *)(lVar9 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    if ((*plVar6 == 0) || (lVar9 = *(long *)(*plVar6 + 0x10), lVar9 == 0)) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x10);
    }
    plVar13 = (long *)(lVar9 + 0x78);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    plVar6 = param_2 + 1;
    iVar11 = (int)*plVar6;
    iVar10 = (int)*plVar6 + -1;
    if (iVar11 == (int)*plVar6) {
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar12) {
        *(int *)plVar6 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
LAB_001bb75c:
        if ((iVar10 == 0) && (*(char *)((long)param_2 + 0xc) == '\0')) {
          *(undefined1 *)((long)param_2 + 0xc) = 1;
          (**(code **)(*param_2 + 8))(param_2);
        }
                    /* WARNING: Could not recover jumptable at 0x001bb7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar13 + 0x20))(plVar13);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      lVar9 = *plVar6;
      iVar10 = iVar11 + -1;
      if ((int)lVar9 == iVar11) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar12) {
          *(int *)plVar6 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_001bb75c;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = (int)lVar9;
    } while( true );
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x28) + 0x120);
  if (plVar13 != (long *)0x0) {
    FUN_001b8014(auStack_b0);
    plVar1 = param_2 + 0x28;
    if (local_48 == '\0') {
      FUN_001b8590(auStack_b0);
    }
    FUN_001e15a8(local_a8,plVar1);
    local_47 = 0;
    uVar7 = (**(code **)(*plVar13 + 0x18))(plVar13,auStack_b0,uVar3);
    if (local_48 == '\0') {
      FUN_001b8590(auStack_b0);
      FUN_001e15a8(plVar1,local_a8);
      FUN_001b8504(auStack_b0);
    }
    else {
      FUN_001e15a8(plVar1,local_a8);
      FUN_001b8504(auStack_b0);
    }
    if ((uVar7 & 1) != 0) {
      plVar6 = param_2 + 1;
      lVar9 = *plVar6;
      iVar11 = (int)*plVar6 + -1;
      if ((int)lVar9 == (int)*plVar6) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar12) {
          *(int *)plVar6 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_001bb68c;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001bb68c:
        bVar12 = false;
      }
      iVar10 = (int)lVar9;
      if (!bVar12) {
        do {
          lVar9 = *plVar6;
          iVar11 = iVar10 + -1;
          if ((int)lVar9 == iVar10) {
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar12) {
              *(int *)plVar6 = iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = (int)lVar9;
        } while( true );
      }
      goto joined_r0x001bb694;
    }
  }
  uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar3,*(undefined1 *)((long)param_2 + 0x43),param_2);
  if ((uVar7 & 1) != 0) {
    return;
  }
  FUN_001b7820(*(undefined8 *)(param_1 + 0x28),param_2[0x27],param_2 + 0x28);
  plVar6 = param_2 + 1;
  lVar9 = *plVar6;
  iVar11 = (int)*plVar6 + -1;
  if ((int)lVar9 == (int)*plVar6) {
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar12) {
      *(int *)plVar6 = iVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001bb638;
    bVar12 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_001bb638:
    bVar12 = false;
  }
  iVar10 = (int)lVar9;
  if (!bVar12) {
    do {
      lVar9 = *plVar6;
      iVar11 = iVar10 + -1;
      if ((int)lVar9 == iVar10) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar12) {
          *(int *)plVar6 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = (int)lVar9;
    } while( true );
  }
joined_r0x001bb694:
  if ((iVar11 == 0) && (*(char *)((long)param_2 + 0xc) == '\0')) {
    *(undefined1 *)((long)param_2 + 0xc) = 1;
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}

