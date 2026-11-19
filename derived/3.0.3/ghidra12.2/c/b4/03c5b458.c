
undefined4 FUN_03c5b458(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bd34d8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd34d8), puVar1 = PTR_DAT_04bd34a0, iVar2 != 0)) {
    if (((*PTR_DAT_04bd34a8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd34a8), iVar2 != 0)) {
      *(undefined ***)puVar1 = &PTR_LAB_04b818c8;
      *(undefined ***)(puVar1 + 8) = &PTR_FUN_04b818f8;
      *(undefined ***)(puVar1 + 0x28) = &PTR_LAB_04b81920;
      *(undefined ***)(puVar1 + 0x48) = &PTR_LAB_04b81948;
      __cxa_guard_release(PTR_DAT_04bd34a8);
    }
    (*(code *)**(undefined8 **)(puVar1 + 8))(puVar1 + 8,PTR_DAT_04bd34d0);
    __cxa_guard_release(PTR_DAT_04bd34d8);
  }
  return *(undefined4 *)PTR_DAT_04bd34d0;
}

