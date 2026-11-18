
void FUN_034eac60(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)**(long **)(param_1 + 0x3f8);
  if ((*PTR_DAT_04bc4e60 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
  }
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x034eaca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,PTR_DAT_04bc4e58);
  return;
}

