
void FUN_0016b6d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = param_1[6];
  puVar1 = param_1;
  do {
    puVar1 = (undefined8 *)*puVar1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_0016b764;
    lVar3 = puVar1[1];
    lVar2 = lVar2 + -1;
    puVar1[3] = lVar3;
    puVar1[4] = lVar3;
    puVar1[5] = lVar3;
    puVar1[3] = lVar3 + param_1[7];
    puVar1[4] = lVar3 + param_1[7];
  } while (lVar2 != 0);
  puVar4 = (undefined8 *)*puVar1;
  *puVar1 = 0;
  while (puVar4 != (undefined8 *)0x0) {
    uVar5 = param_1[2];
    puVar1 = (undefined8 *)*puVar4;
    FUN_001689f8(uVar5,puVar4[1]);
    puVar4[1] = 0;
    FUN_001689f8(uVar5,puVar4);
    puVar4 = puVar1;
  }
  param_1[5] = param_1[6];
LAB_0016b764:
  param_1[1] = *param_1;
  return;
}

