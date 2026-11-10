
void FUN_001df0d0(ulong *param_1,ulong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  puVar9 = (undefined1 *)param_1[1];
  if (param_1[2] - (long)puVar9 < param_2) {
    puVar9 = puVar9 + -*param_1;
    puVar5 = puVar9 + param_2;
    if ((long)puVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8(param_1);
    }
    uVar6 = param_1[2] - *param_1;
    puVar7 = (undefined1 *)(uVar6 * 2);
    if (puVar7 <= puVar5) {
      puVar7 = puVar5;
    }
    if (0x3ffffffffffffffe < uVar6) {
      puVar7 = (undefined1 *)0x7fffffffffffffff;
    }
    if (puVar7 == (undefined1 *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_00187df4(puVar7);
      puVar9 = puVar9 + lVar3;
    }
    puVar5 = puVar9;
    if ((param_2 & 3) != 0) {
      uVar6 = param_2 & 3;
      puVar8 = puVar9;
      do {
        uVar6 = uVar6 - 1;
        *puVar8 = *param_3;
        puVar5 = puVar8 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar6 != 0);
    }
    puVar8 = puVar9 + param_2;
    if (3 < param_2) {
      do {
        *puVar5 = *param_3;
        puVar5[1] = *param_3;
        puVar5[2] = *param_3;
        puVar5[3] = *param_3;
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar8);
    }
    puVar5 = (undefined1 *)*param_1;
    puVar4 = (undefined1 *)param_1[1];
    if (puVar4 != puVar5) {
      uVar2 = (int)puVar4 - (int)puVar5;
      puVar1 = puVar4 + ~(ulong)puVar5;
      uVar6 = (ulong)uVar2 & 3;
      if ((uVar2 & 3) != 0) {
        do {
          puVar4 = puVar4 + -1;
          uVar6 = uVar6 - 1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar4;
        } while (uVar6 != 0);
      }
      if ((undefined1 *)0x2 < puVar1) {
        do {
          puVar9[-1] = puVar4[-1];
          puVar9[-2] = puVar4[-2];
          puVar9[-3] = puVar4[-3];
          puVar4 = puVar4 + -4;
          puVar9 = puVar9 + -4;
          *puVar9 = *puVar4;
        } while (puVar4 != puVar5);
      }
      puVar4 = (undefined1 *)*param_1;
    }
    *param_1 = (ulong)puVar9;
    param_1[1] = (ulong)puVar8;
    param_1[2] = (ulong)(puVar7 + lVar3);
    if (puVar4 != (undefined1 *)0x0) {
      FUN_00187e4c();
      return;
    }
  }
  else {
    puVar5 = puVar9;
    if (param_2 != 0) {
      puVar5 = puVar9 + param_2;
      for (uVar6 = param_2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *param_3;
        puVar9 = puVar9 + 1;
      }
      if (3 < param_2) {
        do {
          *puVar9 = *param_3;
          puVar9[1] = *param_3;
          puVar9[2] = *param_3;
          puVar9[3] = *param_3;
          puVar9 = puVar9 + 4;
        } while (puVar9 != puVar5);
      }
    }
    param_1[1] = (ulong)puVar5;
  }
  return;
}

