
void FUN_00727dfc(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[1];
  uVar2 = (**(code **)(*param_1 + 0xe8))();
  FUN_038d1270(param_2,"%s.%s",lVar1,uVar2);
  return;
}

