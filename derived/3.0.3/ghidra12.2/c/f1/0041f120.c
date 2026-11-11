
undefined8 FUN_0041f120(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  long lVar9;
  
  if (*(int *)(param_2 + 0x14) == 1) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  puVar2 = (undefined *)0x0;
  if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
    puVar2 = PTR_LAB_04bd2c90;
  }
  if (puVar2 == (undefined *)0x0) {
    return 0;
  }
  FUN_0041ded4(param_1);
  plVar4 = (long *)FUN_00185a6c(0xd8);
  if (plVar4 != (long *)0x0) {
    FUN_0041d43c(plVar4,param_2,param_1,param_3);
  }
  lVar9 = plVar4[0x16];
  if (lVar9 == 0) {
    lVar9 = (**(code **)(*plVar4 + 0x68))(plVar4);
    plVar4[0x16] = lVar9;
  }
  uVar5 = FUN_0041f360(*(undefined8 *)(param_1 + 0x28),lVar9,param_1 + 8,param_3,0,param_1 + 0x18,
                       *(undefined4 *)(param_1 + 0x30));
  if ((uVar5 & 1) == 0) {
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    iVar6 = (int)*plVar1 + -1;
    if ((int)lVar9 == (int)*plVar1) {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0041f278;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0041f278:
      bVar8 = false;
    }
    iVar7 = (int)lVar9;
    if (!bVar8) {
      do {
        lVar9 = *plVar1;
        iVar6 = iVar7 + -1;
        if ((int)lVar9 == iVar7) {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = (int)lVar9;
      } while( true );
    }
    goto joined_r0x0041f280;
  }
  uVar5 = FUN_0019a3a0(plVar4);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar9 + 0x18);
    return 1;
  }
  plVar1 = plVar4 + 1;
  lVar9 = *plVar1;
  iVar6 = (int)*plVar1 + -1;
  if ((int)lVar9 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_0041f2dc;
    bVar8 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0041f2dc:
    bVar8 = false;
  }
  iVar7 = (int)lVar9;
  if (!bVar8) {
    do {
      lVar9 = *plVar1;
      iVar6 = iVar7 + -1;
      if ((int)lVar9 == iVar7) {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = (int)lVar9;
    } while( true );
  }
joined_r0x0041f280:
  if ((iVar6 == 0) && (*(char *)((long)plVar4 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar4 + 0xc) = 1;
    (**(code **)(*plVar4 + 8))(plVar4);
    return 0;
  }
  return 0;
}

