
undefined1 FUN_03c5b384(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bd3178 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3178), puVar1 = PTR_DAT_04bd3140, iVar2 != 0)) {
    if (((*PTR_DAT_04bd3148 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3148), iVar2 != 0)) {
      *(undefined ***)puVar1 = &PTR_LAB_04b816a8;
      *(undefined ***)(puVar1 + 8) = &PTR_FUN_04b816d8;
      *(undefined ***)(puVar1 + 0x28) = &PTR_LAB_04b81700;
      *(undefined ***)(puVar1 + 0x48) = &PTR_LAB_04b81728;
      __cxa_guard_release(PTR_DAT_04bd3148);
    }
    (*(code *)**(undefined8 **)(puVar1 + 8))(puVar1 + 8,PTR_DAT_04bd3170);
    __cxa_guard_release(PTR_DAT_04bd3178);
  }
  return *PTR_DAT_04bd3170;
}

