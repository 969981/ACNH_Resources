
void FUN_00167bfc(uint *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0016852c(param_2);
  *param_1 = uVar1 & 0xffff;
  uVar1 = FUN_00168534(param_2 + 2);
  param_1[1] = uVar1;
  return;
}

