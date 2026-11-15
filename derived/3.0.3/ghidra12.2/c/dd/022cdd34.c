
void FUN_022cdd34(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x10] = 0;
  param_1[0xd] = param_1 + 0x10;
  puVar1 = param_1 + 1;
  param_1[2] = puVar1;
  param_1[10] = param_1 + 0xd;
  puVar2 = param_1 + 7;
  *puVar2 = param_1 + 10;
  param_1[4] = puVar2;
  param_1[5] = puVar2;
  *(undefined4 *)(param_1 + 6) = 4;
  *param_1 = &PTR_LAB_049a5200;
  param_1[1] = puVar1;
  FUN_0147a740(puVar1,param_2 + 0x2f0);
  return;
}

