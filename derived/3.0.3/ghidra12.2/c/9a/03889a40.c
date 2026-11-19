
void FUN_03889a40(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong __n;
  void *__dest;
  void *__src;
  long *plVar7;
  long *plVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x218));
  if (*(int *)(param_1 + 0x170) < *(int *)(param_1 + 0x188)) {
    plVar8 = *(long **)(param_1 + 0x178);
    plVar7 = (long *)(param_1 + 0x160);
    if (plVar8 != (long *)0x0) {
      *(long *)(param_1 + 0x178) = *plVar8;
    }
    *(undefined2 *)(plVar8 + 2) = 0;
    plVar8[3] = -0xfffffff3;
    *(undefined2 *)((long)plVar8 + 0x3c) = 0;
    puVar4 = PTR_DAT_04bcb850;
    *(undefined2 *)(plVar8 + 4) = 0;
    *plVar8 = (long)(puVar4 + 0x10);
    plVar8[1] = 0;
    *(undefined4 *)(plVar8 + 7) = 0x15;
    puVar4 = PTR_DAT_04bc13e0;
    *(undefined2 *)((long)plVar8 + 100) = 0;
    plVar8[0xe] = 0;
    plVar5 = plVar8 + 0xd;
    *plVar5 = 0;
    plVar8[5] = (long)(puVar4 + 0x10);
    plVar8[6] = (long)plVar8 + 0x3c;
    lVar6 = *plVar7;
    *plVar7 = (long)plVar5;
    plVar8[0xe] = (long)plVar7;
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
    }
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
  }
  else {
    plVar8 = (long *)0x0;
  }
  lVar6 = *(long *)(param_2 + 8);
  *(undefined2 *)(plVar8 + 2) = *(undefined2 *)(param_2 + 0x10);
  plVar8[1] = lVar6;
  __dest = (void *)plVar8[6];
  *(undefined4 *)(plVar8 + 3) = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)(plVar8 + 4) = *(undefined2 *)(param_2 + 0x20);
  *(undefined4 *)((long)plVar8 + 0x1c) = uVar3;
  plVar7 = (long *)(param_2 + 0x28);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  __src = *(void **)(param_2 + 0x30);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(plVar7);
    lVar6 = 0;
    do {
      if (*(short *)(*(long *)(param_2 + 0x30) + lVar6 * 2) == 0) goto LAB_03889bbc;
      lVar1 = *(long *)(param_2 + 0x30) + lVar6 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar6 = lVar6 + 1;
        goto LAB_03889bbc;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar6 = lVar6 + 2;
        goto LAB_03889bbc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03889bbc:
    uVar2 = (uint)lVar6;
    if ((int)plVar8[7] <= (int)(uint)lVar6) {
      uVar2 = (int)plVar8[7] - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x218));
  return;
}

