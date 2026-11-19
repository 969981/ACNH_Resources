
bool FUN_03b519f0(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  MutexType *pMVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_2 != 0) {
    lVar3 = *(long *)(*param_1 + 400);
    pMVar5 = *(MutexType **)(lVar3 + 0x40270);
    nn::os::LockMutex(pMVar5);
    piVar4 = *(int **)(lVar3 + 0x40250);
    if (*piVar4 < piVar4[1]) {
      *(long *)(*(long *)(piVar4 + 2) + (long)*piVar4 * 8) = param_2;
      *piVar4 = *piVar4 + 1;
    }
    nn::os::UnlockMutex(pMVar5);
    puVar7 = *(undefined8 **)(*param_1 + 0x1b8);
    if (puVar7 != (undefined8 *)0x0) {
      nn::os::LockMutex((MutexType *)(puVar7 + 6));
      if (*(int *)(puVar7 + 10) != 0) {
        puVar8 = (undefined8 *)puVar7[0xb];
        lVar3 = (long)*(int *)(puVar7 + 10) << 3;
        do {
          plVar6 = (long *)*puVar8;
          uVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
          if (((uVar2 & 1) != 0) &&
             (uVar1 = (**(code **)(*plVar6 + 0x50))(plVar6), (uVar1 >> 3 & 1) != 0)) {
            (**(code **)(*plVar6 + 0x28))(plVar6,param_2,*puVar7);
          }
          puVar8 = puVar8 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
      nn::os::UnlockMutex((MutexType *)(puVar7 + 6));
    }
  }
  return param_2 != 0;
}

