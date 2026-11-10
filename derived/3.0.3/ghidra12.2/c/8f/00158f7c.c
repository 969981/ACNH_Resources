
uint FUN_00158f7c(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = thunk_FUN_0017b1a8();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_0014d428(param_1,param_2), (uVar2 & 1) == 0)) {
    uVar1 = FUN_00159114(*(undefined4 *)(param_1 + (long)param_2 * 4 + 600),0xffffffff,0xffffffff,0)
    ;
    uVar1 = 0 < (int)uVar1 & uVar1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

