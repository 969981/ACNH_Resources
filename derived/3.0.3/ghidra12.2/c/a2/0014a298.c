
long FUN_0014a298(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0xe8) != 0) {
    FUN_0014b7c4(lVar2,3,2);
  }
  lVar1 = FUN_0014a31c(param_1,param_2,param_3);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  }
  if (*(long *)(lVar2 + 0xe8) != 0) {
    FUN_0014b80c(lVar2,3);
  }
  return lVar1;
}

