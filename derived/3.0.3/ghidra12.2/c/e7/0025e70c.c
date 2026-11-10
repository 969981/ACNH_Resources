
undefined8 FUN_0025e70c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0022131c(*(undefined8 *)(param_1 + 0x58));
  if ((uVar1 & 1) == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_FUN_04bcd618;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalAllowParticipatingJob::CompleteProcess";
    return 0;
  }
  return 5;
}

