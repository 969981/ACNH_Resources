
void FUN_03a6e940(long param_1)

{
  undefined8 *__dest;
  uint uVar1;
  int iVar2;
  long lVar3;
  size_t __n;
  ulong uVar4;
  long *plVar5;
  
  do {
    uVar1 = *(uint *)(param_1 + 0x146c);
    iVar2 = -uVar1;
    do {
      if (iVar2 + *(int *)(param_1 + 0x1468) < 1) goto LAB_03a6ea18;
      uVar4 = (ulong)(*(int *)(param_1 + 0x1458) - 1U & uVar1);
      lVar3 = *(long *)(*(long *)(param_1 + 0x1460) + uVar4 * 8);
      if (lVar3 == 0) goto LAB_03a6ea18;
      *(undefined8 *)(*(long *)(param_1 + 0x1460) + uVar4 * 8) = 0;
      uVar1 = uVar1 + 1;
      DataMemoryBarrier(2,3);
      iVar2 = iVar2 + -1;
      *(uint *)(param_1 + 0x146c) = uVar1;
    } while (lVar3 == -1);
    iVar2 = *(int *)(param_1 + 0x1078);
    if (iVar2 == *(int *)(param_1 + 0x1098)) {
      uVar1 = *(uint *)(lVar3 + 0x58);
      nn::os::LockMutex((MutexType *)(param_1 + 0x14a8));
      if (*(uint *)(param_1 + 0x1088) <= uVar1) {
        uVar1 = 0;
      }
      uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      *(int *)(*(long *)(param_1 + 0x1090) + uVar4) =
           *(int *)(*(long *)(param_1 + 0x1090) + uVar4) + -1;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x14a8));
    }
    else if (iVar2 < *(int *)(param_1 + 0x107c)) {
      *(long *)(*(long *)(param_1 + 0x1080) + (long)iVar2 * 8) = lVar3;
      *(int *)(param_1 + 0x1078) = *(int *)(param_1 + 0x1078) + 1;
    }
  } while( true );
LAB_03a6ea18:
  do {
    uVar1 = *(uint *)(param_1 + 0x1484);
    iVar2 = -uVar1;
    do {
      if (iVar2 + *(int *)(param_1 + 0x1480) < 1) {
        return;
      }
      uVar4 = (ulong)(*(int *)(param_1 + 0x1470) - 1U & uVar1);
      plVar5 = *(long **)(*(long *)(param_1 + 0x1478) + uVar4 * 8);
      if (plVar5 == (long *)0x0) {
        return;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1478) + uVar4 * 8) = 0;
      uVar1 = uVar1 + 1;
      DataMemoryBarrier(2,3);
      iVar2 = iVar2 + -1;
      *(uint *)(param_1 + 0x1484) = uVar1;
    } while (plVar5 == (long *)0xffffffffffffffff);
    uVar1 = *(uint *)(param_1 + 0x1078);
  } while ((int)uVar1 < 1);
  __dest = *(undefined8 **)(param_1 + 0x1080);
  lVar3 = 0;
  __n = (long)(int)uVar1 * 8;
  do {
    __n = __n - 8;
    if ((long *)*__dest == plVar5) {
      iVar2 = (int)lVar3;
      if (iVar2 != 1) {
        if ((-1 < -iVar2) && (-iVar2 < (int)uVar1)) {
          if (1 - iVar2 < (int)uVar1) {
            memmove(__dest,__dest + 1,__n);
            uVar1 = *(uint *)(param_1 + 0x1078);
          }
          *(uint *)(param_1 + 0x1078) = uVar1 - 1;
        }
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      break;
    }
    lVar3 = lVar3 + -1;
    __dest = __dest + 1;
  } while ((ulong)uVar1 + lVar3 != 0);
  goto LAB_03a6ea18;
}

