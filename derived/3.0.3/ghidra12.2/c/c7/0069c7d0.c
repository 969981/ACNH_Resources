
void FUN_0069c7d0(long *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  size_t __n;
  void *__src;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(param_1 + 2);
  if (0 < (int)uVar6) {
    __src = (void *)*param_1;
    lVar5 = *param_2;
    iVar7 = 0;
    __n = 0;
    do {
      if ((*(long *)((long)__src + __n) == lVar5) &&
         (iVar3 = memcmp((void *)((long)__src + __n + 8),param_2 + 1,0x48), iVar3 == 0)) {
        if (iVar7 != 1) {
          if (0 < -iVar7) {
            memmove((void *)((long)__src + 0x58),__src,__n);
          }
          goto LAB_0069c8b4;
        }
        break;
      }
      __n = __n + 0x58;
      iVar7 = iVar7 + -1;
    } while ((ulong)uVar6 * 0x58 != __n);
  }
  if (param_1[1] == (long)(int)uVar6) {
    *(uint *)(param_1 + 2) = uVar6 - 1;
    uVar6 = uVar6 - 1;
  }
  if (0 < (int)uVar6) {
    memmove((void *)(*param_1 + 0x58),(void *)*param_1,(ulong)uVar6 * 0x58);
    uVar6 = *(uint *)(param_1 + 2);
  }
  *(uint *)(param_1 + 2) = uVar6 + 1;
LAB_0069c8b4:
  plVar4 = (long *)*param_1;
  lVar5 = param_2[1];
  *plVar4 = *param_2;
  plVar4[1] = lVar5;
  lVar5 = param_2[2];
  lVar1 = param_2[3];
  lVar2 = param_2[5];
  plVar4[4] = param_2[4];
  plVar4[5] = lVar2;
  plVar4[2] = lVar5;
  plVar4[3] = lVar1;
  lVar5 = param_2[6];
  lVar1 = param_2[7];
  lVar2 = param_2[9];
  plVar4[8] = param_2[8];
  plVar4[9] = lVar2;
  plVar4[6] = lVar5;
  plVar4[7] = lVar1;
  *(undefined4 *)(*param_1 + 0x50) = param_3;
  return;
}

