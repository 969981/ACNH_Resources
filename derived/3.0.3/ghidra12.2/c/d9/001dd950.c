
undefined8 FUN_001dd950(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar5 = param_1 + 1;
  puVar7 = (undefined8 *)*puVar5;
  if (puVar7 != (undefined8 *)0x0) {
    puVar6 = puVar5;
    do {
      uVar4 = FUN_0018b4e0(puVar7 + 4,param_2);
      puVar2 = puVar7 + 1;
      if ((uVar4 & 1) == 0) {
        puVar6 = puVar7;
        puVar2 = puVar7;
      }
      puVar7 = (undefined8 *)*puVar2;
    } while (puVar7 != (undefined8 *)0x0);
    if (puVar6 != puVar5) {
      uVar4 = FUN_0018b4e0(param_2,puVar6 + 4);
      if ((uVar4 & 1) == 0) {
        puVar5 = (undefined8 *)puVar6[1];
        if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
          puVar5 = puVar6;
          do {
            puVar7 = (undefined8 *)puVar5[2];
            bVar3 = (undefined8 *)*puVar7 != puVar5;
            puVar5 = puVar7;
          } while (bVar3);
        }
        else {
          do {
            puVar7 = puVar5;
            puVar5 = (undefined8 *)*puVar7;
          } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
        }
        if ((undefined8 *)*param_1 == puVar6) {
          *param_1 = puVar7;
        }
        param_1[2] = param_1[2] + -1;
        FUN_00192390(param_1[1],puVar6);
        puVar1 = PTR_DAT_04bc0ec8 + 0x10;
        puVar6[9] = puVar1;
        FUN_0018b1a0();
        puVar6[4] = puVar1;
        FUN_0018b1a0(puVar6 + 4);
        FUN_00187e4c(puVar6);
        return 1;
      }
    }
  }
  return 0;
}

