
void FUN_011e2aa0(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  FUN_0071cb58();
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    if ((*PTR_DAT_04bbbae8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbbae8);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbbae0 = PTR_DAT_04bbbaf0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbbae8);
      }
    }
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bbbae0);
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 10) = 0;
    }
  }
  return;
}

