
void FUN_00313980(undefined8 *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  
  uVar3 = param_1[2];
  puVar1 = (undefined4 *)*param_1;
  if (param_2 <= (ulong)((long)(uVar3 - (long)puVar1) >> 2)) {
    puVar2 = (undefined4 *)param_1[1];
    uVar4 = (long)puVar2 - (long)puVar1 >> 2;
    uVar3 = uVar4;
    if (param_2 <= uVar4) {
      uVar3 = param_2;
    }
    if (uVar3 != 0) {
      uVar9 = uVar3 & 3;
      puVar8 = puVar1;
      uVar6 = uVar3;
      if (uVar9 != 0) {
        uVar6 = uVar3 & 0xfffffffffffffffc;
        puVar7 = puVar1;
        do {
          uVar9 = uVar9 - 1;
          puVar8 = puVar7 + 1;
          *puVar7 = *param_3;
          puVar7 = puVar8;
        } while (uVar9 != 0);
      }
      if (3 < uVar3) {
        do {
          uVar6 = uVar6 - 4;
          *puVar8 = *param_3;
          puVar8[1] = *param_3;
          puVar8[2] = *param_3;
          puVar8[3] = *param_3;
          puVar8 = puVar8 + 4;
        } while (uVar6 != 0);
      }
    }
    if (uVar4 <= param_2 && param_2 - uVar4 != 0) {
      lVar5 = param_2 * 4 + uVar4 * -4;
      puVar1 = puVar2;
      do {
        lVar5 = lVar5 + -4;
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
      } while (lVar5 != 0);
      param_1[1] = puVar2 + (param_2 - uVar4);
      return;
    }
    puVar1 = puVar1 + param_2;
LAB_00313b28:
    param_1[1] = puVar1;
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    param_1[1] = puVar1;
    FUN_00187e4c();
    uVar3 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (param_2 >> 0x3e == 0) {
    uVar4 = (long)uVar3 >> 1;
    if ((ulong)((long)uVar3 >> 1) <= param_2) {
      uVar4 = param_2;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar4 = 0x3fffffffffffffff;
    }
    if (uVar4 >> 0x3e == 0) {
      puVar2 = (undefined4 *)FUN_00187df4(uVar4 * 4);
      puVar1 = puVar2 + param_2;
      param_1[2] = puVar2 + uVar4;
      *param_1 = puVar2;
      for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *param_3;
        puVar2 = puVar2 + 1;
      }
      if (2 < (param_2 - 1 & 0x3fffffffffffffff)) {
        do {
          *puVar2 = *param_3;
          puVar2[1] = *param_3;
          puVar2[2] = *param_3;
          puVar2[3] = *param_3;
          puVar2 = puVar2 + 4;
        } while (puVar2 != puVar1);
      }
      goto LAB_00313b28;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001a3240(param_1);
}

