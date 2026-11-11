
void FUN_00408370(long *param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  
  puVar13 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  lVar7 = (long)puVar6 - (long)puVar13 >> 3;
  uVar1 = lVar7 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
    FUN_0040835c(param_1);
                    /* WARNING: Does not return */
    pcVar4 = (code *)UndefinedInstructionException(0,0x4084ec);
    (*pcVar4)();
  }
  lVar9 = param_1[2] - (long)puVar13 >> 3;
  uVar10 = lVar9 * -0x6666666666666666;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
    uVar10 = 0x666666666666666;
  }
  if (uVar10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_00187df4(uVar10 * 0x28);
    puVar13 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
  }
  puVar5 = PTR_DAT_04bd26e0;
  plVar8 = (long *)(lVar9 + lVar7 * 8);
  lVar9 = lVar9 + uVar10 * 0x28;
  lVar11 = *(long *)(param_2 + 0x20);
  *(undefined1 *)(plVar8 + 1) = *(undefined1 *)(param_2 + 8);
  lVar7 = *(long *)(param_2 + 0x10);
  plVar8[4] = lVar11;
  plVar8[2] = lVar7;
  *(undefined4 *)(plVar8 + 3) = *(undefined4 *)(param_2 + 0x18);
  *plVar8 = (long)(puVar5 + 0x10);
  if (puVar6 == puVar13) {
    *param_1 = (long)plVar8;
    param_1[1] = (long)(plVar8 + 5);
    param_1[2] = lVar9;
  }
  else {
    lVar7 = 0;
    do {
      uVar3 = *(undefined1 *)((long)puVar6 + lVar7 + -0x20);
      uVar12 = *(undefined8 *)((long)puVar6 + lVar7 + -0x18);
      lVar11 = lVar7 + -0x28;
      *(undefined **)((long)plVar8 + lVar7 + -0x28) = puVar5 + 0x10;
      uVar2 = *(undefined4 *)((long)puVar6 + lVar7 + -0x10);
      *(undefined1 *)((long)plVar8 + lVar7 + -0x20) = uVar3;
      *(undefined8 *)((long)plVar8 + lVar7 + -8) = *(undefined8 *)((long)puVar6 + lVar7 + -8);
      *(undefined8 *)((long)plVar8 + lVar7 + -0x18) = uVar12;
      *(undefined4 *)((long)plVar8 + lVar7 + -0x10) = uVar2;
      lVar7 = lVar11;
    } while ((undefined8 *)((long)puVar6 + lVar11) != puVar13);
    param_1[2] = lVar9;
    *param_1 = (long)plVar8 + lVar11;
    param_1[1] = (long)(plVar8 + 5);
    do {
      puVar6 = puVar6 + -5;
      (**(code **)*puVar6)(puVar6);
    } while (puVar6 != puVar13);
  }
  if (puVar13 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar13);
  return;
}

