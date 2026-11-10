
undefined8 FUN_0014ea2c(long *param_1,long param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  char acStack_a0 [128];
  
  if (*(long *)(*param_1 + 0xe8) != 0) {
    FUN_0014b7c4(*param_1,5,2);
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    memset(acStack_a0,0,0x80);
    FUN_0014eaac(param_1,acStack_a0);
    sVar1 = strlen(acStack_a0);
    uVar2 = FUN_0014b0d0(param_2,acStack_a0,sVar1);
  }
  return uVar2;
}

