
long * FUN_0147f934(uint param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  if (((param_1 < 0xec) && (*(long *)PTR_DAT_04bb2f58 != 0)) &&
     (plVar3 = *(long **)(*(long *)PTR_DAT_04bb2f58 + (ulong)param_1 * 0x10), plVar3 != (long *)0x0)
     ) {
    if (((*PTR_DAT_04bbce48 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbce48), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbce40 = PTR_DAT_04bb3608 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbce48);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bbce40);
    if ((uVar2 & 1) != 0) {
      return plVar3;
    }
  }
  if ((*PTR_DAT_04bbce38 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbce38);
    plVar3 = (long *)PTR_DAT_04bbce30;
    if (iVar1 != 0) {
      FUN_014d7d40(PTR_DAT_04bbce30,&DAT_0406f9b4);
      FUN_001001d0(FUN_01481b50,plVar3,&__DT_FINI_ARRAY);
      __cxa_guard_release(PTR_DAT_04bbce38);
    }
  }
  else {
    plVar3 = (long *)PTR_DAT_04bbce30;
  }
  return plVar3;
}

