
undefined * FUN_03c803d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_04bd3678 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3678), puVar2 = PTR_DAT_04bd3630, iVar4 != 0)) {
    if (((*PTR_DAT_04bd3638 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3638), puVar3 = PTR_DAT_04bd3650, iVar4 != 0)) {
      puVar1 = PTR_DAT_04bd3648 + 0x10;
      *(undefined **)puVar2 = PTR_DAT_04bd3640 + 0x10;
      *(undefined **)(puVar2 + 8) = puVar1;
      puVar1 = PTR_DAT_04bd3658;
      *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
      *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd3638);
    }
    (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,PTR_DAT_04bd3670);
    __cxa_guard_release(PTR_DAT_04bd3678);
  }
  return PTR_DAT_04bd3670;
}

