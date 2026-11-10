
uint FUN_001f9ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_3a0 [216];
  undefined1 auStack_2c8 [664];
  
  FUN_00195604(auStack_2c8);
  FUN_00193120(auStack_3a0);
  uVar3 = FUN_00194da8(auStack_3a0,param_4);
  if ((((uVar3 & 1) == 0) || (uVar3 = FUN_001953d0(auStack_2c8,param_4), (uVar3 & 1) == 0)) ||
     (iVar1 = FUN_001958dc(auStack_2c8,param_2,param_3), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_001935e0(auStack_3a0,param_3);
  }
  FUN_00193178(auStack_3a0);
  FUN_001956e4(auStack_2c8);
  return uVar2 & 1;
}

