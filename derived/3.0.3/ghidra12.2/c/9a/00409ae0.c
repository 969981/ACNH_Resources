
void FUN_00409ae0(long *param_1,long param_2)

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
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  lVar7 = (long)puVar6 - (long)puVar12 >> 3;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    FUN_00409308(param_1);
                    /* WARNING: Does not return */
    pcVar4 = (code *)UndefinedInstructionException(0,0x409c58);
    (*pcVar4)();
  }
  lVar9 = param_1[2] - (long)puVar12 >> 3;
  uVar10 = lVar9 * 0x5555555555555556;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
    uVar10 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_00187df4(uVar10 * 0x18);
    puVar12 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
  }
  puVar5 = PTR_DAT_04bd28e0;
  plVar8 = (long *)(lVar9 + lVar7 * 8);
  lVar9 = lVar9 + uVar10 * 0x18;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(plVar8 + 1) = *(undefined1 *)(param_2 + 8);
  lVar7 = *(long *)(param_2 + 0x10);
  *(undefined4 *)((long)plVar8 + 0xc) = uVar2;
  plVar8[2] = lVar7;
  *plVar8 = (long)(puVar5 + 0x10);
  if (puVar6 == puVar12) {
    *param_1 = (long)plVar8;
    param_1[1] = (long)(plVar8 + 3);
    param_1[2] = lVar9;
  }
  else {
    lVar7 = 0;
    do {
      uVar3 = *(undefined1 *)((long)puVar6 + lVar7 + -0x10);
      uVar2 = *(undefined4 *)((long)puVar6 + lVar7 + -0xc);
      lVar11 = lVar7 + -0x18;
      *(undefined **)((long)plVar8 + lVar7 + -0x18) = puVar5 + 0x10;
      *(undefined8 *)((long)plVar8 + lVar7 + -8) = *(undefined8 *)((long)puVar6 + lVar7 + -8);
      *(undefined1 *)((long)plVar8 + lVar7 + -0x10) = uVar3;
      *(undefined4 *)((long)plVar8 + lVar7 + -0xc) = uVar2;
      lVar7 = lVar11;
    } while ((undefined8 *)((long)puVar6 + lVar11) != puVar12);
    param_1[2] = lVar9;
    *param_1 = (long)plVar8 + lVar11;
    param_1[1] = (long)(plVar8 + 3);
    do {
      puVar6 = puVar6 + -3;
      (**(code **)*puVar6)(puVar6);
    } while (puVar6 != puVar12);
  }
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar12);
  return;
}

