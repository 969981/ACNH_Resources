
void FUN_001e5db0(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = (long *)(param_1 + 0xb8);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  puVar5 = *(undefined8 **)(param_1 + 0x50);
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  if (puVar5 != puVar3) {
    if (*(long *)(param_2 + 8) == 0) {
      do {
        if ((puVar5[1] == 0) || (*(long *)(puVar5[1] + 0x10) == 0)) goto LAB_001e5e3c;
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar3);
    }
    else {
      do {
        lVar8 = 0;
        if (puVar5[1] != 0) {
          lVar8 = *(long *)(puVar5[1] + 0x10);
        }
        if (lVar8 == *(long *)(*(long *)(param_2 + 8) + 0x10)) goto LAB_001e5e3c;
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar3);
    }
    puVar5 = puVar3;
  }
LAB_001e5e3c:
  if (puVar5 != puVar3) {
                    /* WARNING: Could not recover jumptable at 0x001e5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x20))(plVar9);
    return;
  }
  if (puVar3 == *(undefined8 **)(param_1 + 0x60)) {
    FUN_001ed160((long *)(param_1 + 0x50),param_2);
                    /* WARNING: Could not recover jumptable at 0x001e5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x20))(plVar9);
    return;
  }
  *puVar3 = &PTR_LAB_0483cdf8;
  puVar3[1] = 0;
  lVar8 = *(long *)(param_2 + 8);
  if (lVar8 == 0) goto LAB_001e5ee0;
  puVar3[1] = lVar8;
  piVar1 = (int *)(lVar8 + 8);
  if (*piVar1 == 0) goto LAB_001e5ee0;
  iVar6 = *piVar1;
  if (iVar6 == *piVar1) {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001e5ed8;
    bVar7 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_001e5ed8:
    bVar7 = false;
  }
  if (!bVar7) {
    do {
      iVar2 = *piVar1;
      if (iVar2 == iVar6) {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar6 = iVar2;
    } while( true );
  }
LAB_001e5ee0:
  *(undefined8 **)(param_1 + 0x58) = puVar3 + 2;
                    /* WARNING: Could not recover jumptable at 0x001e5efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return;
}

