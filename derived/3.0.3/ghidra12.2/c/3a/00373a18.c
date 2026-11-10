
undefined * FUN_00373a18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_04bd0728 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd0728), puVar2 = PTR_DAT_04bd0730,
     puVar1 = PTR_DAT_04bc9550, iVar3 == 0)) {
    return PTR_DAT_04bd0730;
  }
  if (((*PTR_DAT_04bc9558 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc9558), iVar3 != 0))
  {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc9558);
  }
  *(undefined **)puVar2 = puVar1;
  __cxa_guard_release(PTR_DAT_04bd0728);
  return PTR_DAT_04bd0730;
}

