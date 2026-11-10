
void FUN_001f9950(long *param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined1 uStack_21;
  
  FUN_001944f8(param_1,2,&uStack_21);
  param_1[0x10] = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = param_3;
  *param_1 = (long)&PTR_FUN_0483db00;
  if (DAT_04c5eb88 == '\0') {
    FUN_001a6ebc(param_3);
    lVar6 = nn::os::GetSystemTick();
    uVar7 = nn::os::GetSystemTickFrequency();
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = (ulong)(lVar6 * 1000000) / uVar7;
    }
    param_1[0xf] = uVar5;
  }
  *param_1 = (long)(PTR_DAT_04bcc9a0 + 0x10);
  FUN_001f8ec0(param_1 + 0x11);
  param_1[0x1c] = param_4;
  piVar1 = (int *)(param_4 + 8);
  iVar8 = *piVar1;
  if (iVar8 == *piVar1) {
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
    if (iVar2 == iVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar2;
  } while( true );
}

