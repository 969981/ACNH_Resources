
void FUN_01f3dc10(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  if ((((*(uint *)((long)param_1 + 0xaf3c) & 1) != 0) &&
      ((*(byte *)((long)param_1 + 0xad5a) >> 1 & 1) == 0)) &&
     ((*(uint *)((long)param_1 + 0xaf3c) >> 0xe & 1) == 0)) {
    lVar2 = (**(code **)(*param_1 + 0x3a0))();
    if (((*(int *)(lVar2 + 0x168) == 0) && (*(int *)(lVar2 + 0x170) == 0)) &&
       (uVar3 = FUN_02194914(param_1 + 0x15e8), (uVar3 & 1) != 0)) {
      *(undefined4 *)(lVar2 + 0x170) = 1;
    }
    if ((*(uint *)((long)param_1 + 0xaf3c) >> 6 & 1) != 0) {
      plVar1 = (long *)0x0;
      if (*(int *)((long)param_1 + 0xe61c) != 3) {
        plVar1 = param_1 + 0x1cb7;
      }
      FUN_02063d90(lVar2,plVar1,(int)param_1[0x1cc5]);
    }
    *(int *)(lVar2 + 0x158) = *(int *)(lVar2 + 0x158) + 1;
    *(int *)(lVar2 + 0x160) = *(int *)(lVar2 + 0x160) + 1;
    if (*(int *)(lVar2 + 0x170) == 1) {
      *(int *)(lVar2 + 0x15c) = *(int *)(lVar2 + 0x15c) + 1;
    }
  }
  return;
}

