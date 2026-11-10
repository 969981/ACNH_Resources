
uint FUN_00223628(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0022b418(param_2,param_1 + 0x4c);
  if ((uVar1 & 1) != 0) {
    FUN_00229780(param_1 + 0x4c,param_2);
  }
  return uVar1 & 1;
}

