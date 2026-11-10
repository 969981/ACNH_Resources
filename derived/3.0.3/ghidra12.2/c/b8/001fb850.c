
void FUN_001fb850(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 local_14;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = (long)&PTR_FUN_04839418;
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  local_14 = 0x80010001;
  FUN_0018aa70(param_1 + 0xb,&local_14);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = (long)&PTR_FUN_0483ddf8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (param_2 == 0) {
    return;
  }
  param_1[0x17] = param_2;
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
      if (cVar3 == '\0') {
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar5 = iVar2;
  } while( true );
}

