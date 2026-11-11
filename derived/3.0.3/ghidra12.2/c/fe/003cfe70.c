
void FUN_003cfe70(long *param_1,long param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = FUN_003ceaf8(param_2);
  if ((uVar1 & 1) != 0) {
    FUN_003ceb08(*param_1);
  }
  *(long **)(*param_1 + 0x18) = param_1;
  return;
}

