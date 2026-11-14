
void FUN_01c694d0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  lVar9 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar9 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
    auVar12 = FUN_01c692c0(param_1);
    puVar6 = auVar12._8_8_;
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    FUN_01c69718(auVar12._0_8_,*puVar6);
    FUN_01c69718(auVar12._0_8_,puVar6[1]);
    FUN_00187e4c(puVar6);
    return;
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  uVar10 = lVar7 * -0x2492492492492492;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
    uVar10 = 0x492492492492492;
  }
  if (uVar10 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_00187df4(uVar10 * 0x38);
  }
  plVar8 = (long *)(lVar7 + lVar9 * 8);
  lVar7 = lVar7 + uVar10 * 0x38;
  *plVar8 = (long)&PTR_LAB_04a42958;
  *(undefined1 *)(plVar8 + 1) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)plVar8 + 9) = *(undefined1 *)(param_2 + 9);
  plVar8[2] = (long)&PTR_FUN_04a42998;
  *(undefined1 *)(plVar8 + 3) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((long)plVar8 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)((long)plVar8 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)((long)plVar8 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  plVar8[4] = *(long *)(param_2 + 0x20);
  *(undefined4 *)(plVar8 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((long)plVar8 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined1 *)(plVar8 + 6) = *(undefined1 *)(param_2 + 0x30);
  *(undefined2 *)((long)plVar8 + 0x32) = *(undefined2 *)(param_2 + 0x32);
  plVar8[2] = (long)&PTR_FUN_04a42978;
  puVar2 = PTR_DAT_04bc0f50 + 0x10;
  *plVar8 = (long)puVar2;
  puVar6 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == puVar6) {
    *param_1 = (long)plVar8;
    param_1[1] = (long)(plVar8 + 7);
    param_1[2] = lVar7;
  }
  else {
    lVar9 = 0;
    do {
      *(undefined ***)((long)plVar8 + lVar9 + -0x38) = &PTR_LAB_04a42958;
      lVar11 = lVar9 + -0x38;
      *(undefined1 *)((long)plVar8 + lVar9 + -0x30) = *(undefined1 *)((long)puVar3 + lVar9 + -0x30);
      uVar4 = *(undefined1 *)((long)puVar3 + lVar9 + -0x2f);
      *(undefined ***)((long)plVar8 + lVar9 + -0x28) = &PTR_FUN_04a42998;
      *(undefined1 *)((long)plVar8 + lVar9 + -0x2f) = uVar4;
      *(undefined1 *)((long)plVar8 + lVar9 + -0x20) = *(undefined1 *)((long)puVar3 + lVar9 + -0x20);
      *(undefined1 *)((long)plVar8 + lVar9 + -0x1f) = *(undefined1 *)((long)puVar3 + lVar9 + -0x1f);
      *(undefined1 *)((long)plVar8 + lVar9 + -0x1e) = *(undefined1 *)((long)puVar3 + lVar9 + -0x1e);
      *(undefined1 *)((long)plVar8 + lVar9 + -0x1d) = *(undefined1 *)((long)puVar3 + lVar9 + -0x1d);
      *(undefined8 *)((long)plVar8 + lVar9 + -0x18) = *(undefined8 *)((long)puVar3 + lVar9 + -0x18);
      *(undefined4 *)((long)plVar8 + lVar9 + -0x10) = *(undefined4 *)((long)puVar3 + lVar9 + -0x10);
      *(undefined4 *)((long)plVar8 + lVar9 + -0xc) = *(undefined4 *)((long)puVar3 + lVar9 + -0xc);
      *(undefined1 *)((long)plVar8 + lVar9 + -8) = *(undefined1 *)((long)puVar3 + lVar9 + -8);
      uVar5 = *(undefined2 *)((long)puVar3 + lVar9 + -6);
      *(undefined ***)((long)plVar8 + lVar9 + -0x28) = &PTR_FUN_04a42978;
      *(undefined **)((long)plVar8 + lVar9 + -0x38) = puVar2;
      *(undefined2 *)((long)plVar8 + lVar9 + -6) = uVar5;
      lVar9 = lVar11;
    } while ((undefined8 *)((long)puVar3 + lVar11) != puVar6);
    puVar3 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    *param_1 = (long)plVar8 + lVar11;
    param_1[1] = (long)(plVar8 + 7);
    param_1[2] = lVar7;
    while (puVar6 != puVar3) {
      puVar6 = puVar6 + -7;
      (**(code **)*puVar6)(puVar6);
    }
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar3);
  return;
}

