
void FUN_001c1040(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  
  FUN_001c1450();
  if (*(long **)(param_1 + 0x308) != *(long **)(param_1 + 0x318)) {
    plVar8 = *(long **)(param_1 + 0x308);
    do {
      plVar8[0x3a] = *param_2;
      FUN_001bb480(param_1 + 0xf0,plVar8);
      plVar1 = (long *)plVar8[2];
      lVar4 = plVar8[3];
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar1;
      }
      plVar8[3] = 0;
      if (plVar1 != (long *)0x0) {
        plVar1[3] = lVar4;
      }
      plVar8[2] = 0;
      if (*(long **)(param_1 + 0x308) == plVar8) {
        *(long **)(param_1 + 0x308) = plVar1;
        plVar6 = *(long **)(param_1 + 0x310);
      }
      else {
        plVar6 = *(long **)(param_1 + 0x310);
      }
      if (plVar6 == plVar8) {
        *(long *)(param_1 + 0x310) = lVar4;
      }
      lVar4 = *(long *)(param_1 + 800);
      plVar8[0x3b] = 0;
      *(long *)(param_1 + 800) = lVar4 + -1;
      plVar6 = plVar8 + 1;
      iVar7 = (int)*plVar6;
      iVar5 = (int)*plVar6 + -1;
      if (iVar7 != (int)*plVar6) {
        ClearExclusiveLocal();
LAB_001c1154:
        do {
          lVar4 = *plVar6;
          iVar5 = iVar7 + -1;
          if ((int)lVar4 == iVar7) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *(int *)plVar6 = iVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_001c1120;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = (int)lVar4;
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_001c1154;
LAB_001c1120:
      if ((iVar5 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar8 + 0xc) = 1;
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      plVar8 = plVar1;
    } while (plVar1 != *(long **)(param_1 + 0x318));
  }
  return;
}

