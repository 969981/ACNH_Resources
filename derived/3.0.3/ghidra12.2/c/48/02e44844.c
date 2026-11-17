
void FUN_02e44844(long param_1,uint param_2,uint param_3,long *param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  void *__dest;
  void *__src;
  byte local_38 [4];
  uint local_34;
  
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
  **(undefined2 **)(param_1 + 0x2c0) = 0;
  if (*(int *)(param_1 + 0x310) == 0) {
    local_38[0] = *(byte *)(param_1 + 0x70);
    if (local_38[0] < 8) {
      uVar5 = FUN_02658470(local_38);
      if (((uVar5 & 1) != 0) && ((int)param_2 < 6)) {
        puVar1 = (uint *)(param_1 + 0xd0);
        puVar4 = puVar1 + (ulong)param_2 * 4;
        if (5 < param_2) {
          puVar4 = puVar1;
        }
        if ((int)param_3 < (int)*puVar4) {
          puVar4 = puVar1 + (ulong)param_2 * 4;
          if (5 < param_2) {
            puVar4 = puVar1;
          }
          if (param_3 < *puVar4) {
            if (*(long *)(*(long *)(puVar4 + 2) + (long)(int)param_3 * 8) != 0) {
              local_34 = param_2;
              FUN_02e46b3c(param_1 + 0x138);
              __dest = *(void **)(param_1 + 0x2c0);
              (**(code **)(*param_4 + 0x18))(param_4);
              __src = (void *)param_4[1];
              if (__dest != __src) {
                (**(code **)(*param_4 + 0x18))(param_4);
                lVar6 = 0;
                do {
                  if (*(short *)(param_4[1] + lVar6 * 2) == 0) goto LAB_02e4497c;
                  lVar2 = param_4[1] + lVar6 * 2;
                  if (*(short *)(lVar2 + 2) == 0) {
                    lVar6 = lVar6 + 1;
                    goto LAB_02e4497c;
                  }
                  if (*(short *)(lVar2 + 4) == 0) {
                    lVar6 = lVar6 + 2;
                    goto LAB_02e4497c;
                  }
                  lVar6 = lVar6 + 3;
                } while (lVar6 != 0x80001);
                lVar6 = 0;
LAB_02e4497c:
                uVar3 = (uint)lVar6;
                if (*(int *)(param_1 + 0x2c8) <= (int)(uint)lVar6) {
                  uVar3 = *(int *)(param_1 + 0x2c8) - 1;
                }
                uVar5 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
                memcpy(__dest,__src,uVar5);
                *(undefined2 *)((long)__dest + uVar5) = 0;
              }
              FUN_03ebb160(param_1 + 8,0xd);
            }
          }
        }
      }
    }
  }
  return;
}

