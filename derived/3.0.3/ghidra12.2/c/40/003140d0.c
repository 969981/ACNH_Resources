
void FUN_003140d0(long *param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  
  lVar4 = param_1[2];
  puVar7 = (undefined8 *)*param_1;
  if (param_2 <= (ulong)((lVar4 - (long)puVar7 >> 3) * -0x3333333333333333)) {
    lVar4 = param_1[1] - (long)puVar7 >> 3;
    uVar8 = lVar4 * -0x3333333333333333;
    uVar6 = uVar8;
    if (param_2 <= uVar8) {
      uVar6 = param_2;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      FUN_00189504(puVar7,param_3);
      puVar7 = puVar7 + 5;
    }
    lVar4 = param_2 + lVar4 * 0x3333333333333333;
    if (param_2 < uVar8 || lVar4 == 0) {
      puVar7 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)(*param_1 + param_2 * 0x28);
      while (puVar7 != puVar5) {
        puVar7 = puVar7 + -5;
        (**(code **)*puVar7)(puVar7);
      }
      param_1[1] = (long)puVar5;
      return;
    }
    plVar3 = (long *)param_1[1];
    plVar9 = plVar3 + lVar4 * 5;
    do {
      *plVar3 = (long)&PTR_LAB_04a426b8;
      *(undefined1 *)(plVar3 + 1) = 0;
      plVar3[3] = (long)(plVar3 + 1);
      plVar3[4] = 0x10;
      FUN_0018b070(plVar3,*(undefined8 *)(param_3 + 0x18),0xffffffffffffffff);
      plVar3 = plVar3 + 5;
    } while (plVar3 != plVar9);
LAB_0031429c:
    param_1[1] = (long)plVar9;
    return;
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[1];
    puVar2 = puVar7;
    if (puVar5 != puVar7) {
      do {
        puVar5 = puVar5 + -5;
        (**(code **)*puVar5)(puVar5);
      } while (puVar5 != puVar7);
      puVar2 = (undefined8 *)*param_1;
    }
    param_1[1] = (long)puVar7;
    FUN_00187e4c(puVar2);
    lVar4 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (param_2 < 0x666666666666667) {
    uVar6 = (lVar4 >> 3) * -0x6666666666666666;
    if (uVar6 <= param_2) {
      uVar6 = param_2;
    }
    if (0x333333333333332 < (ulong)((lVar4 >> 3) * -0x3333333333333333)) {
      uVar6 = 0x666666666666666;
    }
    if (uVar6 < 0x666666666666667) {
      plVar3 = (long *)FUN_00187df4(uVar6 * 0x28);
      puVar1 = PTR_DAT_04bc0ec8;
      plVar9 = plVar3 + param_2 * 5;
      param_1[2] = (long)(plVar3 + uVar6 * 5);
      *param_1 = (long)plVar3;
      param_1[1] = (long)plVar3;
      do {
        *plVar3 = (long)(puVar1 + 0x10);
        *(undefined1 *)(plVar3 + 1) = 0;
        plVar3[3] = (long)(plVar3 + 1);
        plVar3[4] = 0x10;
        FUN_0018b070(plVar3,*(undefined8 *)(param_3 + 0x18),0xffffffffffffffff);
        plVar3 = plVar3 + 5;
      } while (plVar3 != plVar9);
      goto LAB_0031429c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c670e8(param_1);
}

