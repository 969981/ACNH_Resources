
long FUN_03c9f58c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x70))();
  lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  return lVar1 - lVar2;
}

