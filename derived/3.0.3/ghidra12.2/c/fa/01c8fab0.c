
long FUN_01c8fab0(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  __dest = *(void **)(param_1 + 8);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(short *)(param_2[1] + lVar3 * 2) == 0) goto LAB_01c8fb4c;
      lVar1 = param_2[1] + lVar3 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar3 = lVar3 + 1;
        goto LAB_01c8fb4c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_01c8fb4c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01c8fb4c:
    uVar2 = (uint)lVar3;
    if (*(int *)(param_1 + 0x10) <= (int)(uint)lVar3) {
      uVar2 = *(int *)(param_1 + 0x10) - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  return param_1;
}

