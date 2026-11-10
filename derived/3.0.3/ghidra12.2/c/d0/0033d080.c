
void FUN_0033d080(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1918));
  uVar4 = *(ulong *)(param_1 + 0xc40);
  if (0 < (int)uVar4) {
    uVar7 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0xc38) + uVar7 * 8);
      lVar5 = *(long *)(*(long *)(param_1 + 0x198) + (long)*(int *)(lVar6 + 0x38) * 8);
      if ((lVar5 != 0) && (*(char *)(lVar5 + 9) != '\0')) {
        piVar1 = (int *)(lVar5 + 0x528);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003216f8(lVar6);
      FUN_00343cec(param_1 + 0x238,lVar6);
      FUN_0033d150(param_1,lVar6);
      *(undefined8 *)(*(long *)(param_1 + 0xc38) + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 != (uVar4 & 0xffffffff));
  }
  *(undefined8 *)(param_1 + 0xc40) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1918));
  return;
}

