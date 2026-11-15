
uint FUN_02373e70(long param_1,undefined4 param_2,byte param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_3c;
  byte local_38;
  undefined4 local_34;
  
  uVar2 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
  if ((uVar2 & 1) == 0) {
    local_38 = param_3 & 1;
    local_34 = 0;
    local_3c = param_2;
    uVar1 = FUN_02374e74(param_1,&local_3c);
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

