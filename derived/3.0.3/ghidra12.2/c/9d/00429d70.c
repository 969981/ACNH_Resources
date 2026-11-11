
long FUN_00429d70(int *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_048607b8;
  FUN_0043c4e0(DAT_04c6f050);
  lVar2 = FUN_00438a70(puVar1,(param_1[2] - *param_1) + 1);
  FUN_0043a2b0(lVar2,(param_1[2] - (int)*(undefined8 *)param_1) + 1);
  *(undefined1 *)(lVar2 + (param_1[2] - *param_1)) = 0;
  return lVar2;
}

