
void FUN_038fe2f0(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x40) = 0;
  lVar7 = DAT_05ae78f0;
  if (*(long *)(param_1 + 0x90) != -1) {
    uVar6 = (int)*(long *)(param_1 + 0x90) - (uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
    if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar6) {
      uVar6 = 0;
    }
    piVar2 = (int *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar6 * 0x20);
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
    uVar8 = *(undefined8 *)(DAT_05ae78f0 + 0x30);
    FUN_0034f7c4(*(undefined8 *)(param_1 + 0x80),uVar8);
    FUN_0034f968(*(undefined8 *)(param_1 + 0x88),uVar8);
  }
  *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
  return;
}

