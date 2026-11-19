
void FUN_03869a90(long *param_1)

{
  ulong uVar1;
  
  if ((*(char *)((long)param_1 + 0x165) == '\0') ||
     (uVar1 = (**(code **)(*param_1 + 0xf0))(), (uVar1 & 1) == 0)) {
    return;
  }
  *(undefined1 *)((long)param_1 + 0x165) = 0;
                    /* WARNING: Could not recover jumptable at 0x03869ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1);
  return;
}

