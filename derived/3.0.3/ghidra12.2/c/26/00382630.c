
void FUN_00382630(undefined8 *param_1,long param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  long *plVar8;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    lVar5 = *(long *)(*(long *)(param_2 + 0xb8) + 0x68);
    uVar3 = FUN_0038d070(param_2,*param_1);
    uVar4 = *param_1;
    *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0x9c) = uVar3;
    uVar3 = FUN_0038d070(param_2,uVar4);
    *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0xa8) = uVar3;
    pbVar7 = *(byte **)(param_2 + 200);
    uVar6 = lVar5 + 0xdfU & -lVar5;
    if ((*pbVar7 & 1) == 0) {
      lVar5 = *(long *)(pbVar7 + 0x40);
      *(ulong *)(pbVar7 + 0x40) = lVar5 + uVar6;
    }
    else {
      plVar8 = *(long **)(pbVar7 + 0x40);
      do {
        lVar5 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar5 + uVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(int *)((long)param_1 + (ulong)param_3 * 4 + 0xc0) = (int)lVar5;
    lVar5 = param_1[0xb];
  }
  else {
    lVar5 = param_1[0xb];
  }
  if ((lVar5 == 0) || ((*(byte *)(lVar5 + 8) >> 5 & 1) == 0)) {
    return;
  }
  uVar3 = FUN_0038d070(param_2,*param_1);
  *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0xb4) = uVar3;
  return;
}

