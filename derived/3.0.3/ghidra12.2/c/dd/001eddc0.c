
void FUN_001eddc0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar3[1];
    puVar1 = puVar4;
    if (puVar2 != puVar4) {
      do {
        puVar2 = puVar2 + -2;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar4);
      puVar1 = (undefined8 *)*puVar3;
    }
    puVar3[1] = puVar4;
    FUN_00187e4c(puVar1);
  }
  FUN_00185ac4(puVar3);
  return;
}

