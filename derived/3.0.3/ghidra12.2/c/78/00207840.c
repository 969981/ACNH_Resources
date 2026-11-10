
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00207840(long *param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  uint *puVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  undefined *local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 ***local_98;
  undefined8 ***pppuStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long *local_28;
  
  *param_1 = (long)(PTR_DAT_04bccc10 + 0x10);
  if (param_1[0x18] != 0) {
    local_b0 = 1;
    local_ac = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_b8 = PTR_DAT_04bcc068 + 0x10;
    local_98 = &local_98;
    local_28 = (long *)CONCAT44(local_28._4_4_,0x80010001);
    pppuStack_90 = local_98;
    FUN_0018aa70(auStack_60,&local_28);
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    uVar6 = FUN_00194070(&local_b8);
    if ((uVar6 & 1) != 0) {
      param_1[0x16] = (long)&local_b8;
      if ((char)param_1[3] == '\0') {
        FUN_002091d0(param_1);
      }
      else {
        plVar7 = param_1 + 4;
        FUN_001984a0(plVar7);
        local_28 = param_1;
        FUN_00198814(plVar7,PTR_LAB_04bccc20,&local_28,1);
        (*(code *)param_1[1])(plVar7,param_1 + 2);
      }
    }
    FUN_00198c50(&local_b8,0xffffffff);
    FUN_001976b0(&local_b8);
  }
  plVar7 = (long *)param_1[0x21];
  if (plVar7 == (long *)0x0) {
LAB_00207998:
    plVar7 = (long *)param_1[0x1f];
  }
  else {
    plVar9 = plVar7 + 1;
    iVar11 = (int)*plVar9;
    iVar10 = (int)*plVar9 + -1;
    if (iVar11 != (int)*plVar9) {
      ClearExclusiveLocal();
LAB_002079e0:
      do {
        lVar1 = *plVar9;
        iVar10 = iVar11 + -1;
        if ((int)lVar1 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0020798c;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = (int)lVar1;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_002079e0;
LAB_0020798c:
    if ((iVar10 != 0) || (*(char *)((long)plVar7 + 0xc) != '\0')) goto LAB_00207998;
    *(undefined1 *)((long)plVar7 + 0xc) = 1;
    (**(code **)(*plVar7 + 8))();
    plVar7 = (long *)param_1[0x1f];
  }
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    iVar11 = (int)*plVar9;
    iVar10 = (int)*plVar9 + -1;
    if (iVar11 != (int)*plVar9) {
      ClearExclusiveLocal();
LAB_00207a50:
      do {
        lVar1 = *plVar9;
        iVar10 = iVar11 + -1;
        if ((int)lVar1 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00207a14;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = (int)lVar1;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00207a50;
LAB_00207a14:
    if ((iVar10 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))();
    }
  }
  plVar7 = (long *)param_1[0x20];
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    iVar11 = (int)*plVar9;
    iVar10 = (int)*plVar9 + -1;
    if (iVar11 != (int)*plVar9) {
      ClearExclusiveLocal();
LAB_00207bf4:
      do {
        lVar1 = *plVar9;
        iVar10 = iVar11 + -1;
        if ((int)lVar1 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00207ad4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = (int)lVar1;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00207bf4;
LAB_00207ad4:
    if ((iVar10 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))();
    }
    param_1[0x20] = 0;
  }
  if ((long *)param_1[0x19] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x19] + 8))();
  }
  param_1[0x19] = 0;
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 8))();
  }
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  if ((long *)param_1[0x23] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x23] + 8))();
    param_1[0x23] = 0;
  }
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 8))();
    param_1[0x24] = 0;
  }
  puVar5 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x90);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar8;
    if (uVar2 != 0) {
      lVar1 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x88);
    }
  }
  if (*plVar7 == 0) {
    plVar9 = (long *)0x0;
    plVar7 = (long *)&DAT_00000008;
    iVar10 = _DAT_00000008;
    iVar11 = _DAT_00000008;
  }
  else {
    plVar9 = *(long **)(*plVar7 + 0x10);
    plVar7 = plVar9 + 1;
    iVar10 = (int)*plVar7;
    iVar11 = (int)*plVar7;
    if (iVar10 != (int)*plVar7) {
      ClearExclusiveLocal();
      goto LAB_00207cc0;
    }
  }
  iVar11 = iVar11 + -1;
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar4) {
    *(int *)plVar7 = iVar11;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') {
LAB_00207c5c:
    if ((iVar11 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar9 + 0xc) = 1;
      (**(code **)(*plVar9 + 8))();
    }
    FUN_00207d90();
    FUN_001a5cb0();
    FUN_0019c210();
    FUN_001b8504(param_1 + 0x26);
    FUN_001976b0(param_1 + 4);
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
LAB_00207cc0:
  do {
    lVar1 = *plVar7;
    iVar11 = iVar10 + -1;
    if ((int)lVar1 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_00207c5c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = (int)lVar1;
  } while( true );
}

