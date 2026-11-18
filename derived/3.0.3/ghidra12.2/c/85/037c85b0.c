
undefined8 FUN_037c85b0(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bcaf78 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bcaf78);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bcaf70 = PTR_DAT_04bcad98 + 0x10;
      __cxa_guard_release(PTR_DAT_04bcaf78);
    }
  }
  if (param_2 != PTR_DAT_04bcaf70) {
    if ((*PTR_DAT_04bcad58 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bcad58);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bcad50 = PTR_DAT_04bb3ba0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bcad58);
      }
    }
    if (param_2 != PTR_DAT_04bcad50) {
      uVar2 = FUN_03790c74(param_2);
      return uVar2;
    }
  }
  return 1;
}

