
void FUN_00407f10(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  puVar14 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  lVar8 = (long)puVar7 - (long)puVar14 >> 3;
  uVar1 = lVar8 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
    FUN_00407ef8(param_1);
                    /* WARNING: Does not return */
    pcVar5 = (code *)UndefinedInstructionException(0,0x408088);
    (*pcVar5)();
  }
  lVar10 = param_1[2] - (long)puVar14 >> 3;
  uVar11 = lVar10 * -0x6666666666666666;
  if (uVar11 <= uVar1) {
    uVar11 = uVar1;
  }
  if (0x333333333333332 < (ulong)(lVar10 * -0x3333333333333333)) {
    uVar11 = 0x666666666666666;
  }
  if (uVar11 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_00187df4(uVar11 * 0x28);
    puVar14 = (undefined8 *)*param_1;
    puVar7 = (undefined8 *)param_1[1];
  }
  puVar6 = PTR_DAT_04bd28c0;
  plVar9 = (long *)(lVar10 + lVar8 * 8);
  lVar10 = lVar10 + uVar11 * 0x28;
  *(undefined1 *)(plVar9 + 1) = *(undefined1 *)(param_2 + 8);
  lVar8 = *(long *)(param_2 + 0x18);
  plVar9[2] = *(long *)(param_2 + 0x10);
  plVar9[3] = lVar8;
  lVar8 = *(long *)(param_2 + 0x20);
  *plVar9 = (long)(puVar6 + 0x10);
  plVar9[4] = lVar8;
  if (puVar7 == puVar14) {
    *param_1 = (long)plVar9;
    param_1[1] = (long)(plVar9 + 5);
    param_1[2] = lVar10;
  }
  else {
    lVar8 = 0;
    do {
      uVar4 = *(undefined1 *)((long)puVar7 + lVar8 + -0x20);
      uVar2 = *(undefined8 *)((long)puVar7 + lVar8 + -0x18);
      uVar3 = *(undefined8 *)((long)puVar7 + lVar8 + -0x10);
      lVar12 = lVar8 + -0x28;
      uVar13 = *(undefined8 *)((long)puVar7 + lVar8 + -8);
      *(undefined **)((long)plVar9 + lVar8 + -0x28) = puVar6 + 0x10;
      *(undefined8 *)((long)plVar9 + lVar8 + -8) = uVar13;
      *(undefined1 *)((long)plVar9 + lVar8 + -0x20) = uVar4;
      *(undefined8 *)((long)plVar9 + lVar8 + -0x18) = uVar2;
      *(undefined8 *)((long)plVar9 + lVar8 + -0x10) = uVar3;
      lVar8 = lVar12;
    } while ((undefined8 *)((long)puVar7 + lVar12) != puVar14);
    param_1[2] = lVar10;
    *param_1 = (long)plVar9 + lVar12;
    param_1[1] = (long)(plVar9 + 5);
    do {
      puVar7 = puVar7 + -5;
      (**(code **)*puVar7)(puVar7);
    } while (puVar7 != puVar14);
  }
  if (puVar14 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar14);
  return;
}

