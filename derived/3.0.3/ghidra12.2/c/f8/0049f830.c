
void FUN_0049f830(long *param_1,undefined4 param_2,void *param_3,int param_4)

{
  ulong uVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  ulong *puVar7;
  uint local_38 [2];
  
  FUN_0049f670(param_1,1,param_2);
  puVar7 = (ulong *)param_1[10];
  uVar1 = (long)*puVar7 + (long)param_4;
  if (puVar7[1] < uVar1) {
    FUN_004462a0(puVar7,param_3);
  }
  else {
    memcpy((void *)*puVar7,param_3,(long)param_4);
    *puVar7 = uVar1;
  }
  lVar6 = (long)(int)param_1[1] + -1;
  uVar2 = *(uint *)(*param_1 + lVar6 * 4);
  piVar5 = (int *)param_1[10];
  *(int *)(param_1 + 1) = (int)lVar6;
  uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff003f) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar4 = ((*piVar5 - (int)*(long *)(piVar5 + 4)) + (int)*(long *)(piVar5 + 8)) - uVar3;
  uVar2 = (uVar4 & 0xff00ff00 | (uVar2 & 0xc0) << 0x18) >> 8 | (uVar4 & 0xff00ff) << 8;
  local_38[0] = uVar2 >> 0x10 | uVar2 << 0x10;
  lVar6 = (ulong)uVar3 - *(long *)(piVar5 + 8);
  if ((lVar6 < 0) ||
     (__dest = (void *)(lVar6 + *(long *)(piVar5 + 4)), *(ulong *)(piVar5 + 2) < (long)__dest + 4U))
  {
    FUN_00446310(piVar5,(ulong)uVar3,local_38,4);
  }
  else {
    memcpy(__dest,local_38,4);
  }
  return;
}

