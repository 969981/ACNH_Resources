
uint FUN_003b57e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = FUN_03b38a74();
  nn::os::LockMutex((MutexType *)(lVar5 + 0x960));
  uVar4 = nn::audio::RequestUpdateAudioRenderer
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
  plVar1 = (long *)(param_1 + 200);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar4 != 0) {
    if ((uVar4 & 0x3fffff) == 0x5499) {
      if (*(char *)(param_1 + 0x957) != '\0') goto LAB_003b586c;
      uVar4 = 0;
    }
    else if ((uVar4 & 0x3fffff) == 0x5299) {
LAB_003b586c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
  }
  lVar5 = FUN_03b38a74();
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x960));
  return uVar4;
}

