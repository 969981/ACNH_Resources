
void FUN_00404b90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  lVar3 = param_1[2];
  puVar9 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((lVar3 - (long)puVar9 >> 3) * -0x5555555555555555)) {
    puVar4 = (undefined8 *)param_1[1];
    lVar3 = (long)puVar4 - (long)puVar9 >> 3;
    if ((ulong)(lVar3 * -0x5555555555555555) < param_4) {
      puVar5 = param_2 + lVar3;
      if (puVar4 != puVar9) {
        lVar3 = lVar3 << 3;
        do {
          FUN_0018ab44(puVar9,param_2);
          param_2 = param_2 + 3;
          puVar9 = puVar9 + 3;
          lVar3 = lVar3 + -0x18;
        } while (lVar3 != 0);
        puVar9 = (undefined8 *)param_1[1];
      }
      puVar4 = puVar9;
      if (puVar5 != param_3) {
        puVar6 = puVar9;
        do {
          uVar1 = *puVar5;
          puVar2 = puVar5 + 1;
          puVar4 = puVar4 + 3;
          uVar8 = puVar5[2];
          puVar5 = puVar5 + 3;
          puVar6[1] = *puVar2;
          puVar6[2] = uVar8;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 3;
        } while (puVar5 != param_3);
      }
      lVar3 = (long)puVar4 - (long)puVar9;
    }
    else {
      puVar4 = puVar9;
      if (param_2 != param_3) {
        puVar5 = puVar9;
        do {
          FUN_0018ab44(puVar5,param_2);
          param_2 = param_2 + 3;
          puVar5 = puVar5 + 3;
          puVar4 = puVar4 + 3;
        } while (param_2 != param_3);
      }
      lVar3 = (long)puVar4 - (long)puVar9;
    }
LAB_00404d54:
    param_1[1] = (long)puVar9 + lVar3;
    return;
  }
  if (puVar9 != (undefined8 *)0x0) {
    param_1[1] = puVar9;
    FUN_00187e4c(puVar9);
    lVar3 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (param_4 < 0xaaaaaaaaaaaaaab) {
    uVar7 = (lVar3 >> 3) * 0x5555555555555556;
    if (uVar7 <= param_4) {
      uVar7 = param_4;
    }
    if (0x555555555555554 < (ulong)((lVar3 >> 3) * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar7 < 0xaaaaaaaaaaaaaab) {
      puVar9 = (undefined8 *)FUN_00187df4(uVar7 * 0x18);
      *param_1 = puVar9;
      param_1[2] = puVar9 + uVar7 * 3;
      param_1[1] = puVar9;
      puVar4 = puVar9;
      if (param_2 != param_3) {
        puVar5 = puVar9;
        do {
          uVar1 = *param_2;
          puVar4 = param_2 + 1;
          uVar8 = param_2[2];
          param_2 = param_2 + 3;
          puVar5[1] = *puVar4;
          puVar5[2] = uVar8;
          puVar4 = puVar5 + 3;
          *puVar5 = uVar1;
          puVar5 = puVar4;
        } while (param_2 != param_3);
      }
      lVar3 = (long)puVar4 - (long)puVar9;
      goto LAB_00404d54;
    }
  }
  FUN_00404d78(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_01c67100("vector");
}

