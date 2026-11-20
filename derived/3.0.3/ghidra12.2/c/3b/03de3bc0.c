
void FUN_03de3bc0(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  __dest = *(void **)(param_2 + 8);
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(short *)(param_3[1] + lVar3 * 2) == 0) goto LAB_03de3c5c;
      lVar1 = param_3[1] + lVar3 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar3 = lVar3 + 1;
        goto LAB_03de3c5c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_03de3c5c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_03de3c5c:
    uVar2 = (uint)lVar3;
    if (*(int *)(param_2 + 0x10) <= (int)(uint)lVar3) {
      uVar2 = *(int *)(param_2 + 0x10) - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  return;
}

