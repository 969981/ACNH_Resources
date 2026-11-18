
void FUN_032e7b30(undefined4 *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
  __dest = *(void **)(param_1 + 0x1de);
  (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
  __src = *(void **)(param_1 + 0x1a8);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    lVar3 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar3 * 2) == 0) goto LAB_032e7bdc;
      lVar1 = *(long *)(param_1 + 0x1a8) + lVar3 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar3 = lVar3 + 1;
        goto LAB_032e7bdc;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_032e7bdc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_032e7bdc:
    uVar2 = (uint)lVar3;
    if ((int)param_1[0x1e0] <= (int)(uint)lVar3) {
      uVar2 = param_1[0x1e0] - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  param_1[1] = *param_1;
  FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
  param_1[0x185] = param_1[0x183];
  param_1[0x186] = param_1[0x184];
  return;
}

