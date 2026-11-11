
uint FUN_0041d210(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int *piVar11;
  undefined *local_30;
  long *local_28;
  
  if (*(int *)(param_2 + 0x14) == 1) {
    uVar7 = 0;
    goto LAB_0041d22c;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  puVar1 = (undefined *)0x0;
  if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
    puVar1 = PTR_LAB_04bd2c90;
  }
  if (puVar1 == (undefined *)0x0) {
    return 0;
  }
  puVar1 = PTR_DAT_04bd2a58 + 0x10;
  local_28 = (long *)0x0;
  local_30 = puVar1;
  uVar7 = FUN_0041f990(*(undefined8 *)(param_1 + 0x28),param_2,param_1 + 8,param_3,param_4,&local_30
                       ,*(undefined4 *)(param_1 + 0x30));
  plVar6 = local_28;
  if (local_28 == (long *)0x0) goto LAB_0041d22c;
  plVar2 = local_28 + 1;
  lVar5 = *plVar2;
  iVar8 = (int)*plVar2 + -1;
  if ((int)lVar5 == (int)*plVar2) {
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar10) {
      *(int *)plVar2 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_0041d2fc;
    bVar10 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0041d2fc:
    bVar10 = false;
  }
  iVar9 = (int)lVar5;
  if (!bVar10) {
    do {
      lVar5 = *plVar2;
      iVar8 = iVar9 + -1;
      if ((int)lVar5 == iVar9) {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar10) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = (int)lVar5;
    } while( true );
  }
  if (iVar8 != 0) goto LAB_0041d22c;
  piVar11 = (int *)((long)local_28 + 0xc);
  local_30 = puVar1;
  (**(code **)(*local_28 + 0x10))(local_28);
  iVar9 = *piVar11 + -1;
  iVar8 = *piVar11;
  if (iVar8 == *piVar11) {
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar11,0x10);
    if (bVar10) {
      *piVar11 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_0041d37c;
    bVar10 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0041d37c:
    bVar10 = false;
  }
  if (!bVar10) {
    do {
      iVar3 = *piVar11;
      iVar9 = iVar8 + -1;
      if (iVar3 == iVar8) {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar10) {
          *piVar11 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar3;
    } while( true );
  }
  if (iVar9 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
    return uVar7 & 1;
  }
LAB_0041d22c:
  return uVar7 & 1;
}

