
void FUN_004066f0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar4 = *param_1;
  if ((ulong)((param_1[2] - lVar4 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_00406858(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    lVar6 = param_1[1];
    lVar2 = FUN_00187df4(param_2 * 0x18);
    lVar1 = lVar2 + param_2 * 0x18;
    puVar11 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)param_1[1];
    puVar10 = (undefined8 *)(lVar2 + (lVar6 - lVar4));
    if (puVar9 == puVar11) {
      *param_1 = (long)puVar10;
      param_1[1] = (long)puVar10;
      param_1[2] = lVar1;
    }
    else {
      puVar12 = puVar10;
      do {
        puVar5 = puVar12 + -3;
        *puVar5 = 0;
        puVar3 = puVar9 + -3;
        uVar7 = *puVar3;
        puVar12[-2] = 0;
        uVar8 = puVar9[-2];
        puVar12[-1] = 0;
        *puVar5 = uVar7;
        puVar12[-2] = uVar8;
        puVar12[-1] = puVar9[-1];
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar3 = 0;
        puVar12 = puVar5;
        puVar9 = puVar3;
      } while (puVar3 != puVar11);
      puVar9 = (undefined8 *)*param_1;
      puVar11 = (undefined8 *)param_1[1];
      param_1[2] = lVar1;
      *param_1 = (long)puVar5;
      param_1[1] = (long)puVar10;
      if (puVar11 != puVar9) {
        do {
          puVar10 = puVar11 + -3;
          puVar12 = (undefined8 *)*puVar10;
          if (puVar12 != (undefined8 *)0x0) {
            puVar5 = (undefined8 *)puVar11[-2];
            puVar3 = puVar12;
            if (puVar5 != puVar12) {
              do {
                puVar5 = puVar5 + -7;
                (**(code **)*puVar5)(puVar5);
              } while (puVar5 != puVar12);
              puVar3 = (undefined8 *)*puVar10;
            }
            puVar11[-2] = puVar12;
            FUN_00187e4c(puVar3);
          }
          puVar11 = puVar10;
        } while (puVar10 != puVar9);
      }
    }
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar9);
      return;
    }
  }
  return;
}

