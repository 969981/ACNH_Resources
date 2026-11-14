
long * FUN_01a2a0f4(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)PTR_DAT_04bb2f58 + 0x420);
  if (plVar3 != (long *)0x0) {
    if (((*PTR_DAT_04bbfd08 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfd08), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbfd00 = PTR_DAT_04bb3608 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbfd08);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bbfd00);
    if ((uVar2 & 1) != 0) {
      return plVar3;
    }
  }
  if (((DAT_052d89c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052d89c8), iVar1 != 0)) {
    FUN_01a305d0(&DAT_052d4548,&DAT_0406f9b4);
    FUN_001001d0(FUN_01a2e9d0,&DAT_052d4548,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052d89c8);
  }
  return (long *)&DAT_052d4548;
}

