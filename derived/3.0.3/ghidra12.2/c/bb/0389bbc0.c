
bool FUN_0389bbc0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05ae6e88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae6e88), iVar1 != 0)) {
    DAT_05ae6e80 = &PTR_LAB_04b61bb8;
    __cxa_guard_release(&DAT_05ae6e88);
  }
  if ((undefined ***)param_2 != &DAT_05ae6e80) {
    if (((*PTR_DAT_04bcbb90 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bcbb90), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bcbb88 = &PTR_LAB_04b61c20;
      __cxa_guard_release(PTR_DAT_04bcbb90);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bcbb88) {
      if (((*PTR_DAT_04bcbb40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bcbb40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bcbb38 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bcbb40);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bcbb38;
    }
  }
  return true;
}

