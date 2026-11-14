
void FUN_01c6b7c0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  
  lVar9 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar9 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar1) {
    FUN_01c6b598(param_1);
                    /* WARNING: Does not return */
    pcVar5 = (code *)UndefinedInstructionException(0,0x1c6ba28);
    (*pcVar5)();
  }
  lVar8 = param_1[2] - *param_1 >> 5;
  uVar10 = lVar8 * 0x5555555555555556;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
    uVar10 = 0x2aaaaaaaaaaaaaa;
  }
  if (uVar10 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_00187df4(uVar10 * 0x60);
  }
  plVar13 = (long *)(lVar8 + lVar9 * 0x20);
  lVar8 = lVar8 + uVar10 * 0x60;
  puVar2 = PTR_DAT_04bc0fb8 + 0x10;
  *plVar13 = (long)puVar2;
  puVar3 = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined1 *)(plVar13 + 1) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(plVar13 + 3) = 0;
  plVar13[5] = (long)(plVar13 + 3);
  plVar13[6] = 0x10;
  plVar13[2] = (long)puVar3;
  FUN_0018b070(plVar13 + 2,*(undefined8 *)(param_2 + 0x28),0xffffffffffffffff);
  *(undefined1 *)(plVar13 + 8) = 0;
  plVar13[7] = (long)puVar3;
  plVar13[10] = (long)(plVar13 + 8);
  plVar13[0xb] = 0x10;
  FUN_0018b070(plVar13 + 7,*(undefined8 *)(param_2 + 0x50),0xffffffffffffffff);
  *plVar13 = (long)&PTR_LAB_04a42c90;
  puVar11 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 == puVar11) {
    *param_1 = (long)plVar13;
    param_1[1] = (long)(plVar13 + 0xc);
    param_1[2] = lVar8;
  }
  else {
    lVar9 = 0;
    do {
      *(undefined **)((long)plVar13 + lVar9 + -0x60) = puVar2;
      *(undefined1 *)((long)plVar13 + lVar9 + -0x58) = *(undefined1 *)((long)puVar4 + lVar9 + -0x58)
      ;
      plVar6 = (long *)((long)plVar13 + lVar9 + -0x50);
      *plVar6 = (long)puVar3;
      puVar7 = (undefined1 *)((long)plVar13 + lVar9 + -0x48);
      *puVar7 = 0;
      *(undefined1 **)((long)plVar13 + lVar9 + -0x38) = puVar7;
      *(undefined8 *)((long)plVar13 + lVar9 + -0x30) = 0x10;
      FUN_0018b070(plVar6,*(undefined8 *)((long)puVar4 + lVar9 + -0x38),0xffffffffffffffff);
      plVar6 = (long *)((long)plVar13 + lVar9 + -0x28);
      *plVar6 = (long)puVar3;
      puVar7 = (undefined1 *)((long)plVar13 + lVar9 + -0x20);
      *puVar7 = 0;
      *(undefined1 **)((long)plVar13 + lVar9 + -0x10) = puVar7;
      *(undefined8 *)((long)plVar13 + lVar9 + -8) = 0x10;
      FUN_0018b070(plVar6,*(undefined8 *)((long)puVar4 + lVar9 + -0x10),0xffffffffffffffff);
      lVar12 = lVar9 + -0x60;
      *(undefined ***)((long)plVar13 + lVar9 + -0x60) = &PTR_LAB_04a42c90;
      lVar9 = lVar12;
    } while ((undefined8 *)((long)puVar4 + lVar12) != puVar11);
    puVar4 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    *param_1 = (long)plVar13 + lVar12;
    param_1[1] = (long)(plVar13 + 0xc);
    param_1[2] = lVar8;
    while (puVar11 != puVar4) {
      puVar11 = puVar11 + -0xc;
      (**(code **)*puVar11)(puVar11);
    }
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar4);
  return;
}

