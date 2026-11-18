
undefined8 * FUN_034b0150(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar2 = (undefined8 *)FUN_0386e6b0();
  if (((*PTR_DAT_04bc5988 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5988), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc5980 = PTR_DAT_04bc4d08 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5988);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc5980);
    if ((uVar3 & 1) == 0) {
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}

