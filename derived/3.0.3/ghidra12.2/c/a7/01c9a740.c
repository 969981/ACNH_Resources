
void FUN_01c9a740(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  void *__dest;
  void *__src;
  ulong __n;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb21d0;
  __dest = *(void **)(lVar5 + 0x130);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(short *)(param_2[1] + lVar4 * 2) == 0) goto LAB_01c9a7ec;
      lVar1 = param_2[1] + lVar4 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar4 = lVar4 + 1;
        goto LAB_01c9a7ec;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar4 = lVar4 + 2;
        goto LAB_01c9a7ec;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01c9a7ec:
    iVar3 = *(int *)(lVar5 + 0x138);
    uVar2 = (uint)lVar4;
    if (iVar3 <= (int)(uint)lVar4) {
      uVar2 = iVar3 - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x20) <= param_3) {
    uVar2 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar2 * 0x38 + 0x2c) = 0;
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x20) <= param_3) {
    uVar2 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar2 * 0x38 + 0x2d) = 0;
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x20) <= param_3) {
    uVar2 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar2 * 0x38) = 0x12;
  if (*(uint *)(param_1 + 0x20) <= param_3) {
    param_3 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x28) + (long)(int)param_3 * 0x38 + 0x2f) = 0;
  return;
}

