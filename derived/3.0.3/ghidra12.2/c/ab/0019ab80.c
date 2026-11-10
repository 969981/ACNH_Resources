
void FUN_0019ab80(long param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  piVar1 = (int *)(param_1 + 8);
  iVar8 = *piVar1;
  if (iVar8 == *piVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_0019abd0:
      puVar5 = (undefined8 *)FUN_00185a6c(0x28);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &DAT_0483a248;
        puVar5[1] = param_1;
        puVar5[4] = param_3;
        puVar5[2] = &LAB_001a1290;
        puVar5[3] = 0;
      }
      plVar6 = (long *)FUN_00187df4(0x20);
      *plVar6 = 0;
      plVar6[2] = (long)FUN_00197680;
      plVar6[3] = (long)puVar5;
      plVar9 = (long *)(param_2 + 0x20);
      lVar7 = *plVar9;
      *plVar6 = lVar7;
      plVar6[1] = (long)plVar9;
      *(long **)(lVar7 + 8) = plVar6;
      *plVar9 = (long)plVar6;
      *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar2 = *piVar1;
    if (iVar2 == iVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0019abd0;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar2;
  } while( true );
}

