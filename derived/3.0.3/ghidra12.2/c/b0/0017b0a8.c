
undefined8 FUN_0017b0a8(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = nnsslInitialize();
  uVar2 = nnResultIsFailure(uVar1);
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_0017b2a8(uVar1,0x1927b), (uVar2 & 1) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

