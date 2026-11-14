
void FUN_015efc70(long param_1,long *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  MutexType *pMVar5;
  uint uVar6;
  ulong uVar7;
  size_t sVar8;
  long lVar9;
  int *piVar10;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if ((((param_2[4] != 0) && (param_2[5] != 0)) && ((short)param_2[6] != -1)) &&
     (*(short *)((long)param_2 + 0x32) != -1)) {
    puVar1 = (uint *)(&LAB_007a6498 + param_1);
    nn::os::LockMutex((MutexType *)(param_1 + 0x7a6478));
    uVar6 = *puVar1;
    if (0 < (int)uVar6) {
      puVar3 = *(undefined8 **)(&LAB_007a64a0 + param_1);
      uVar7 = 0;
      sVar8 = (long)(int)uVar6 * 8;
      do {
        sVar8 = sVar8 - 8;
        if ((long *)*puVar3 == param_2) {
          iVar2 = (int)uVar7;
          if ((-1 < iVar2) && (iVar2 < (int)uVar6)) {
            if (iVar2 + 1 < (int)uVar6) {
              memmove(puVar3,puVar3 + 1,sVar8);
              uVar6 = *puVar1;
            }
            *puVar1 = uVar6 - 1;
          }
          break;
        }
        uVar7 = uVar7 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar6 != uVar7);
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a6478));
  }
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 7) = 0x30;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  plVar4 = (long *)(**(code **)(*(long *)(param_2[2] + 0x2e8) + 0xf0))(param_2[2] + 0x2e8);
  (**(code **)(*plVar4 + 0x10))(plVar4,PTR_PTR_04bb2238);
  iVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  if (iVar2 == 2) {
    piVar10 = (int *)(&LAB_007a43f8 + param_1);
    puVar1 = (uint *)(&LAB_007a2358 + param_1);
    if (((*PTR_DAT_04bbd868 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbd868), iVar2 != 0)) {
      *(undefined ***)PTR_DAT_04bbd860 = &PTR_LAB_049b15b8;
      __cxa_guard_release(PTR_DAT_04bbd868);
    }
    uVar7 = (**(code **)*param_2)(param_2,PTR_DAT_04bbd860);
    if ((uVar7 & 1) == 0) {
      param_2 = (long *)0x0;
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x7a2338));
    uVar6 = *puVar1;
    if (0 < (int)uVar6) {
      puVar3 = *(undefined8 **)(&LAB_007a2360 + param_1);
      uVar7 = 0;
      sVar8 = (long)(int)uVar6 * 8;
      do {
        sVar8 = sVar8 - 8;
        if ((long *)*puVar3 == param_2) {
          iVar2 = (int)uVar7;
          if ((-1 < iVar2) && (iVar2 < (int)uVar6)) {
            if (iVar2 + 1 < (int)uVar6) {
              memmove(puVar3,puVar3 + 1,sVar8);
              uVar6 = *puVar1;
            }
            *puVar1 = uVar6 - 1;
          }
          break;
        }
        uVar7 = uVar7 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar6 != uVar7);
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a2338));
    lVar9 = param_1 + 0x7a43b8;
    pMVar5 = (MutexType *)(param_1 + 0x7a43d8);
  }
  else {
    if (iVar2 != 1) {
      return;
    }
    piVar10 = (int *)(param_1 + 0x7a33a8);
    puVar1 = (uint *)(&LAB_007a1308 + param_1);
    if (((*PTR_DAT_04bbd890 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbd890), iVar2 != 0)) {
      *(undefined ***)PTR_DAT_04bbd888 = &PTR_LAB_049b15b8;
      __cxa_guard_release(PTR_DAT_04bbd890);
    }
    uVar7 = (**(code **)*param_2)(param_2,PTR_DAT_04bbd888);
    if ((uVar7 & 1) == 0) {
      param_2 = (long *)0x0;
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x7a12e8));
    uVar6 = *puVar1;
    if (0 < (int)uVar6) {
      puVar3 = *(undefined8 **)(&LAB_007a1310 + param_1);
      uVar7 = 0;
      sVar8 = (long)(int)uVar6 * 8;
      do {
        sVar8 = sVar8 - 8;
        if ((long *)*puVar3 == param_2) {
          iVar2 = (int)uVar7;
          if ((-1 < iVar2) && (iVar2 < (int)uVar6)) {
            if (iVar2 + 1 < (int)uVar6) {
              memmove(puVar3,puVar3 + 1,sVar8);
              uVar6 = *puVar1;
            }
            *puVar1 = uVar6 - 1;
          }
          break;
        }
        uVar7 = uVar7 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar6 != uVar7);
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a12e8));
    lVar9 = param_1 + 0x7a3368;
    pMVar5 = (MutexType *)(param_1 + 0x7a3388);
  }
  nn::os::LockMutex(pMVar5);
  if (*piVar10 < piVar10[1]) {
    *(long **)(*(long *)(piVar10 + 2) + (long)*piVar10 * 8) = param_2;
    *piVar10 = *piVar10 + 1;
  }
  nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
  return;
}

