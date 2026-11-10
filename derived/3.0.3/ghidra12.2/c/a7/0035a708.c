
undefined * FUN_0035a708(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_04bd05c8 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd05c8), puVar2 = PTR_DAT_04bd05e0,
     puVar1 = PTR_DAT_04bd05d0, iVar3 == 0)) {
    return PTR_DAT_04bd05d0;
  }
  if (((*PTR_DAT_04bd05d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd05d8), iVar3 != 0))
  {
    *(undefined8 *)puVar2 = 0;
    __cxa_guard_release(PTR_DAT_04bd05d8);
  }
  *(undefined **)puVar1 = puVar2;
  __cxa_guard_release(PTR_DAT_04bd05c8);
  return PTR_DAT_04bd05d0;
}

