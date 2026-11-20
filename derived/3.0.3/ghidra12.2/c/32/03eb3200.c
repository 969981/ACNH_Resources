
long * FUN_03eb3200(uint param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) <= param_1) {
    param_1 = 0;
  }
  plVar3 = *(long **)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + (long)(int)param_1 * 8);
  if (((*PTR_DAT_04bbdb68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdb68), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbdb60 = PTR_DAT_04bbdb70 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdb68);
  }
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bbdb60);
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}

