
void FUN_00407630(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  lVar8 = (long)puVar6 - (long)puVar12 >> 4;
  uVar1 = lVar8 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
    FUN_00407618(param_1);
    FUN_00185ac4();
    return;
  }
  lVar9 = param_1[2] - (long)puVar12 >> 4;
  uVar10 = lVar9 * 0x5555555555555556;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
    uVar10 = 0x555555555555555;
  }
  if (uVar10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_00187df4(uVar10 * 0x30);
    puVar12 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
  }
  puVar7 = (undefined8 *)(lVar9 + lVar8 * 0x10);
  lVar9 = lVar9 + uVar10 * 0x30;
  *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  puVar7[2] = *(undefined8 *)(param_2 + 0x10);
  puVar7[3] = uVar2;
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined2 *)(param_2 + 0x24);
  *(undefined4 *)(puVar7 + 5) = uVar3;
  *(undefined2 *)((long)puVar7 + 0x24) = uVar4;
  *puVar7 = &DAT_048517e0;
  if (puVar6 == puVar12) {
    *param_1 = (long)puVar7;
    param_1[1] = (long)(puVar7 + 6);
    param_1[2] = lVar9;
  }
  else {
    lVar8 = 0;
    do {
      uVar5 = *(undefined1 *)((long)puVar6 + lVar8 + -0x28);
      lVar11 = lVar8 + -0x30;
      *(undefined **)((long)puVar7 + lVar8 + -0x30) = &DAT_048517e0;
      *(undefined1 *)((long)puVar7 + lVar8 + -0x28) = uVar5;
      uVar2 = *(undefined8 *)((long)puVar6 + lVar8 + -0x18);
      *(undefined8 *)((long)puVar7 + lVar8 + -0x20) = *(undefined8 *)((long)puVar6 + lVar8 + -0x20);
      *(undefined8 *)((long)puVar7 + lVar8 + -0x18) = uVar2;
      *(undefined4 *)((long)puVar7 + lVar8 + -0x10) = *(undefined4 *)((long)puVar6 + lVar8 + -0x10);
      uVar4 = *(undefined2 *)((long)puVar6 + lVar8 + -0xc);
      *(undefined4 *)((long)puVar7 + lVar8 + -8) = *(undefined4 *)((long)puVar6 + lVar8 + -8);
      *(undefined2 *)((long)puVar7 + lVar8 + -0xc) = uVar4;
      lVar8 = lVar11;
    } while ((undefined8 *)((long)puVar6 + lVar11) != puVar12);
    param_1[2] = lVar9;
    *param_1 = (long)puVar7 + lVar11;
    param_1[1] = (long)(puVar7 + 6);
    do {
      puVar6 = puVar6 + -6;
      (**(code **)*puVar6)(puVar6);
    } while (puVar6 != puVar12);
  }
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar12);
  return;
}

