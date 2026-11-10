
void FUN_001be620(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long local_30;
  long local_28;
  
  *param_1 = (long)(PTR_DAT_04bcc608 + 0x10);
  FUN_001be9b0();
  puVar7 = PTR_DAT_04bcb900;
  if (param_1[0x24] != 0) {
    plVar15 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar4 = *puVar8;
      if (uVar4 != 0) {
        lVar9 = **(long **)(puVar7 + 0xa0);
        if ((ulong)((*(long **)(puVar7 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar15 = (long *)(*(long *)(lVar9 + (ulong)uVar4 * 8) + 0x20);
      }
    }
    if ((*plVar15 == 0) || (lVar9 = *(long *)(*plVar15 + 0x10), lVar9 == 0)) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x10);
    }
    plVar15 = (long *)(lVar9 + 0x78);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    param_1[0x24] = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  lVar9 = param_1[0xa2];
  if (lVar9 != 0) {
    FUN_001c3440(lVar9);
    FUN_00185ac4(lVar9);
    param_1[0xa2] = 0;
  }
  (**(code **)(*(long *)param_1[0x65] + 0x10))();
  if ((long *)param_1[0x65] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x65] + 8))();
  }
  plVar15 = (long *)param_1[0x67];
  if (plVar15 != (long *)param_1[0x69]) {
    do {
      plVar1 = (long *)plVar15[6];
      lVar9 = plVar15[7];
      if (lVar9 != 0) {
        *(long **)(lVar9 + 0x30) = plVar1;
      }
      plVar15[7] = 0;
      if (plVar1 != (long *)0x0) {
        plVar1[7] = lVar9;
      }
      plVar15[6] = 0;
      if ((long *)param_1[0x67] == plVar15) {
        param_1[0x67] = (long)plVar1;
        plVar11 = (long *)param_1[0x68];
      }
      else {
        plVar11 = (long *)param_1[0x68];
      }
      if (plVar11 == plVar15) {
        param_1[0x68] = lVar9;
      }
      param_1[0x6a] = param_1[0x6a] + -1;
      plVar11 = plVar15 + 1;
      iVar13 = (int)*plVar11;
      iVar10 = (int)*plVar11 + -1;
      if (iVar13 != (int)*plVar11) {
        ClearExclusiveLocal();
LAB_001be820:
        do {
          lVar9 = *plVar11;
          iVar10 = iVar13 + -1;
          if ((int)lVar9 == iVar13) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *(int *)plVar11 = iVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_001be7ec;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = (int)lVar9;
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_001be820;
LAB_001be7ec:
      if ((iVar10 == 0) && (*(char *)((long)plVar15 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar15 + 0xc) = 1;
        (**(code **)(*plVar15 + 8))();
      }
      plVar15 = plVar1;
    } while (plVar1 != (long *)param_1[0x69]);
  }
  lVar9 = param_1[0x61];
  if (param_1[0x61] != param_1[99]) {
    do {
      local_30 = lVar9;
      (**(code **)(param_1[0x5f] + 0x28))(&local_28,param_1 + 0x5f,&local_30);
      lVar9 = local_28;
    } while (local_28 != param_1[99]);
  }
  FUN_001e14d0();
  FUN_0019c210();
  FUN_00196ce0(param_1 + 0xa3);
  FUN_001bcecc(param_1 + 0x8b);
  FUN_001d6768(param_1 + 0x87);
  FUN_0018a360(param_1 + 0x6b);
  param_1[0x66] = (long)(PTR_DAT_04bcc610 + 0x10);
  lVar9 = param_1[0x69];
  if (param_1[0x67] != lVar9) {
    lVar3 = param_1[0x6a];
    lVar14 = param_1[0x67];
    do {
      while( true ) {
        lVar12 = lVar3;
        lVar2 = *(long *)(lVar14 + 0x30);
        lVar3 = *(long *)(lVar14 + 0x38);
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x30) = lVar2;
        }
        *(undefined8 *)(lVar14 + 0x38) = 0;
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x38) = lVar3;
        }
        *(undefined8 *)(lVar14 + 0x30) = 0;
        if (param_1[0x67] == lVar14) break;
        if (param_1[0x68] != lVar14) goto LAB_001be910;
LAB_001be954:
        param_1[0x68] = lVar3;
        lVar3 = lVar12 + -1;
        lVar14 = lVar2;
        if (lVar2 == lVar9) goto LAB_001be968;
      }
      param_1[0x67] = lVar2;
      if (param_1[0x68] == lVar14) goto LAB_001be954;
LAB_001be910:
      lVar3 = lVar12 + -1;
      lVar14 = lVar2;
    } while (lVar2 != lVar9);
LAB_001be968:
    param_1[0x6a] = lVar12 + -1;
  }
  FUN_001d8ee0(param_1 + 0x5f);
  FUN_001e1b80(param_1 + 0x5d);
  if (param_1[0x59] != 0) {
    param_1[0x5a] = param_1[0x59];
    FUN_00187e4c();
  }
  FUN_001b76c0(param_1);
  return;
}

