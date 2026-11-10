
undefined * FUN_0036f670(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_04bd0790 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd0790), puVar2 = PTR_DAT_04bd07a8,
     puVar1 = PTR_DAT_04bd0798, iVar3 == 0)) {
    return PTR_DAT_04bd0798;
  }
  if (((*PTR_DAT_04bd07a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd07a0), iVar3 != 0))
  {
    *(undefined8 *)puVar2 = 0;
    __cxa_guard_release(PTR_DAT_04bd07a0);
  }
  *(undefined **)puVar1 = puVar2;
  __cxa_guard_release(PTR_DAT_04bd0790);
  return PTR_DAT_04bd0798;
}

