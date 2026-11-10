
/* WARNING: Removing unreachable block (ram,0x002082dc) */
/* WARNING: Removing unreachable block (ram,0x00208324) */

long * FUN_002081f0(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0xc0);
  if (lVar10 == 0) {
    return (long *)0x0;
  }
  if ((*(long *)(lVar10 + 0x78) == 0) ||
     (lVar5 = *(long *)(*(long *)(lVar10 + 0x78) + 0x20), lVar5 == 0)) {
    return (long *)0x0;
  }
  plVar9 = *(long **)(lVar5 + 0x50);
  if (plVar9 == (long *)0x0) {
    return (long *)0x0;
  }
  (**(code **)(*plVar9 + 0x40))(plVar9,lVar10);
  plVar4 = (long *)plVar9[2];
  if (plVar4 == (long *)0x0) goto LAB_002082b0;
  plVar1 = plVar4 + 1;
  lVar5 = *plVar1;
  iVar6 = (int)*plVar1 + -1;
  if ((int)lVar5 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00208288;
    bVar8 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00208288:
    bVar8 = false;
  }
  iVar7 = (int)lVar5;
  if (!bVar8) {
    do {
      lVar5 = *plVar1;
      iVar6 = iVar7 + -1;
      if ((int)lVar5 == iVar7) {
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
      iVar7 = (int)lVar5;
    } while( true );
  }
  if ((iVar6 == 0) && (*(char *)((long)plVar4 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar4 + 0xc) = 1;
    (**(code **)(*plVar4 + 8))();
  }
LAB_002082b0:
  plVar9[2] = lVar10;
  piVar2 = (int *)(lVar10 + 8);
  iVar6 = *piVar2;
  if (iVar6 == *piVar2) {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar8) {
      *piVar2 = *piVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      return plVar9;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar7 = *piVar2;
    if (iVar7 == iVar6) {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        return plVar9;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar6 = iVar7;
  } while( true );
}

