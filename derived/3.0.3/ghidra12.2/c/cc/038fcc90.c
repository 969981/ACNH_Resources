
bool FUN_038fcc90(long param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  
  uVar6 = *param_2 - (uint)*(ushort *)(param_1 + 0x3da);
  if (*(uint *)(param_1 + 0x368) <= uVar6) {
    uVar6 = 0;
  }
  piVar2 = (int *)(*(long *)(param_1 + 0x370) + (long)(int)uVar6 * 0x20);
  do {
    iVar3 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 1) {
    piVar1 = (int *)(param_1 + 0x3e0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    nn::os::LockMutex((MutexType *)(param_1 + 0x348));
    piVar1 = (int *)(param_1 + 0x378) + (ulong)*(byte *)(param_1 + 0x3d8) * 4;
    if (1 < *(byte *)(param_1 + 0x3d8)) {
      piVar1 = (int *)(param_1 + 0x378);
    }
    if (*piVar1 < piVar1[1]) {
      *(int **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = piVar2;
      *piVar1 = *piVar1 + 1;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x348));
  }
  return iVar3 == 1;
}

