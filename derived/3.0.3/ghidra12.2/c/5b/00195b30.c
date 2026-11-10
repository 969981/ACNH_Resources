
void FUN_00195b30(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_048393b8;
  piVar1 = (int *)(param_2 + 8);
  iVar5 = *piVar1;
  if (iVar5 == *piVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_00195b7c:
      *(undefined1 *)(param_1 + 1) = 0;
      param_1[3] = 0;
      *(undefined4 *)(param_1 + 4) = 7;
      param_1[5] = *(long *)(param_1[2] + 0x18) << 3;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar2 = *piVar1;
    if (iVar2 == iVar5) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_00195b7c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar5 = iVar2;
  } while( true );
}

