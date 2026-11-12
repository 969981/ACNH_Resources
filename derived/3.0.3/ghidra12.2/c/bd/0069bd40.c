
uint FUN_0069bd40(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auStack_250 [560];
  
  memset(auStack_250,0,0x230);
  FUN_00694a2c(auStack_250);
  uVar1 = FUN_00694a80(auStack_250,*param_1,param_1[2]);
  FUN_00695e14(auStack_250);
  return uVar1 & 1;
}

