
undefined8
FUN_003c48c4(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_003c5320(param_2);
  if (1 < uVar1) {
                    /* WARNING: Subroutine does not return */
    nn::detail::UnexpectedDefaultImpl();
  }
  uVar2 = FUN_003c5b84();
  lVar3 = FUN_003cbb70(uVar2,0x40,1);
  *(undefined4 *)(lVar3 + 0x18) = param_3;
  *(undefined4 *)(lVar3 + 8) = 0x45;
  *(undefined8 *)(lVar3 + 0x20) = param_2;
  *(undefined8 *)(lVar3 + 0x28) = param_4;
  *(undefined8 *)(lVar3 + 0x30) = param_5;
  *(long **)(lVar3 + 0x38) = param_1;
  FUN_003cc15c(uVar2,lVar3);
  (**(code **)(*param_1 + 0x18))(param_1,1);
  return 1;
}

