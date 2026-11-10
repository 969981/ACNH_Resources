
undefined4 FUN_00348e80(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 3) {
    return 2;
  }
  if (param_1 != 2) {
    if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl();
    }
    uVar2 = 4;
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  bVar1 = (param_3 & 1) == 0;
  uVar2 = 6;
  if (bVar1) {
    uVar2 = 1;
  }
  uVar3 = 7;
  if (bVar1) {
    uVar3 = 5;
  }
  if ((param_2 & 1) != 0) {
    uVar2 = uVar3;
  }
  return uVar2;
}

