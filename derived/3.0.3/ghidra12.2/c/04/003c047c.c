
undefined1 FUN_003c047c(long param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)(*(long **)(param_1 + 0x10))[1])) {
    uVar1 = *(undefined1 *)(**(long **)(param_1 + 0x10) + (ulong)param_2);
  }
  return uVar1;
}

