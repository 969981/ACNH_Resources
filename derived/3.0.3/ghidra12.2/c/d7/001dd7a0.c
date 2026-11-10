
void FUN_001dd7a0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar4 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar4 >> 3) < param_2) {
    lVar9 = (long)puVar4 - *param_1 >> 3;
    uVar6 = lVar9 + param_2;
    if (uVar6 >> 0x3d != 0) {
      FUN_001dd938(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar1 = 0;
      puVar4 = (undefined8 *)(lVar9 << 3);
    }
    else {
      lVar1 = FUN_00187df4(uVar7 << 3);
      puVar4 = (undefined8 *)(lVar1 + lVar9 * 8);
    }
    puVar3 = puVar4;
    if ((param_2 & 7) != 0) {
      uVar6 = param_2 & 7;
      puVar8 = puVar4;
      do {
        uVar6 = uVar6 - 1;
        *puVar8 = 0;
        puVar3 = puVar8 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar6 != 0);
    }
    puVar8 = puVar4 + param_2;
    if (6 < (param_2 - 1 & 0x1fffffffffffffff)) {
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = puVar3 + 8;
      } while (puVar3 != puVar8);
    }
    puVar3 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -1;
        puVar4 = puVar4 + -1;
        *puVar4 = *puVar2;
      } while (puVar2 != puVar3);
      puVar2 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar4;
    param_1[1] = (long)puVar8;
    param_1[2] = lVar1 + uVar7 * 8;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00187e4c();
      return;
    }
  }
  else {
    puVar3 = puVar4;
    if (param_2 != 0) {
      puVar3 = puVar4 + param_2;
      for (uVar6 = param_2 & 7; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      if (6 < (param_2 - 1 & 0x1fffffffffffffff)) {
        do {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4 = puVar4 + 8;
        } while (puVar4 != puVar3);
      }
    }
    param_1[1] = (long)puVar3;
  }
  return;
}

