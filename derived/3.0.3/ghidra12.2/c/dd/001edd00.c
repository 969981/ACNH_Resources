
void FUN_001edd00(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(lVar3 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(lVar3 + 0x10);
    puVar1 = puVar4;
    if (puVar2 != puVar4) {
      do {
        puVar2 = puVar2 + -2;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar4);
      puVar1 = *(undefined8 **)(lVar3 + 8);
    }
    *(undefined8 **)(lVar3 + 0x10) = puVar4;
    FUN_00187e4c(puVar1);
  }
  FUN_00185ac4(lVar3);
  return;
}

