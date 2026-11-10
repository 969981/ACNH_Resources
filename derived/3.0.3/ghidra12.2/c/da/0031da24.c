
uint FUN_0031da24(long param_1,ulong param_2,int param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_3 - 1U < 2) {
    uVar3 = *(undefined4 *)**(undefined8 **)(param_1 + 0x4d0);
  }
  else {
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl();
    }
    uVar3 = 1;
  }
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x48 + 0x880;
  uVar2 = FUN_0031ebe0(lVar1,*(undefined8 *)(param_1 + 0x790),param_3,uVar3,
                       (param_4 + 0xfU & 0xfffffffffffffff0) * (long)*(int *)(param_1 + 0x230));
  if ((uVar2 & 1) != 0) {
    FUN_0031ee44(lVar1);
  }
  return uVar2 & 1;
}

