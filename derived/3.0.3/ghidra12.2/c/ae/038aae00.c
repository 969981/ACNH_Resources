
void FUN_038aae00(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar1[2];
    FUN_038aae00(puVar1);
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  }
  return;
}

