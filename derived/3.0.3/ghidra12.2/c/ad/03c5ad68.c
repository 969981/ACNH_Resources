
undefined8 FUN_03c5ad68(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bd37e8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd37e8), puVar1 = PTR_DAT_04bd37b0, iVar2 != 0)) {
    if (((*PTR_DAT_04bd37b8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd37b8), iVar2 != 0)) {
      *(undefined ***)puVar1 = &PTR_LAB_04b81750;
      *(undefined ***)(puVar1 + 8) = &PTR_FUN_04b81780;
      *(undefined ***)(puVar1 + 0x28) = &PTR_LAB_04b817a8;
      *(undefined ***)(puVar1 + 0x48) = &PTR_LAB_04b817d0;
      __cxa_guard_release(PTR_DAT_04bd37b8);
    }
    (*(code *)**(undefined8 **)(puVar1 + 8))(puVar1 + 8,PTR_DAT_04bd37e0);
    __cxa_guard_release(PTR_DAT_04bd37e8);
  }
  return *(undefined8 *)PTR_DAT_04bd37e0;
}

