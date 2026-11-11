
undefined * FUN_003baea4(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bd00b0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd00b0), puVar1 = PTR_DAT_04bd00b8, iVar2 != 0)) {
    *(undefined4 *)(PTR_DAT_04bd00b8 + 0x300) = 0;
    *(undefined4 *)(puVar1 + 0x604) = 0;
    *(undefined **)(puVar1 + 0x608) = puVar1;
    __cxa_guard_release(PTR_DAT_04bd00b0);
    return PTR_DAT_04bd00b8;
  }
  return PTR_DAT_04bd00b8;
}

