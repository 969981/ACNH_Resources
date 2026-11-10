
void FUN_0016c218(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1 + 0x890;
  puVar3 = *(undefined8 **)(param_1 + 0x8e0);
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    FUN_001689f8(lVar1,puVar3[1]);
    FUN_001689f8(lVar1,puVar3);
    puVar3 = puVar2;
  }
  FUN_0017289c(param_1 + 0x20);
  FUN_001724a4(param_1,FUN_0016c328,param_1);
  FUN_00172498(param_1);
  FUN_0016c39c(param_1 + 0x108,lVar1);
  FUN_0016c39c(param_1 + 0x120,lVar1);
  FUN_0016c39c(param_1 + 0x138,lVar1);
  FUN_0016c3ec(param_1 + 0x150,lVar1);
  FUN_0016c430(param_1);
  thunk_FUN_00168c10(param_1 + 0x290);
  FUN_00168c88(param_1 + 0x6e8);
  FUN_0016b478(param_1 + 0x158);
  FUN_001689f8(lVar1,param_1);
  return;
}

