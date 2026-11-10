
undefined8 FUN_001c9b40(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  
  uVar13 = (ulong)*(byte *)(param_2 + 0xa4);
  lVar12 = *(long *)(param_2 + 0x138);
  if (*(long *)(*(long *)(param_1 + 0x1b8) + uVar13 * 8) == 0) {
    *(long *)(*(long *)(param_1 + 0x1b8) + uVar13 * 8) = lVar12;
    piVar1 = (int *)(*(long *)(*(long *)(param_1 + 0x1b8) + uVar13 * 8) + 8);
    iVar9 = *piVar1;
    if (iVar9 != *piVar1) {
      ClearExclusiveLocal();
LAB_001c9ca4:
      do {
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001c9bbc;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while( true );
    }
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar11) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001c9ca4;
LAB_001c9bbc:
    lVar12 = 0;
    cVar3 = *(char *)(param_2 + 0xa0);
  }
  else {
    cVar3 = *(char *)(param_2 + 0xa0);
  }
  if ((cVar3 != '\0') && (cVar3 != *(char *)(*(long *)(param_1 + 0x1d0) + uVar13))) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x1b8) + uVar13 * 8);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    plVar2 = plVar6 + 1;
    lVar12 = *plVar2;
    iVar9 = (int)*plVar2 + -1;
    if ((int)lVar12 == (int)*plVar2) {
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        bVar11 = true;
        goto LAB_001c9d28;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    bVar11 = false;
LAB_001c9d28:
    iVar10 = (int)lVar12;
    if (bVar11) {
LAB_001c9d2c:
      if ((iVar9 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar6 + 0xc) = 1;
        (**(code **)(*plVar6 + 8))();
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + uVar13 * 8) = 0;
      return 0;
    }
    do {
      lVar12 = *plVar2;
      iVar9 = iVar10 + -1;
      if ((int)lVar12 == iVar10) {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_001c9d2c;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = (int)lVar12;
    } while( true );
  }
  if (lVar12 == 0) goto LAB_001c9dec;
  lVar5 = *(long *)(*(long *)(param_1 + 0x1b8) + uVar13 * 8);
  if ((*(byte *)(lVar5 + 0x30) >> 2 & 1) != 0) {
    uVar8 = *(long *)(lVar12 + 0x18) + *(long *)(lVar5 + 0x18);
    if (uVar8 < 0x555) {
      uVar8 = FUN_00196ea0();
      if ((uVar8 & 1) == 0) {
        return 0;
      }
    }
    else {
      plVar6 = (long *)FUN_00185a6c(0x38);
      if (plVar6 != (long *)0x0) {
        *plVar6 = (long)(PTR_DAT_04bcbc48 + 0x10);
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined1 *)((long)plVar6 + 0xc) = 0;
        *plVar6 = (long)&PTR_FUN_048393d8;
        FUN_00196a24(plVar6,uVar8,0);
      }
      FUN_00193c08(plVar6,*(undefined8 *)(*(long *)(param_1 + 0x1b8) + uVar13 * 8));
      plVar7 = *(long **)(*(long *)(param_1 + 0x1b8) + uVar13 * 8);
      plVar2 = plVar7 + 1;
      lVar5 = *plVar2;
      iVar9 = (int)*plVar2 + -1;
      if ((int)lVar5 == (int)*plVar2) {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_001c9dac;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001c9dac:
        bVar11 = false;
      }
      iVar10 = (int)lVar5;
      if (!bVar11) {
        do {
          lVar5 = *plVar2;
          iVar9 = iVar10 + -1;
          if ((int)lVar5 == iVar10) {
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar11) {
              *(int *)plVar2 = iVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = (int)lVar5;
        } while( true );
      }
      if ((iVar9 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar7 + 0xc) = 1;
        (**(code **)(*plVar7 + 8))();
      }
      *(long **)(*(long *)(param_1 + 0x1b8) + uVar13 * 8) = plVar6;
    }
  }
  FUN_00196e78(*(undefined8 *)(*(long *)(param_1 + 0x1b8) + uVar13 * 8),lVar12);
LAB_001c9dec:
  if (cVar3 == '\0') {
    return 1;
  }
  *(char *)(*(long *)(param_1 + 0x1d0) + uVar13) =
       *(char *)(*(long *)(param_1 + 0x1d0) + uVar13) + '\x01';
  if (*(char *)(*(long *)(param_1 + 0x1d0) + uVar13) == '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x1d0) + uVar13) = 1;
    return 0;
  }
  return 0;
}

