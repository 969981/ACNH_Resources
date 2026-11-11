
uint FUN_003cd80c(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_03b38a74();
  uVar2 = FUN_003b6950(uVar2,0);
  uVar1 = FUN_003c482c(uVar2,param_1 + 1);
  return (uVar1 ^ 0xffffffff) & 1;
}

