
undefined4 FUN_03c5b744(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bd3358 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3358), puVar1 = PTR_DAT_04bd3320, iVar2 != 0)) {
    if (((*PTR_DAT_04bd3328 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3328), iVar2 != 0)) {
      *(undefined ***)puVar1 = &PTR_LAB_04b81a18;
      *(undefined ***)(puVar1 + 8) = &PTR_FUN_04b81a48;
      *(undefined ***)(puVar1 + 0x28) = &PTR_FUN_04b81a70;
      *(undefined ***)(puVar1 + 0x48) = &PTR_FUN_04b81a98;
      __cxa_guard_release(PTR_DAT_04bd3328);
    }
    (*(code *)**(undefined8 **)(puVar1 + 8))(puVar1 + 8,PTR_DAT_04bd3350);
    __cxa_guard_release(PTR_DAT_04bd3358);
  }
  return *(undefined4 *)PTR_DAT_04bd3350;
}

