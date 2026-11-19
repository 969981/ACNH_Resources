
void FUN_03b5e290(long param_1,long param_2,long *param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(int *)*param_3 != 0) {
    pMVar1 = (MutexType *)(param_1 + 0x40290);
    nn::os::LockMutex(pMVar1);
    uVar5 = *(uint *)(param_1 + 0x401a4);
    iVar7 = -uVar5;
    do {
      if (iVar7 + *(int *)(param_1 + 0x401a0) < 1) {
LAB_03b5e390:
        nn::os::UnlockMutex(pMVar1);
        return;
      }
      uVar9 = (ulong)(*(int *)(param_1 + 0x40190) - 1U & uVar5);
      lVar10 = *(long *)(*(long *)(param_1 + 0x40198) + uVar9 * 8);
      if (lVar10 == 0) goto LAB_03b5e390;
      *(undefined8 *)(*(long *)(param_1 + 0x40198) + uVar9 * 8) = 0;
      uVar5 = uVar5 + 1;
      DataMemoryBarrier(2,3);
      iVar7 = iVar7 + -1;
      *(uint *)(param_1 + 0x401a4) = uVar5;
    } while (lVar10 == -1);
    nn::os::UnlockMutex(pMVar1);
    lVar6 = *param_3;
    if (lVar6 != 0) {
      puVar8 = (uint *)(param_2 + 0x18);
      uVar5 = *puVar8;
      if ((int)(*puVar8 - *(int *)(param_2 + 0x1c)) < *(int *)(param_2 + 8)) {
        do {
          while (uVar2 = *puVar8, uVar5 == uVar2) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar4) {
              *puVar8 = uVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              DataMemoryBarrier(2,3);
              *(long *)(*(long *)(param_2 + 0x10) + (ulong)(*(int *)(param_2 + 8) - 1U & uVar5) * 8)
                   = lVar6;
              goto LAB_03b5e3c0;
            }
          }
          uVar5 = uVar2;
        } while ((int)(uVar2 - *(int *)(param_2 + 0x1c)) < *(int *)(param_2 + 8));
      }
    }
LAB_03b5e3c0:
    *param_3 = lVar10;
  }
  return;
}

