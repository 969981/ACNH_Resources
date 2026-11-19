
void FUN_03be6fe8(long param_1,undefined4 param_2)

{
  long *plVar1;
  
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
  if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x58) == 0)) {
    return;
  }
  plVar1 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x28) + 0x30) + 0x18) +
                               0x20))();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
  (**(code **)(*plVar1 + 0x10))();
  (**(code **)(**(long **)(param_1 + 0x58) + 0x38))(*(long **)(param_1 + 0x58),param_2);
                    /* WARNING: Could not recover jumptable at 0x03be7078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}

