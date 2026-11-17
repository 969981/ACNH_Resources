
void FUN_02e449d0(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  void *__dest;
  void *__src;
  byte local_34 [4];
  
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
  **(undefined2 **)(param_1 + 0x2c0) = 0;
  if (*(int *)(param_1 + 0x310) == 0) {
    local_34[0] = *(byte *)(param_1 + 0x70);
    if (local_34[0] < 8) {
      uVar3 = FUN_02658470(local_34);
      if ((uVar3 & 1) != 0) {
        __dest = *(void **)(param_1 + 0x2c0);
        (**(code **)(*param_2 + 0x18))(param_2);
        __src = (void *)param_2[1];
        if (__dest != __src) {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar4 = 0;
          do {
            if (*(short *)(param_2[1] + lVar4 * 2) == 0) goto LAB_02e44aa0;
            lVar1 = param_2[1] + lVar4 * 2;
            if (*(short *)(lVar1 + 2) == 0) {
              lVar4 = lVar4 + 1;
              goto LAB_02e44aa0;
            }
            if (*(short *)(lVar1 + 4) == 0) {
              lVar4 = lVar4 + 2;
              goto LAB_02e44aa0;
            }
            lVar4 = lVar4 + 3;
          } while (lVar4 != 0x80001);
          lVar4 = 0;
LAB_02e44aa0:
          uVar2 = (uint)lVar4;
          if (*(int *)(param_1 + 0x2c8) <= (int)(uint)lVar4) {
            uVar2 = *(int *)(param_1 + 0x2c8) - 1;
          }
          uVar3 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
          memcpy(__dest,__src,uVar3);
          *(undefined2 *)((long)__dest + uVar3) = 0;
        }
        FUN_03ebb160(param_1 + 8,0xe);
      }
    }
  }
  return;
}

