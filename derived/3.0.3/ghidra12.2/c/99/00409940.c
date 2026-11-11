
void FUN_00409940(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar6 * -0x1084210842108421 + 1;
  if (0x108421084210842 < uVar1) {
    FUN_004089a8(param_1);
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x409ad8);
    (*pcVar3)();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar5 * -0x2108421084210842;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x84210842108420 < (ulong)(lVar5 * -0x1084210842108421)) {
    uVar7 = 0x108421084210842;
  }
  if (uVar7 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_00187df4(uVar7 * 0xf8);
  }
  plVar10 = (long *)(lVar5 + lVar6 * 8);
  lVar11 = lVar5 + uVar7 * 0xf8;
  FUN_004089c0(plVar10,param_2);
  puVar9 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  puVar2 = PTR_DAT_04bd28d8 + 0x10;
  *plVar10 = (long)puVar2;
  if (puVar8 == puVar9) {
    *param_1 = (long)plVar10;
    param_1[1] = (long)(plVar10 + 0x1f);
    param_1[2] = lVar11;
  }
  else {
    plVar4 = (long *)(lVar5 + lVar6 * 8);
    do {
      plVar4 = plVar4 + -0x1f;
      puVar8 = puVar8 + -0x1f;
      FUN_004089c0(plVar4,puVar8);
      *plVar4 = (long)puVar2;
    } while (puVar8 != puVar9);
    puVar8 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)param_1[1];
    *param_1 = (long)plVar4;
    param_1[1] = (long)(plVar10 + 0x1f);
    param_1[2] = lVar11;
    while (puVar9 != puVar8) {
      puVar9 = puVar9 + -0x1f;
      (**(code **)*puVar9)(puVar9);
    }
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar8);
  return;
}

