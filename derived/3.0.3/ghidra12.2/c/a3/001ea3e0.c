
void FUN_001ea3e0(long param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined1 auStack_68 [8];
  undefined *local_60;
  long local_58;
  undefined **local_50;
  long local_48;
  undefined **local_40;
  long local_38;
  
  local_60 = PTR_DAT_04bcbf30 + 0x10;
  local_58 = 0;
  lVar6 = *(long *)(param_2 + 0x10);
  if ((lVar6 != 0) && (piVar1 = (int *)(lVar6 + 8), local_58 = lVar6, *piVar1 != 0)) {
    iVar10 = *piVar1;
    if (iVar10 != *piVar1) {
      ClearExclusiveLocal();
LAB_001ea4c0:
      do {
        iVar2 = *piVar1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001ea458;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001ea4c0;
  }
LAB_001ea458:
  lVar6 = *(long *)(param_3 + 0xa0);
  local_50 = &PTR_LAB_0483cd28;
  local_48 = 0;
  if ((lVar6 != 0) && (piVar1 = (int *)(lVar6 + 8), local_48 = lVar6, *piVar1 != 0)) {
    iVar10 = *piVar1;
    if (iVar10 != *piVar1) {
      ClearExclusiveLocal();
LAB_001ea550:
      do {
        iVar2 = *piVar1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001ea4f4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001ea550;
  }
LAB_001ea4f4:
  lVar6 = *(long *)(param_2 + 0x20);
  local_40 = &PTR_LAB_0483cd28;
  local_38 = 0;
  if ((lVar6 != 0) && (piVar1 = (int *)(lVar6 + 8), local_38 = lVar6, *piVar1 != 0)) {
    iVar10 = *piVar1;
    if (iVar10 != *piVar1) {
      ClearExclusiveLocal();
LAB_001ea5d4:
      do {
        iVar2 = *piVar1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001ea584;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001ea5d4;
  }
LAB_001ea584:
  lVar7 = *(long *)(param_1 + 0x70);
  lVar6 = param_1 + 0x68;
  if (lVar7 != lVar6) {
    if (local_58 == 0) {
      do {
        if ((*(long *)(lVar7 + 0x20) == 0) || (*(long *)(*(long *)(lVar7 + 0x20) + 0x10) == 0))
        goto LAB_001ea61c;
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != lVar6);
    }
    else {
      do {
        lVar12 = 0;
        if (*(long *)(lVar7 + 0x20) != 0) {
          lVar12 = *(long *)(*(long *)(lVar7 + 0x20) + 0x10);
        }
        if (lVar12 == *(long *)(local_58 + 0x10)) goto LAB_001ea61c;
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != lVar6);
    }
  }
LAB_001ea624:
  FUN_001ea740(lVar6,auStack_68);
  uVar8 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar8 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  plVar11 = (long *)(param_1 + 0x28);
  plVar13 = (long *)*plVar11;
  if (plVar13 != (long *)0x0) {
    plVar5 = plVar11;
    do {
      plVar9 = plVar13;
      if ((ulong)plVar13[4] < uVar8) {
        plVar9 = plVar5;
        plVar13 = plVar13 + 1;
      }
      plVar13 = (long *)*plVar13;
      plVar5 = plVar9;
    } while (plVar13 != (long *)0x0);
    if ((plVar9 != plVar11) && ((ulong)plVar9[4] <= uVar8)) {
      FUN_001ed3b0(param_1 + 0x20);
    }
  }
  FUN_001ed560(param_1 + 8,param_2 + 8);
  plVar13 = (long *)(param_1 + 0x38);
  plVar11 = (long *)FUN_001ed690(plVar13,param_3 + 8);
  if ((long *)(param_1 + 0x40) != plVar11) {
    plVar5 = (long *)plVar11[1];
    if ((long *)plVar11[1] == (long *)0x0) {
      plVar5 = plVar11;
      do {
        plVar9 = (long *)plVar5[2];
        bVar4 = (long *)*plVar9 != plVar5;
        plVar5 = plVar9;
      } while (bVar4);
    }
    else {
      do {
        plVar9 = plVar5;
        plVar5 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    if ((long *)*plVar13 == plVar11) {
      *plVar13 = (long)plVar9;
    }
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
    FUN_00192390(*(undefined8 *)(param_1 + 0x40),plVar11);
    FUN_001ec170((long *)(param_1 + 0x40),plVar11 + 4);
    FUN_00187e4c(plVar11);
  }
LAB_001ea720:
  FUN_001ea950(auStack_68);
  return;
LAB_001ea61c:
  if (lVar7 != lVar6) goto LAB_001ea720;
  goto LAB_001ea624;
}

