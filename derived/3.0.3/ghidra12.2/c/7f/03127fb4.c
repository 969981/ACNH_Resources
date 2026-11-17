
undefined8 FUN_03127fb4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_056f5b48 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_056f5b48);
    if (iVar1 != 0) {
      DAT_056f5b40 = &PTR_LAB_04b02640;
      __cxa_guard_release(&DAT_056f5b48);
    }
  }
  if ((undefined ***)param_2 != &DAT_056f5b40) {
    if ((*PTR_DAT_04bc8388 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bc8388);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bc8380 = PTR_DAT_04bc4d20 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc8388);
      }
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bc8380) {
      uVar2 = FUN_030bbe3c(param_2);
      return uVar2;
    }
  }
  return 1;
}

