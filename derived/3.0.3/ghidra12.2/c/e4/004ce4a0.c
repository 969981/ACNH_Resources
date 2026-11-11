
void FUN_004ce4a0(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  uint *puVar6;
  ulong __n;
  long *plVar7;
  byte abStack_80 [64];
  
  uVar1 = param_2 + 7U & 0xfffffff8;
  uVar2 = uVar1 | 7;
  if (-1 < (int)(param_2 + 7U)) {
    uVar2 = uVar1;
  }
  puVar6 = (uint *)((long)param_3 + 0xc);
  __n = (ulong)(uint)((int)uVar2 >> 3);
  if ((int)(*puVar6 & 0x3fffffff) < (int)uVar1) {
    lVar4 = FUN_00426720(PTR_DAT_048607b8,uVar1,1,*param_3,(int)param_3[1],puVar6);
    *param_3 = lVar4;
  }
  if (*(uint *)(param_3 + 1) != uVar1) {
    *(uint *)(param_3 + 1) = uVar1;
  }
  plVar7 = *(long **)(param_1 + 8);
  if (plVar7[1] - *plVar7 < (long)__n) {
    FUN_0049e700(plVar7,abStack_80,__n);
  }
  else {
    memcpy(abStack_80,(void *)*plVar7,__n);
    *plVar7 = *plVar7 + __n;
  }
  if (7 < (int)uVar1) {
    lVar4 = 7;
    pbVar5 = abStack_80;
    do {
      bVar3 = *pbVar5;
      *(byte *)(*param_3 + lVar4 + -7) = bVar3 & 1;
      *(byte *)(*param_3 + lVar4 + -6) = bVar3 >> 1 & 1;
      *(byte *)(*param_3 + lVar4 + -5) = bVar3 >> 2 & 1;
      *(byte *)(*param_3 + lVar4 + -4) = bVar3 >> 3 & 1;
      *(byte *)(*param_3 + lVar4 + -3) = bVar3 >> 4 & 1;
      *(byte *)(*param_3 + lVar4 + -2) = bVar3 >> 5 & 1;
      *(byte *)(*param_3 + lVar4 + -1) = bVar3 >> 6 & 1;
      __n = __n - 1;
      *(byte *)(*param_3 + lVar4) = bVar3 >> 7;
      lVar4 = lVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (__n != 0);
  }
  if ((int)(*puVar6 & 0x3fffffff) < param_2) {
    lVar4 = FUN_00426720(PTR_DAT_048607b8,param_2,1,*param_3,(int)param_3[1],puVar6);
    *param_3 = lVar4;
  }
  if ((int)param_3[1] != param_2) {
    *(int *)(param_3 + 1) = param_2;
  }
  return;
}

