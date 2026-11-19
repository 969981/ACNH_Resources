
void FUN_038fd0e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  
  if (*param_1 != -1) {
    lVar7 = *(long *)PTR_DAT_04bc1010;
    uVar6 = *param_1 - (uint)*(ushort *)(lVar7 + 0x3da);
    if (*(uint *)(lVar7 + 0x368) <= uVar6) {
      uVar6 = 0;
    }
    piVar2 = (int *)(*(long *)(lVar7 + 0x370) + (long)(int)uVar6 * 0x20);
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
      piVar1 = (int *)(lVar7 + 0x3e0);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      nn::os::LockMutex((MutexType *)(lVar7 + 0x348));
      piVar1 = (int *)(lVar7 + 0x378) + (ulong)*(byte *)(lVar7 + 0x3d8) * 4;
      if (1 < *(byte *)(lVar7 + 0x3d8)) {
        piVar1 = (int *)(lVar7 + 0x378);
      }
      if (*piVar1 < piVar1[1]) {
        *(int **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = piVar2;
        *piVar1 = *piVar1 + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x348));
    }
    param_1[2] = 0;
    *param_1 = -1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return;
}

