
void FUN_002e2680(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bce980 + 0x10);
  param_1[0x21] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x21);
  param_1[0x1b] = (long)(PTR_DAT_04bce970 + 0x10);
  FUN_00202558(param_1 + 0x1d,param_1[0x1e]);
  param_1[0x14] = (long)puVar1;
  FUN_0018b1a0();
  param_1[0xf] = (long)puVar1;
  FUN_0018b1a0();
  param_1[10] = (long)puVar1;
  FUN_0018b1a0();
  param_1[5] = (long)puVar1;
  FUN_0018b1a0(param_1 + 5);
  puVar4 = (undefined8 *)param_1[2];
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[3];
  puVar2 = puVar4;
  if (puVar3 != puVar4) {
    do {
      puVar3 = puVar3 + -5;
      (**(code **)*puVar3)(puVar3);
    } while (puVar3 != puVar4);
    puVar2 = (undefined8 *)param_1[2];
  }
  param_1[3] = (long)puVar4;
  FUN_00187e4c(puVar2);
  return;
}

