
void FUN_00168c10(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  lVar1 = param_1[4];
  if (param_1[3] != 0) {
    uVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(*param_1 + (uVar3 + param_1[2] & param_1[1]) * 8);
      FUN_0016b194(puVar2[1]);
      FUN_0016b194(*puVar2);
      FUN_001689f8(lVar1,puVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)param_1[3]);
  }
  FUN_001689f8(lVar1,*param_1);
  return;
}

