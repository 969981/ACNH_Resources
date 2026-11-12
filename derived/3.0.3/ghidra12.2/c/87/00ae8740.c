
void _INIT_2043(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bb6668 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb6668), puVar1 = PTR_DAT_04bb6660, iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_04bb6660 = 0;
    puVar1[8] = 0;
    FUN_001001d0(&LAB_00ae87a4,puVar1,&__DT_FINI_ARRAY);
    __cxa_guard_release(PTR_DAT_04bb6668);
    return;
  }
  return;
}

