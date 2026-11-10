
void FUN_002c18f8(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_002c3694(*(long *)(param_1 + 0x90),param_2,param_3 & 1);
  }
  if (((((param_4 & 1) == 0) || (*(char *)(param_1 + 0xb2) == '\0')) ||
      (*(long **)(param_1 + 0x88) == (long *)0x0)) ||
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x88) + 0x60))(), (uVar1 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002c195c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x88) + 0xb0))(*(long **)(param_1 + 0x88),param_2);
  return;
}

