
undefined * FUN_03b38a74(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bd00c8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd00c8), puVar1 = PTR_DAT_04bd00d0, iVar2 != 0)) {
    FUN_003b4f70(PTR_DAT_04bd00d0);
    FUN_001001d0(PTR_FUN_04bd00c0,puVar1,&__DT_FINI_ARRAY);
    __cxa_guard_release(PTR_DAT_04bd00c8);
  }
  return PTR_DAT_04bd00d0;
}

