
undefined8 FUN_02efcd68(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_4 [4];
  
  iVar1 = FUN_0266c940();
  if (iVar1 != 1) {
    local_4[0] = *param_1;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
    uVar2 = FUN_02669430(local_4);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_02915598(param_1);
      return uVar3;
    }
  }
  return 0;
}

