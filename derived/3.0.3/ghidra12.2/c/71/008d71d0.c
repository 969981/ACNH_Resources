
void FUN_008d71d0(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = (long *)*param_2;
  *param_1 = (long)plVar2;
  *(char *)(param_1 + 1) = (char)param_2[1];
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_2 + 10);
  *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)param_2 + 0xb);
  if ((*PTR_DAT_04bb37d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb37d8);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
  }
  if ((plVar2 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb37d0), (uVar3 & 1) == 0)) {
    *(undefined1 *)((long)param_1 + 10) = 0;
  }
  return;
}

