
undefined * FUN_0039c318(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_04bc9548 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc9548), puVar2 = PTR_DAT_04bc9540,
     puVar1 = PTR_DAT_04bc8f30, iVar3 == 0)) {
    return PTR_DAT_04bc9540;
  }
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0))
  {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  *(undefined **)puVar2 = puVar1;
  __cxa_guard_release(PTR_DAT_04bc9548);
  return PTR_DAT_04bc9540;
}

