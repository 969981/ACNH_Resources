
void FUN_001ab348(long *param_1)

{
  ulong uVar1;
  
  if (*(char *)((long)param_1 + 0x321) == '\0') {
    (**(code **)(*param_1 + 0x68))(param_1,0x4000);
    *(undefined1 *)((long)param_1 + 0x321) = 1;
    if (((long *)param_1[0x18] != (long *)0x0) &&
       (uVar1 = (**(code **)(*(long *)param_1[0x18] + 0x40))(), (uVar1 & 1) != 0)) {
      (**(code **)(*(long *)param_1[0x18] + 0xb0))((long *)param_1[0x18],0);
    }
    if ((long *)param_1[0x65] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001ab3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[0x65] + 0x48))();
      return;
    }
  }
  return;
}

