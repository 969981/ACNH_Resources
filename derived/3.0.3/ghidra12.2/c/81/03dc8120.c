
void FUN_03dc8120(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong __n;
  void *__dest;
  void *__src;
  undefined1 auStack_50 [24];
  long *local_38;
  
  if (((DAT_05af91f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af91f0), iVar3 != 0)) {
    DAT_05af9190 = &PTR_FUN_04b94ef8;
    DAT_05af9168 = &PTR_LAB_04b94ea0;
    DAT_05af9170 = &PTR_FUN_04b94ed0;
    DAT_05af91b0 = &PTR_FUN_04b94f20;
    DAT_05af91d0 = &PTR_FUN_04b94f48;
    __cxa_guard_release(&DAT_05af91f0);
  }
  plVar4 = (long *)(*(code *)*DAT_05af91d0)(&DAT_05af91d0,auStack_50);
  __dest = *(void **)(param_2 + 8);
  local_38 = plVar4;
  (**(code **)(*plVar4 + 0x18))();
  __src = (void *)plVar4[1];
  if (__dest != __src) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar5 = 0;
    do {
      if (*(short *)(plVar4[1] + lVar5 * 2) == 0) goto LAB_03dc81e0;
      lVar1 = plVar4[1] + lVar5 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar5 = lVar5 + 1;
        goto LAB_03dc81e0;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar5 = lVar5 + 2;
        goto LAB_03dc81e0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03dc81e0:
    uVar2 = (uint)lVar5;
    if (*(int *)(param_2 + 0x10) <= (int)(uint)lVar5) {
      uVar2 = *(int *)(param_2 + 0x10) - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  (**(code **)*local_38)();
  return;
}

