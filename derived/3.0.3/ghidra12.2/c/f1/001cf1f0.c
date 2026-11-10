
void FUN_001cf1f0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [144];
  undefined1 local_38;
  
  FUN_001e1500(auStack_c8);
  FUN_001e15a8(auStack_c8,param_2);
  puVar4 = param_1 + 1;
  puVar6 = (undefined8 *)*puVar4;
  local_38 = param_3;
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    do {
      uVar3 = FUN_001dc410(puVar6 + 4,auStack_c8);
      puVar1 = puVar6 + 1;
      if ((uVar3 & 1) == 0) {
        puVar5 = puVar6;
        puVar1 = puVar6;
      }
      puVar6 = (undefined8 *)*puVar1;
    } while (puVar6 != (undefined8 *)0x0);
    if (puVar5 != puVar4) {
      uVar3 = FUN_001dc410(auStack_c8,puVar5 + 4);
      if ((uVar3 & 1) == 0) {
        puVar4 = (undefined8 *)puVar5[1];
        if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
          puVar4 = puVar5;
          do {
            puVar6 = (undefined8 *)puVar4[2];
            bVar2 = (undefined8 *)*puVar6 != puVar4;
            puVar4 = puVar6;
          } while (bVar2);
        }
        else {
          do {
            puVar6 = puVar4;
            puVar4 = (undefined8 *)*puVar6;
          } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
        }
        if ((undefined8 *)*param_1 == puVar5) {
          *param_1 = puVar6;
        }
        param_1[2] = param_1[2] + -1;
        FUN_00192390(param_1[1],puVar5);
        FUN_001e1868(puVar5 + 4);
        FUN_00187e4c(puVar5);
      }
    }
  }
  FUN_001e1868(auStack_c8);
  return;
}

