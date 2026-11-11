
void FUN_003f4f10(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = (long)(PTR_DAT_04bd26c8 + 0x10);
  FUN_001fbac0(param_1 + 0x23);
  if (param_1[0x1f] != 0) {
    param_1[0x20] = param_1[0x1f];
    FUN_00187e4c();
  }
  puVar4 = (undefined8 *)param_1[0x19];
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = puVar4;
    if ((undefined8 *)param_1[0x1a] != puVar4) {
      puVar2 = (undefined8 *)param_1[0x1a];
      do {
        puVar5 = puVar2 + -3;
        puVar6 = (undefined8 *)*puVar5;
        if (puVar6 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)puVar2[-2];
          puVar1 = puVar6;
          if (puVar3 != puVar6) {
            do {
              puVar3 = puVar3 + -7;
              (**(code **)*puVar3)(puVar3);
            } while (puVar3 != puVar6);
            puVar1 = (undefined8 *)*puVar5;
          }
          puVar2[-2] = puVar6;
          FUN_00187e4c(puVar1);
        }
        puVar2 = puVar5;
      } while (puVar5 != puVar4);
      puVar2 = (undefined8 *)param_1[0x19];
    }
    param_1[0x1a] = (long)puVar4;
    FUN_00187e4c(puVar2);
  }
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    FUN_00187e4c();
  }
  FUN_0019a368(param_1);
  return;
}

