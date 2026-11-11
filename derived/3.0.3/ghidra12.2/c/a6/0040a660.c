
void FUN_0040a660(long *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  
  lVar11 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar11 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar1) {
    FUN_01c6b598(param_1);
                    /* WARNING: Does not return */
    pcVar6 = (code *)UndefinedInstructionException(0,0x40a8a8);
    (*pcVar6)();
  }
  lVar10 = param_1[2] - *param_1 >> 5;
  uVar12 = lVar10 * 0x5555555555555556;
  if (uVar12 <= uVar1) {
    uVar12 = uVar1;
  }
  if (0x155555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
    uVar12 = 0x2aaaaaaaaaaaaaa;
  }
  if (uVar12 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_00187df4(uVar12 * 0x60);
  }
  plVar14 = (long *)(lVar10 + lVar11 * 0x20);
  lVar10 = lVar10 + uVar12 * 0x60;
  uVar5 = *(undefined1 *)(param_2 + 8);
  puVar2 = PTR_DAT_04bc0fb8 + 0x10;
  *plVar14 = (long)puVar2;
  *(undefined1 *)(plVar14 + 1) = uVar5;
  *(undefined1 *)(plVar14 + 3) = 0;
  plVar14[2] = (long)&PTR_LAB_04a426b8;
  plVar14[5] = (long)(plVar14 + 3);
  plVar14[6] = 0x10;
  FUN_0018b070(plVar14 + 2,*(undefined8 *)(param_2 + 0x28),0xffffffffffffffff);
  *(undefined1 *)(plVar14 + 8) = 0;
  plVar14[10] = (long)(plVar14 + 8);
  plVar14[0xb] = 0x10;
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  plVar14[7] = (long)&PTR_LAB_04a426b8;
  FUN_0018b070(plVar14 + 7,uVar8,0xffffffffffffffff);
  puVar13 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  puVar3 = PTR_DAT_04bc0fb0 + 0x10;
  *plVar14 = (long)puVar3;
  if (puVar4 == puVar13) {
    *param_1 = (long)plVar14;
    param_1[1] = (long)(plVar14 + 0xc);
    param_1[2] = lVar10;
  }
  else {
    lVar11 = 0;
    do {
      uVar5 = *(undefined1 *)((long)puVar4 + lVar11 + -0x58);
      *(undefined **)((long)plVar14 + lVar11 + -0x60) = puVar2;
      puVar7 = (undefined8 *)((long)plVar14 + lVar11 + -0x50);
      *puVar7 = &PTR_LAB_04a426b8;
      *(undefined1 *)((long)plVar14 + lVar11 + -0x58) = uVar5;
      puVar9 = (undefined1 *)((long)plVar14 + lVar11 + -0x48);
      *puVar9 = 0;
      *(undefined1 **)((long)plVar14 + lVar11 + -0x38) = puVar9;
      *(undefined8 *)((long)plVar14 + lVar11 + -0x30) = 0x10;
      FUN_0018b070(puVar7,*(undefined8 *)((long)puVar4 + lVar11 + -0x38),0xffffffffffffffff);
      puVar7 = (undefined8 *)((long)plVar14 + lVar11 + -0x28);
      *puVar7 = &PTR_LAB_04a426b8;
      puVar9 = (undefined1 *)((long)plVar14 + lVar11 + -0x20);
      *puVar9 = 0;
      *(undefined1 **)((long)plVar14 + lVar11 + -0x10) = puVar9;
      *(undefined8 *)((long)plVar14 + lVar11 + -8) = 0x10;
      FUN_0018b070(puVar7,*(undefined8 *)((long)puVar4 + lVar11 + -0x10),0xffffffffffffffff);
      lVar15 = lVar11 + -0x60;
      *(undefined **)((long)plVar14 + lVar11 + -0x60) = puVar3;
      lVar11 = lVar15;
    } while ((undefined8 *)((long)puVar4 + lVar15) != puVar13);
    puVar4 = (undefined8 *)*param_1;
    puVar13 = (undefined8 *)param_1[1];
    *param_1 = (long)plVar14 + lVar15;
    param_1[1] = (long)(plVar14 + 0xc);
    param_1[2] = lVar10;
    while (puVar13 != puVar4) {
      puVar13 = puVar13 + -0xc;
      (**(code **)*puVar13)(puVar13);
    }
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar4);
  return;
}

