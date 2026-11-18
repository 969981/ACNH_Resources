
ulong FUN_032e8f60(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  void *__dest;
  void *__src;
  ulong uVar3;
  ulong __n;
  
  uVar3 = param_3 & 0xffffffff;
  __dest = *(void **)(param_1 + 8);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest == __src) {
    uVar3 = 0;
  }
  else {
    if ((int)param_3 < 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar3 = 0;
      do {
        if (*(short *)(param_2[1] + uVar3 * 2) == 0) goto LAB_032e8fa4;
        lVar1 = param_2[1] + uVar3 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          uVar3 = uVar3 + 1;
          goto LAB_032e8fa4;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          uVar3 = uVar3 + 2;
          goto LAB_032e8fa4;
        }
        uVar3 = uVar3 + 3;
      } while (uVar3 != 0x80001);
      uVar3 = 0;
    }
LAB_032e8fa4:
    uVar2 = (uint)uVar3;
    if (*(int *)(param_1 + 0x10) <= (int)(uint)uVar3) {
      uVar2 = *(int *)(param_1 + 0x10) - 1;
    }
    uVar3 = (ulong)uVar2;
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | uVar3 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  return uVar3;
}

