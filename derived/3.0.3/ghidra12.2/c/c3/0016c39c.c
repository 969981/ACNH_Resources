
void FUN_0016c39c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x88);
    FUN_0016bc00(lVar1,param_2);
    FUN_001689f8(param_2,lVar1);
    lVar1 = lVar2;
  }
  return;
}

