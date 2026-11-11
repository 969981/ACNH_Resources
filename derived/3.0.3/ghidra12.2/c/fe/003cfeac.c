
void FUN_003cfeac(long *param_1,long param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = FUN_003ceae0(param_2);
  if ((uVar1 & 1) != 0) {
    FUN_003ceaf0(*param_1);
  }
  *(long **)(*param_1 + 0x10) = param_1;
  return;
}

