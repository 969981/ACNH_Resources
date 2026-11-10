
void FUN_002a0ca0(long *param_1)

{
  ulong uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  FUN_002282f0(&local_18);
  *(undefined1 *)((long)param_1 + 0xec) = 1;
  uVar1 = FUN_002212e4(param_1);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_0022131c(param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*param_1 + 0x10))(param_1,0);
      return;
    }
    *(undefined1 *)(param_1 + 9) = 1;
    do {
      FUN_00227860(param_1,2);
      uVar1 = FUN_002212e4(param_1);
    } while ((uVar1 & 1) != 0);
  }
  return;
}

