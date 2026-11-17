
long * FUN_02b889d0(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)PTR_DAT_04bb2f58 + 0xb00);
  if (plVar3 != (long *)0x0) {
    if (((*PTR_DAT_04bc4c08 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4c08), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4c00 = PTR_DAT_04bb3608 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4c08);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc4c00);
    if ((uVar2 & 1) != 0) {
      return plVar3;
    }
  }
  if (((DAT_05640dd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05640dd8), iVar1 != 0)) {
    FUN_02b89c80(&DAT_05640ad0,&DAT_0406f9b4);
    FUN_001001d0(&LAB_02b88d10,&DAT_05640ad0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05640dd8);
  }
  return (long *)&DAT_05640ad0;
}

