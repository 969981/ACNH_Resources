
void FUN_002138f0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  
  FUN_001a57b4(param_1,10,0);
  *param_1 = &PTR_FUN_0483f328;
  param_1[8] = &PTR_LAB_0483f968;
  param_1[9] = 0;
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 != 0) {
    param_1[9] = lVar5;
    piVar1 = (int *)(lVar5 + 8);
    if (*piVar1 != 0) {
      iVar6 = *piVar1;
      if (iVar6 == *piVar1) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_00213978;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar2 = *piVar1;
        if (iVar2 == iVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = iVar2;
      } while( true );
    }
  }
LAB_00213978:
  lVar5 = FUN_00185a6c(0xb0);
  if (lVar5 != 0) {
    FUN_0021126c(lVar5);
  }
  param_1[10] = lVar5;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}

