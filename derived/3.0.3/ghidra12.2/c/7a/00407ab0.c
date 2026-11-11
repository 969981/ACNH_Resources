
void FUN_00407ab0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  lVar6 = (long)puVar5 - (long)puVar12 >> 3;
  uVar1 = lVar6 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
    FUN_00407a9c(param_1);
    FUN_00185ac4();
    return;
  }
  lVar8 = param_1[2] - (long)puVar12 >> 3;
  uVar9 = lVar8 * -0x6666666666666666;
  if (uVar9 <= uVar1) {
    uVar9 = uVar1;
  }
  if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
    uVar9 = 0x666666666666666;
  }
  if (uVar9 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_00187df4(uVar9 * 0x28);
    puVar12 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)param_1[1];
  }
  puVar4 = PTR_DAT_04bd28e8;
  plVar7 = (long *)(lVar8 + lVar6 * 8);
  lVar8 = lVar8 + uVar9 * 0x28;
  lVar10 = *(long *)(param_2 + 0x20);
  *(undefined1 *)(plVar7 + 1) = *(undefined1 *)(param_2 + 8);
  lVar6 = *(long *)(param_2 + 0x10);
  plVar7[4] = lVar10;
  plVar7[2] = lVar6;
  *(undefined2 *)(plVar7 + 3) = *(undefined2 *)(param_2 + 0x18);
  *plVar7 = (long)(puVar4 + 0x10);
  if (puVar5 == puVar12) {
    *param_1 = (long)plVar7;
    param_1[1] = (long)(plVar7 + 5);
    param_1[2] = lVar8;
  }
  else {
    lVar6 = 0;
    do {
      uVar2 = *(undefined1 *)((long)puVar5 + lVar6 + -0x20);
      uVar11 = *(undefined8 *)((long)puVar5 + lVar6 + -0x18);
      lVar10 = lVar6 + -0x28;
      *(undefined **)((long)plVar7 + lVar6 + -0x28) = puVar4 + 0x10;
      uVar3 = *(undefined2 *)((long)puVar5 + lVar6 + -0x10);
      *(undefined1 *)((long)plVar7 + lVar6 + -0x20) = uVar2;
      *(undefined8 *)((long)plVar7 + lVar6 + -8) = *(undefined8 *)((long)puVar5 + lVar6 + -8);
      *(undefined8 *)((long)plVar7 + lVar6 + -0x18) = uVar11;
      *(undefined2 *)((long)plVar7 + lVar6 + -0x10) = uVar3;
      lVar6 = lVar10;
    } while ((undefined8 *)((long)puVar5 + lVar10) != puVar12);
    param_1[2] = lVar8;
    *param_1 = (long)plVar7 + lVar10;
    param_1[1] = (long)(plVar7 + 5);
    do {
      puVar5 = puVar5 + -5;
      (**(code **)*puVar5)(puVar5);
    } while (puVar5 != puVar12);
  }
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar12);
  return;
}

