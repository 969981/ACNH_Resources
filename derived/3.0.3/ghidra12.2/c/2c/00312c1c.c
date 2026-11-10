
uint FUN_00312c1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined8 uStack_8;
  
  uStack_8 = param_3;
  uVar1 = FUN_00312c44(param_1 + 0x140,param_2,param_5,&uStack_8,param_4);
  return uVar1 & 1;
}

