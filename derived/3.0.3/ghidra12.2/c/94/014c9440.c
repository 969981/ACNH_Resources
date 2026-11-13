
long * FUN_014c9440(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 600);
  if (((*PTR_DAT_04bbce48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbce48), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbce40 = PTR_DAT_04bb3608 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbce48);
  }
  if ((plVar3 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bbce40), (uVar2 & 1) == 0)) {
    if ((DAT_051ee030 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_051ee030);
      plVar3 = (long *)&DAT_051ecc98;
      if (iVar1 != 0) {
        FUN_014d7d40(&DAT_051ecc98,&DAT_0406f9b4);
        FUN_001001d0(PTR_FUN_04bbce28,&DAT_051ecc98,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_051ee030);
      }
    }
    else {
      plVar3 = (long *)&DAT_051ecc98;
    }
  }
  return plVar3;
}

