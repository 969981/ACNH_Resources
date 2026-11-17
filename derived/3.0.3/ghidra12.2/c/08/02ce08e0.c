
void FUN_02ce08e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_04ab8668;
  param_1[1] = 0xfffe;
  puVar1 = param_1 + 3;
  *puVar1 = 0;
  puVar2 = param_1 + 2;
  *puVar2 = 0;
  FUN_0277d4ac();
  *puVar2 = 0xfffe;
  FUN_0277d4ac(puVar2);
  *puVar1 = 0xfffe;
  FUN_0277d4ac(puVar1);
  param_1[4] = 0xfffe;
  puVar1 = param_1 + 6;
  *puVar1 = 0;
  puVar2 = param_1 + 5;
  *puVar2 = 0;
  FUN_0277d4ac();
  *puVar2 = 0xfffe;
  FUN_0277d4ac(puVar2);
  *puVar1 = 0xfffe;
  FUN_0277d4ac(puVar1);
  param_1[9] = 0xfffe;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  puVar1 = param_1 + 0xb;
  *puVar1 = 0;
  puVar2 = param_1 + 10;
  *puVar2 = 0;
  FUN_0277d4ac(param_1 + 9);
  *puVar2 = 0xfffe;
  FUN_0277d4ac(puVar2);
  *puVar1 = 0xfffe;
  FUN_0277d4ac(puVar1);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0xff;
  return;
}

