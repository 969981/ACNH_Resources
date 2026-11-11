
int * FUN_004dcbb0(long *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = (ulong)*param_2 & 0x7fffffff;
  lVar4 = param_1[2];
  uVar5 = *(uint *)(param_1 + 3) & uVar3;
  uVar2 = *(uint *)(lVar4 + uVar5 * 8 + 4);
  if (-1 < (int)uVar2) {
    do {
      piVar1 = (int *)(lVar4 + uVar5 * 8);
      if ((*piVar1 == (int)uVar3) &&
         (*(uint *)(*param_1 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3))
          == *param_2)) {
        return piVar1;
      }
      uVar5 = ((long)(uVar5 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
      uVar2 = *(uint *)(lVar4 + uVar5 * 8 + 4);
    } while (-1 < (int)uVar2);
  }
  return (int *)0x0;
}

