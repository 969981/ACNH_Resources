
void FUN_0049f780(long *param_1)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  uint local_18 [2];
  
  lVar5 = (long)(int)param_1[1] + -1;
  uVar1 = *(uint *)(*param_1 + lVar5 * 4);
  *(int *)(param_1 + 1) = (int)lVar5;
  piVar4 = (int *)param_1[10];
  uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff003f) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar3 = ((*piVar4 - (int)*(long *)(piVar4 + 4)) + (int)*(long *)(piVar4 + 8)) - uVar2;
  uVar1 = (uVar3 & 0xff00ff00 | (uVar1 & 0xc0) << 0x18) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  lVar5 = (ulong)uVar2 - *(long *)(piVar4 + 8);
  if ((lVar5 < 0) ||
     (__dest = (void *)(lVar5 + *(long *)(piVar4 + 4)), *(ulong *)(piVar4 + 2) < (long)__dest + 4U))
  {
    FUN_00446310(piVar4,(ulong)uVar2,local_18,4);
    return;
  }
  memcpy(__dest,local_18,4);
  return;
}

