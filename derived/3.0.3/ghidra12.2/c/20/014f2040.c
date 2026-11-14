
void FUN_014f2040(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    if ((*(int *)(param_1 + 0x38) == 1) && (0 < (int)*(uint *)(param_1 + 0x108))) {
      plVar2 = *(long **)(param_1 + 0x110);
      lVar3 = (ulong)*(uint *)(param_1 + 0x108) << 3;
      do {
        plVar1 = (long *)FUN_014e7558(param_1,*(undefined4 *)(*plVar2 + 0x14));
        param_1 = 0;
        if (plVar1 != (long *)0x0) {
          param_1 = (**(code **)(*plVar1 + 0x3b0))();
        }
        plVar2 = plVar2 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    else if ((*(int *)(param_1 + 0xb8) != 0) && (0 < (int)*(uint *)(param_1 + 0x108))) {
      plVar2 = *(long **)(param_1 + 0x110);
      lVar3 = (ulong)*(uint *)(param_1 + 0x108) << 3;
      do {
        plVar1 = (long *)FUN_014e7558(param_1,*(undefined4 *)(*plVar2 + 0x14));
        param_1 = 0;
        if (plVar1 != (long *)0x0) {
          param_1 = (**(code **)(*plVar1 + 0x3b0))();
        }
        plVar2 = plVar2 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  return;
}

