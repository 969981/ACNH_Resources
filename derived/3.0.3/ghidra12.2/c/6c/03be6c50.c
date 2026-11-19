
void FUN_03be6c50(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x30;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  plVar1 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x28) + 0x30) + 0x18) +
                               0x20))();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
  (**(code **)(*plVar1 + 0x10))();
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x40))();
  }
  if (*(long *)(param_1 + 0x80) != param_1 + 0x78) {
    lVar3 = (long)*(int *)(param_1 + 0x8c);
    plVar2 = (long *)(*(long *)(param_1 + 0x80) - lVar3);
    do {
      (**(code **)(*plVar2 + 0x28))(plVar2);
      plVar2 = (long *)(*(long *)((long)plVar2 + lVar3 + 8) - lVar3);
    } while (plVar2 != (long *)((param_1 + 0x78) - lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x03be6d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}

