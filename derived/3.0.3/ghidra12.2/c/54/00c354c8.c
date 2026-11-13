
void FUN_00c354c8(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  FUN_0071c7c4(param_1,PTR_DAT_04bb3958,0);
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    if ((*PTR_DAT_04bb3930 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3930);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3930);
      }
    }
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3928);
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
  }
  return;
}

