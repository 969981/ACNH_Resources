
void FUN_003ce530(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if ((int)param_2 <= (int)*(uint *)(param_1 + 0x44)) {
    uVar1 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == param_1) goto LAB_003ce584;
  while( true ) {
    iVar3 = 0;
    do {
      lVar2 = *(long *)(lVar2 + 8);
      iVar3 = iVar3 + 1;
    } while (lVar2 != param_1);
    if (iVar3 <= *(int *)(param_1 + 0x40)) break;
    while( true ) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + -0x1f0) + 0x20))();
      lVar2 = *(long *)(param_1 + 8);
      if (lVar2 != param_1) break;
LAB_003ce584:
      if (-1 < *(int *)(param_1 + 0x40)) {
        return;
      }
    }
  }
  return;
}

