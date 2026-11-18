
void FUN_032b5aa8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (*(int *)(lVar1 + 0xac) != 0) {
    if (*(int *)(lVar1 + 0xac) != 2) {
      *(undefined4 *)(lVar1 + 0xac) = 2;
      if (*(long **)(lVar1 + 0x100) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032b5aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(lVar1 + 0x100) + 0x20))();
        return;
      }
    }
  }
  return;
}

