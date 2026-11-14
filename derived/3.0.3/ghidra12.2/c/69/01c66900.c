
void FUN_01c66900(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_04a42678;
  FUN_038e1c80(param_1 + 0xd);
  puVar3 = (undefined8 *)param_1[9];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[10];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -5;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[9];
    }
    param_1[10] = puVar3;
    FUN_00187e4c(puVar1);
  }
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    *(undefined1 *)((long)param_1 + 0xc) = 0;
  }
  return;
}

