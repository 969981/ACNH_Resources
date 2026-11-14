
void FUN_014f5af0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x2c8) != param_1 + 0x2c0) {
    lVar3 = (long)*(int *)(param_1 + 0x2d4);
    lVar4 = *(long *)(param_1 + 0x2c8) - lVar3;
    do {
      if ((((*(int *)(lVar4 + 0x18) != 0) && (*(int *)(lVar4 + 0x98) != 0)) &&
          (plVar1 = (long *)FUN_014ba988(lVar4 + 0x90), plVar1 != (long *)0x0)) &&
         (uVar2 = (**(code **)(*plVar1 + 200))(), (uVar2 & 1) == 0)) {
        (**(code **)(*plVar1 + 0xc0))(plVar1);
      }
      lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
    } while (lVar4 != (param_1 + 0x2c0) - lVar3);
  }
  if (*(long *)(param_1 + 0x270) != param_1 + 0x268) {
    lVar3 = (long)*(int *)(param_1 + 0x27c);
    lVar4 = *(long *)(param_1 + 0x270) - lVar3;
    do {
      if (((*(int *)(lVar4 + 0x18) != 0) && (*(int *)(lVar4 + 0x98) != 0)) &&
         (plVar1 = (long *)FUN_014ba988(lVar4 + 0x90), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0xe0))();
      }
      lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
    } while (lVar4 != (param_1 + 0x268) - lVar3);
  }
  return;
}

