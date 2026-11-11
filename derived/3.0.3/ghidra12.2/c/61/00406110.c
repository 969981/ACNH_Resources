
void FUN_00406110(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  lVar7 = *param_1;
  if ((ulong)(param_1[2] - lVar7 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      FUN_004063ac(param_1);
                    /* WARNING: Does not return */
      pcVar5 = (code *)UndefinedInstructionException(0,0x406218);
      (*pcVar5)();
    }
    lVar8 = param_1[1];
    lVar6 = FUN_00187df4(param_2 * 0x20);
    lVar2 = lVar6 + param_2 * 0x20;
    puVar3 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    lVar6 = lVar6 + (lVar8 - lVar7);
    if (puVar11 == puVar3) {
      *param_1 = lVar6;
      param_1[1] = lVar6;
      param_1[2] = lVar2;
    }
    else {
      puVar1 = PTR_DAT_04bd2908 + 0x10;
      lVar7 = 0;
      do {
        lVar8 = lVar6 + lVar7;
        uVar4 = *(undefined1 *)((long)puVar11 + lVar7 + -0x18);
        uVar10 = *(undefined8 *)((long)puVar11 + lVar7 + -0x10);
        lVar9 = lVar7 + -0x20;
        *(undefined **)(lVar8 + -0x20) = puVar1;
        *(undefined4 *)(lVar8 + -8) = *(undefined4 *)((long)puVar11 + lVar7 + -8);
        *(undefined1 *)(lVar8 + -0x18) = uVar4;
        *(undefined8 *)(lVar8 + -0x10) = uVar10;
        lVar7 = lVar9;
      } while ((undefined8 *)((long)puVar11 + lVar9) != puVar3);
      param_1[2] = lVar2;
      *param_1 = lVar6 + lVar9;
      param_1[1] = lVar6;
      do {
        puVar11 = puVar11 + -4;
        (**(code **)*puVar11)(puVar11);
      } while (puVar11 != puVar3);
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00187e4c(puVar3);
      return;
    }
  }
  return;
}

