
int FUN_0049e150(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong __n;
  long *plVar6;
  
  if ((int)param_2 < 0x101) {
    param_2 = 0x100;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 0x28);
  iVar1 = param_2 + iVar2 + 1;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar1) {
    lVar3 = FUN_00426720(PTR_DAT_048607b8,iVar1,1,lVar5,iVar2);
    *(long *)(param_1 + 0x28) = lVar3;
  }
  else {
    lVar3 = lVar5;
  }
  plVar6 = *(long **)(param_1 + 0x38);
  *(int *)(param_1 + 0x30) = iVar1;
  __n = (ulong)param_2;
  if (plVar6[1] - *plVar6 < (long)__n) {
    param_2 = FUN_0049e700(plVar6,(void *)(lVar3 + iVar2),__n);
  }
  else {
    memcpy((void *)(lVar3 + iVar2),(void *)*plVar6,__n);
    *plVar6 = *plVar6 + __n;
  }
  iVar1 = iVar2 + param_2;
  *(undefined1 *)(*(long *)(param_1 + 0x28) + (long)iVar1) = 0;
  iVar4 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != iVar1) {
    *(int *)(param_1 + 0x30) = iVar1;
    iVar4 = iVar1;
  }
  if (*(long *)(param_1 + 0x28) != lVar5) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x28) + (*(long *)(param_1 + 0x20) - lVar5);
  }
  return iVar4 - iVar2;
}

