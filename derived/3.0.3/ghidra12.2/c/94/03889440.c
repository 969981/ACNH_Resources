
void FUN_03889440(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong __n;
  void *__dest;
  void *__src;
  long *plVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x218));
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0x1a0) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x198) = uVar4;
  __dest = *(void **)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  plVar6 = (long *)(param_2 + 0x28);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  __src = *(void **)(param_2 + 0x30);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(plVar6);
    lVar5 = 0;
    do {
      if (*(short *)(*(long *)(param_2 + 0x30) + lVar5 * 2) == 0) goto LAB_03889510;
      lVar1 = *(long *)(param_2 + 0x30) + lVar5 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar5 = lVar5 + 1;
        goto LAB_03889510;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar5 = lVar5 + 2;
        goto LAB_03889510;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03889510:
    uVar2 = (uint)lVar5;
    if (*(int *)(param_1 + 0x1c8) <= (int)(uint)lVar5) {
      uVar2 = *(int *)(param_1 + 0x1c8) - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x218));
  return;
}

