
void FUN_00146418(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = nnosGetSystemTick();
  lVar3 = nnosGetSystemTickFrequency();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2 / lVar3;
  }
  if (param_1 != (long *)0x0) {
    *param_1 = lVar1;
  }
  return;
}

