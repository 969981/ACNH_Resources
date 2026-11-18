
void FUN_031e998c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((*PTR_DAT_04bc8890 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bc8890);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bc8888 = PTR_DAT_04bc4c70 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc8890);
    }
  }
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x031e99cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2,PTR_DAT_04bc8888);
  return;
}

