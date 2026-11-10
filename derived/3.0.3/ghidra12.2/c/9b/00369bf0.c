
void FUN_00369bf0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 == param_1) {
    if (param_2 == (long *)0x0) {
      return;
    }
  }
  else {
    plVar1 = (long *)param_2[2];
    lVar2 = *plVar1;
    *(long **)(param_2[1] + 8) = plVar1;
    *plVar1 = param_2[1];
    *(long **)(lVar2 + 8) = param_2 + 1;
    param_2[1] = lVar2;
  }
  (**(code **)(*param_2 + 8))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00369c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bd0808)(param_2,DAT_04c62f60);
  return;
}

