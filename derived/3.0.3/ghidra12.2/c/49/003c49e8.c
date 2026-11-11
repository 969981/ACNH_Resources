
undefined8 FUN_003c49e8(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_003c5b84();
  lVar3 = FUN_003cbb70(uVar2,0x40,1);
  *(undefined4 *)(lVar3 + 0x18) = param_2;
  *(undefined4 *)(lVar3 + 8) = 0x49;
  *(undefined8 *)(lVar3 + 0x38) = param_1;
  FUN_003cc15c(uVar2,lVar3);
  uVar1 = FUN_003cc180(uVar2,1);
  FUN_003cc0c0(uVar2,uVar1);
  return 1;
}

