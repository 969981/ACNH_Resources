
void FUN_00204c50(long *param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  int *piVar11;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  
  FUN_0019a2a8(param_1,2,&local_60);
  *param_1 = (long)(PTR_DAT_04bccbb0 + 0x10);
  FUN_001fb850(param_1 + 0x19,0);
  param_1[0x31] = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 0x32) = 1;
  puVar6 = PTR_DAT_04bcc018;
  *(undefined1 *)((long)param_1 + 0x194) = 0;
  param_1[0x31] = (long)(puVar6 + 0x10);
  uVar7 = FUN_00196a18();
  FUN_00196a24(param_1 + 0x31,uVar7,0);
  FUN_0018aa4c(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  param_1[0x15] = param_3;
  param_1[0x16] = param_4;
  param_1[0x17] = param_5;
  param_1[0x18] = param_6;
  plVar10 = *(long **)(param_6 + 8);
  if (plVar10 == (long *)0x0) {
LAB_00204ddc:
    local_60 = PTR_DAT_04bcc0c0 + 0x10;
    local_50 = 0;
    puStack_48 = &DAT_0407ebb1;
    puStack_58 = PTR_LAB_04bccbb8;
    FUN_0019a704(param_1,&local_60);
    return;
  }
  plVar1 = plVar10 + 1;
  iVar9 = (int)*plVar1;
  iVar8 = (int)*plVar1 + -1;
  if (iVar9 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_00204d40:
      if (iVar8 == 0) {
        piVar11 = (int *)((long)plVar10 + 0xc);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        iVar8 = *piVar11 + -1;
        iVar9 = *piVar11;
        if (iVar9 != *piVar11) {
          ClearExclusiveLocal();
LAB_00204e34:
          do {
            iVar2 = *piVar11;
            iVar8 = iVar9 + -1;
            if (iVar2 == iVar9) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar4) {
                *piVar11 = iVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00204dc4;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar9 = iVar2;
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00204e34;
LAB_00204dc4:
        if (iVar8 == 0) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
      *(undefined8 *)(param_6 + 8) = 0;
      goto LAB_00204ddc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar5 = *plVar1;
    iVar8 = iVar9 + -1;
    if ((int)lVar5 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_00204d40;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = (int)lVar5;
  } while( true );
}

