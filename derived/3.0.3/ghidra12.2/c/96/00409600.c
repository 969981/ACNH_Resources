
void FUN_00409600(long *param_1,undefined8 param_2)

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
  
  lVar6 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar6 * -0x79435e50d79435e5 + 1;
  if (0xd79435e50d7943 < uVar1) {
    FUN_00409318(param_1);
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x409798);
    (*pcVar3)();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  uVar7 = lVar5 * 0xd79435e50d79436;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x6bca1af286bca0 < (ulong)(lVar5 * -0x79435e50d79435e5)) {
    uVar7 = 0xd79435e50d7943;
  }
  if (uVar7 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_00187df4(uVar7 * 0x130);
  }
  plVar10 = (long *)(lVar5 + lVar6 * 0x10);
  lVar11 = lVar5 + uVar7 * 0x130;
  FUN_01cb0230(plVar10,param_2);
  puVar8 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = PTR_DAT_04bc0f48 + 0x10;
  *plVar10 = (long)puVar2;
  if (puVar9 == puVar8) {
    *param_1 = (long)plVar10;
    param_1[1] = (long)(plVar10 + 0x26);
    param_1[2] = lVar11;
  }
  else {
    plVar4 = (long *)(lVar5 + lVar6 * 0x10);
    do {
      plVar4 = plVar4 + -0x26;
      puVar9 = puVar9 + -0x26;
      FUN_01cb0230(plVar4,puVar9);
      *plVar4 = (long)puVar2;
    } while (puVar9 != puVar8);
    puVar9 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
    *param_1 = (long)plVar4;
    param_1[1] = (long)(plVar10 + 0x26);
    param_1[2] = lVar11;
    while (puVar8 != puVar9) {
      puVar8 = puVar8 + -0x26;
      (**(code **)*puVar8)(puVar8);
    }
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar9);
  return;
}

