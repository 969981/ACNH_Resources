
undefined8 FUN_01fa25c0(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((((*(int *)(param_1[1] + 0x750) == 3) || ((int)param_1[0xef6] - 3U < 5)) ||
      (uVar1 = (**(code **)(*param_1 + 0x608))(param_1), (uVar1 & 1) != 0)) ||
     ((((char)param_1[0x15f2] != '\0' || *(char *)((long)param_1 + 0xaf9c) != '\0' ||
       (*(int *)((long)param_1 + 0x77f4) == 0x3e)) || ((int)param_1[0xef6] == 0x3e)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01fa2654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x540))(param_1);
  return uVar2;
}

