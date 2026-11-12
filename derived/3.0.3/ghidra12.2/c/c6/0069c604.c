
undefined * FUN_0069c604(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bdf430 & 1) != 0) || (iVar2 = __cxa_guard_acquire(PTR_DAT_04bdf430), iVar2 == 0))
  {
    return PTR_PTR_04bdf438;
  }
  if (((*PTR_DAT_04bdf3c0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bdf3c0), puVar1 = PTR_DAT_04bdf3d0, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bdf3d0 = PTR_PTR_04bdf3d8;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    __cxa_guard_release(PTR_DAT_04bdf3c0);
  }
  puVar1 = PTR_DAT_04bdf440;
  *(undefined **)PTR_DAT_04bdf440 = PTR_PTR_04bdf3c8;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  __cxa_guard_release(PTR_DAT_04bdf430);
  return PTR_PTR_04bdf438;
}

